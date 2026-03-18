/*
 * XREFs of IopProcessIoTracking @ 0x140597680
 * Callers:
 *     IopPerfCompleteRequest @ 0x1403DC6BC (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404736D4 (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 *i; // rbx
  __int16 v13; // [rsp+28h] [rbp-50h] BYREF
  int v14; // [rsp+2Ah] [rbp-4Eh]
  __int16 v15; // [rsp+2Eh] [rbp-4Ah]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = a1;
  v14 = 0;
  v2 = 0;
  v15 = 0;
  v17 = a2;
  v13 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v5 = KeAbPreAcquire((__int64)&IopPerfIoTrackingLock, 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (LOBYTE(v8) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock, 0), (_BYTE)v8) )
  {
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    for ( i = (__int64 *)IopPerfIoTrackingListHead; i != &IopPerfIoTrackingListHead; i = (__int64 *)*i )
      guard_dispatch_icall_no_overrides(&v13, v4, v6, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    LOBYTE(v8) = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    LOBYTE(v8) = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, (ULONG_PTR)v5);
  }
  if ( v2 == 1 )
  {
    v8 = KeGetCurrentThread();
    if ( v8->SpecialApcDisable++ == -1 )
    {
      v8 = (struct _KTHREAD *)((char *)v8 + 152);
      if ( *(struct _KTHREAD **)&v8->Header.Lock != v8 )
        LOBYTE(v8) = KiCheckForKernelApcDelivery(v9, v4);
    }
  }
  return (char)v8;
}
