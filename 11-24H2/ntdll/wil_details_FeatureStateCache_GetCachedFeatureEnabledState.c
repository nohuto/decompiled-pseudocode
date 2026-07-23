/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x180105704
 * Callers:
 *     wil_details_AreDependenciesEnabled @ 0x180134A10 (wil_details_AreDependenciesEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(volatile signed __int32 *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *(unsigned int *)a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *(unsigned int *)a1, a2);
}
