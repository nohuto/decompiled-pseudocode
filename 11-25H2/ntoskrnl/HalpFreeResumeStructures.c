/*
 * XREFs of HalpFreeResumeStructures @ 0x140B3CEA4
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BE448 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeResumeStructures(__int64 a1)
{
  if ( HalpHiberProcState )
  {
    HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
}
