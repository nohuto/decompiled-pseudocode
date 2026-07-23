/*
 * XREFs of MmUnlockLoadedDataTableEntry @ 0x1402BBE58
 * Callers:
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407E8A50 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407FBB58 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A29204 (MiLogPinDriverAddress.c)
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140BA8330 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx

  MiUnlockLoaderEntry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 0LL);
}
