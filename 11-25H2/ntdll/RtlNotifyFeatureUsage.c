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

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( byte_1801D4988 )
  {
    return (unsigned int)-1073741058;
  }
  else
  {
    LOBYTE(a2) = 1;
    v4 = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, &v8, &v7);
    v5 = v7;
    v3 = v4;
    if ( v4 >= 0 )
      v3 = RtlpFcSendFeatureUsageNotifications(a1, *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 64));
    if ( v5 )
      RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D5CE8, v5);
  }
  return v3;
}
