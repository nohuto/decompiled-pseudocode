/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1404AA8E4
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073CF28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 KiDpcRuntimeHistoryHashTableAllocate()
{
  return ExAllocatePool2(0x40uLL);
}
