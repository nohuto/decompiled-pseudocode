/*
 * XREFs of WheaSelLogError @ 0x140659AF8
 * Callers:
 *     IopWheaSelLogError @ 0x140592830 (IopWheaSelLogError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelErrorRecord @ 0x1406A0E80 (IpmiLibAddSelErrorRecord.c)
 */

__int64 __fastcall WheaSelLogError(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&WheaIpmiContextLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v6, (__int64)&WheaIpmiContextLock);
  if ( v8 )
    v8[10] = 1;
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
