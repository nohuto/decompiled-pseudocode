/*
 * XREFs of CmFcpUnmapSection @ 0x140A35AC8
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E40E0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407E4DE0 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A35848 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 */

void __fastcall CmFcpUnmapSection(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    MiRemoveFromSystemSpace(v1, 1);
}
