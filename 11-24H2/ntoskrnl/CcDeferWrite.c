/*
 * XREFs of CcDeferWrite @ 0x1405785D0
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x140618A00 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcReferencePartitionFromFileObject @ 0x14040C940 (CcReferencePartitionFromFileObject.c)
 *     ExInterlockedInsertHeadList @ 0x1404208B0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x14045DA00 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
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
    guard_dispatch_icall_no_overrides(Context1, Context2);
  }
}
