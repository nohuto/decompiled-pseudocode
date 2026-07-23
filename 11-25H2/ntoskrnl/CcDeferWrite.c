/*
 * XREFs of CcDeferWrite @ 0x140577E30
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x14060E480 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExInterlockedInsertHeadList @ 0x1403545B0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1403A5530 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     CcReferencePartitionFromFileObject @ 0x1403A6E4C (CcReferencePartitionFromFileObject.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x14046C6F0 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 v11; // rbx
  __int64 *PrivateVolumeCacheMapFromFileObject; // rsi
  KSPIN_LOCK *v13; // r8
  _LIST_ENTRY *v14; // rdx
  _LIST_ENTRY *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeRcuReadLock();
    v11 = CcReferencePartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v11);
    KeRcuReadUnlock();
    CcReferencePartitionAndPrivateVolumeCacheMap(v11, (__int64)PrivateVolumeCacheMapFromFileObject);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v13 = (KSPIN_LOCK *)(v11 + 1216);
    v14 = (_LIST_ENTRY *)(PoolWithTag + 24);
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 9) = v11;
    v15 = (_LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 138);
    *((_QWORD *)PoolWithTag + 10) = PrivateVolumeCacheMapFromFileObject;
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    if ( !PrivateVolumeCacheMapFromFileObject )
      v15 = (_LIST_ENTRY *)(v11 + 1168);
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v15, v14, v13);
    else
      ExInterlockedInsertTailList(v15, v14, v13);
    CcPostDeferredWrites(v11, (__int64)PrivateVolumeCacheMapFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 768), &LockHandle);
    CcScheduleLazyWriteScan((_BYTE *)v11, PrivateVolumeCacheMapFromFileObject, 1, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcDereferencePartition(v11);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Context1);
  }
}
