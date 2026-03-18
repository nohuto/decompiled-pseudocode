/*
 * XREFs of WheapCallInUsePageNotificationCallbacks @ 0x1407C7B98
 * Callers:
 *     WheaAttemptRowOffline @ 0x14065CB10 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C791C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  signed __int8 v12; // cf
  _QWORD *v13; // rdi
  PVOID *v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rsi
  int v18; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 Src; // [rsp+38h] [rbp-48h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h]
  __int128 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  v18 = 0;
  v22 = 0LL;
  v6 = a2;
  Src = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      &WheapInUsePageOfflineNotifyLock,
      (__int64)v10,
      (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  v14 = (PVOID *)WheapInUsePageOfflineNotifyList;
  if ( WheapInUsePageOfflineNotifyList != &WheapInUsePageOfflineNotifyList )
  {
    do
    {
      v18 = 0;
      *(_DWORD *)(a4 + 32) = a3;
      LOBYTE(v11) = v6;
      guard_dispatch_icall_no_overrides(a1, v11, a4, &v18);
      v15 = 0;
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 56LL;
      *(_QWORD *)&v20 = 0x800000584C4E524BuLL;
      *((_QWORD *)&v20 + 1) = 0x1800000002LL;
      if ( a3 )
      {
        v16 = a4 + 44;
        do
        {
          LODWORD(v21) = v15 + a1;
          DWORD1(v21) = *(_DWORD *)(v16 - 8);
          DWORD2(v21) = v18;
          HIDWORD(v21) = *(_DWORD *)v16;
          v22 = *(_QWORD *)(v16 + 8);
          WheaLogInternalEvent(&Src);
          ++v15;
          v16 += 24LL;
        }
        while ( v15 < a3 );
        v6 = a2;
      }
      v14 = (PVOID *)*v14;
    }
    while ( v14 != &WheapInUsePageOfflineNotifyList );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
