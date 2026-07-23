/*
 * XREFs of CcQuickLazyWriteScanForVolume @ 0x1404AFD40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 */

char __fastcall CcQuickLazyWriteScanForVolume(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[6];
  v2 = a1[8];
  v3 = a1[7];
  v5 = a1[9];
  LockHandle.LockQueue = 0LL;
  a1[6] = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = *(unsigned int *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)v1 = 0LL;
  CcLazyWriteScanVolume(
    v2,
    v5,
    v1,
    v6,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
  CcFreeWorkQueueEntry((_SLIST_ENTRY *)v1, v7, v8, v9);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 832), &LockHandle);
  v10 = *(_QWORD **)(v2 + 1568);
  if ( *v10 != v2 + 1560 )
    __fastfail(3u);
  a1[1] = v10;
  *a1 = v2 + 1560;
  *v10 = a1;
  *(_QWORD *)(v2 + 1568) = a1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v3, v2);
}
