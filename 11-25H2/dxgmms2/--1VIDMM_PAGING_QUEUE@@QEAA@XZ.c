/*
 * XREFs of ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1400FE628
 * Callers:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x140028674 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     VidMmDestroyPagingQueue_0 @ 0x1400FE640 (VidMmDestroyPagingQueue_0.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::~VIDMM_PAGING_QUEUE(VIDMM_PAGING_QUEUE *this)
{
  VidMmDestroyPagingQueue_0(this);
}
