/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x140481380
 * Callers:
 *     RtlExpandHashTable @ 0x14041CBE0 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x140481260 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  return ExAllocatePool2(0x40uLL);
}
