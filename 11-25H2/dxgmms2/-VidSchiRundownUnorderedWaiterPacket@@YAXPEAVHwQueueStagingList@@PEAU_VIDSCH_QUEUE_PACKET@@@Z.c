/*
 * XREFs of ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004ABD4
 * Callers:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004AB0C (VidSchiRundownUnorderedWaiterDevice.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x140050434 (VidSchiRundownUnorderedWaiterContext.c)
 *     ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051040 (-VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterPacket(
        struct HwQueueStagingList *this,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v3 = *((_DWORD *)a2 + 188);
    LOBYTE(a3) = 1;
    if ( (v3 & 1) == 0 )
    {
      if ( (v3 & 4) != 0 )
      {
        VidSchiUnblockUnorderedWaitQueuePacket(this, (__int64)a2, 1);
      }
      else if ( (v3 & 8) != 0 )
      {
        v4 = *((_QWORD *)a2 + 11);
        if ( v4 )
          v5 = *(_QWORD *)(v4 + 104);
        else
          v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 3268LL) & 1) != 0 )
          VidSchiUnwaitWaitQueuePacket(this, (__int64)a2, a3, 0LL);
      }
    }
  }
}
