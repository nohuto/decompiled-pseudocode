/*
 * XREFs of MmReleaseLoadLockShared @ 0x1402BC170
 * Callers:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     FsRtlSetDriverBacking @ 0x14070AC20 (FsRtlSetDriverBacking.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 *     MmFreeDriverInitialization @ 0x140A3317C (MmFreeDriverInitialization.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLockShared(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock((__int64)CurrentThread, 0);
}
