/*
 * XREFs of CcGetFlushedValidData @ 0x1403A68F0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     CcGetPartitionForSectionObject @ 0x1403A6AC0 (CcGetPartitionForSectionObject.c)
 *     CcFindBitmapRangeToClean @ 0x1403A7214 (CcFindBitmapRangeToClean.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *i; // rax
  _QWORD *v11; // rcx
  __int64 BitmapRangeToClean; // rax
  __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v14, 0, sizeof(v14));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  }
  else
  {
    KeRcuReadLock();
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
    if ( !SharedCacheMap )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeRcuReadUnlock();
      return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &v14);
    CcIncrementOpenCount((__int64)SharedCacheMap, v13, 1);
    KeReleaseInStackQueuedSpinLock(&v14);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeRcuReadUnlock();
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
  }
  v5 = *((_QWORD *)SharedCacheMap + 67);
  if ( CcGetPartitionForSectionObject(SectionObjectPointer) != v5 )
    KeBugCheckEx(0x34u, 0x2447uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v8 = *((_QWORD *)SharedCacheMap + 21);
    if ( v8 && *(_DWORD *)(v8 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v8, 0LL);
      v6.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
    }
    v9 = SharedCacheMap + 16;
    for ( i = (_QWORD *)*((_QWORD *)SharedCacheMap + 2); ; i = (_QWORD *)*i )
    {
      v11 = i - 2;
      if ( i == v9 || *(_WORD *)v11 == 765 && *((_BYTE *)v11 + 2) )
        break;
    }
    if ( i != v9 && v11[1] < v6.QuadPart )
      v6 = (LARGE_INTEGER)v11[1];
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v14);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLock(&v14);
  }
  return v6;
}
