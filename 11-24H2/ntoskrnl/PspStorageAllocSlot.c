/*
 * XREFs of PspStorageAllocSlot @ 0x14077C298
 * Callers:
 *     PsAllocSiloContextSlot @ 0x140772300 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x140779250 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x1407D60A4 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x140829940 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140C37AF4 (PspInitializeSiloStructures.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  ULONG ClearBitsAndSet; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&PspStorageBitmapLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PspStorageBitmapLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PspStorageBitmapLock, v4, (__int64)&PspStorageBitmapLock);
  if ( v6 )
    v6[10] = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v3 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegion();
  if ( v3 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v3;
}
