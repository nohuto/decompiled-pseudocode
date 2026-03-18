/*
 * XREFs of ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140026FB0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051E80 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140029970 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x140037F88 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteHwQueueWaitPacket(struct HwQueueStagingList *a1, LARGE_INTEGER *a2)
{
  DWORD LowPart; // eax

  LowPart = a2[94].LowPart;
  if ( (LowPart & 1) == 0 )
  {
    if ( (LowPart & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(a1);
    else
      VidSchiUnwaitWaitQueuePacket(a1);
  }
  WdLogSingleEntry1(4LL, a2);
  WdLogGlobalForLineNumber = 759;
  VidSchiFreeCompletedHwQueuePacket(a2);
}
