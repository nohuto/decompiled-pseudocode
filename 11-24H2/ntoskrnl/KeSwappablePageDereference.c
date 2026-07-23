/*
 * XREFs of KeSwappablePageDereference @ 0x140260340
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1402600D4 (KiOutSwapKernelStacks.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x1408FDB5C (PspSchedulerSharedDataRegionSlotFree.c)
 * Callees:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall KeSwappablePageDereference(__int64 a1)
{
  unsigned __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFEuLL) - 2;
  if ( v2 >= 0xFFFFFFFFFFFFFFFEuLL )
    __fastfail(0xEu);
  if ( v2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (volatile signed __int32 *)(a1 + 8);
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(a1 + 8, 0LL, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64(v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, v4);
    if ( v6 )
      *(_BYTE *)(v6 + 10) = 1;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 1LL) == 1 )
      MmUnlockPages((PMDL)(a1 + 24));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegion();
  }
}
