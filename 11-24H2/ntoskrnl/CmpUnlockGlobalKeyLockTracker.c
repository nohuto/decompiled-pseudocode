/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x1407DE53C
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DE3E0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140A5FA10 (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void CmpUnlockGlobalKeyLockTracker()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpKeyLockTracker);
  v0 = CmpKeyLockTracker - 16;
  if ( (CmpKeyLockTracker & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpKeyLockTracker & 2) != 0
    || (v1 = CmpKeyLockTracker,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpKeyLockTracker, v0, CmpKeyLockTracker)) )
  {
    ExfReleasePushLock(&CmpKeyLockTracker);
  }
  KeAbPostRelease((ULONG_PTR)&CmpKeyLockTracker);
  KeLeaveCriticalRegion();
}
