/*
 * XREFs of KeRemoveDeviceQueue @ 0x140336ED0
 * Callers:
 *     IoFreeAdapterChannelV2 @ 0x140335920 (IoFreeAdapterChannelV2.c)
 *     IopStartNextPacket @ 0x140456F34 (IopStartNextPacket.c)
 *     IoFreeController @ 0x140593290 (IoFreeController.c)
 *     DifKeRemoveDeviceQueueWrapper @ 0x1406240C0 (DifKeRemoveDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *v2; // rbx
  KSPIN_LOCK *p_Lock; // rcx
  struct _KPRCB **v4; // rdx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE *Flink; // rcx
  __int64 v8; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  p_Lock = &DeviceQueue->Lock;
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(p_Lock, &LockHandle);
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = p_Lock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v4 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)p_Lock, (__int64)&LockHandle);
      if ( v4 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)p_Lock);
    }
  }
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  Flink = (struct _KDEVICE_QUEUE *)DeviceQueue->DeviceListHead.Flink;
  if ( Flink == (struct _KDEVICE_QUEUE *)&DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v2 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    v8 = *(_QWORD *)&Flink->Type;
    if ( v2->DeviceListEntry.Blink != p_DeviceListHead || *(struct _KDEVICE_QUEUE_ENTRY **)(v8 + 8) != v2 )
      __fastfail(3u);
    p_DeviceListHead->Flink = (struct _LIST_ENTRY *)v8;
    *(_QWORD *)(v8 + 8) = p_DeviceListHead;
    v2->Inserted = 0;
    v9 = DeviceQueue->1;
    if ( v2 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v9 >> 8) )
      DeviceQueue->1 = v9;
  }
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  return v2;
}
