/*
 * XREFs of CmpLockCallbackListExclusive @ 0x1406EA3FC
 * Callers:
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1409951E0 (CmpInsertCallbackInListByAltitude.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockCallbackListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpCallbackListLock, result, (__int64)&CmpCallbackListLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
