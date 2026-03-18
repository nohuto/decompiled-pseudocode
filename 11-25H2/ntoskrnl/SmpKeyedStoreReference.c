/*
 * XREFs of SmpKeyedStoreReference @ 0x140205F90
 * Callers:
 *     SmPageWrite @ 0x140207CB0 (SmPageWrite.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreReference @ 0x140435200 (SmKmStoreReference.c)
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
