/*
 * XREFs of ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x1401D55E8
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402C87B8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawLogicallyRightSide(char *a1, int a2, int a3, int a4, int a5)
{
  int v6; // edx
  int v7; // r10d
  int v8; // eax
  char *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r11
  char *v13; // r8
  char *v14; // rdx
  __int64 i; // rcx
  int v16; // eax

  v6 = 5 * a5;
  v7 = a3 - 5 * a5;
  if ( v7 > 10 )
  {
    v8 = -a2;
    if ( a4 )
    {
      v11 = (unsigned int)(v7 - 10);
      v12 = 4LL * v8;
      v13 = &a1[4 * v6 - 20 + 4 * a2 * (a3 - 11)];
      do
      {
        v14 = v13;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v16 = *(_DWORD *)((char *)&xmmword_140354CB0 + i);
          *(_DWORD *)v14 = v16;
          v14 += 4;
        }
        v13 += v12;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v9 = &a1[4 * (a2 * (a3 - 10) - (__int64)v6)];
      v10 = (unsigned int)(v7 - 10);
      do
      {
        *(_OWORD *)v9 = xmmword_140354CB0;
        *((_DWORD *)v9 + 4) = 50331648;
        v9 += 4 * v8;
        --v10;
      }
      while ( v10 );
    }
  }
}
