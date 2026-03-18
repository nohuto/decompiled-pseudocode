/*
 * XREFs of CcExitPartition @ 0x140579880
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14067E824 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x140577DA4 (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  _QWORD **v5; // rdi
  __int64 v6; // rsi
  KIRQL v7; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v7 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1294) = 2;
      KeReleaseSpinLock(&CcGlobalPartitionLock, v7);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(v2);
      else
        CcPostDeferredWrites(v2, 0LL);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal(v2, 2);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(v2);
      else
        CcWaitForCurrentLazyWriterActivityOnPartition(v2, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1294) = 1;
      KeReleaseSpinLock(&CcGlobalPartitionLock, v4);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = (_QWORD **)(v2 + 640);
      v6 = v2 + 696;
      while ( *v5 != v5 || *(_QWORD *)(v2 + 672) != v6 || *(_QWORD *)(v2 + 680) != v6 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 672), v2);
        CcDeleteSectionsForPartition(v5, v2);
      }
    }
  }
}
