/*
 * XREFs of CcPurgeCacheSection @ 0x1402070C0
 * Callers:
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1404D6B50 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1403F21C0 (MmCanFileBeTruncated.c)
 *     CcGetPartitionForSectionObject @ 0x14040B960 (CcGetPartitionForSectionObject.c)
 *     MmTrimSection @ 0x1404724C4 (MmTrimSection.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v12; // rdx
  _QWORD *SharedCacheMap; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r13d
  int v17; // eax
  int v18; // esi
  BOOLEAN v19; // r15
  _QWORD *v20; // rbx
  __int64 v21; // r14
  LARGE_INTEGER v23; // rax
  _QWORD *i; // rsi
  char v25[4]; // [rsp+30h] [rbp-50h] BYREF
  int v26; // [rsp+34h] [rbp-4Ch]
  __int64 v27; // [rsp+38h] [rbp-48h]
  _QWORD *v28; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v33; // [rsp+D8h] [rbp+58h]

  v33 = Flags;
  v4 = Length;
  v5 = 0;
  *(_QWORD *)&v29.OldIrql = 0LL;
  v6 = 0LL;
  v7 = SectionObjectPointer;
  v25[0] = 0;
  v26 = 0;
  v29.LockQueue.Next = 0LL;
  v8 = &CcMasterLock;
  v29.LockQueue.Lock = &CcMasterLock;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v27 = 0LL;
  v9 = Flags;
  v10 = FileOffset;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v26 )
  {
    LOBYTE(FileOffset) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, FileOffset);
  }
  v29.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v29);
    if ( v12 )
      KxWaitForLockOwnerShip(&v29, v12);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v29, &CcMasterLock);
  }
  SharedCacheMap = v7->SharedCacheMap;
  v28 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = SharedCacheMap[67];
    v27 = v6;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    LOBYTE(v14) = 1;
    CcIncrementOpenCount(SharedCacheMap, v15, v14);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&v29);
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
      v26 = 1;
    }
  }
  v16 = v5 | 2;
  if ( (v9 & 4) == 0 )
    v16 = v26;
  v17 = v4;
  v18 = (v9 & 4) != 0 ? 5 : -1;
  do
  {
    v19 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)v10, v17, v16, (__int64)v25);
    if ( v19 )
      break;
    if ( (_DWORD)v4 )
      break;
    if ( !MmCanFileBeTruncated(SectionObjectPointer, v10) )
      break;
    if ( (v33 & 2) != 0 )
      break;
    KeDelayExecutionThread(0, 0, &CcCollisionDelay);
    v17 = 0;
    --v18;
  }
  while ( v18 );
  v20 = v28;
  v21 = v27;
  if ( v28 )
  {
    if ( !(_DWORD)v4 )
    {
      if ( v10 )
      {
        v23 = *v10;
        if ( v10->QuadPart < v28[47] )
        {
          SectionPointera = (PSECTION_OBJECT_POINTERS)(v23.QuadPart + 0x3FFFF);
          LODWORD(SectionPointera) = (v23.LowPart + 0x3FFFF) & 0xFFFC0000;
          v28[47] = (char *)SectionPointera + 0x40000;
        }
      }
      else
      {
        v28[47] = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &LockHandle);
    CcDecrementOpenCount(v20);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v19;
}
