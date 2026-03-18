/*
 * XREFs of ExpAcquirePoolListLockExclusive @ 0x14065B334
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407C5F40 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407C616C (ExpPrivatePoolDestroy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 ExpAcquirePoolListLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&qword_140E6BBE0, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E6BBE0, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140E6BBE0, result, (__int64)&qword_140E6BBE0);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
