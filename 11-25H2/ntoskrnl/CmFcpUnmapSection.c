/*
 * XREFs of CmFcpUnmapSection @ 0x140A30204
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407D4F70 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 */

void __fastcall CmFcpUnmapSection(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    MiRemoveFromSystemSpace(v1, 1);
}
