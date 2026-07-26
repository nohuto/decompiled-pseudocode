/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x140049FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004A030 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall NdisWdfCreateIrpHandler(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  return ndisCreateHandler(a1->DeviceObject, a1, a2);
}
