/*
 * XREFs of ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1400FE5A8
 * Callers:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x14001D214 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     VidMmDestroyPagingQueue_0 @ 0x1400FE5C0 (VidMmDestroyPagingQueue_0.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::~VIDMM_PAGING_QUEUE(VIDMM_PAGING_QUEUE *this)
{
  VidMmDestroyPagingQueue_0(this);
}
