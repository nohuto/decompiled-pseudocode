/*
 * XREFs of WheaUnregisterErrorSourceOverride @ 0x14065D3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 */

void __fastcall WheaUnregisterErrorSourceOverride(signed int a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rsi

  if ( (unsigned int)a1 <= 0x12 )
  {
    v2 = a1;
    v4 = (unsigned __int64 *)((char *)&WheapSourceConfigOverride + 64 * (__int64)a1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
    if ( v7 )
      v7[10] = 1;
    if ( *((_BYTE *)v4 + 8) )
    {
      WheapOverrideHandler[v2] = 0LL;
      WheaRemoveErrorSource(a2);
      *((_BYTE *)v4 + 8) = 0;
      v4[2] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
      v4[3] = (unsigned __int64)xHalPciEarlyRestore;
      v4[4] = (unsigned __int64)WheapDefaultErrSrcCreateRecord;
      v4[5] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
      v4[6] = (unsigned __int64)xHalTimerWatchdogStop;
      v4[7] = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegion();
  }
}
