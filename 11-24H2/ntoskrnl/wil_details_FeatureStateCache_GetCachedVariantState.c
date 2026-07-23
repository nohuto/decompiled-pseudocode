/*
 * XREFs of wil_details_FeatureStateCache_GetCachedVariantState @ 0x1404933E0
 * Callers:
 *     Feature_AntiStarvationReadyPeriodVariable__private_GetVariant @ 0x1405B1EEC (Feature_AntiStarvationReadyPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationScanPeriodVariable__private_GetVariant @ 0x1405B1F80 (Feature_AntiStarvationScanPeriodVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant @ 0x1405B2014 (Feature_AntiStarvationThreadBoostCountVariable__private_GetVariant.c)
 *     Feature_AntiStarvationThreadScanCountVariable__private_GetVariant @ 0x1405B20A8 (Feature_AntiStarvationThreadScanCountVariable__private_GetVariant.c)
 *     Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant @ 0x1405B213C (Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant @ 0x1405DC8A0 (Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1405B496C (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedVariantState(_QWORD *a1, __int64 a2)
{
  if ( (*a1 & 8) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedVariantState(a1, *a1, a2);
}
