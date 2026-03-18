/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A08EC
 * Callers:
 *     CcChargeDirtyPagesInternal @ 0x14044B950 (CcChargeDirtyPagesInternal.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetCurrentNumaNode @ 0x14048B15C (CcGetCurrentNumaNode.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14057A394 (CcAdjustWriteBehindThreadPool.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // si
  __int64 v5; // rcx
  __int64 CurrentNumaNode; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( CcEnablePerVolumeLazyWriter || (unsigned int)CcNumberNumaNodes > 1 || (_BYTE)dword_140FC421C )
    return;
  CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 872) )
  {
    if ( !CcIsWriteBehindThreadpoolAtLowPriority(a1) )
      goto LABEL_18;
    v2 = 1;
    v7 = 0LL;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 1056) > 0x2000uLL || a2 )
  {
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) )
    {
      CcAdjustWriteBehindThreadPool(v9, 0LL);
      v2 = 1;
    }
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(CurrentNumaNode + 188)
    && !*(_DWORD *)(CurrentNumaNode + 176)
    && *(_QWORD *)(CurrentNumaNode + 104) == CurrentNumaNode + 104
    && *(_QWORD *)(CurrentNumaNode + 120) == CurrentNumaNode + 120 )
  {
    LOBYTE(v7) = 1;
    v8 = a1;
LABEL_15:
    CcAdjustWriteBehindThreadPool(v8, v7);
  }
LABEL_18:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() < 2u )
      CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
}
