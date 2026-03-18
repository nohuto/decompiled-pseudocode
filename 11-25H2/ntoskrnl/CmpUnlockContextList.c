/*
 * XREFs of CmpUnlockContextList @ 0x140949BA0
 * Callers:
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmpCallbackFillObjectContext @ 0x14084CB10 (CmpCallbackFillObjectContext.c)
 *     CmSetCallbackObjectContext @ 0x140949880 (CmSetCallbackObjectContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
