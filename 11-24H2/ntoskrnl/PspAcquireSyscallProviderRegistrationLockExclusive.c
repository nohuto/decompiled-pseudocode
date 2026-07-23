/*
 * XREFs of PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1405E1E5C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140771414 (PspDestroySyscallProvider.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *PspAcquireSyscallProviderRegistrationLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&PspSyscallProviderRegistrationLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSyscallProviderRegistrationLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(
                       &PspSyscallProviderRegistrationLock,
                       result,
                       (__int64)&PspSyscallProviderRegistrationLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
