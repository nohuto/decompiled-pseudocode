/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1403A6924
 * Callers:
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
 *     RtlAcquireSwapReference @ 0x1403A4E34 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x140A78578 (RtlpFcEnterRegion.c)
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
