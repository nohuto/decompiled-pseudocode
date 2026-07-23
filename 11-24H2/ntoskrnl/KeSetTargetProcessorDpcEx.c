/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1403703F0
 * Callers:
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1404C74C4 (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140543798 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
