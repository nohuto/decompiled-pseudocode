/*
 * XREFs of PspUnlockSyscallProviderExclusive @ 0x1405D8B8C
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x14076174C (PspAttachProcessToSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14076189C (PspDetachProcessFromSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
