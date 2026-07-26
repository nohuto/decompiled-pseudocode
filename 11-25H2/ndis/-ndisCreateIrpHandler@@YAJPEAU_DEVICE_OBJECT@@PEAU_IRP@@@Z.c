/*
 * XREFs of ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14004A010
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004A030 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisCreateIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisCreateHandler(a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, a2);
}
