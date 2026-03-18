/*
 * XREFs of MmReleaseLoadLockShared @ 0x14036E590
 * Callers:
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     FsRtlSetDriverBacking @ 0x1407011A0 (FsRtlSetDriverBacking.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLockShared(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock((__int64)CurrentThread, 0);
}
