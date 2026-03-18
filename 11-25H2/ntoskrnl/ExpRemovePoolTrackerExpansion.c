/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1402E0260
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     ExInsertPoolTag @ 0x1402FD6B4 (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x1406482CC (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int16 v5; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rdx
  unsigned int i; // edx
  char *v11; // r8
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rax
  signed __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r11
  volatile signed __int64 *v21; // r11
  signed __int64 v22; // rax
  unsigned __int64 v23; // rbx
  signed __int64 v24; // rcx
  signed __int64 v25; // rtt
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v5 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip(&LockHandle, v9, a3, a4);
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
      v17 = -a2;
      v18 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
      v19 = 10LL * (unsigned int)(PoolTrackTableSize - 1);
      if ( (v5 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 48));
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 8 * v19 + 32), v17);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 24));
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 8 * v19 + 8), v17);
      }
      return;
    }
    v11 = (char *)PoolTrackTableExpansion + 80 * i;
    if ( *(_DWORD *)v11 == a1 )
      break;
    if ( !*(_DWORD *)v11 )
      goto LABEL_19;
  }
  v12 = v5 & 0x100;
  v13 = 8LL;
  v14 = 24LL;
  if ( v12 )
    v13 = 32LL;
  v15 = 24LL;
  if ( v12 )
    v15 = 48LL;
  _InterlockedIncrement64((volatile signed __int64 *)&v11[v15]);
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[v13], -a2);
  if ( *((_QWORD *)v11 + 9) )
  {
    v20 = 56LL;
    if ( !v12 )
      v20 = 64LL;
    v21 = (volatile signed __int64 *)&v11[v20];
    if ( (*(_BYTE *)v21 & 1) == 0 )
    {
      v22 = *v21;
      v23 = 128LL;
      if ( ((4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL) != 0x40 )
        v23 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      while ( 1 )
      {
        v24 = v23 + v16;
        if ( v16 >= v22 || v24 >= v22 )
          break;
        v25 = v22;
        v22 = _InterlockedCompareExchange64(v21, v24, v22);
        if ( v25 == v22 )
        {
          v26 = v22 - v24;
          v27 = *((_QWORD *)v11 + 9);
          v28 = -v26;
          if ( v26 > 0 )
            v28 = v26;
          if ( !v12 )
          {
            v4 = 24LL;
            v14 = 48LL;
          }
          if ( *(_QWORD *)(v4 + v27 + 16) || *(_QWORD *)(v14 + v27) )
            _InterlockedAdd64((volatile signed __int64 *)(v4 + v27 + 32), -v28);
          break;
        }
        v16 = *(_QWORD *)&v11[v13];
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
