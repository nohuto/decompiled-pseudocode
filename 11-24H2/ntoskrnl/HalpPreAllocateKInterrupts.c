/*
 * XREFs of HalpPreAllocateKInterrupts @ 0x140C130AC
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4D2D0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 HalpPreAllocateKInterrupts()
{
  int MaximumRegisteredProcessorCount; // eax
  int v1; // ebx
  ULONG_PTR Pool2; // rax

  if ( !HalpKInterruptPostPhaseZero )
  {
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v1 = 16 * MaximumRegisteredProcessorCount;
    Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(4608 * MaximumRegisteredProcessorCount), 0x4B6C6148uLL);
    if ( !Pool2 )
    {
      HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0xC8u);
      return 3221225495LL;
    }
    HalpKInterruptPostPhaseZero = Pool2;
    HalpKInterruptPostPhaseZeroTotal = v1;
  }
  return 0LL;
}
