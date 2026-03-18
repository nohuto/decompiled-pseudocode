/*
 * XREFs of ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140093BA0
 * Callers:
 *     VidMmEvictionTest @ 0x14004BCA0 (VidMmEvictionTest.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EvictionTest(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  struct VIDMM_PAGING_QUEUE **v7; // rax
  struct VIDMM_PAGING_QUEUE *v8; // rdx
  _QWORD v10[12]; // [rsp+30h] [rbp-68h] BYREF

  memset(v10, 0, 0x58uLL);
  v7 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 9);
  LODWORD(v10[0]) = 213;
  v10[1] = a2;
  v8 = *v7;
  v10[2] = a3;
  return VIDMM_GLOBAL::QueueDeferredCommand(this, v8, (struct _VIDMM_DEFERRED_COMMAND *)v10, 1, 0LL);
}
