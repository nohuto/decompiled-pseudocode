/*
 * XREFs of CcGetFlushedValidData @ 0x14040B790
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionForSectionObject @ 0x14040B960 (CcGetPartitionForSectionObject.c)
 *     CcFindBitmapRangeToClean @ 0x14040B9F8 (CcFindBitmapRangeToClean.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v10; // rdx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
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
    v10 = SharedCacheMap + 16;
    for ( i = (_QWORD *)*((_QWORD *)SharedCacheMap + 2); ; i = (_QWORD *)*i )
    {
      v12 = i - 2;
      if ( i == v10 || *(_WORD *)v12 == 765 && *((_BYTE *)v12 + 2) )
        break;
    }
    if ( i != v10 && v12[1] < v6.QuadPart )
      v6 = (LARGE_INTEGER)v12[1];
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
