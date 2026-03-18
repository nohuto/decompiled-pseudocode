/*
 * XREFs of VidMmSetPagingFenceObject @ 0x1400422B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmSetPagingQueueFenceObject@@YAXPEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140104280 (-VidMmSetPagingQueueFenceObject@@YAXPEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 */

void __fastcall VidMmSetPagingFenceObject(
        struct VIDMM_PAGING_QUEUE *a1,
        struct _VIDSCH_SYNC_OBJECT *a2,
        unsigned __int64 a3)
{
  VidMmSetPagingQueueFenceObject(a1, a2, a3);
}
