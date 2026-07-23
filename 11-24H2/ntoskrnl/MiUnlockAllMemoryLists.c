/*
 * XREFs of MiUnlockAllMemoryLists @ 0x1406860D0
 * Callers:
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140484754 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FF60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FF70);
  return MiIterateOverPartitions((__int64)MiLockMemoryLists, 0LL);
}
