#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	int i = 0;
    printf("%d\n", i);
	for ( i = 0; i < 100; i++)
	{
		printf("%d\n", i);
	}

	return (0);
}

// int main(int argc, char *argv[])
// {
//     int i = 0;
//     printf("argc = %d\n", argc );
//     for( i = 0; i < argc; i++ ){
//         printf("argv[%d] = %s\n", i, argv[i] );
//     }
//     return 0;
// }
