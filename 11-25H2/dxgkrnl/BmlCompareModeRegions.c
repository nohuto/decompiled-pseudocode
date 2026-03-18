/*
 * XREFs of BmlCompareModeRegions @ 0x1403BF8C8
 * Callers:
 *     BmlCompareSourceModesWithContentRes @ 0x1402C7A9C (BmlCompareSourceModesWithContentRes.c)
 *     BmlCompareMonitorRegions @ 0x1403BF850 (BmlCompareMonitorRegions.c)
 * Callees:
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1403BF90C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareModeRegions(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v2 = *a1;
  v3 = a1[1];
  v4 = *a2 * (unsigned __int64)a2[1];
  v5 = v2 * v3;
  if ( v5 > v4 )
    return 1LL;
  if ( v5 >= v4 )
    return BmlCompareValues<unsigned int>((unsigned int)v2);
  return 0xFFFFFFFFLL;
}
