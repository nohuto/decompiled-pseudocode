/*
 * XREFs of CmpLockContextListExclusive @ 0x14097591C
 * Callers:
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     CmSetCallbackObjectContext @ 0x140975570 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (__int64)&CmpContextListLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
