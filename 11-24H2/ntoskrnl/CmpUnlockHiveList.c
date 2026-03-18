/*
 * XREFs of CmpUnlockHiveList @ 0x140844354
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x140464940 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpGetLastHive @ 0x14092EBCC (CmpGetLastHive.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
