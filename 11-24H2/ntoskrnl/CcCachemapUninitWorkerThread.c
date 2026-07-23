/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x14027AAB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x14027ACDC (CcFindNextWorkQueueEntry.c)
 *     CcPerfLogWorkItemComplete @ 0x14027AD94 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x14027AE00 (CcPerfLogWorkItemDequeue.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405778A4 (CcDebugExceptionFilter.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rdx
  __int64 NextWorkQueueEntry; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  _DWORD v13[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+8h]

  v2 = (_QWORD *)a1;
  v13[1] = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v13[0] = 0;
  v14 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CFDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 72);
  v16 = *(_QWORD *)(a1 + 64);
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
      v6 = _InterlockedExchange64((volatile __int64 *)(v3 + 832), (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip(&LockHandle, v6);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v3 + 832);
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(a1, v4, v4 + 120);
    if ( !NextWorkQueueEntry )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
      CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v14 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)v13, v4);
    }
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
      CcPerfLogWorkItemComplete(NextWorkQueueEntry);
    CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWorkQueueEntry, v8, v9, v10);
  }
  v11 = *(_QWORD **)(v4 + 168);
  if ( *v11 != v4 + 160 )
    __fastfail(3u);
  *v2 = v4 + 160;
  v2[1] = v11;
  *v11 = v2;
  *(_QWORD *)(v4 + 168) = v2;
  --*(_DWORD *)(v4 + 176);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v3, v16);
}
