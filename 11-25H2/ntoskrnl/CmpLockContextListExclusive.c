/*
 * XREFs of CmpLockContextListExclusive @ 0x140949C0C
 * Callers:
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     CmSetCallbackObjectContext @ 0x140949880 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (__int64)&CmpContextListLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
