/*
 * XREFs of CmFcpUnmapSection @ 0x140A2AFE4
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E4630 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407E53B4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 */

void __fastcall CmFcpUnmapSection(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    MiRemoveFromSystemSpace(v1, 1);
}
