/*
 * XREFs of CcExitPartition @ 0x14057A020
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x140578544 (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  _QWORD **v5; // rdi
  __int64 v6; // rsi
  KIRQL v7; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[1];
  v9 = 0;
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
        CcForEachPrivateVolumeCacheMap(v2, (__int64)CcPostDeferredWritesOnVolumeHelper, 0LL);
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
        CcForEachPrivateVolumeCacheMap(v2, (__int64)CcWaitForCurrentLazyWriterActivityHelper, (__int64)&v9);
      else
        v9 = CcWaitForCurrentLazyWriterActivityOnPartition(v2, 0LL);
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
