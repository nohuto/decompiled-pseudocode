/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140033820
 * Callers:
 *     VidSchiSetFlipDevice @ 0x140029540 (VidSchiSetFlipDevice.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B408 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B8E8 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B9E0 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14005451C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x14009089C (VidSchiGetNumFlipAllocAttribs.c)
 *     VidSchResetFlipQueueTimeout @ 0x1400A4E30 (VidSchResetFlipQueueTimeout.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // rax
  __int64 v2; // r8

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)this + 8LL * *((unsigned int *)this + 2);
  if ( (_DWORD)v1 == -1 )
    return *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v2 + 3432) + 32LL);
  else
    return *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v2 + 3432) + 8 * v1 + 40);
}
