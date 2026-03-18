/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x1403ABE90
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcFindNextWorkQueueEntry @ 0x1403AC0BC (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcPerfLogWorkItemComplete @ 0x1403AD508 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x1403AD574 (CcPerfLogWorkItemDequeue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x140577114 (CcDebugExceptionFilter.c)
 */

char __fastcall CcCachemapUninitWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB **v5; // rdx
  __int64 NextWorkQueueEntry; // rsi
  _QWORD *v7; // rcx
  _DWORD v9[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+8h]

  v1 = (_QWORD *)a1;
  v9[1] = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v9[0] = 0;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CFDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 832);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v5 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v2 + 832), (__int64)&LockHandle);
      if ( v5 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v5);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v2 + 832));
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(a1, v3, v3 + 120);
    if ( !NextWorkQueueEntry )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v10 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v9, v3);
    }
    if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      CcPerfLogWorkItemComplete(NextWorkQueueEntry);
    CcFreeWorkQueueEntry((PVOID)NextWorkQueueEntry);
  }
  v7 = *(_QWORD **)(v3 + 168);
  if ( *v7 != v3 + 160 )
    __fastfail(3u);
  *v1 = v3 + 160;
  v1[1] = v7;
  *v7 = v1;
  *(_QWORD *)(v3 + 168) = v1;
  --*(_DWORD *)(v3 + 176);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v2, v12);
}
