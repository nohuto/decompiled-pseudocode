/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140684FA4
 * Callers:
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FE20);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FE30);
  return MiIterateOverPartitions((__int64)MiLockMemoryLists, 0LL);
}
