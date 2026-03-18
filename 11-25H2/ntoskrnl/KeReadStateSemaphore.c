/*
 * XREFs of KeReadStateSemaphore @ 0x14044F240
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526470 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
