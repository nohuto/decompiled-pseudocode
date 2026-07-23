/*
 * XREFs of RtlNotifyFeatureUsage @ 0x18009F110
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009FE48 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlpFtSendUsageNotification @ 0x18014768C (RtlpFtSendUsageNotification.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x18009FC7C (RtlpFcSendFeatureUsageNotifications.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  NTSTATUS v2; // ebx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( byte_1801D4988 )
    return -1073741058;
  v3 = RtlpFcReferenceFeatureConfigurationBuffers(FeatureUsageReport, 1, &v7, &v6);
  v4 = v6;
  v2 = v3;
  if ( v3 >= 0 )
    v2 = RtlpFcSendFeatureUsageNotifications(FeatureUsageReport, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
  if ( v4 )
    RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D5CE8, v4);
  return v2;
}
