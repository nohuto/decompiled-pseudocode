/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140BA4790
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140B97018 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B972F4 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140B97424 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14049F1D0 (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x1406756AC (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x1406FB5B0 (MmHasImageBeenImportOptimized.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED3B0 (MmReplaceImportEntriesForVerifier.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = MmIsVerifierApplicableToImage(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    if ( MiIsImportOptimizationEnabled() && (unsigned int)MmHasImageBeenImportOptimized() )
      return MiReapplyImportOptimizationForDriverVerifier(v7, a2, a3);
    else
      return MmReplaceImportEntriesForVerifier(BugCheckParameter2, a2, a3);
  }
  return result;
}
