/*
 * XREFs of CmpLockContextListExclusive @ 0x14098B30C
 * Callers:
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     CmSetCallbackObjectContext @ 0x14098AF60 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (__int64)&CmpContextListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
