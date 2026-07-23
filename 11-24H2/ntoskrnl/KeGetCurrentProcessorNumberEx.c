/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1403FBF40
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405D7FC4 (PopIdleWakeNotifyWakeSource.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     KiCopyCountersWorker @ 0x14073A6A8 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
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
