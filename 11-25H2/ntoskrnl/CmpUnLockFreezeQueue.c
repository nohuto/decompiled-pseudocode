/*
 * XREFs of CmpUnLockFreezeQueue @ 0x1406EF518
 * Callers:
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
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
