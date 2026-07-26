/*
 * XREFs of ?ndisIovCancelIoctlInvalidate@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400DDAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisIovCancelIoctlInvalidate(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _QWORD *DriverObjectExtension; // rax
  _QWORD *DeviceExtension; // rax
  KIRQL CancelIrql; // cl

  DriverObjectExtension = IoGetDriverObjectExtension(a1->DriverObject, (PVOID)0x4E4D4944);
  if ( DriverObjectExtension && (*((_BYTE *)DriverObjectExtension + 26) & 0x40) != 0 )
    DeviceExtension = (_QWORD *)(*(__int64 (__fastcall **)(struct _DEVICE_OBJECT *))(DriverObjectExtension[45] + 88LL))(a1);
  else
    DeviceExtension = a1->DeviceExtension;
  if ( (struct _IRP *)DeviceExtension[579] == a2 )
    DeviceExtension[579] = 0LL;
  CancelIrql = a2->CancelIrql;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IoReleaseCancelSpinLock(CancelIrql);
  IofCompleteRequest(a2, 0);
}
