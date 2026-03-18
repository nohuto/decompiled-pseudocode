/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DC470
 * Callers:
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1402DC0F0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModes @ 0x1402DDA38 (BmlCompareSourceModes.c)
 *     BmlCompareModeRegions @ 0x1402DE8CC (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1403F7A68 (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
