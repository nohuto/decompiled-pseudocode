/*
 * XREFs of PspStorageAllocSlot @ 0x14077C3E8
 * Callers:
 *     PsAllocSiloContextSlot @ 0x1407720E0 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x140779150 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x1407D5BB4 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x140829110 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140C359B4 (PspInitializeSiloStructures.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  ULONG ClearBitsAndSet; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&PspStorageBitmapLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PspStorageBitmapLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PspStorageBitmapLock, (__int64)v4, (__int64)&PspStorageBitmapLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
