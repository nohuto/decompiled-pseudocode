/*
 * XREFs of wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403F9D40
 * Callers:
 *     wil_details_AreDependenciesEnabled @ 0x14053A33C (wil_details_AreDependenciesEnabled.c)
 *     wil_details_GetCurrentVariantState @ 0x1405B4A80 (wil_details_GetCurrentVariantState.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F9D78 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  LODWORD(result) = *a1;
  if ( (*a1 & 2) != 0 )
    return (unsigned int)result;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, (unsigned int)result, a2);
}
