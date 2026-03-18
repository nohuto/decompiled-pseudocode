/*
 * XREFs of CcCanIWrite @ 0x1404DBAA0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1402A7E40 (CcReferencePrivateVolumeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     CcReferencePartitionFromFileObject @ 0x1402CC960 (CcReferencePartitionFromFileObject.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExInterlockedInsertHeadList @ 0x14042EB80 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14042EC00 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x14046600C (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1404A08EC (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcIsFileObjectDirectMapped @ 0x1404DC40C (CcIsFileObjectDirectMapped.c)
 *     CcPerfLogCanWriteFail @ 0x14057DA6C (CcPerfLogCanWriteFail.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  __int64 v4; // rsi
  int v5; // r8d
  BOOLEAN v6; // bl
  UCHAR v7; // r10
  ULONG v8; // r9d
  __int64 *PrivateVolumeCacheMapFromFileObject; // r14
  ULONG Flags; // eax
  __int64 v12; // rdi
  struct _LIST_ENTRY *v13; // rcx
  char *v14; // r13
  char *v15; // r13
  __int64 v16; // rdx
  __int64 SectionObjectPointer; // rcx
  __int64 v18; // r8
  char IsFileObjectDirectMapped; // r12
  PLIST_ENTRY v20; // rax
  char v21; // r13
  BOOLEAN v22; // r12
  bool CanIWriteStream; // al
  KSPIN_LOCK *v24; // r8
  _BYTE *v25; // rsi
  _BYTE *v26; // r12
  char v28; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+49h] [rbp-BFh]
  int v30; // [rsp+4Ch] [rbp-BCh]
  PLIST_ENTRY ListHead; // [rsp+50h] [rbp-B8h]
  _BYTE *v32; // [rsp+58h] [rbp-B0h]
  _BYTE *v33; // [rsp+60h] [rbp-A8h]
  __int64 Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER Interval; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+A8h] [rbp-60h] BYREF
  PFILE_OBJECT v40; // [rsp+B0h] [rbp-58h]
  ULONG v41; // [rsp+B8h] [rbp-50h]
  struct _LIST_ENTRY ListEntry; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *p_Object; // [rsp+D0h] [rbp-38h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  __int64 *v45; // [rsp+F8h] [rbp-10h]
  char v46; // [rsp+100h] [rbp-8h]
  __int64 v47; // [rsp+108h] [rbp+0h]

  v4 = 0LL;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v29 = 0;
  v6 = 1;
  v7 = Retrying;
  v8 = BytesToWrite;
  v30 = 0;
  PrivateVolumeCacheMapFromFileObject = 0LL;
  v37 = 0LL;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return v6;
  if ( FileObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
      return v6;
    KeRcuReadLock((__int64)FileObject);
    v12 = CcReferencePartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v12);
    CcReferencePrivateVolumeCacheMap((__int64)PrivateVolumeCacheMapFromFileObject);
    v13 = (struct _LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 138);
    if ( !CcEnablePerVolumeLazyWriter )
      v13 = (struct _LIST_ENTRY *)(v12 + 1168);
    ListHead = v13;
    v14 = (char *)PrivateVolumeCacheMapFromFileObject + 708;
    if ( !CcEnablePerVolumeLazyWriter )
      v14 = (char *)(v12 + 780);
    v32 = v14;
    v15 = (char *)PrivateVolumeCacheMapFromFileObject + 1172;
    if ( !CcEnablePerVolumeLazyWriter )
      v15 = (char *)(v12 + 1292);
    v33 = v15;
    HIBYTE(v29) = 1;
    IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(FileObject);
    if ( !byte_140F8E501 )
    {
      SectionObjectPointer = (__int64)FileObject->SectionObjectPointer;
      if ( SectionObjectPointer )
      {
        v16 = *(_QWORD *)(SectionObjectPointer + 8);
        if ( v16 )
        {
          v4 = *(_QWORD *)(v16 + 512);
          v37 = v4;
          SectionObjectPointer = _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8));
          if ( SectionObjectPointer <= 1 )
            __fastfail(0xEu);
          LOBYTE(v29) = 1;
        }
      }
    }
    KeRcuReadUnlock(SectionObjectPointer, v16, v18);
    if ( IsFileObjectDirectMapped || CcEnablePerVolumeLazyWriter && !PrivateVolumeCacheMapFromFileObject )
      goto LABEL_61;
    v7 = Retrying;
    v8 = BytesToWrite;
    v5 = v30;
    v20 = ListHead;
  }
  else
  {
    v12 = *((_QWORD *)PspSystemPartition + 1);
    v32 = (_BYTE *)(v12 + 780);
    v20 = (PLIST_ENTRY)(v12 + 1168);
    ListHead = (PLIST_ENTRY)(v12 + 1168);
    v33 = (_BYTE *)(v12 + 1292);
  }
  if ( !CcEnablePerVolumeLazyWriter || FileObject )
  {
    while ( 1 )
    {
      v21 = 0;
      v22 = 0;
      v30 = v5 + 1;
      v28 = 0;
      if ( v7 || v20->Flink == v20 || CcAzure_LargeWriteSize && v8 && v8 >= CcAzure_LargeWriteSize )
      {
        CanIWriteStream = CcCanIWriteStreamEx(
                            (KSPIN_LOCK *)v12,
                            (__int64)PrivateVolumeCacheMapFromFileObject,
                            (__int64)FileObject,
                            v8,
                            0,
                            0,
                            &v28);
        v21 = v28;
        v22 = CanIWriteStream;
        if ( CanIWriteStream && !v28 )
          break;
        if ( v30 == 2 && CanIWriteStream )
          break;
      }
      if ( (xmmword_140FC5B10 & 0x20000) != 0 )
        CcPerfLogCanWriteFail(FileObject, BytesToWrite, *(_QWORD *)(v12 + 1056), *(_QWORD *)(v12 + 1080));
      CcAdjustWriteBehindThreadPoolIfNeeded(v12, 1);
      if ( Wait )
      {
        Object = 393216LL;
        memset_0(&v39, 0, 0x68uLL);
        v44 = v12;
        v35[1] = v35;
        v45 = PrivateVolumeCacheMapFromFileObject;
        v35[0] = v35;
        v41 = BytesToWrite;
        p_Object = &Object;
        v39 = 6816508;
        v40 = FileObject;
        v47 = MEMORY[0xFFFFF78000000320];
        if ( !v22 || (v46 = 1, !v28) )
          v46 = 0;
        v24 = (KSPIN_LOCK *)(v12 + 1216);
        if ( Retrying )
          ExInterlockedInsertHeadList(ListHead, &ListEntry, v24);
        else
          ExInterlockedInsertTailList(ListHead, &ListEntry, v24);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &LockHandle);
        CcScheduleLazyWriteScan((_BYTE *)v12, PrivateVolumeCacheMapFromFileObject, 1, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        CcPostDeferredWrites(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
        if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
        {
          v25 = v32;
          v26 = v33;
          do
          {
            if ( *v26 || *v25 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &LockHandle);
              CcScheduleLazyWriteScan((_BYTE *)v12, PrivateVolumeCacheMapFromFileObject, 1, 0);
              if ( *v25 )
                *v25 = 0;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            CcPostDeferredWrites(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
          }
          while ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) );
          v4 = v37;
        }
        break;
      }
      if ( v30 != 1 )
      {
        if ( v4 )
          ++*(_QWORD *)(v4 + 400);
        v6 = v22;
        break;
      }
      if ( !v22 )
      {
        v6 = 0;
        break;
      }
      if ( !v21 )
        break;
      Interval.HighPart = -1;
      Interval.LowPart = -10000 * CcSoftThrottleDelay;
      DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
      if ( v4 )
        ++*(_QWORD *)(v4 + 408);
      KeDelayExecutionThread(0, 0, &Interval);
      v20 = ListHead;
      v5 = v30;
      v8 = BytesToWrite;
      v7 = Retrying;
    }
  }
LABEL_61:
  if ( (_BYTE)v29 )
  {
    ++*(_QWORD *)(v4 + 392);
    CcDecrementVolumeUseCountWithDelete(v4);
  }
  if ( HIBYTE(v29) )
    CcDereferencePartitionAndPrivateVolumeCacheMap(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
  return v6;
}
