/*
 * XREFs of KeInsertDeviceQueue @ 0x140334EB0
 * Callers:
 *     HalAllocateAdapterChannelV2 @ 0x140333C24 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x1403346B0 (HalBuildScatterGatherListV2.c)
 *     IoStartPacket @ 0x1404571C0 (IoStartPacket.c)
 *     IoAllocateController @ 0x1404BF880 (IoAllocateController.c)
 *     DifKeInsertDeviceQueueWrapper @ 0x1406222B0 (DifKeInsertDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN v3; // bl
  KSPIN_LOCK *p_Lock; // rcx
  struct _KPRCB **v6; // rdx
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
      v6 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)p_Lock, (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v6);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v3;
}
