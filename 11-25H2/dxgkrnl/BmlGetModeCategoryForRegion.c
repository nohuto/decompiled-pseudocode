/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1402C79E8
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1402C7808 (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x14039BF58 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x14039C1C8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetModeCategoryForRegion(unsigned int *a1, unsigned int *a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  bool v6; // cf

  v3 = *a1;
  if ( *a1 > *a2 )
    return 1LL;
  v4 = a1[1];
  if ( v4 > a2[1] )
    return 1LL;
  if ( a3 )
    return 3LL;
  if ( v3 == 1024 )
  {
    v6 = v4 < 0x300;
    if ( v4 == 768 )
      return 3LL;
  }
  else
  {
    if ( v3 < 0x400 )
      return 2LL;
    v6 = v4 < 0x300;
  }
  if ( !v6 )
    return 3LL;
  return 2LL;
}
