/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C
 * Callers:
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
 *     RtlAcquireSwapReference @ 0x1403B8A54 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x140A767A4 (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // eax
  _QWORD *v6; // r11
  __int64 result; // rax

  RtlpFcEnterRegion();
  v5 = RtlAcquireSwapReference();
  *v6 = *(_QWORD *)(a1 + 8LL * v5 + 216);
  result = a1 + 24 + 96LL * v5;
  *a3 = result;
  return result;
}
