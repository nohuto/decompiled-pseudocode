/*
 * XREFs of HalpFreeResumeStructures @ 0x140B4CEA4
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404BD3D0 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeResumeStructures(__int64 a1)
{
  if ( HalpHiberProcState )
  {
    HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
}
