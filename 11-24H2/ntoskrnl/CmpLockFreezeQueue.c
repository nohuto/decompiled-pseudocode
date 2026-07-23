/*
 * XREFs of CmpLockFreezeQueue @ 0x1406F9024
 * Callers:
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *CmpLockFreezeQueue()
{
  char *result; // rax
  char *v1; // rbx

  result = (char *)KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, result, (__int64)&CmpFreezeListLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
