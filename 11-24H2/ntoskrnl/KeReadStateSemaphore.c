/*
 * XREFs of KeReadStateSemaphore @ 0x1404506F0
 * Callers:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140528C20 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073DCD0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
