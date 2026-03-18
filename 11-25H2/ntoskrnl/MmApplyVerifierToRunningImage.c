/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140B947B0
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140B87038 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140B87314 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140B87444 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404A0180 (MiIsImportOptimizationEnabled.c)
 *     MmIsVerifierApplicableToImage @ 0x140669C4C (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x1406EF740 (MmHasImageBeenImportOptimized.c)
 *     MmReplaceImportEntriesForVerifier @ 0x1407DD510 (MmReplaceImportEntriesForVerifier.c)
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
