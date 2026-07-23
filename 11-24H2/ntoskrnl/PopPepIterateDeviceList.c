/*
 * XREFs of PopPepIterateDeviceList @ 0x1405D8AB4
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x1404CADB8 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPepIterateDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  __int64 v8; // rbp
  char v9; // bl
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  __int64 *i; // rdi

  v8 = a1;
  v9 = 1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (char *)KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopPepDeviceListLock, 0, v11, (__int64)&PopPepDeviceListLock);
    if ( v11 )
      v11[10] = 1;
  }
  if ( v8 )
    guard_dispatch_icall_no_overrides(a7, a2);
  for ( i = (__int64 *)PopPepDeviceList; i != &PopPepDeviceList; i = (__int64 *)*i )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(i, a7) )
    {
      v9 = 0;
      break;
    }
  }
  if ( a3 )
  {
    LOBYTE(a1) = v9;
    guard_dispatch_icall_no_overrides(a1, a7);
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
