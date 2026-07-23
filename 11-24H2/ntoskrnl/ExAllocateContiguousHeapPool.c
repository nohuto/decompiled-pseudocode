/*
 * XREFs of ExAllocateContiguousHeapPool @ 0x140396AFC
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x14021A4A0 (ExpAddTagForBigPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     KasanPoolAllocate @ 0x14035CFE0 (KasanPoolAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x14035DC90 (RtlpHpAllocateHeapBackend.c)
 *     ExpPlFindLimitEntry @ 0x140396E20 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x140397070 (ExpPoolTrackerChargeEntry.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

unsigned __int64 ExAllocateContiguousHeapPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        ...)
{
  unsigned int v5; // r9d
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 HeapBackend; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // r10
  __int64 v17; // rdx
  unsigned int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // r15
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // rcx
  __int64 LimitEntry; // rax
  int v28; // edx
  int v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-3Ch]
  __int64 v31; // [rsp+38h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-30h]
  __int64 v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+50h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  char v36; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp+58h]
  __int64 v38; // [rsp+D0h] [rbp+60h] BYREF
  va_list va; // [rsp+D0h] [rbp+60h]
  __int64 v40; // [rsp+D8h] [rbp+68h]
  va_list va1; // [rsp+E0h] [rbp+70h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v37 = a4;
  v5 = v38;
  if ( (_DWORD)v38 == 0x80000000 )
    v5 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v6 = *((_QWORD *)&unk_140E6BE48 + 1048 * (v5 < dword_140E6BE10 ? v5 : 0));
  if ( a1 > *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18496LL) )
    return 0LL;
  if ( a2 < *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18504LL) )
    return 0LL;
  if ( (unsigned __int64)(a3 - 1) <= 0x1FE )
    return 0LL;
  if ( (*(_BYTE *)(v6 + 333) & 7) == 0 )
    return 0LL;
  if ( a4 >= *(unsigned int *)(v6 + 528) )
    return 0LL;
  v9 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapBackend = RtlpHpAllocateHeapBackend(v6, (a4 + 4095) & 0xFFFFF000, v9, 0x800000);
  v11 = HeapBackend;
  if ( !HeapBackend )
    return 0LL;
  v12 = (unsigned int)v40;
  if ( !(unsigned int)ExpAddTagForBigPages(HeapBackend, (unsigned int)v40, v9, (char *)0x40, 0, 0) )
  {
    v7 = 0LL;
    RtlpHpFreeHeap(v6, v11, v13);
    return v7;
  }
  v29 = 0;
  LOBYTE(v38) = 0;
  v36 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v12 == PoolHitTag )
    __debugbreak();
  v14 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v14 = ExpPoolFlagsToPoolType(64, 0, (unsigned int)&v29, (unsigned int)va, (__int64)&v36);
    if ( (int)v14 >= 0 )
    {
      v28 = v29;
      if ( (_BYTE)v38 )
      {
        v28 = v29 | 8;
        v29 |= 8u;
      }
      v14 = EtwTracePool(3616, v28, v12, v11, v9);
    }
  }
  LODWORD(v14) = KeGetPcr()->Prcb.Number;
  v15 = PoolTrackTableMask;
  v16 = PoolTrackTableSize;
  v17 = (__int64)*(&ExPoolTagTables + v14);
  v31 = v17;
  v33 = PoolTrackTableMask;
  v18 = PoolTrackTableMask & ((40543 * v12) ^ ((unsigned __int64)(40543 * v12) >> 32));
  v34 = PoolTrackTableSize;
  v19 = v18;
  v30 = v18;
  do
  {
    while ( 1 )
    {
      v20 = v17 + 80LL * v18;
      if ( *(_DWORD *)v20 == (_DWORD)v12 )
      {
        v21 = ExpPoolTrackerChargeEntry(1LL, v9, v17 + 80LL * v18, v19);
        goto LABEL_18;
      }
      if ( *(_DWORD *)v20 )
        break;
      v25 = *(_DWORD *)(PoolTrackTable + 80LL * v18);
      if ( v25 )
      {
        *(_DWORD *)v20 = v25;
        v17 = v31;
        v26 = *(_QWORD *)(PoolTrackTable + 80LL * v18 + 72);
        if ( v26 )
          *(_QWORD *)(v20 + 72) = v26;
      }
      else
      {
        if ( v18 == v16 - 1 )
        {
          v17 = v31;
          break;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v32 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v18) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v12);
          *(_QWORD *)(v32 + 80LL * v18 + 72) = LimitEntry;
          *(_QWORD *)(v20 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v18) = v12;
          *(_DWORD *)v20 = v12;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v15 = v33;
        v19 = v30;
        v16 = v34;
        v17 = v31;
      }
    }
    v18 = v15 & (v18 + 1);
  }
  while ( v18 != (_DWORD)v19 );
  ExpInsertPoolTrackerExpansion((unsigned int)v12, v9, 64LL);
  v21 = 1;
LABEL_18:
  v7 = v11;
  KasanPoolAllocate(v11, v9, v11, v37);
  if ( !v21 )
  {
    ExFreeHeapPool(v11, v22, v23, v24);
    return 0LL;
  }
  return v7;
}
