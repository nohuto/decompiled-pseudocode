/*
 * XREFs of IntPartAllocateAndZeroMemory @ 0x14004F030
 * Callers:
 *     IntPartArbInit @ 0x1400AC0E0 (IntPartArbInit.c)
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1400BD3D0 (ProcessorpSelectProcessorSetFromPartitions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntPartAllocateAndZeroMemory(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1232102209LL);
}
