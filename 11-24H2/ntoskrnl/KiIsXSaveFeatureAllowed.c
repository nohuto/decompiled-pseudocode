/*
 * XREFs of KiIsXSaveFeatureAllowed @ 0x140B590D8
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x140B58F34 (KiIntersectFeaturesWithPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsXSaveFeatureAllowed(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdx
  unsigned int i; // r10d
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rcx

  v5 = (unsigned int *)(a1 + *(_QWORD *)(a1 + 16LL * a2 + 40));
  for ( i = 0; i < *v5; ++i )
  {
    v7 = 14LL * i;
    v8 = *(_QWORD *)&v5[v7 + 2] - *(_QWORD *)a4;
    if ( !v8 )
      v8 = v5[v7 + 4] - (unsigned __int64)*(unsigned int *)(a4 + 8);
    if ( !v8 )
    {
      if ( !*(_QWORD *)&v5[v7 + 14] )
        return 1;
      v9 = *(_DWORD *)(a4 + 12);
      if ( ((*(_DWORD *)(a4 + 12) >> 12) & 3) != LOBYTE(v5[v7 + 6]) )
        return 1;
      if ( ((unsigned __int8)v9 >> 4) + ((v9 >> 10) & 0xF0) != LOWORD(v5[v7 + 7]) )
        return 1;
      if ( ((v9 >> 8) & 0xF) + ((v9 >> 14) & 0xFF0) != HIWORD(v5[v7 + 6]) )
        return 1;
      if ( (v9 & 0xF) != HIWORD(v5[v7 + 7]) )
        return 1;
      v10 = *(_QWORD *)&v5[v7 + 10];
      return !v10 || *(_QWORD *)(a4 + 16) > v10;
    }
  }
  return 0;
}
