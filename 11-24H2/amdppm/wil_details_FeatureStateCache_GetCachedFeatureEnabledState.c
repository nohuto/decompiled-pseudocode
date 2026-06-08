/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x140004B80
 * Callers:
 *     wil_details_AreDependenciesEnabled @ 0x1400045CC (wil_details_AreDependenciesEnabled.c)
 *     wil_details_GetCurrentVariantState @ 0x140004F30 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140004BB4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
