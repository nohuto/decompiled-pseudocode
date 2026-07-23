/*
 * XREFs of ExpAcquirePoolListLockExclusive @ 0x140659A54
 * Callers:
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407C65CC (ExpPrivatePoolDestroy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *ExpAcquirePoolListLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&qword_140E6BDE0, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E6BDE0, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&qword_140E6BDE0, result, (__int64)&qword_140E6BDE0);
  if ( v2 )
    v2[10] = 1;
  return result;
}
