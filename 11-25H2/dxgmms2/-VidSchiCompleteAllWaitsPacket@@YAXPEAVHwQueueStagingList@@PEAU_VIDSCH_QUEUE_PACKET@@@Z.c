/*
 * XREFs of ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004F2CC
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x14003D738 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteAllWaitsPacket(struct HwQueueStagingList *this, struct _VIDSCH_QUEUE_PACKET *a2)
{
  int v4; // eax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v4 = *((_DWORD *)a2 + 188);
    if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(this, (__int64)a2, 0);
      VidSchiUnwaitWaitQueuePacket(this, (__int64)a2, 0LL, 0LL);
    }
  }
}
