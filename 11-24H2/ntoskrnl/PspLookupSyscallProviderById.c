/*
 * XREFs of PspLookupSyscallProviderById @ 0x1405E1F54
 * Callers:
 *     PspSyscallProviderOptIn @ 0x14077175C (PspSyscallProviderOptIn.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x14077165C (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rbx
  unsigned int v6; // ebx
  signed __int64 v7; // r11

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&PspSyscallProviderRegistrationLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSyscallProviderRegistrationLock,
      0,
      v5,
      (__int64)&PspSyscallProviderRegistrationLock);
  if ( v5 )
    v5[10] = 1;
  v6 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, v7, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
  return v6;
}
