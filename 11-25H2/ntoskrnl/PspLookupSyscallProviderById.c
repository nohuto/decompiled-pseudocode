/*
 * XREFs of PspLookupSyscallProviderById @ 0x1405D8A90
 * Callers:
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PspLookupSyscallProviderByIdNoLock @ 0x140761A7C (PspLookupSyscallProviderByIdNoLock.c)
 */

__int64 __fastcall PspLookupSyscallProviderById(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
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
      (unsigned __int64)&PspSyscallProviderRegistrationLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = PspLookupSyscallProviderByIdNoLock(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, v7, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
  return v6;
}
