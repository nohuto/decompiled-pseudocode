/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x1403BC880
 * Callers:
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A7190 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v4; // rdx
  int v5; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&LockHandle);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)a2);
  }
  v5 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v5 = 2;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 33) )
    {
      if ( (*(_DWORD *)(a2 + 24))-- == 1 )
        goto LABEL_9;
LABEL_15:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
      return;
    }
    if ( *(_DWORD *)(a2 + 28) )
      goto LABEL_15;
  }
LABEL_9:
  *(_BYTE *)(a2 + 32) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
    ExFreePoolWithTag((PVOID)a2, 0);
  }
}
