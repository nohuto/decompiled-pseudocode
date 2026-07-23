/*
 * XREFs of FsRtlReleaseAutoExpandPushLockShared @ 0x14028FF80
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x140414D60 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockShared(ULONG_PTR a1)
{
  ExReleaseAutoExpandPushLockShared(a1, 0LL);
  return KeLeaveCriticalRegionThread();
}
