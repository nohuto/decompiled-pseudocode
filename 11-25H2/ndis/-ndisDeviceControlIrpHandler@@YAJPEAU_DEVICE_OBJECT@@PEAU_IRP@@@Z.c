/*
 * XREFs of ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14006E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisDeviceControlHandler(a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, a2);
}
