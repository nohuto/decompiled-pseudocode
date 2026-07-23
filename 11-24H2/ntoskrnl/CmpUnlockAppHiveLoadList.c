/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x140A32098
 * Callers:
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void CmpUnlockAppHiveLoadList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpAppHiveLoadListLock);
  v0 = CmpAppHiveLoadListLock - 16;
  if ( (CmpAppHiveLoadListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpAppHiveLoadListLock & 2) != 0
    || (v1 = CmpAppHiveLoadListLock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpAppHiveLoadListLock,
                v0,
                CmpAppHiveLoadListLock)) )
  {
    ExfReleasePushLock(&CmpAppHiveLoadListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpAppHiveLoadListLock);
  KeLeaveCriticalRegion();
}
