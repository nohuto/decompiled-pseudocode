/*
 * XREFs of CcCanIWrite @ 0x1404D54C0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x140279C30 (CcReferencePrivateVolumeCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     CcReferencePartitionFromFileObject @ 0x14040C940 (CcReferencePartitionFromFileObject.c)
 *     ExInterlockedInsertHeadList @ 0x1404208B0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x14045DA00 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcIsFileObjectDirectMapped @ 0x1404D5E2C (CcIsFileObjectDirectMapped.c)
 *     CcPerfLogCanWriteFail @ 0x14057AEFC (CcPerfLogCanWriteFail.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  _LIST_ENTRY *v13; // rcx
  char *v14; // r13
  char *v15; // r13
  char IsFileObjectDirectMapped; // r12
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rcx
  _QWORD *SharedCacheMap; // rdx
  PLIST_ENTRY v19; // rax
  char v20; // r13
  BOOLEAN v21; // r12
  bool CanIWriteStream; // al
  KSPIN_LOCK *v23; // r8
  _BYTE *v24; // rsi
  _BYTE *v25; // r12
  char v27; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+49h] [rbp-BFh]
  int v29; // [rsp+4Ch] [rbp-BCh]
  PLIST_ENTRY ListHead; // [rsp+50h] [rbp-B8h]
  _BYTE *v31; // [rsp+58h] [rbp-B0h]
  _BYTE *v32; // [rsp+60h] [rbp-A8h]
  __int64 Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER Interval; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  PFILE_OBJECT v39; // [rsp+B0h] [rbp-58h]
  ULONG v40; // [rsp+B8h] [rbp-50h]
  _LIST_ENTRY ListEntry; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *p_Object; // [rsp+D0h] [rbp-38h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  char v45; // [rsp+100h] [rbp-8h]
  __int64 v46; // [rsp+108h] [rbp+0h]

  v4 = 0LL;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0;
  v6 = 1;
  v7 = Retrying;
  v8 = BytesToWrite;
  v29 = 0;
  PrivateVolumeCacheMapFromFileObject = 0LL;
  v36 = 0LL;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return v6;
  if ( FileObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
      return v6;
    KeRcuReadLock();
    v12 = CcReferencePartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(FileObject, v12);
    CcReferencePrivateVolumeCacheMap((__int64)PrivateVolumeCacheMapFromFileObject);
    v13 = (_LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 138);
    if ( !CcEnablePerVolumeLazyWriter )
      v13 = (_LIST_ENTRY *)(v12 + 1168);
    ListHead = v13;
    v14 = (char *)PrivateVolumeCacheMapFromFileObject + 708;
    if ( !CcEnablePerVolumeLazyWriter )
      v14 = (char *)(v12 + 780);
    v31 = v14;
    v15 = (char *)PrivateVolumeCacheMapFromFileObject + 1172;
    if ( !CcEnablePerVolumeLazyWriter )
      v15 = (char *)(v12 + 1292);
    v32 = v15;
    HIBYTE(v28) = 1;
    IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(FileObject);
    if ( !byte_140F8E6E1 )
    {
      SectionObjectPointer = FileObject->SectionObjectPointer;
      if ( SectionObjectPointer )
      {
        SharedCacheMap = SectionObjectPointer->SharedCacheMap;
        if ( SharedCacheMap )
        {
          v4 = SharedCacheMap[64];
          v36 = v4;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 8)) <= 1 )
            __fastfail(0xEu);
          LOBYTE(v28) = 1;
        }
      }
    }
    KeRcuReadUnlock();
    if ( IsFileObjectDirectMapped || CcEnablePerVolumeLazyWriter && !PrivateVolumeCacheMapFromFileObject )
      goto LABEL_61;
    v7 = Retrying;
    v8 = BytesToWrite;
    v5 = v29;
    v19 = ListHead;
  }
  else
  {
    v12 = *((_QWORD *)PspSystemPartition + 1);
    v31 = (_BYTE *)(v12 + 780);
    v19 = (PLIST_ENTRY)(v12 + 1168);
    ListHead = (PLIST_ENTRY)(v12 + 1168);
    v32 = (_BYTE *)(v12 + 1292);
  }
  if ( !CcEnablePerVolumeLazyWriter || FileObject )
  {
    while ( 1 )
    {
      v20 = 0;
      v21 = 0;
      v29 = v5 + 1;
      v27 = 0;
      if ( v7 || v19->Flink == v19 || CcAzure_LargeWriteSize && v8 && v8 >= CcAzure_LargeWriteSize )
      {
        CanIWriteStream = CcCanIWriteStreamEx(
                            (KSPIN_LOCK *)v12,
                            (__int64)PrivateVolumeCacheMapFromFileObject,
                            (__int64)FileObject,
                            v8,
                            0,
                            0,
                            &v27);
        v20 = v27;
        v21 = CanIWriteStream;
        if ( CanIWriteStream && !v27 )
          break;
        if ( v29 == 2 && CanIWriteStream )
          break;
      }
      if ( (xmmword_140FC6B50 & 0x20000) != 0 )
        CcPerfLogCanWriteFail(FileObject, BytesToWrite, *(_QWORD *)(v12 + 1056), *(_QWORD *)(v12 + 1080));
      CcAdjustWriteBehindThreadPoolIfNeeded(v12, 1);
      if ( Wait )
      {
        Object = 393216LL;
        memset_0(&v38, 0, 0x68uLL);
        v43 = v12;
        v34[1] = v34;
        v44 = PrivateVolumeCacheMapFromFileObject;
        v34[0] = v34;
        v40 = BytesToWrite;
        p_Object = &Object;
        v38 = 6816508;
        v39 = FileObject;
        v46 = MEMORY[0xFFFFF78000000320];
        if ( !v21 || (v45 = 1, !v27) )
          v45 = 0;
        v23 = (KSPIN_LOCK *)(v12 + 1216);
        if ( Retrying )
          ExInterlockedInsertHeadList(ListHead, &ListEntry, v23);
        else
          ExInterlockedInsertTailList(ListHead, &ListEntry, v23);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &LockHandle);
        CcScheduleLazyWriteScan((_BYTE *)v12, PrivateVolumeCacheMapFromFileObject, 1, 0);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        CcPostDeferredWrites(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
        if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
        {
          v24 = v31;
          v25 = v32;
          do
          {
            if ( *v25 || *v24 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &LockHandle);
              CcScheduleLazyWriteScan((_BYTE *)v12, PrivateVolumeCacheMapFromFileObject, 1, 0);
              if ( *v24 )
                *v24 = 0;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            CcPostDeferredWrites(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
          }
          while ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) );
          v4 = v36;
        }
        break;
      }
      if ( v29 != 1 )
      {
        if ( v4 )
          ++*(_QWORD *)(v4 + 400);
        v6 = v21;
        break;
      }
      if ( !v21 )
      {
        v6 = 0;
        break;
      }
      if ( !v20 )
        break;
      Interval.HighPart = -1;
      Interval.LowPart = -10000 * CcSoftThrottleDelay;
      DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
      if ( v4 )
        ++*(_QWORD *)(v4 + 408);
      KeDelayExecutionThread(0, 0, &Interval);
      v19 = ListHead;
      v5 = v29;
      v8 = BytesToWrite;
      v7 = Retrying;
    }
  }
LABEL_61:
  if ( (_BYTE)v28 )
  {
    ++*(_QWORD *)(v4 + 392);
    CcDecrementVolumeUseCountWithDelete(v4);
  }
  if ( HIBYTE(v28) )
    CcDereferencePartitionAndPrivateVolumeCacheMap(v12, (__int64)PrivateVolumeCacheMapFromFileObject);
  return v6;
}
