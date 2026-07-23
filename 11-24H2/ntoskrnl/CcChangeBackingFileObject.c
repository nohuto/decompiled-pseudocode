/*
 * XREFs of CcChangeBackingFileObject @ 0x140446404
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1404465F0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (char *)KeAbPreAcquire((__int64)&CcChangeSharedCacheMapFileLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcChangeSharedCacheMapFileLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&CcChangeSharedCacheMapFileLock, v4, (__int64)&CcChangeSharedCacheMapFileLock);
  v7 = 0;
  if ( v6 )
    v6[10] = 1;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741584;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v8 )
    goto LABEL_20;
  if ( (*(_DWORD *)(v8 + 152) & 0x100000) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741637;
LABEL_11:
    KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
    return v7;
  }
  v10 = (_QWORD *)(v8 + 96);
  v11 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v11 != a1 )
    {
LABEL_20:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      goto LABEL_11;
    }
  }
  ObFastReplaceObject(v10, a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v11, 0x746C6644u);
  return 0LL;
}
