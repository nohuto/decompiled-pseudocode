/*
 * XREFs of PspLookupSyscallProviderById @ 0x1405E4A2C
 * Callers:
 *     PspSyscallProviderOptIn @ 0x14077153C (PspSyscallProviderOptIn.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x14077143C (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebx
  signed __int64 v7; // r11

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&PspSyscallProviderRegistrationLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSyscallProviderRegistrationLock,
      0,
      v5,
      (__int64)&PspSyscallProviderRegistrationLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, v7, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
  return v6;
}
