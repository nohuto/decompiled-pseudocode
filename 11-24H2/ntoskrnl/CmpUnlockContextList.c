/*
 * XREFs of CmpUnlockContextList @ 0x14098B2A0
 * Callers:
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     CmpCallbackFillObjectContext @ 0x1408487F0 (CmpCallbackFillObjectContext.c)
 *     CmSetCallbackObjectContext @ 0x14098AF60 (CmSetCallbackObjectContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 CmpUnlockContextList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpContextListLock);
  v0 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpContextListLock & 2) != 0
    || (v1 = CmpContextListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v0, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  return KeLeaveCriticalRegionThread();
}
