/*
 * XREFs of IopProcessIoTracking @ 0x140594600
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403CB914 (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  struct _KTHREAD *v6; // rax
  __int64 *i; // rbx
  __int16 v10; // [rsp+28h] [rbp-50h] BYREF
  int v11; // [rsp+2Ah] [rbp-4Eh]
  __int16 v12; // [rsp+2Eh] [rbp-4Ah]
  __int64 v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+38h] [rbp-40h]

  v13 = a1;
  v11 = 0;
  v2 = 0;
  v12 = 0;
  v14 = a2;
  v10 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v5 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (LOBYTE(v6) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock, 0), (_BYTE)v6) )
  {
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    for ( i = (__int64 *)IopPerfIoTrackingListHead; i != &IopPerfIoTrackingListHead; i = (__int64 *)*i )
      guard_dispatch_icall_no_overrides(&v10, v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    LOBYTE(v6) = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    LOBYTE(v6) = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, (ULONG_PTR)v5);
  }
  if ( v2 == 1 )
  {
    v6 = KeGetCurrentThread();
    if ( v6->SpecialApcDisable++ == -1 )
    {
      v6 = (struct _KTHREAD *)((char *)v6 + 152);
      if ( *(struct _KTHREAD **)&v6->Header.Lock != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v6;
}
