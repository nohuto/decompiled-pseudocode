/*
 * XREFs of CmFcpCleanupSectionState @ 0x140A1B0A8
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407D4F70 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1AE34 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
