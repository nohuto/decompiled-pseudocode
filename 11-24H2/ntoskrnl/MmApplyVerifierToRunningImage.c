/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140BA6790
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140B99018 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B992F4 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140B99424 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14049A000 (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x14067687C (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x1406F91F0 (MmHasImageBeenImportOptimized.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407ED980 (MmReplaceImportEntriesForVerifier.c)
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
