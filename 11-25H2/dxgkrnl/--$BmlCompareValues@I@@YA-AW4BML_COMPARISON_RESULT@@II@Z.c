/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1403BF90C
 * Callers:
 *     BmlCompareSourceModes @ 0x1402C7150 (BmlCompareSourceModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402C7DB0 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareMonitorRegions @ 0x1403BF850 (BmlCompareMonitorRegions.c)
 *     BmlCompareModeRegions @ 0x1403BF8C8 (BmlCompareModeRegions.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1403FD27C (BmlCompareTargetModeWithVirtualRefreshRate.c)
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
