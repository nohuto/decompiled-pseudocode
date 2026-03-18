/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140031660
 * Callers:
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A648 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004AB18 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004AFF8 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B0F0 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005392C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1400540EC (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x140090894 (VidSchiGetNumFlipAllocAttribs.c)
 *     VidSchResetFlipQueueTimeout @ 0x1400A66B0 (VidSchResetFlipQueueTimeout.c)
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
