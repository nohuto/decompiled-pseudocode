/*
 * XREFs of IoStartPacket @ 0x140393700
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140393850 (KeInsertByKeyDeviceQueue.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoStartPacket(PDEVICE_OBJECT DeviceObject, PIRP Irp, PULONG Key, PDRIVER_CANCEL CancelFunction)
{
  PDEVICE_OBJECT v7; // rdi
  KIRQL v8; // bp
  unsigned __int8 CurrentIrql; // r14
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdx
  struct _KDEVICE_QUEUE *p_DeviceQueue; // rcx
  BOOLEAN inserted; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v7 = DeviceObject;
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(DeviceObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(DeviceObject, 2LL);
  }
  if ( CancelFunction )
  {
    v8 = KeAcquireQueuedSpinLock(7uLL);
    Irp->CancelRoutine = CancelFunction;
  }
  p_Tail = &Irp->Tail;
  p_DeviceQueue = &v7->DeviceQueue;
  if ( Key )
    inserted = KeInsertByKeyDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry, *Key);
  else
    inserted = KeInsertDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry);
  if ( !inserted )
  {
    v7->CurrentIrp = Irp;
    if ( CancelFunction )
    {
      if ( (v7->DeviceObjectExtension->StartIoFlags & 0x200) != 0 )
        Irp->CancelRoutine = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v8);
    }
    goto LABEL_12;
  }
  if ( CancelFunction )
  {
    if ( Irp->Cancel )
    {
      Irp->CancelRoutine = 0LL;
      Irp->CancelIrql = v8;
LABEL_12:
      guard_dispatch_icall_no_overrides(v7, Irp, v14, v15);
      goto LABEL_13;
    }
    KeReleaseQueuedSpinLock(7uLL, v8);
  }
LABEL_13:
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(CurrentIrql);
}
