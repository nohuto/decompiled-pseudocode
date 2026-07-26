/*
 * XREFs of ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x14006B350
 * Callers:
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140180D10 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkitem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, (WORK_QUEUE_TYPE)40);
}
