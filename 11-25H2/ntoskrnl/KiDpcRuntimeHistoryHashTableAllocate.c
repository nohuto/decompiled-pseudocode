/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1404A9BD4
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140730F08 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 KiDpcRuntimeHistoryHashTableAllocate()
{
  return ExAllocatePool2(0x40uLL);
}
