/*
 * XREFs of KeSwappablePageReference @ 0x14046C230
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408B9D1C (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall KeSwappablePageReference(__int64 a1)
{
  volatile signed __int32 *v2; // r14
  unsigned __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r15

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
      ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
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
