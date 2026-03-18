/*
 * XREFs of CcWriteBehindPostProcess @ 0x1403ACE8C
 * Callers:
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057AD54 (CcCompleteAsyncWriteBehind.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 *     CcDecrementOpenCountDeferDelete @ 0x1402C5A80 (CcDecrementOpenCountDeferDelete.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1403A5480 (CcGetPrivateVolumeCacheMap.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1404498E8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404BC760 (CcMmLogLostDelayedWriteError.c)
 *     CcShouldIssueVDLUpdate @ 0x1404DEF70 (CcShouldIssueVDLUpdate.c)
 *     CcWriteBehindReleaseFile @ 0x1404DF008 (CcWriteBehindReleaseFile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F608C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     FsRtlAcquireFileExclusive @ 0x14093DA20 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 */

char __fastcall CcWriteBehindPostProcess(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned int *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 PrivateVolumeCacheMap; // rax
  int v8; // edx
  ULONG_PTR v9; // rbx
  int valid; // r14d
  LARGE_INTEGER FlushedValidData; // rbx
  struct _FILE_OBJECT *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _FILE_OBJECT *FileObject; // r14
  int v16; // ecx
  char v17; // cl
  int v18; // eax
  char result; // al
  _BYTE *v20; // rax
  _BYTE *v21; // rdx
  char v22; // r9
  char v23; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+48h] [rbp-20h] BYREF
  char v26; // [rsp+B0h] [rbp+48h]
  char v27; // [rsp+B8h] [rbp+50h]
  LARGE_INTEGER v28; // [rsp+C0h] [rbp+58h] BYREF
  _BYTE *v29; // [rsp+C8h] [rbp+60h]

  v27 = 0;
  v26 = 0;
  memset(&v25, 0, sizeof(v25));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    CcWriteBehindReleaseFile();
  v3 = *(_QWORD *)(a1 + 264);
  v4 = *(unsigned int **)(a1 + 112);
  if ( *(_DWORD *)(v3 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v26 = *(_BYTE *)(v3 + 56);
    v6 = *(_QWORD *)(v5 + 536);
    PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(v5);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 136);
    PrivateVolumeCacheMap = *(_QWORD *)(v3 + 144);
  }
  v8 = *v4;
  v29 = (_BYTE *)PrivateVolumeCacheMap;
  if ( v8 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v5) )
  {
    v9 = CcReferenceSharedCacheMapFileObject(v5);
    CcMmLogLostDelayedWriteError(v9, *v4);
    ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), v9, 1666409283LL);
  }
  valid = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
  FlushedValidData = *(LARGE_INTEGER *)(v5 + 40);
  if ( (unsigned __int8)CcShouldIssueVDLUpdate(v5) )
  {
    FlushedValidData = CcGetFlushedValidData(*(PSECTION_OBJECT_POINTERS *)(a1 + 24), 1u);
    v28 = FlushedValidData;
    if ( FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 40) )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
      v12 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      valid = CcSetValidData(v12, (__int64 *)&v28);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), (ULONG_PTR)v12, 1666409283LL);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
      if ( valid < 0 )
      {
        if ( valid == -1073741670 || valid == -2147483626 || valid == -1073741740 )
          FlushedValidData = v28;
        else
          FlushedValidData = *(LARGE_INTEGER *)(v5 + 48);
      }
      else
      {
        FlushedValidData = v28;
        *(LARGE_INTEGER *)(v5 + 40) = v28;
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  CcDecrementOpenCountDeferDelete(v5, v13, 1);
  if ( *(_DWORD *)(v5 + 4) )
    goto LABEL_36;
  if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    FileObject = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
    FsRtlAcquireFileExclusive(FileObject);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v25);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    v16 = *(_DWORD *)(v5 + 4);
    if ( !v16
      && (!*(_DWORD *)(v5 + 112)
       && (*(_QWORD *)(v5 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v5 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 48))
       || !*(_QWORD *)(v5 + 8) && (*(_DWORD *)(v5 + 152) & 4) == 0) )
    {
      CcDeleteSharedCacheMap((_QWORD *)v5, &v25, &LockHandle, 1, FileObject);
      *((_QWORD *)v4 + 1) = 0LL;
      goto LABEL_55;
    }
    if ( *(_DWORD *)(v5 + 112) )
    {
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
    }
    else if ( !v16 )
    {
      CcInsertIntoDirtySharedCacheMapList(v5);
      v27 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v25);
    FsRtlReleaseFile(FileObject);
    ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), (ULONG_PTR)FileObject, 1666409283LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v14);
  if ( *(_DWORD *)(v5 + 112) )
  {
LABEL_36:
    v17 = v27;
    goto LABEL_37;
  }
  CcInsertIntoDirtySharedCacheMapList(v5);
  v17 = 1;
LABEL_37:
  v18 = *(_DWORD *)(v5 + 152);
  if ( (v18 & 0x10000) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = 0;
    *(_BYTE *)(a1 + 137) = 1;
    return result;
  }
  if ( *((_QWORD *)v4 + 1) != 35422LL )
    *(_DWORD *)(v5 + 152) = v18 & 0xFFFFFFDF;
  if ( v17 )
  {
    if ( CcEnablePerVolumeLazyWriter )
      v20 = (_BYTE *)(*(_QWORD *)(v5 + 600) + 986LL);
    else
      v20 = (_BYTE *)(*(_QWORD *)(v5 + 536) + 1050LL);
    v21 = v29;
    *v20 = 1;
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
    {
      v22 = 1;
      v23 = 1;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    CcScheduleLazyWriteScan((_BYTE *)v6, v21, v23, v22);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_55:
  if ( v26 )
    KeSetEvent((PRKEVENT)(v3 + 32), 0, 0);
  return 1;
}
