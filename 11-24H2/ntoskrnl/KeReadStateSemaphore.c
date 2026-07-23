/*
 * XREFs of KeReadStateSemaphore @ 0x140445960
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526540 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140526744 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140526944 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073BC00 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
