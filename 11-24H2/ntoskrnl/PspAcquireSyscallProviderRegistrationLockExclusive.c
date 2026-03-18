/*
 * XREFs of PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1405E4934
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140770EE0 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1407711F4 (PspDestroySyscallProvider.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 PspAcquireSyscallProviderRegistrationLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&PspSyscallProviderRegistrationLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSyscallProviderRegistrationLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(
               &PspSyscallProviderRegistrationLock,
               result,
               (__int64)&PspSyscallProviderRegistrationLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
