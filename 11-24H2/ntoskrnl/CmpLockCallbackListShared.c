/*
 * XREFs of CmpLockCallbackListShared @ 0x14099D210
 * Callers:
 *     CmpEnumerateCallback @ 0x1407D18F0 (CmpEnumerateCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v1, (__int64)&CmpCallbackListLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
