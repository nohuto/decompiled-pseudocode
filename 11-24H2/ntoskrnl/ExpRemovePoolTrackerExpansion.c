/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x14035B760
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExPoolCleanupExpansionTable @ 0x1406528C4 (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, __int16 a3)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  _QWORD *v8; // rdx
  unsigned int i; // edx
  char *v10; // r8
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rax
  signed __int64 v15; // r9
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r11
  volatile signed __int64 *v20; // r11
  signed __int64 v21; // rax
  unsigned __int64 v22; // rbx
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
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
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int64)PoolTrackTableExpansionSize )
    {
LABEL_19:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v16 = -a2;
      v17 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
      v18 = 10LL * (unsigned int)(PoolTrackTableSize - 1);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 48));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + 8 * v18 + 32), v16);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + 80LL * (unsigned int)(PoolTrackTableSize - 1) + 24));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + 8 * v18 + 8), v16);
      }
      return;
    }
    v10 = (char *)PoolTrackTableExpansion + 80 * i;
    if ( *(_DWORD *)v10 == a1 )
      break;
    if ( !*(_DWORD *)v10 )
      goto LABEL_19;
  }
  v11 = a3 & 0x100;
  v12 = 8LL;
  v13 = 24LL;
  if ( v11 )
    v12 = 32LL;
  v14 = 24LL;
  if ( v11 )
    v14 = 48LL;
  _InterlockedIncrement64((volatile signed __int64 *)&v10[v14]);
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[v12], -a2);
  if ( *((_QWORD *)v10 + 9) )
  {
    v19 = 56LL;
    if ( !v11 )
      v19 = 64LL;
    v20 = (volatile signed __int64 *)&v10[v19];
    if ( (*(_BYTE *)v20 & 1) == 0 )
    {
      v21 = *v20;
      v22 = 128LL;
      if ( ((4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL) != 0x40 )
        v22 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      while ( 1 )
      {
        v23 = v22 + v15;
        if ( v15 >= v21 || v23 >= v21 )
          break;
        v24 = v21;
        v21 = _InterlockedCompareExchange64(v20, v23, v21);
        if ( v24 == v21 )
        {
          v25 = v21 - v23;
          v26 = *((_QWORD *)v10 + 9);
          v27 = -v25;
          if ( v25 > 0 )
            v27 = v25;
          if ( !v11 )
          {
            v3 = 24LL;
            v13 = 48LL;
          }
          if ( *(_QWORD *)(v3 + v26 + 16) || *(_QWORD *)(v13 + v26) )
            _InterlockedAdd64((volatile signed __int64 *)(v3 + v26 + 32), -v27);
          break;
        }
        v15 = *(_QWORD *)&v10[v12];
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
