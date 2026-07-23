/*
 * XREFs of KeRemoveEntryDeviceQueue @ 0x1405BA690
 * Callers:
 *     DifKeRemoveEntryDeviceQueueWrapper @ 0x14062E7B0 (DifKeRemoveEntryDeviceQueueWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

BOOLEAN __stdcall KeRemoveEntryDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN Inserted; // si
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&DeviceQueue->Lock, &LockHandle);
  Inserted = DeviceQueueEntry->Inserted;
  if ( Inserted == 1 )
  {
    DeviceQueueEntry->Inserted = 0;
    Flink = DeviceQueueEntry->DeviceListEntry.Flink;
    if ( (PKDEVICE_QUEUE_ENTRY)DeviceQueueEntry->DeviceListEntry.Flink->Blink != DeviceQueueEntry
      || (Blink = DeviceQueueEntry->DeviceListEntry.Blink, (PKDEVICE_QUEUE_ENTRY)Blink->Flink != DeviceQueueEntry) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v7 = DeviceQueue->1;
    if ( DeviceQueueEntry == (PKDEVICE_QUEUE_ENTRY)(*(__int64 *)&v7 >> 8) )
      DeviceQueue->1 = v7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return Inserted;
}
