/*
 * XREFs of IoStartPacket @ 0x1404571C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140457310 (KeInsertByKeyDeviceQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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

  v7 = DeviceObject;
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(DeviceObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(DeviceObject);
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
      guard_dispatch_icall_no_overrides(v7, Irp);
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
