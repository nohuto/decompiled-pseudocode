/*
 * XREFs of ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14002EA90
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x14002EAB0 (ndisWMIDispatch.c)
 */

__int64 __fastcall ndisWMIIrpDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisWMIDispatch((char)a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, (char)a2);
}
