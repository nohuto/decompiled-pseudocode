/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1403A68E8
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403A7E90 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405E8FE0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405E9080 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E9260 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140781C90 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E40E0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A35848 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A360EC (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403A500C (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x140A7C2D0 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(volatile signed __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
