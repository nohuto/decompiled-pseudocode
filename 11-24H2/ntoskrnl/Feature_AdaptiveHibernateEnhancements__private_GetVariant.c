/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyUpdateRegions @ 0x1407625A0 (PopAdaptiveStandbyUpdateRegions.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x14021DF60 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedVariantState @ 0x1404933E0 (wil_details_FeatureStateCache_GetCachedVariantState.c)
 */

__int64 Feature_AdaptiveHibernateEnhancements__private_GetVariant()
{
  __int64 CachedVariantState; // rax
  unsigned int v1; // ebx

  CachedVariantState = wil_details_FeatureStateCache_GetCachedVariantState(
                         &Feature_AdaptiveHibernateEnhancements__private_featureState,
                         (__int64)&Feature_AdaptiveHibernateEnhancements__private_descriptor);
  v1 = CachedVariantState;
  wil_details_FeatureReporting_ReportVariantUsageToService(
    (__int64)&Feature_AdaptiveHibernateEnhancements__private_descriptor,
    CachedVariantState);
  return (v1 >> 12) & 0x3F;
}
