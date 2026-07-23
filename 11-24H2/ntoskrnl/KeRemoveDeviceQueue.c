/*
 * XREFs of KeRemoveDeviceQueue @ 0x14038A4B0
 * Callers:
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     IopStartNextPacket @ 0x14038AE78 (IopStartNextPacket.c)
 *     IoFreeController @ 0x140593920 (IoFreeController.c)
 *     DifKeRemoveDeviceQueueWrapper @ 0x14062E640 (DifKeRemoveDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *v2; // rbx
  KSPIN_LOCK *p_Lock; // rcx
  _QWORD *v4; // rdx
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
      v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_Lock, (__int64)&LockHandle);
      if ( v4 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v4);
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)v4);
  return v2;
}
