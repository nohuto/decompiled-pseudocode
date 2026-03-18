/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x1407DDFEC
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DDE90 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140A66C2C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
