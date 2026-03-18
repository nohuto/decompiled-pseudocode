/*
 * XREFs of ExpAcquirePoolListLockShared @ 0x140491580
 * Callers:
 *     ExpPrivatePoolGetNext @ 0x140A4AEE4 (ExpPrivatePoolGetNext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 ExpAcquirePoolListLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E6BBE0, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E6BBE0, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E6BBE0, 0, v1, (__int64)&qword_140E6BBE0);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
