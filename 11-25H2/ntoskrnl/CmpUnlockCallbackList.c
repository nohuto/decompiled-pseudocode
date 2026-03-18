/*
 * XREFs of CmpUnlockCallbackList @ 0x1409952C0
 * Callers:
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmpEnumerateCallback @ 0x1407C21C0 (CmpEnumerateCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1409951E0 (CmpInsertCallbackInListByAltitude.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockCallbackList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpCallbackListLock);
  v0 = CmpCallbackListLock - 16;
  if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpCallbackListLock & 2) != 0
    || (v1 = CmpCallbackListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, v0, CmpCallbackListLock)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
