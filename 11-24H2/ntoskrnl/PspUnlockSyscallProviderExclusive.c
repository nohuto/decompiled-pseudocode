/*
 * XREFs of PspUnlockSyscallProviderExclusive @ 0x1405E2050
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x14077132C (PspAttachProcessToSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14077147C (PspDetachProcessFromSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall PspUnlockSyscallProviderExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 64;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
