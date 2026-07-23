/*
 * XREFs of IopRecordIoAttribution @ 0x14020D740
 * Callers:
 *     IoRecordIoAttribution @ 0x14020D5B0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionQuery @ 0x140314874 (IoDiskIoAttributionQuery.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopRecordIoAttribution(unsigned __int64 *a1, __int64 a2, char a3)
{
  int v5; // eax
  int v6; // r8d
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(a2 + 4);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (unsigned int)(unsigned __int8)v5 - 3;
  if ( (unsigned __int8)v5 == 3 )
  {
    v9 = a1 + 10;
  }
  else if ( (unsigned __int8)v5 == 4 )
  {
    v9 = a1 + 15;
  }
  else
  {
    if ( (a3 & 1) == 0 )
      return (unsigned int)-1073741637;
    v9 = a1 + 10;
    if ( !a1[10] )
    {
      v9 = a1 + 15;
      if ( !a1[15] )
        return 0;
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0LL;
  v12 = 0LL;
  if ( (a3 & 2) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    v6 = 1;
    LockHandle.LockQueue.Lock = a1 + 5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 2;
      LOBYTE(v8) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v8, v12);
      v6 = 1;
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v14 = _InterlockedExchange64((volatile __int64 *)a1 + 5, (__int64)&LockHandle);
      if ( !v14 )
      {
LABEL_8:
        v12 = 0LL;
        goto LABEL_9;
      }
      KxWaitForLockOwnerShip(&LockHandle, v14);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 5);
    }
    v6 = 1;
    goto LABEL_8;
  }
LABEL_9:
  if ( (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
  {
    v15 = a1[9];
    if ( !v15 || v10 < a1[8] )
      a1[8] = v10;
    a1[9] = v15 + 1;
    ++*v9;
  }
  else
  {
    if ( (a3 & 1) == 0 )
    {
      --a1[9];
      --*v9;
    }
    if ( !_bittest((const signed __int32 *)(a2 + 4), 9u) )
    {
      v18 = a1[6];
      if ( v18 <= *(_QWORD *)(a2 + 16) )
        v18 = *(_QWORD *)(a2 + 16);
      if ( v10 >= v18 )
      {
        a1[6] = v10;
        v12 = v10 - v18;
      }
      v10 = *(_QWORD *)(a2 + 16);
    }
    v19 = a1[7];
    if ( v19 <= a1[8] )
      v19 = a1[8];
    if ( v10 >= v19 )
    {
      a1[7] = v10;
      v11 = v10 - v19;
    }
    v9[1] += v11;
    if ( !_bittest((const signed __int32 *)(a2 + 4), 9u) )
    {
      v9[2] += v12;
      v9[3] += *(unsigned int *)(a2 + 8);
      v9[4] += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1) / (unsigned int)IopDiskIoAttributionBaseIoSize;
    }
  }
  v16 = 0;
  if ( v6 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v16;
}
