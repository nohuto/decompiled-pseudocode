/*
 * XREFs of CcPostWorkQueueCachemapUninit @ 0x1403AC174
 * Callers:
 *     CcPostWorkQueue @ 0x1403ABCB8 (CcPostWorkQueue.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1403AC690 (CcReferencePrivateVolumeCacheMap.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall CcPostWorkQueueCachemapUninit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rbx
  __int64 v7; // r12
  _QWORD *v9; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB **v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1[17];
  v5 = a1[19];
  v6 = 0LL;
  v7 = a1[18];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a1;
  if ( (xmmword_140FC5B10 & 0x20000) != 0 )
  {
    LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 832);
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
    v11 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v4 + 832), (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v11);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v4 + 832));
  }
  v12 = *(_QWORD **)(a2 + 8);
  if ( *v12 != a2 )
LABEL_9:
    __fastfail(3u);
  v9[1] = v12;
  *v9 = a2;
  *v12 = v9;
  v13 = (_QWORD *)(v5 + 160);
  *(_QWORD *)(a2 + 8) = v9;
  v14 = *(__int64 **)(v5 + 160);
  if ( v14 != (__int64 *)(v5 + 160) )
  {
    v6 = *(_QWORD **)(v5 + 160);
    if ( (_QWORD *)v14[1] != v13 )
      goto LABEL_9;
    v15 = *v14;
    if ( *(_QWORD **)(v15 + 8) != v6 )
      goto LABEL_9;
    *v13 = v15;
    *(_QWORD *)(v15 + 8) = v13;
    ++*(_DWORD *)(v5 + 176);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1296)) <= 1 )
      __fastfail(0xEu);
    CcReferencePrivateVolumeCacheMap(v7);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    *v6 = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)v6);
  }
}
