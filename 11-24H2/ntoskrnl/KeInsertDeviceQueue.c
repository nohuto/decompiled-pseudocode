/*
 * XREFs of KeInsertDeviceQueue @ 0x14038E850
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x14038DACC (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14038E070 (HalBuildScatterGatherListV2.c)
 *     IoStartPacket @ 0x140393700 (IoStartPacket.c)
 *     IoAllocateController @ 0x1404BE150 (IoAllocateController.c)
 *     DifKeInsertDeviceQueueWrapper @ 0x14062E270 (DifKeInsertDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN v3; // bl
  KSPIN_LOCK *p_Lock; // rcx
  _QWORD *v6; // rdx
  BOOLEAN Busy; // al
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  p_Lock = &DeviceQueue->Lock;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  }
  else
  {
    LockHandle.LockQueue.Lock = p_Lock;
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_Lock, (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v6);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)p_Lock);
    }
  }
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    Blink = DeviceQueue->DeviceListHead.Blink;
    if ( Blink->Flink != &DeviceQueue->DeviceListHead )
      __fastfail(3u);
    DeviceQueueEntry->DeviceListEntry.Flink = &DeviceQueue->DeviceListHead;
    v3 = 1;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    DeviceQueue->DeviceListHead.Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v3;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)v6);
  return v3;
}
