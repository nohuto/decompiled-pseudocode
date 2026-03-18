/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1403A9DD0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x1402C4BA8 (ExpInsertPoolTracker.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTracker @ 0x1402C4BA8 (ExpInsertPoolTracker.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpPlFindLimitEntry @ 0x1403A9D04 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403A9F50 (ExpPoolTrackerChargeEntry.c)
 *     ExAllocateHeapPages @ 0x140440774 (ExAllocateHeapPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExPoolCleanupExpansionTable @ 0x1406541CC (ExPoolCleanupExpansionTable.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r14d
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  size_t v16; // rbx
  char *HeapPages; // rax
  char *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v23; // [rsp+98h] [rbp+20h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = 0;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v6 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
  }
  v9 = PoolTrackTable;
  v10 = PoolTrackTableExpansion;
  v20 = PoolTrackTable;
  v23 = PoolTrackTableSize;
  while ( v3 < (unsigned __int64)PoolTrackTableExpansionSize )
  {
    a1 = *((unsigned int *)PoolTrackTableExpansion + 20 * v3);
    if ( (_DWORD)a1 == v6 )
      goto LABEL_12;
    if ( !(_DWORD)a1 )
    {
      *((_DWORD *)PoolTrackTableExpansion + 20 * v3) = v6;
      v10[10 * v3 + 9] = ExpPlFindLimitEntry(v6);
      goto LABEL_12;
    }
    ++v3;
  }
  if ( v3 != PoolTrackTableExpansionSize )
  {
LABEL_12:
    ExpPoolTrackerChargeEntry((a3 & 0x100) == 0, a2, &v10[10 * v3]);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( *(_DWORD *)(PoolTrackTable + 80 * PoolTrackTableSize - 80) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v11 = a3 & 0x100;
    v12 = 8LL;
    v13 = v9 + 80LL * (unsigned int)(v23 - 1);
    if ( v11 )
      v12 = 32LL;
    v14 = 16LL;
    if ( v11 )
      v14 = 40LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + v13));
    _InterlockedAdd64((volatile signed __int64 *)(v12 + v13), a2);
  }
  else
  {
    v15 = 80 * PoolTrackTableExpansionSize;
    v16 = (80 * PoolTrackTableExpansionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapPages = (char *)ExAllocateHeapPages(a1, v16 + 4096);
    v18 = HeapPages;
    if ( HeapPages )
    {
      if ( v10 )
        memmove(HeapPages, v10, v16);
      memset_0(&v18[v15], 0, v16 + 4096 - v15);
      PoolTrackTableExpansion = v18;
      PoolTrackTableExpansionSize = (v16 + 4096) / 0x50;
      ExpInsertPoolTracker(0x6C6F6F50u, v16 + 4096, 64LL, (int)v18);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v10 )
        ExPoolCleanupExpansionTable(v10, v16);
      ExpInsertPoolTrackerExpansion(v6, a2, a3);
    }
    else
    {
      v19 = v20 + 80LL * (unsigned int)(v23 - 1);
      *(_DWORD *)v19 = 1818654287;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v19 + 40));
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 32), a2);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v19 + 16));
        _InterlockedAdd64((volatile signed __int64 *)(v19 + 8), a2);
      }
    }
  }
}
