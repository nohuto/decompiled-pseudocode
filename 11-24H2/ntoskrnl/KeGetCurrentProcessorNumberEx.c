/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1404015D0
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C9B28 (KiAltContextWorkQueueAddItem.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405DACA4 (PopIdleWakeNotifyWakeSource.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC (WheaFlushETWEventsAddWorkRtn.c)
 *     KiCopyCountersWorker @ 0x14073C778 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140B4BDB0 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
