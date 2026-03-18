/*
 * XREFs of ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1403E98D0
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1402C7A9C (BmlCompareSourceModesWithContentRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeResolution(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v2 = *a1;
  v3 = *a2;
  if ( *a1 < (unsigned int)*a2 )
    return 0xFFFFFFFFLL;
  v5 = a1[1];
  v6 = a2[1];
  if ( v5 < v6 )
    return 0xFFFFFFFFLL;
  if ( v2 == v3 )
    return v5 != v6;
  return 1LL;
}
