/*
 * XREFs of PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1405D8B4C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140761520 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140761834 (PspDestroySyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void PspReleaseSyscallProviderRegistrationLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
}
