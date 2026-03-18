/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x14019E420
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1401A26B0 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x1401B07A8 (wil_details_GetCurrentVariantState.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401B0FF4 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1401A2544 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1);
}
