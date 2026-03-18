/*
 * XREFs of FsRtlReleaseAutoExpandPushLockShared @ 0x14025F970
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x14041F020 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14025DFF0 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockShared(ULONG_PTR a1)
{
  ExReleaseAutoExpandPushLockShared(a1, 0LL);
  return KeLeaveCriticalRegionThread();
}
