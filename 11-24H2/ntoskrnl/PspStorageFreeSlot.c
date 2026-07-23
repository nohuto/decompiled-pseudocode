/*
 * XREFs of PspStorageFreeSlot @ 0x14077C394
 * Callers:
 *     PsFreeSiloContextSlot @ 0x140772320 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1407795B0 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140C37AF4 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // edi
  _RTL_BITMAP *v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbp
  unsigned int v7; // esi

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &PspStorageExpansionBitmap;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &PspStorageBitmap;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&PspStorageBitmapLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PspStorageBitmapLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PspStorageBitmapLock, v4, (__int64)&PspStorageBitmapLock);
  v7 = 0;
  if ( v6 )
    v6[10] = 1;
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
    *((_BYTE *)v2->Buffer + ((unsigned __int64)v1 >> 3)) &= ~(1 << (v1 & 7));
  else
    v7 = -1073741811;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegion();
  return v7;
}
