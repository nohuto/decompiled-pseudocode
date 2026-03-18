/*
 * XREFs of IntPartGetProcessorEfficiencyClass @ 0x1405BF380
 * Callers:
 *     IntPartGetClassAffinityGroup @ 0x140C5C9B0 (IntPartGetClassAffinityGroup.c)
 *     IntpAllocateProcessorContext @ 0x140C5CF18 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 */

bool __fastcall IntPartGetProcessorEfficiencyClass(struct _PROCESSOR_NUMBER *a1)
{
  return (KiInterruptSteeringFlags & 0x10) == 0
      && *(_BYTE *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(a1)] + 35336) != 0;
}
