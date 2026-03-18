/*
 * XREFs of KeSwappablePageReference @ 0x14046A5CC
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall KeSwappablePageReference(__int64 a1)
{
  volatile signed __int32 *v2; // r14
  unsigned __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // r15

  v2 = (volatile signed __int32 *)(a1 + 16);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 2uLL) + 2;
  if ( v3 < 2 )
    __fastfail(0xEu);
  if ( (v3 & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (unsigned __int64 *)(a1 + 8);
    v6 = KeAbPreAcquire(a1 + 8, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int64)v5);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( (*(_QWORD *)v2 & 1) == 0 )
    {
      MmProbeAndLockPages((PMDL)(a1 + 24), 0, IoWriteAccess);
      _interlockedbittestandset64(v2, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegion();
  }
}
