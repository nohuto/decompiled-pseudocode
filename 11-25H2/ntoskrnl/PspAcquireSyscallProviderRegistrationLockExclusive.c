/*
 * XREFs of PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1405D8998
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140761520 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140761834 (PspDestroySyscallProvider.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *PspAcquireSyscallProviderRegistrationLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&PspSyscallProviderRegistrationLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSyscallProviderRegistrationLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(
                          &PspSyscallProviderRegistrationLock,
                          result,
                          (__int64)&PspSyscallProviderRegistrationLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
