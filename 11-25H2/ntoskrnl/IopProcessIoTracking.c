/*
 * XREFs of IopProcessIoTracking @ 0x140593F70
 * Callers:
 *     IopPerfCompleteRequest @ 0x14049CE74 (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403F5B90 (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rbx
  struct _KTHREAD *v5; // rax
  __int64 *i; // rbx
  __int16 v9; // [rsp+28h] [rbp-50h] BYREF
  int v10; // [rsp+2Ah] [rbp-4Eh]
  __int16 v11; // [rsp+2Eh] [rbp-4Ah]
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]

  v12 = a1;
  v10 = 0;
  v2 = 0;
  v11 = 0;
  v13 = a2;
  v9 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v4 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (LOBYTE(v5) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock, 0), (_BYTE)v5) )
  {
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    for ( i = (__int64 *)IopPerfIoTrackingListHead; i != &IopPerfIoTrackingListHead; i = (__int64 *)*i )
      guard_dispatch_icall_no_overrides(&v9);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    LOBYTE(v5) = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v4 )
  {
    LOBYTE(v5) = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, (ULONG_PTR)v4);
  }
  if ( v2 == 1 )
  {
    v5 = KeGetCurrentThread();
    if ( v5->SpecialApcDisable++ == -1 )
    {
      v5 = (struct _KTHREAD *)((char *)v5 + 152);
      if ( *(struct _KTHREAD **)&v5->Header.Lock != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v5;
}
