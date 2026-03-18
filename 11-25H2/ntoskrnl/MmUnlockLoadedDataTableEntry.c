/*
 * XREFs of MmUnlockLoadedDataTableEntry @ 0x14036E278
 * Callers:
 *     KeSetTracepoint @ 0x140731680 (KeSetTracepoint.c)
 *     MmGetSectionRange @ 0x1407D85C0 (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x1407EB558 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140A2F7F4 (MiLogPinDriverAddress.c)
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140B96350 (MmIsDriverVerifyingByAddress.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
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
