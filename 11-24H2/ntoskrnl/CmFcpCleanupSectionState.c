/*
 * XREFs of CmFcpCleanupSectionState @ 0x140A26080
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E40E0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407E4DE0 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A25E28 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
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
