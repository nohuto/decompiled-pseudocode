/*
 * XREFs of FsRtlReleaseAutoExpandPushLockShared @ 0x1402058B0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x140429470 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockShared(ULONG_PTR a1)
{
  ExReleaseAutoExpandPushLockShared(a1, 0LL);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
