/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8
 * Callers:
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405E6530 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405E65D0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E67B0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140781BC0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E4630 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14021E2E4 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x140A72878 (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v5; // rcx
  unsigned int v6; // eax
  _QWORD *v7; // r11
  __int64 result; // rax

  RtlpFcEnterRegion();
  v6 = RtlAcquireSwapReference(v5);
  *v7 = *(_QWORD *)(a1 + 8LL * v6 + 216);
  result = a1 + 24 + 96LL * v6;
  *a3 = result;
  return result;
}
