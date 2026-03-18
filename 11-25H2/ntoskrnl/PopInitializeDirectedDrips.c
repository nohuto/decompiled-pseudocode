/*
 * XREFs of PopInitializeDirectedDrips @ 0x140C1D194
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x14046EF04 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140C1CF9C (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C1D074 (PopDirectedDripsInitializePhase3.c)
 */

void __fastcall PopInitializeDirectedDrips(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    if ( a1 == 3 && (int)PopDirectedDripsInitializePhase3() >= 0 )
      PopQueueDirectedDripsWork(v1, 2uLL);
  }
  else
  {
    PopDirectedDripsInitializePhase0();
  }
}
