/*
 * XREFs of PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1405E2010
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140771414 (PspDestroySyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void PspReleaseSyscallProviderRegistrationLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
}
