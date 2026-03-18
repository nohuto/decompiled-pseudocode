/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403BA040 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405DCE90 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405DCF30 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405DD110 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140772A40 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A3082C (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403B8C2C (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x140A7A560 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
