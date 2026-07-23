/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1405BC9B0
 * Callers:
 *     IntPartGetClassAffinityGroup @ 0x140C5EB40 (IntPartGetClassAffinityGroup.c)
 *     IntpAllocateProcessorContext @ 0x140C5F0A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(_PROCESSOR_NUMBER *a1)
{
  return (KiInterruptSteeringFlags & 0x10) == 0
      && *(_BYTE *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)] + 35336) != 0;
}
