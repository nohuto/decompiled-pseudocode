/*
 * XREFs of HalpBlkLocalErrorInterrupt @ 0x140BDEAC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicEndOfInterrupt @ 0x140BDD1D0 (HalpBlkApicEndOfInterrupt.c)
 */

void HalpBlkLocalErrorInterrupt()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1976LL));
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
