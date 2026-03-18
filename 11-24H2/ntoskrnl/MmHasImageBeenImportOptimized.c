/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1406FB5B0
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140BA4790 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14049F1D0 (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
