/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1405BB540
 * Callers:
 *     IntPartGetClassAffinityGroup @ 0x140C4B630 (IntPartGetClassAffinityGroup.c)
 *     IntpAllocateProcessorContext @ 0x140C4BB98 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(_PROCESSOR_NUMBER *a1)
{
  return (KiInterruptSteeringFlags & 0x10) == 0
      && *(_BYTE *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)] + 35336) != 0;
}
