/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1409117E8
 * Callers:
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpAppHiveLoadListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (__int64)&CmpAppHiveLoadListLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
