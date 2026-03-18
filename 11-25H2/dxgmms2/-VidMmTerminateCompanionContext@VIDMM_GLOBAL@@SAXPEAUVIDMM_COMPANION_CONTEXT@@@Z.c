/*
 * XREFs of ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x140110B70
 * Callers:
 *     VidMmTerminateCompanionContext @ 0x140046480 (VidMmTerminateCompanionContext.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400B3884 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  if ( KeReadStateSemaphore((PRKSEMAPHORE)((char *)a1 + 24)) )
    VidMmFlushPagingQueue(
      ***((struct VIDMM_WORKER_THREAD ****)a1 + 2),
      *(struct VIDMM_PAGING_QUEUE **)(32LL * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 96LL) + 6LL)
                                    + *(_QWORD *)(*((_QWORD *)a1 + 2) + 72LL)));
  operator delete(a1);
}
