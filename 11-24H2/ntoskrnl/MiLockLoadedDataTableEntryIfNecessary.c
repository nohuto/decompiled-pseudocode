/*
 * XREFs of MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C
 * Callers:
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     FsRtlSetDriverBacking @ 0x14070AC20 (FsRtlSetDriverBacking.c)
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140BA8330 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 */

__int64 __fastcall MiLockLoadedDataTableEntryIfNecessary(__int64 a1, _DWORD *a2)
{
  if ( (struct _KTHREAD *)qword_140E2D950 == KeGetCurrentThread() )
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
