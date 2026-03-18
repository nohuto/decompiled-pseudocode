/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x1406EF740
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MmApplyVerifierToRunningImage @ 0x140B947B0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x1404A0180 (MiIsImportOptimizationEnabled.c)
 */

__int64 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx

  if ( MiIsImportOptimizationEnabled() )
    return (*(_DWORD *)(v0 + 104) >> 7) & 1;
  else
    return 0LL;
}
