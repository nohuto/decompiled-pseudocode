/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1403B3140
 * Callers:
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B2510 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptInitializeIpis @ 0x140541DC0 (HalpInterruptInitializeIpis.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405435E8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IoGetAffinityInterrupt @ 0x1405A0D60 (IoGetAffinityInterrupt.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C5508 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140651E4C (WheaFlushETWEventsAddWorkRtn.c)
 *     PnprAddProcessorResources @ 0x140722FFC (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
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
