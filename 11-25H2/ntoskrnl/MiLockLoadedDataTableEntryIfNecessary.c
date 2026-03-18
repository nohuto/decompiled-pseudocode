/*
 * XREFs of MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C
 * Callers:
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     FsRtlSetDriverBacking @ 0x1407011A0 (FsRtlSetDriverBacking.c)
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140B96350 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 */

__int64 __fastcall MiLockLoadedDataTableEntryIfNecessary(__int64 a1, _DWORD *a2)
{
  if ( (struct _KTHREAD *)qword_140E2D5D0 == KeGetCurrentThread() )
  {
    *a2 = 0;
    return MmFindDataTableEntryByAddress(a1);
  }
  else
  {
    *a2 = 1;
    return MiLockLoadedDataTableEntry(a1, 1LL);
  }
}
