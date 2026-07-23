/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1404A4AE4
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14073AE58 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiDpcRuntimeHistoryHashTableAllocate(ULONG_PTR a1)
{
  return ExAllocatePool2(0x40uLL, a1, 0x74687244u);
}
