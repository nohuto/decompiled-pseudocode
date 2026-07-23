/*
 * XREFs of KeRemoveByKeyDeviceQueue @ 0x14038CF30
 * Callers:
 *     IopStartNextPacketByKey @ 0x14038CA6C (IopStartNextPacketByKey.c)
 *     DifKeRemoveByKeyDeviceQueueWrapper @ 0x14062E4D0 (DifKeRemoveByKeyDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14038D250 (KeAcquireInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v6; // r8
  __int64 i; // rax
  bool v8; // cc
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  Flink = DeviceQueue->DeviceListHead.Flink;
  if ( Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v6 = &DeviceQueue->1;
    if ( LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) >= SortKey )
    {
      i = *(_QWORD *)v6 >> 8;
      if ( i )
      {
        v8 = SortKey <= *(_DWORD *)((*(_QWORD *)v6 >> 8) + 0x10);
        if ( SortKey > *(_DWORD *)((*(_QWORD *)v6 >> 8) + 0x10) )
          goto LABEL_10;
      }
      for ( i = (__int64)DeviceQueue->DeviceListHead.Flink; ; i = *(_QWORD *)i )
      {
        v8 = SortKey <= *(_DWORD *)(i + 16);
LABEL_10:
        v4 = (struct _KDEVICE_QUEUE_ENTRY *)i;
        if ( v8 )
          break;
      }
    }
    else
    {
      v4 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    }
    Blink = 0LL;
    if ( v4->DeviceListEntry.Blink != &DeviceQueue->DeviceListHead )
      Blink = v4->DeviceListEntry.Blink;
    Flink = (struct _LIST_ENTRY *)((unsigned __int8)*(_DWORD *)v6 | ((_QWORD)Blink << 8));
    *v6 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)Flink;
    v10 = v4->DeviceListEntry.Flink;
    v11 = v4->DeviceListEntry.Blink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink->Blink != v4
      || (struct _KDEVICE_QUEUE_ENTRY *)v11->Flink != v4 )
    {
      __fastfail(3u);
    }
    v11->Flink = v10;
    v10->Blink = v11;
    v4->Inserted = 0;
  }
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, (__int64)Flink);
  return v4;
}
