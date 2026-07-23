/*
 * XREFs of WheaConfigureErrorSource @ 0x140B63CB0
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x1407C7280 (WheaAddErrorSourceDeviceDriver.c)
 *     HalpWheaInitDiscard @ 0x140C11BD4 (HalpWheaInitDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WheapInitializeDeferredErrorSources @ 0x140659F9C (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r15d
  char *v7; // r14
  char *v8; // rax
  char *v9; // r14
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  signed __int32 v12[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 > 0x12 )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 64 * (__int64)a1);
  CurrentThread = KeGetCurrentThread();
  v6 = -1073741823;
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock, 0, v7, (__int64)&WheapConfigTableLock);
  if ( v7 )
    v7[10] = 1;
  v8 = (char *)KeAbPreAcquire((__int64)&WheapSourceConfiguration + 64 * v2, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapSourceConfiguration + 8 * v2,
      v8,
      (__int64)&WheapSourceConfiguration + 64 * v2);
  if ( v9 )
    v9[10] = 1;
  if ( !*((_BYTE *)v4 + 8) )
  {
    *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
    if ( *(_QWORD *)(a2 + 8) )
      *((_QWORD *)v4 + 2) = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) )
      *((_QWORD *)v4 + 3) = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 24) )
      *((_QWORD *)v4 + 4) = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 32) )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 32);
    }
    else
    {
      if ( (int)v2 <= 11 || (_DWORD)v2 == 14 )
        goto LABEL_23;
      v10 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v10;
LABEL_23:
    if ( *(_QWORD *)(a2 + 40) )
      *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 40);
    _InterlockedOr(v12, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v6 = WheapInitializeDeferredErrorSources(v2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 8 * v2);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 64 * v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
  KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  KeLeaveCriticalRegion();
  return v6;
}
