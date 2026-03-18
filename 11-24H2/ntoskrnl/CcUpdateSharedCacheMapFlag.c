/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140461D64
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DAC78 (CcApplyLowIoPriorityToThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     CcUnmapVacb @ 0x1408E5FE0 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x140AC2F00 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  int v7; // eax
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  v7 = *(_DWORD *)(a1 + 152);
  if ( a3 )
    v8 = a2 | v7;
  else
    v8 = ~a2 & v7;
  *(_DWORD *)(a1 + 152) = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
