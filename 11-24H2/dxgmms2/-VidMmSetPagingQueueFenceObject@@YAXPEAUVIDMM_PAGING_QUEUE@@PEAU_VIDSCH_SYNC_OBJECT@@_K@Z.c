/*
 * XREFs of ?VidMmSetPagingQueueFenceObject@@YAXPEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140104280
 * Callers:
 *     VidMmSetPagingFenceObject @ 0x1400422B0 (VidMmSetPagingFenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmSetPagingQueueFenceObject(
        struct VIDMM_PAGING_QUEUE *a1,
        struct _VIDSCH_SYNC_OBJECT *a2,
        __int64 a3)
{
  *((_QWORD *)a1 + 11) = a2;
  *((_QWORD *)a1 + 8) = a3;
}
