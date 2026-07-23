/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140396EF0
 * Callers:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpPlFindLimitEntry @ 0x140396E20 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x140397070 (ExpPoolTrackerChargeEntry.c)
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExPoolCleanupExpansionTable @ 0x1406528C4 (ExPoolCleanupExpansionTable.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r14d
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v9; // rdx
  __int64 v10; // r12
  _QWORD *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  size_t v17; // rbx
  char *HeapPages; // rax
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v24; // [rsp+98h] [rbp+20h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = 0;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
  }
  v10 = PoolTrackTable;
  v11 = PoolTrackTableExpansion;
  v21 = PoolTrackTable;
  v24 = PoolTrackTableSize;
  while ( v4 < (unsigned __int64)PoolTrackTableExpansionSize )
  {
    a1 = *((unsigned int *)PoolTrackTableExpansion + 20 * v4);
    if ( (_DWORD)a1 == v7 )
      goto LABEL_12;
    if ( !(_DWORD)a1 )
    {
      *((_DWORD *)PoolTrackTableExpansion + 20 * v4) = v7;
      v11[10 * v4 + 9] = ExpPlFindLimitEntry(v7);
      goto LABEL_12;
    }
    ++v4;
  }
  if ( v4 != PoolTrackTableExpansionSize )
  {
LABEL_12:
    ExpPoolTrackerChargeEntry((a3 & 0x100) == 0, a2, &v11[10 * v4], a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( *(_DWORD *)(PoolTrackTable + 80 * PoolTrackTableSize - 80) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = a3 & 0x100;
    v13 = 8LL;
    v14 = v10 + 80LL * (unsigned int)(v24 - 1);
    if ( v12 )
      v13 = 32LL;
    v15 = 16LL;
    if ( v12 )
      v15 = 40LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + v14));
    _InterlockedAdd64((volatile signed __int64 *)(v13 + v14), a2);
  }
  else
  {
    v16 = 80 * PoolTrackTableExpansionSize;
    v17 = (80 * PoolTrackTableExpansionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapPages = (char *)ExAllocateHeapPages(a1, v17 + 4096);
    v19 = HeapPages;
    if ( HeapPages )
    {
      if ( v11 )
        memmove(HeapPages, v11, v17);
      memset_0(&v19[v16], 0, v17 + 4096 - v16);
      PoolTrackTableExpansion = v19;
      PoolTrackTableExpansionSize = (v17 + 4096) / 0x50;
      ExpInsertPoolTracker(0x6C6F6F50u, v17 + 4096, 64LL, (int)v19);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v11 )
        ExPoolCleanupExpansionTable(v11, v17);
      ExpInsertPoolTrackerExpansion(v7, a2, a3);
    }
    else
    {
      v20 = v21 + 80LL * (unsigned int)(v24 - 1);
      *(_DWORD *)v20 = 1818654287;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 40));
        _InterlockedAdd64((volatile signed __int64 *)(v20 + 32), a2);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 16));
        _InterlockedAdd64((volatile signed __int64 *)(v20 + 8), a2);
      }
    }
  }
}
