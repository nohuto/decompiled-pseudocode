/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1402B2BA0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExInsertPoolTag @ 0x1402C347C (ExInsertPoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x1403A8B6C (ExpFreeHeapSpecialPool.c)
 *     ExRemovePoolTag @ 0x1403A9924 (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x1406541CC (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, __int16 a3)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned int i; // edx
  char *v9; // r8
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  signed __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r11
  volatile signed __int64 *v19; // r11
  signed __int64 v20; // rax
  unsigned __int64 v21; // rbx
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int64)PoolTrackTableExpansionSize )
    {
LABEL_19:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v15 = -a2;
      v16 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
      v17 = 10LL * (unsigned int)(PoolTrackTableSize - 1);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 48));
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 8 * v17 + 32), v15);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 24));
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 8 * v17 + 8), v15);
      }
      return;
    }
    v9 = (char *)PoolTrackTableExpansion + 80 * i;
    if ( *(_DWORD *)v9 == a1 )
      break;
    if ( !*(_DWORD *)v9 )
      goto LABEL_19;
  }
  v10 = a3 & 0x100;
  v11 = 8LL;
  v12 = 24LL;
  if ( v10 )
    v11 = 32LL;
  v13 = 24LL;
  if ( v10 )
    v13 = 48LL;
  _InterlockedIncrement64((volatile signed __int64 *)&v9[v13]);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v11], -a2);
  if ( *((_QWORD *)v9 + 9) )
  {
    v18 = 56LL;
    if ( !v10 )
      v18 = 64LL;
    v19 = (volatile signed __int64 *)&v9[v18];
    if ( (*(_BYTE *)v19 & 1) == 0 )
    {
      v20 = *v19;
      v21 = 128LL;
      if ( ((4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL) != 0x40 )
        v21 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      while ( 1 )
      {
        v22 = v21 + v14;
        if ( v14 >= v20 || v22 >= v20 )
          break;
        v23 = v20;
        v20 = _InterlockedCompareExchange64(v19, v22, v20);
        if ( v23 == v20 )
        {
          v24 = v20 - v22;
          v25 = *((_QWORD *)v9 + 9);
          v26 = -v24;
          if ( v24 > 0 )
            v26 = v24;
          if ( !v10 )
          {
            v3 = 24LL;
            v12 = 48LL;
          }
          if ( *(_QWORD *)(v3 + v25 + 16) || *(_QWORD *)(v12 + v25) )
            _InterlockedAdd64((volatile signed __int64 *)(v3 + v25 + 32), -v26);
          break;
        }
        v14 = *(_QWORD *)&v9[v11];
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
