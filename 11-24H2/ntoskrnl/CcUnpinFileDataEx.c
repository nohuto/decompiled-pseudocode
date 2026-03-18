/*
 * XREFs of CcUnpinFileDataEx @ 0x1402AB380
 * Callers:
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402AB220 (CcReleaseByteRangeFromWrite.c)
 *     CcMapDataForOverwrite @ 0x14045C1D0 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinDataForThread @ 0x140706D10 (CcUnpinDataForThread.c)
 *     CcMapData @ 0x140978410 (CcMapData.c)
 *     CcUnpinData @ 0x1409A6A30 (CcUnpinData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CcDeductDirtyPages @ 0x1402CD7A8 (CcDeductDirtyPages.c)
 *     CcDeallocateBcb @ 0x1402CD8E4 (CcDeallocateBcb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CcAdjustVacbLevelLockCount @ 0x1403654E4 (CcAdjustVacbLevelLockCount.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14044ADDC (CcInsertIntoCleanSharedCacheMapList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rsi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  struct _KEVENT *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  char **v17; // rdx
  PVOID *v18; // rcx
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  __int64 v22; // rsi
  struct _KEVENT *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 192);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 552));
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 536);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(v8 + 288));
  if ( (unsigned int)v3 < 2 )
  {
    v12 = *((_DWORD *)P + 16);
    if ( !v12 )
      KeBugCheckEx(0x34u, 0x460uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *((_DWORD *)P + 16) = v12 - 1;
  }
  else
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20497uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v10 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
      CcDeductDirtyPages(v8, v10);
      v11 = *(_DWORD *)(v9 + 976) - v10;
      if ( *(_DWORD *)(v9 + 976) <= v10 )
        v11 = 0;
      *(_DWORD *)(v9 + 976) = v11;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  if ( *((_DWORD *)P + 16) )
    goto LABEL_28;
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v13 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v14 = *(struct _KEVENT **)(v13 + 192);
        if ( v14 )
          KeSetEvent(v14, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 552));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
LABEL_28:
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 288));
    return;
  }
  v15 = KeAbPreAcquire(v8 + 104, 0LL, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(v8 + 104, v15, v8 + 104);
  if ( v16 )
    *(_BYTE *)(v16 + 10) = 1;
  v17 = (char **)*((_QWORD *)P + 2);
  if ( v17[1] != P + 16 || (v18 = (PVOID *)*((_QWORD *)P + 3), *v18 != P + 16) )
    __fastfail(3u);
  *v18 = v17;
  v17[1] = (char *)v18;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  _m_prefetchw((const void *)(v8 + 104));
  v19 = *(_QWORD *)(v8 + 104);
  v20 = v19 - 16;
  if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (v19 & 2) != 0
    || (v21 = *(_QWORD *)(v8 + 104),
        v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 104), v20, v19)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 104));
  }
  KeAbPostRelease(v8 + 104);
  if ( *((_QWORD *)P + 23) )
  {
    v22 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v23 = *(struct _KEVENT **)(v22 + 192);
      if ( v23 )
        KeSetEvent(v23, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v22 + 552));
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 288));
  CcDeallocateBcb(P);
}
