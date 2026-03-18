/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1403B41E0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B4160 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1405445EC (HalpInterruptInitializeIpis.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140545ED8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IoGetAffinityInterrupt @ 0x1405A44D0 (IoGetAffinityInterrupt.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C9B28 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC (WheaFlushETWEventsAddWorkRtn.c)
 *     PnprAddProcessorResources @ 0x14072EF7C (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
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
