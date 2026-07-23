/*
 * XREFs of CmpUnLockFreezeQueue @ 0x1406F8FC8
 * Callers:
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 CmpUnLockFreezeQueue()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpFreezeListLock);
  v0 = CmpFreezeListLock - 16;
  if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpFreezeListLock & 2) != 0
    || (v1 = CmpFreezeListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v0, CmpFreezeListLock)) )
  {
    ExfReleasePushLock(&CmpFreezeListLock);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
}
