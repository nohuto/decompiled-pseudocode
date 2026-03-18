/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140679718
 * Callers:
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FBE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FBF0);
  return MiIterateOverPartitions((__int64)MiLockMemoryLists, 0LL);
}
