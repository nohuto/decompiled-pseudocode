/*
 * XREFs of VidMmDestroyPagingQueue @ 0x140042540
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140103E44 (-DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VidMmDestroyPagingQueue(VIDMM_DEVICE *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  VIDMM_DEVICE::DestroyPagingQueue(a1, a2);
}
