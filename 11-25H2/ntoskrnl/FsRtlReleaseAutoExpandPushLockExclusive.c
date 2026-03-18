/*
 * XREFs of FsRtlReleaseAutoExpandPushLockExclusive @ 0x1402A26A4
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x1402A20A0 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402A21D0 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A22A0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2410 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045C4E0 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x14057CBF0 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x14099F8D0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FF0A0 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1402BCAFC (ExpReleaseFannedOutPushLockExclusive.c)
 */

__int64 __fastcall FsRtlReleaseAutoExpandPushLockExclusive(_DWORD *BugCheckParameter2)
{
  int v1; // eax
  int v3; // ecx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt

  v1 = BugCheckParameter2[2];
  if ( (v1 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v1 & 0xFFFFFFF8);
  }
  else
  {
    v3 = BugCheckParameter2[3];
    if ( (v3 & 0xF0000u) < 0xF0000 )
      BugCheckParameter2[3] = v3 + 0x10000;
  }
  _m_prefetchw(BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v6 = *(_QWORD *)BugCheckParameter2,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4)) )
  {
    ExfReleasePushLock(BugCheckParameter2);
  }
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
