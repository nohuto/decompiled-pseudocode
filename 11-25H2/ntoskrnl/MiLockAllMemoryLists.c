/*
 * XREFs of MiLockAllMemoryLists @ 0x1404744BC
 * Callers:
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FBF0);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FBE0);
}
