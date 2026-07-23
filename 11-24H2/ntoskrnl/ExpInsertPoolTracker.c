/*
 * XREFs of ExpInsertPoolTracker @ 0x14021BE10
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x1403E8ED4 (ExpResizeBigPageTable.c)
 *     ExInitializePoolTracker @ 0x140C445BC (ExInitializePoolTracker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpPlFindLimitEntry @ 0x140396E20 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x140397070 (ExpPoolTrackerChargeEntry.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExpInsertPoolTracker(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  int v9; // r8d
  unsigned __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // r9
  __int64 v15; // r15
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 LimitEntry; // rax
  int v21; // edx
  int v22; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-3Ch]
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v28; // [rsp+B0h] [rbp+40h] BYREF
  char v29; // [rsp+C0h] [rbp+50h] BYREF

  v4 = a1;
  v22 = 0;
  v28 = 0;
  v29 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == PoolHitTag )
    __debugbreak();
  v8 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v8 = ExpPoolFlagsToPoolType(a3, a3 & 0x10, (unsigned int)&v22, (unsigned int)&v28, (__int64)&v29);
    if ( (int)v8 >= 0 )
    {
      v21 = v22;
      if ( v28 )
      {
        v21 = v22 | 8;
        v22 |= 8u;
      }
      v8 = EtwTracePool(3616, v21, v4, a4, a2);
    }
  }
  LODWORD(v8) = KeGetPcr()->Prcb.Number;
  v9 = PoolTrackTableMask;
  v10 = a3 & 0xFFFFFFFFFFFFFFFBuLL;
  v11 = PoolTrackTableSize;
  v12 = (__int64)*(&ExPoolTagTables + v8);
  v24 = v12;
  v25 = PoolTrackTableMask;
  v13 = PoolTrackTableMask & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v26 = PoolTrackTableSize;
  v14 = v13;
  v23 = v13;
  do
  {
    while ( 1 )
    {
      v15 = v12 + 80LL * v13;
      if ( *(_DWORD *)v15 == (_DWORD)v4 )
        return ExpPoolTrackerChargeEntry(((v10 >> 8) & 1) == 0, a2, v12 + 80LL * v13, v14);
      if ( *(_DWORD *)v15 )
        break;
      v17 = *(_DWORD *)(PoolTrackTable + 80LL * v13);
      if ( v17 )
      {
        *(_DWORD *)v15 = v17;
        v12 = v24;
        v18 = *(_QWORD *)(PoolTrackTable + 80LL * v13 + 72);
        if ( v18 )
          *(_QWORD *)(v15 + 72) = v18;
      }
      else
      {
        if ( v13 == v11 - 1 )
        {
          v12 = v24;
          break;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v19 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v13) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v4);
          *(_QWORD *)(v19 + 80LL * v13 + 72) = LimitEntry;
          *(_QWORD *)(v15 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v13) = v4;
          *(_DWORD *)v15 = v4;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v9 = v25;
        v14 = v23;
        v11 = v26;
        v12 = v24;
      }
    }
    v13 = v9 & (v13 + 1);
  }
  while ( v13 != (_DWORD)v14 );
  ExpInsertPoolTrackerExpansion((unsigned int)v4, a2, v10);
  return 1LL;
}
