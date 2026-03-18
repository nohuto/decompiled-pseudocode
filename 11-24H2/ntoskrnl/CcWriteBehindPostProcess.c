/*
 * XREFs of CcWriteBehindPostProcess @ 0x1402A883C
 * Callers:
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057E074 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14024109C (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementOpenCountDeferDelete @ 0x1402AAAF8 (CcDecrementOpenCountDeferDelete.c)
 *     CcIsFatalWriteError @ 0x1402CBF04 (CcIsFatalWriteError.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402CD530 (CcGetPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     CcSetValidData @ 0x140372324 (CcSetValidData.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140446E98 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404BB8C0 (CcMmLogLostDelayedWriteError.c)
 *     CcShouldIssueVDLUpdate @ 0x1404DE660 (CcShouldIssueVDLUpdate.c)
 *     CcWriteBehindReleaseFile @ 0x1404DE6F8 (CcWriteBehindReleaseFile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F884C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     FsRtlAcquireFileExclusive @ 0x140942320 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 */

char __fastcall CcWriteBehindPostProcess(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned int *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 PrivateVolumeCacheMap; // rax
  ULONG_PTR v8; // rbx
  int valid; // r14d
  LARGE_INTEGER FlushedValidData; // rbx
  struct _FILE_OBJECT *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _FILE_OBJECT *FileObject; // r14
  int v17; // ecx
  char v18; // cl
  int v19; // eax
  char result; // al
  _BYTE *v21; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+48h] [rbp-20h] BYREF
  char v24; // [rsp+B0h] [rbp+48h]
  char v25; // [rsp+B8h] [rbp+50h]
  LARGE_INTEGER v26; // [rsp+C0h] [rbp+58h]
  __int64 v27; // [rsp+C8h] [rbp+60h]

  v25 = 0;
  v24 = 0;
  memset(&v23, 0, sizeof(v23));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    CcWriteBehindReleaseFile();
  v3 = *(_QWORD *)(a1 + 264);
  v4 = *(unsigned int **)(a1 + 112);
  if ( *(_DWORD *)(v3 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v24 = *(_BYTE *)(v3 + 56);
    v6 = *(_QWORD *)(v5 + 536);
    PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(v5);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 136);
    PrivateVolumeCacheMap = *(_QWORD *)(v3 + 144);
  }
  v27 = PrivateVolumeCacheMap;
  if ( *v4 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v5) )
  {
    v8 = CcReferenceSharedCacheMapFileObject(v5);
    CcMmLogLostDelayedWriteError(v8, *v4);
    ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), v8);
  }
  valid = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
  FlushedValidData = *(LARGE_INTEGER *)(v5 + 40);
  if ( (unsigned __int8)CcShouldIssueVDLUpdate(v5) )
  {
    FlushedValidData = CcGetFlushedValidData(*(PSECTION_OBJECT_POINTERS *)(a1 + 24), 1u);
    v26 = FlushedValidData;
    if ( FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 40) )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
      v11 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      valid = CcSetValidData(v11);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), (ULONG_PTR)v11);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
      if ( valid < 0 )
      {
        if ( valid == -1073741670 || valid == -2147483626 || valid == -1073741740 )
          FlushedValidData = v26;
        else
          FlushedValidData = *(LARGE_INTEGER *)(v5 + 48);
      }
      else
      {
        FlushedValidData = v26;
        *(LARGE_INTEGER *)(v5 + 40) = v26;
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  LOBYTE(v12) = 1;
  CcDecrementOpenCountDeferDelete(v5, v13, v12);
  if ( *(_DWORD *)(v5 + 4) )
    goto LABEL_36;
  if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    FileObject = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
    FsRtlAcquireFileExclusive(FileObject);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v23);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    v17 = *(_DWORD *)(v5 + 4);
    if ( !v17
      && (!*(_DWORD *)(v5 + 112)
       && (*(_QWORD *)(v5 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v5 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 48))
       || !*(_QWORD *)(v5 + 8) && (*(_DWORD *)(v5 + 152) & 4) == 0) )
    {
      CcDeleteSharedCacheMap((PVOID)v5, &v23, &LockHandle, FileObject);
      *((_QWORD *)v4 + 1) = 0LL;
      goto LABEL_55;
    }
    if ( *(_DWORD *)(v5 + 112) )
    {
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
    }
    else if ( !v17 )
    {
      CcInsertIntoDirtySharedCacheMapList(v5);
      v25 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v23);
    FsRtlReleaseFile(FileObject);
    ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), (ULONG_PTR)FileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v14);
  if ( *(_DWORD *)(v5 + 112) )
  {
LABEL_36:
    v18 = v25;
    goto LABEL_37;
  }
  CcInsertIntoDirtySharedCacheMapList(v5);
  v18 = 1;
LABEL_37:
  v19 = *(_DWORD *)(v5 + 152);
  if ( (v19 & 0x10000) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0;
    *(_BYTE *)(a1 + 137) = 1;
    return result;
  }
  if ( *((_QWORD *)v4 + 1) != 35422LL )
    *(_DWORD *)(v5 + 152) = v19 & 0xFFFFFFDF;
  if ( v18 )
  {
    if ( CcEnablePerVolumeLazyWriter )
      v21 = (_BYTE *)(*(_QWORD *)(v5 + 600) + 986LL);
    else
      v21 = (_BYTE *)(*(_QWORD *)(v5 + 536) + 1050LL);
    *v21 = 1;
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
      LOBYTE(v15) = 1;
    else
      v15 = 0LL;
    CcScheduleLazyWriteScan(v6, v27, v15);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_55:
  if ( v24 )
    KeSetEvent((PRKEVENT)(v3 + 32), 0, 0);
  return 1;
}
