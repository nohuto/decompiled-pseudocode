/*
 * XREFs of ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140050980
 * Callers:
 *     NdisCloseAdapter @ 0x140173610 (NdisCloseAdapter.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkitem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, (WORK_QUEUE_TYPE)40);
}
