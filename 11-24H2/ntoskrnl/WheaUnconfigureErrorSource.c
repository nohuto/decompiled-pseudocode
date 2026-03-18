/*
 * XREFs of WheaUnconfigureErrorSource @ 0x140B61DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     WheapSetDefaultErrorConfigurationCalls @ 0x14065DB5C (WheapSetDefaultErrorConfigurationCalls.c)
 */

__int64 __fastcall WheaUnconfigureErrorSource(unsigned int a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebp
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi

  if ( a1 > 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v1 = (unsigned __int64 *)((char *)&WheapSourceConfiguration + 64 * (__int64)(int)a1);
    CurrentThread = KeGetCurrentThread();
    v3 = -1073741823;
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&WheapConfigTableLock, 0, v4, (__int64)&WheapConfigTableLock);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    v5 = KeAbPreAcquire((__int64)v1, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, (__int64)v5, (__int64)v1);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    if ( *((_BYTE *)v1 + 8) )
    {
      *((_BYTE *)v1 + 8) = 0;
      WheapSetDefaultErrorConfigurationCalls(v1);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  return v3;
}
