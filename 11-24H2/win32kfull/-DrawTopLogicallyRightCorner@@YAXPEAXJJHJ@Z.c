/*
 * XREFs of ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x140220424
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1402C87B8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawTopLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int *v7; // r9
  int v8; // r8d
  int *v9; // rdx
  __int64 v10; // r10
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // r8
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx

  if ( a4 )
  {
    v7 = (int *)&unk_1403576C0;
    v8 = a2 * (a3 - 6);
    do
    {
      v9 = v7;
      v10 = 5LL;
      v11 = &a1[5 * a5 - 5 + v8];
      do
      {
        v12 = *v9--;
        *v11++ = v12;
        --v10;
      }
      while ( v10 );
      v8 -= a2;
      v7 += 5;
    }
    while ( (__int64)v7 < (__int64)&dword_140357724 );
  }
  else
  {
    v13 = a2 * (a3 - 5);
    v14 = &unk_1403576B0;
    do
    {
      v15 = *(_OWORD *)v14;
      v16 = v14[4];
      v14 += 5;
      v17 = v13;
      v13 -= a2;
      v18 = v17 - 5 * a5;
      *(_OWORD *)&a1[v18] = v15;
      a1[v18 + 4] = v16;
    }
    while ( (__int64)v14 < (__int64)&dword_140357714 );
  }
}
