/*
 * XREFs of MmReleaseLoadLockShared @ 0x1402C75F0
 * Callers:
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     FsRtlSetDriverBacking @ 0x14070D080 (FsRtlSetDriverBacking.c)
 *     MiSplitDriverPage @ 0x1407E8058 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3D86C (MmFreeDriverInitialization.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLockShared(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock((__int64)CurrentThread, 0);
}
