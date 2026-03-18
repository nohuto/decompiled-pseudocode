/*
 * XREFs of ExpAcquirePoolListLockShared @ 0x140493144
 * Callers:
 *     ExpPrivatePoolGetNext @ 0x140A49750 (ExpPrivatePoolGetNext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 ExpAcquirePoolListLockShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E6B920, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E6B920, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E6B920, 0, v1, (unsigned __int64)&qword_140E6B920);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
