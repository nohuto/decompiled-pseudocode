/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051E80
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400351E0 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028748 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140049C9C (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiRundownHardwarePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  struct _VIDSCH_QUEUE_PACKET *v4; // rbx
  struct HwQueueStagingList *v5; // rcx
  struct VIDSCH_HW_QUEUE *v6; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v5 = (struct HwQueueStagingList *)*((int *)a2 + 12);
  if ( (_DWORD)v5 )
  {
    switch ( (_DWORD)v5 )
    {
      case 3:
        VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
        return;
      case 4:
        VidSchiCompleteHwQueueWaitPacket(a1, (LARGE_INTEGER *)a2);
        return;
      case 5:
LABEL_8:
        VidSchiCompleteHwQueueSignalPacket(a1, a2);
        return;
      case 7:
        goto LABEL_14;
    }
    if ( (_DWORD)v5 != 8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2048LL, a3, a2, v5);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_8;
    }
  }
  if ( (*((_DWORD *)a2 + 20) & 0x40) == 0 )
  {
    v6 = 0LL;
    VidSchiReleasePacketToGpu(a1, (LARGE_INTEGER *)a2, &v6, 0LL);
    return;
  }
  VidSchiSimulateProgressFenceCompletion(v5, a2, a3);
  a2 = v4;
LABEL_14:
  VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, a2, 0);
}
