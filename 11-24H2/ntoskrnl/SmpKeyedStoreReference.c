/*
 * XREFs of SmpKeyedStoreReference @ 0x14020D9B4
 * Callers:
 *     SmPageWrite @ 0x1402F5950 (SmPageWrite.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall SmpKeyedStoreReference(volatile signed __int64 *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi

  CurrentThread = KeGetCurrentThread();
  v5 = -1;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(BugCheckParameter2, 0LL, v6, BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  v7 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2);
  v8 = v7;
  if ( v7 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v7 + 16));
    v5 = *(unsigned __int16 *)(v8 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v5;
}
