/*
 * XREFs of RtlpFtSendUsageNotification @ 0x18014448C
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x1801441D0 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlNotifyFeatureUsage @ 0x1800D14B0 (RtlNotifyFeatureUsage.c)
 */

NTSTATUS __fastcall RtlpFtSendUsageNotification(ULONG a1, char a2)
{
  USHORT v2; // ax
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+38h] [rbp+10h] BYREF

  FeatureUsageReport.FeatureId = a1;
  v2 = 2;
  if ( (a2 & 0x20) == 0 )
    v2 = 6;
  FeatureUsageReport.ReportingKind = v2;
  FeatureUsageReport.ReportingOptions = 1;
  return RtlNotifyFeatureUsage(&FeatureUsageReport);
}
