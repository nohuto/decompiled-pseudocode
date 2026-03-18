/*
 * XREFs of MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC
 * Callers:
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     FsRtlSetDriverBacking @ 0x14070D080 (FsRtlSetDriverBacking.c)
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140BA6330 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 */

__int64 __fastcall MiLockLoadedDataTableEntryIfNecessary(__int64 a1, _DWORD *a2)
{
  if ( (struct _KTHREAD *)qword_140E2D810 == KeGetCurrentThread() )
  {
    *a2 = 0;
    return MmFindDataTableEntryByAddress();
  }
  else
  {
    *a2 = 1;
    return MiLockLoadedDataTableEntry(a1, 1LL);
  }
}
