/*
 * XREFs of ExpAcquirePoolListLockExclusive @ 0x14064F3A4
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407B699C (ExpPrivatePoolDestroy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *ExpAcquirePoolListLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140E6B920, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E6B920, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&qword_140E6B920, result, (__int64)&qword_140E6B920);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
