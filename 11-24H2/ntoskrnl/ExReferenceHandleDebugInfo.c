/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409E16F8
 * Callers:
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v2; // rdi
  char *v4; // rax
  char *v5; // rsi
  volatile signed __int32 *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire(a1 + 56, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    v5[10] = 1;
  v6 = *(volatile signed __int32 **)(a1 + 96);
  if ( v6 )
    _InterlockedIncrement(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread();
  return v6;
}
