/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1800D1890
 * Callers:
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800D1340 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1800D13C0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlNotifyFeatureUsage @ 0x1800D14B0 (RtlNotifyFeatureUsage.c)
 *     RtlQueryFeatureConfiguration @ 0x1800D1600 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D173C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011AA20 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180145650 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180145700 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  return RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
}
