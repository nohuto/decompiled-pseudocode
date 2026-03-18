/*
 * XREFs of CmpUnlockHiveList @ 0x1408485D4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140465784 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x140498D80 (CmpUnJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpGetLastHive @ 0x1409118B0 (CmpGetLastHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockHiveList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpHiveListHeadLock);
  v0 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v1 = CmpHiveListHeadLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v0, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
