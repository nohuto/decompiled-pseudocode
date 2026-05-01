/*
 * XREFs of Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant @ 0x180078D98
 * Callers:
 *     CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh @ 0x180078500 (CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x18007906C (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x18007923C (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall Feature_CRMDrivenIndexerNPUBackoff__private_GetVariant(__int64 a1)
{
  __int64 v1; // rbx

  v1 = Feature_CRMDrivenIndexerNPUBackoff__private_featureState;
  if ( (Feature_CRMDrivenIndexerNPUBackoff__private_featureState & 8) == 0 )
    v1 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           a1,
           Feature_CRMDrivenIndexerNPUBackoff__private_featureState);
  wil_details_FeatureReporting_ReportVariantUsageToService(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}
