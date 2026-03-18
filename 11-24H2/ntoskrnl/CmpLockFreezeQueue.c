/*
 * XREFs of CmpLockFreezeQueue @ 0x1406FB3E4
 * Callers:
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 CmpLockFreezeQueue()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, result, (__int64)&CmpFreezeListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 10) = 1;
  return result;
}
