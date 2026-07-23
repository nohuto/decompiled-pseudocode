/*
 * XREFs of Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant @ 0x1405DC8A0
 * Callers:
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x14021DF60 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedVariantState @ 0x1404933E0 (wil_details_FeatureStateCache_GetCachedVariantState.c)
 */

__int64 Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant()
{
  __int64 CachedVariantState; // rax
  unsigned int v1; // ebx

  CachedVariantState = wil_details_FeatureStateCache_GetCachedVariantState(
                         &Feature_UnparkPCoresOnUnimportantUtility__private_featureState,
                         (__int64)&Feature_UnparkPCoresOnUnimportantUtility__private_descriptor);
  v1 = CachedVariantState;
  wil_details_FeatureReporting_ReportVariantUsageToService(
    (__int64)&Feature_UnparkPCoresOnUnimportantUtility__private_descriptor,
    CachedVariantState);
  return (v1 >> 12) & 0x3F;
}
