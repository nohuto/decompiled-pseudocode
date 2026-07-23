/*
 * XREFs of CmpLockCallbackListShared @ 0x140987240
 * Callers:
 *     CmpEnumerateCallback @ 0x1407D1DE0 (CmpEnumerateCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v1, (__int64)&CmpCallbackListLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
