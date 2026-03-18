/*
 * XREFs of MiLockAllMemoryLists @ 0x140489A08
 * Callers:
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FE30);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FE20);
}
