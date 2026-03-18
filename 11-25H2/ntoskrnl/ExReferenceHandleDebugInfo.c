/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409EC71C
 * Callers:
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v2; // rdi
  __int64 *v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 56, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(volatile signed __int32 **)(a1 + 96);
  if ( v6 )
    _InterlockedIncrement(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
