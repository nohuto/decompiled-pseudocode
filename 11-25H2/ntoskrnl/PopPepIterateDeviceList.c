/*
 * XREFs of PopPepIterateDeviceList @ 0x1405D6A04
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x1404D1E28 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPepIterateDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  __int64 v8; // rbp
  char v9; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rdi
  __int64 *i; // rdi

  v8 = a1;
  v9 = 1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopPepDeviceListLock,
        0,
        v11,
        (unsigned __int64)&PopPepDeviceListLock);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( v8 )
    guard_dispatch_icall_no_overrides(a7);
  for ( i = (__int64 *)PopPepDeviceList; i != &PopPepDeviceList; i = (__int64 *)*i )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(i) )
    {
      v9 = 0;
      break;
    }
  }
  if ( a3 )
  {
    LOBYTE(a1) = v9;
    guard_dispatch_icall_no_overrides(a1);
  }
  if ( a6 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
