/*
 * XREFs of CcPurgeCacheSection @ 0x14023EF70
 * Callers:
 *     CcUnmapAndPurge @ 0x14023F5D8 (CcUnmapAndPurge.c)
 *     CcZeroEndOfLastPage @ 0x14044C774 (CcZeroEndOfLastPage.c)
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1404DD130 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x1402AAADC (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcGetPartitionForSectionObject @ 0x1402CC890 (CcGetPartitionForSectionObject.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmCanFileBeTruncated @ 0x140314BE0 (MmCanFileBeTruncated.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MmPurgeSection @ 0x1403704CC (MmPurgeSection.c)
 *     MmTrimSection @ 0x140370AB4 (MmTrimSection.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v4; // r12
  int v5; // r13d
  __int64 v6; // r14
  PSECTION_OBJECT_POINTERS v7; // rsi
  KSPIN_LOCK *v8; // rcx
  char v9; // r15
  LARGE_INTEGER *v10; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *SharedCacheMap; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r13d
  int v16; // eax
  int v17; // esi
  BOOLEAN v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // r14
  LARGE_INTEGER v22; // rax
  _QWORD *i; // rsi
  char v24[4]; // [rsp+30h] [rbp-50h] BYREF
  int v25; // [rsp+34h] [rbp-4Ch]
  __int64 v26; // [rsp+38h] [rbp-48h]
  _QWORD *v27; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v32; // [rsp+D8h] [rbp+58h]

  v32 = Flags;
  v4 = Length;
  v5 = 0;
  *(_QWORD *)&v28.OldIrql = 0LL;
  v6 = 0LL;
  v7 = SectionObjectPointer;
  v24[0] = 0;
  v25 = 0;
  v28.LockQueue.Next = 0LL;
  v8 = &CcMasterLock;
  v28.LockQueue.Lock = &CcMasterLock;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  v9 = Flags;
  v10 = FileOffset;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v25 )
  {
    LOBYTE(FileOffset) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, FileOffset, Length);
  }
  v28.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v28) )
      KxWaitForLockOwnerShip(&v28);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v28, &CcMasterLock);
  }
  SharedCacheMap = v7->SharedCacheMap;
  v27 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = SharedCacheMap[67];
    v26 = v6;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    LOBYTE(v13) = 1;
    CcIncrementOpenCount(SharedCacheMap, v14, v13);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&v28);
  if ( SharedCacheMap )
  {
    if ( v6 != CcGetPartitionForSectionObject(v7) )
      KeBugCheckEx(0x34u, 0x14C6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v9 & 1) != 0 )
    {
      for ( i = SharedCacheMap + 29; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
        ;
      v7 = SectionObjectPointer;
    }
    if ( (v9 & 8) != 0 )
    {
      if ( (int)MmTrimSection(v7, v10, v4, 0LL) < 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
        CcDecrementOpenCount(SharedCacheMap);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return 0;
      }
    }
    else
    {
      CcUnmapVacbArray((_DWORD)SharedCacheMap, (_DWORD)v10, v4, 0, 1, 0);
    }
    if ( v10 )
    {
      v5 = 1;
      v25 = 1;
    }
  }
  v15 = v5 | 2;
  if ( (v9 & 4) == 0 )
    v15 = v25;
  v16 = v4;
  v17 = (v9 & 4) != 0 ? 5 : -1;
  do
  {
    v18 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)v10, v16, v15, (__int64)v24);
    if ( v18 )
      break;
    if ( (_DWORD)v4 )
      break;
    if ( !MmCanFileBeTruncated(SectionObjectPointer, v10) )
      break;
    if ( (v32 & 2) != 0 )
      break;
    KeDelayExecutionThread(0, 0, &CcCollisionDelay);
    v16 = 0;
    --v17;
  }
  while ( v17 );
  v19 = v27;
  v20 = v26;
  if ( v27 )
  {
    if ( !(_DWORD)v4 )
    {
      if ( v10 )
      {
        v22 = *v10;
        if ( v10->QuadPart < v27[47] )
        {
          SectionPointera = (PSECTION_OBJECT_POINTERS)(v22.QuadPart + 0x3FFFF);
          LODWORD(SectionPointera) = (v22.LowPart + 0x3FFFF) & 0xFFFC0000;
          v27[47] = (char *)SectionPointera + 0x40000;
        }
      }
      else
      {
        v27[47] = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 768), &LockHandle);
    CcDecrementOpenCount(v19);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v18;
}
