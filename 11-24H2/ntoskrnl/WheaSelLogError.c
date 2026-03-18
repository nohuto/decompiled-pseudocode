/*
 * XREFs of WheaSelLogError @ 0x14065B3D8
 * Callers:
 *     IopWheaSelLogError @ 0x140595800 (IopWheaSelLogError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IpmiHwContextInitialized @ 0x14069F66C (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelErrorRecord @ 0x14069FD7C (IpmiLibAddSelErrorRecord.c)
 */

__int64 __fastcall WheaSelLogError(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, (__int64)v6, (__int64)&WheaIpmiContextLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( !(unsigned __int8)IpmiHwContextInitialized(&WheaIpmiContext) || WheaIpmiHwLogLocked )
    v11 = -1073741823;
  else
    v11 = IpmiLibAddSelErrorRecord(v10, v9, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  KeLeaveCriticalRegion();
  return v11;
}
