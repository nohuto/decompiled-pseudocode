/*
 * XREFs of CcDeferWrite @ 0x14057B140
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x14061A440 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcReferencePartitionFromFileObject @ 0x1402CC960 (CcReferencePartitionFromFileObject.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD5E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ExInterlockedInsertHeadList @ 0x14042EB80 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14042EC00 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x14046600C (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  __int64 v10; // rcx
  char *PoolWithTag; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 *PrivateVolumeCacheMapFromFileObject; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  KSPIN_LOCK *v19; // r8
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeRcuReadLock(v10);
    v14 = CcReferencePartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v14);
    KeRcuReadUnlock(v17, v16, v18);
    CcReferencePartitionAndPrivateVolumeCacheMap(v14, (__int64)PrivateVolumeCacheMapFromFileObject);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v19 = (KSPIN_LOCK *)(v14 + 1216);
    v20 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 9) = v14;
    v21 = (struct _LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 138);
    *((_QWORD *)PoolWithTag + 10) = PrivateVolumeCacheMapFromFileObject;
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    if ( !PrivateVolumeCacheMapFromFileObject )
      v21 = (struct _LIST_ENTRY *)(v14 + 1168);
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v21, v20, v19);
    else
      ExInterlockedInsertTailList(v21, v20, v19);
    CcPostDeferredWrites(v14, (__int64)PrivateVolumeCacheMapFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
    CcScheduleLazyWriteScan((_BYTE *)v14, PrivateVolumeCacheMapFromFileObject, 1, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcDereferencePartition(v14);
  }
  else
  {
    guard_dispatch_icall_no_overrides(Context1, Context2, v12, v13);
  }
}
