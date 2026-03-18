/*
 * XREFs of ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x14000FF50
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001CBA0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140033960 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140052348 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D060 (VmBusSendSignalGuestEvent.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x1400444DC (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCompleteHwQueueSignalPacket(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // r14
  _DWORD *v8; // rsi
  int v9; // r8d
  unsigned int i; // ebp
  __int64 v11; // rcx
  struct _KEVENT *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v2 = *((_QWORD *)a2 + 12);
  v4 = *((_QWORD *)a2 + 159);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 32LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 1280) = *((_QWORD *)a2 + 160);
  }
  else if ( !*((_QWORD *)a2 + 160) )
  {
    v8 = (_DWORD *)((char *)a2 + 752);
    v9 = *((_DWORD *)a2 + 188);
    if ( (((v9 & 0x10) != 0) & ((unsigned __int8)byte_140081243 >> 7)) != 0 && byte_140081243 < 0 )
    {
      v13 = *((_QWORD *)a2 + 11);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 56);
        if ( !v14 || (*(_DWORD *)(v13 + 112) & 0x40) != 0 )
          v14 = *((_QWORD *)a2 + 11);
      }
      else
      {
        v14 = *(_QWORD *)(v2 + 48);
        if ( !v14 )
          LODWORD(v14) = v2;
      }
      McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
        v14,
        v13,
        v9,
        1,
        v14,
        *((_DWORD *)a2 + 28),
        v9,
        *((_DWORD *)a2 + 189),
        (__int64)a2 + 760,
        (__int64)a2 + 1016,
        (char)a2);
    }
    if ( (*v8 & 2) != 0 )
    {
      v12 = (struct _KEVENT *)*((_QWORD *)a2 + 127);
      if ( (*v8 & 8) != 0 )
      {
        VmBusSendSignalGuestEvent(v12, 0LL);
      }
      else
      {
        KeSetEvent(v12, 0, 0);
        ObfDereferenceObject(*((PVOID *)a2 + 127));
      }
      *((_QWORD *)a2 + 127) = 0LL;
    }
    else
    {
      for ( i = 0; i < *((_DWORD *)a2 + 189); ++i )
        VidSchiCompleteSignalSyncObject(a1, 1);
      if ( *(_DWORD *)(v7 + 860) )
        VidSchUnwaitFlipQueue(a1, v7);
    }
    goto LABEL_9;
  }
  v11 = *((_QWORD *)a2 + 160);
  if ( v11 )
    *(_QWORD *)(v11 + 1272) = *((_QWORD *)a2 + 159);
  *((_QWORD *)a2 + 159) = 0LL;
  v8 = (_DWORD *)((char *)a2 + 752);
  *((_QWORD *)a2 + 160) = 0LL;
LABEL_9:
  *((_DWORD *)a2 + 20) |= 4u;
  if ( (*v8 & 2) == 0 && *((_DWORD *)a2 + 189) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((PVOID *)a2 + v5++ + 95));
    while ( v5 < *((_DWORD *)a2 + 189) );
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}
