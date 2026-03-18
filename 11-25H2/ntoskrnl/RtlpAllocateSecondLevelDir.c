/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1404806C0
 * Callers:
 *     RtlExpandHashTable @ 0x14041F350 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1404805A0 (RtlpCreateHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 RtlpAllocateSecondLevelDir()
{
  return ExAllocatePool2(0x40uLL);
}
