/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1800D6520
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800D5FD0 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1800D6050 (RtlQueryAllFeatureConfigurations.c)
 *     RtlNotifyFeatureUsage @ 0x1800D6140 (RtlNotifyFeatureUsage.c)
 *     RtlQueryFeatureConfiguration @ 0x1800D6290 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D63CC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011C7F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1801472A0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180147350 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  return RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
}
