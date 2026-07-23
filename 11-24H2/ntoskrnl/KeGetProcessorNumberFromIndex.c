/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140370900
 * Callers:
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140370880 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptInitializeIpis @ 0x140541F3C (HalpInterruptInitializeIpis.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140543798 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IoGetAffinityInterrupt @ 0x1405A1410 (IoGetAffinityInterrupt.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     PnprAddProcessorResources @ 0x14072CF8C (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // r8d

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < KeMaximumProcessors )
  {
    v2 = *((_DWORD *)KiGlobalState + ProcIndex);
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
