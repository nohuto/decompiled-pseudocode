/*
 * XREFs of MmUnlockLoadedDataTableEntry @ 0x1402C72D8
 * Callers:
 *     KeSetTracepoint @ 0x14073D6A0 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407E8480 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407FB3E8 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A351F4 (MiLogPinDriverAddress.c)
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140BA6330 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
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
