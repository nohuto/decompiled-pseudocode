/*
 * XREFs of Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline @ 0x180078D74
 * Callers:
 *     CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh @ 0x1800784A0 (CrmComparisonRoutineBinaryBackoffSearchIndexerNPUUsageHigh.c)
 * Callees:
 *     <none>
 */

__int64 Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CRMDrivenIndexerNPUBackoff__private_featureState & 0x10) != 0 )
    return Feature_CRMDrivenIndexerNPUBackoff__private_featureState & 1;
  else
    return Feature_CRMDrivenIndexerNPUBackoff__private_IsEnabledFallback(
             (unsigned int)Feature_CRMDrivenIndexerNPUBackoff__private_featureState,
             3LL);
}
