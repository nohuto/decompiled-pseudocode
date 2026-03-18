/*
 * XREFs of CmpLockFreezeQueue @ 0x1406EF574
 * Callers:
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockFreezeQueue()
{
  __int64 *result; // rax
  __int64 *v1; // rbx

  result = KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, result, (__int64)&CmpFreezeListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
