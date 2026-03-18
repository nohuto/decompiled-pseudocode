/*
 * XREFs of CmFcpCopySectionState @ 0x140A26050
 * Callers:
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A25E28 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 */

LONG_PTR __fastcall CmFcpCopySectionState(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    return PsReferenceSiloContext(v2);
  return result;
}
