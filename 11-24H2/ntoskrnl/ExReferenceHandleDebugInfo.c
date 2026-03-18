/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409E6738
 * Callers:
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  volatile signed __int32 *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 56, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(volatile signed __int32 **)(a1 + 96);
  if ( v6 )
    _InterlockedIncrement(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread();
  return v6;
}
