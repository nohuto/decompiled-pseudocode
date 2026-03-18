/*
 * XREFs of FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403C58E4
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x1403C5300 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403C5430 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403C5500 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1403C5670 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045B800 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x14057FF10 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1409A4760 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FD780 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14025F524 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
  return KeLeaveCriticalRegionThread();
}
