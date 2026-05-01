/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x180079100
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1800793A4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_GetCurrentVariantState @ 0x1800794E0 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
