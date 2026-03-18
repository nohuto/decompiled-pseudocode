/*
 * XREFs of ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002CB0C
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x14005488C (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x14002CF08 (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 */

void __fastcall VidSchiUpdateInterruptTargetsForAllPlanes(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  bool v8; // zf
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 429); (unsigned int)v3 < *((_DWORD *)a1 + 38); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = 304LL * (unsigned int)v3;
    v7 = *(_QWORD *)(v6 + i + 392) + 1LL;
    v8 = *(_DWORD *)(v6 + i + 196) == 0;
    v9 = v7;
    if ( !v8 )
    {
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 32), v3, &v9);
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 8 * v3 + 40), v3, &v9);
      v7 = v9;
    }
    VidSchiSetInterruptTargetPresentId(a1, a2, v3, v7, 0, 0);
  }
}
