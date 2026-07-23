/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1403B8950
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x1403B8968 (CmFcManagerNotifyFeatureUsage.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  return CmFcManagerNotifyFeatureUsage(FeatureUsageReport, FeatureUsageReport);
}
