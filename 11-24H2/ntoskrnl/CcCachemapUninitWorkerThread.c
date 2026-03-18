/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x1402A7660
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1402A788C (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehind @ 0x1402A7ADC (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1402A7E6C (CcFreeWorkQueueEntry.c)
 *     CcPerfLogWorkItemComplete @ 0x1402A8CC0 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x1402A8D2C (CcPerfLogWorkItemDequeue.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x14057A414 (CcDebugExceptionFilter.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 NextWorkQueueEntry; // rsi
  _QWORD *v7; // rcx
  _DWORD v9[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+8h]

  v2 = (_QWORD *)a1;
  v9[1] = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v9[0] = 0;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CFDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v3 + 832);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v3 + 832), (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v3 + 832);
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(a1, v4, v4 + 120);
    if ( !NextWorkQueueEntry )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v10 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), v9, v4);
    }
    if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      CcPerfLogWorkItemComplete(NextWorkQueueEntry);
    CcFreeWorkQueueEntry((PVOID)NextWorkQueueEntry);
  }
  v7 = *(_QWORD **)(v4 + 168);
  if ( *v7 != v4 + 160 )
    __fastfail(3u);
  *v2 = v4 + 160;
  v2[1] = v7;
  *v7 = v2;
  *(_QWORD *)(v4 + 168) = v2;
  --*(_DWORD *)(v4 + 176);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v3, v12);
}
