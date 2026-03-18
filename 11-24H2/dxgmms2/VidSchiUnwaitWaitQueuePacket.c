/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x140048284
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x14001F4A0 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x140037F88 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004A2DC (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004EC5C (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x14001B8CC (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1400232B0 (VidSchiFreeQueuePacket.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140034F40 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14003646C (-AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?RemoveEntryListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_LIST_ENTRY@@1@Z @ 0x14003737C (-RemoveEntryListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_LIST_ENTRY@@1@Z.c)
 */

void __fastcall VidSchiUnwaitWaitQueuePacket(
        HwQueueStagingList *this,
        __int64 a2,
        __int64 a3,
        struct VIDSCH_HW_QUEUE **a4)
{
  char v5; // r15
  __int64 v6; // rdx
  struct VIDSCH_HW_QUEUE **v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // rcx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax

  v5 = a3;
  v6 = *(_QWORD *)(a2 + 88);
  v9 = (struct VIDSCH_HW_QUEUE **)(a2 + 96);
  if ( v6 )
    v10 = *(_QWORD *)(v6 + 96);
  else
    v10 = *(_QWORD *)(*((_QWORD *)*v9 + 5) + 16LL);
  v11 = *(_QWORD *)(v10 + 24);
  if ( (byte_140081241 & 1) != 0 )
  {
    if ( v6 )
    {
      v12 = *(_QWORD *)(v6 + 56);
      if ( !v12 || (*(_DWORD *)(v6 + 112) & 0x40) != 0 )
        v12 = v6;
    }
    else
    {
      v12 = *((_QWORD *)*v9 + 6);
      if ( !v12 )
        v12 = (__int64)*v9;
    }
    McTemplateK0pp_EtwWriteTransfer(v12, &EventUnwaitQueuePacket, a3, a2, v12);
  }
  v13 = (__int64 *)(a2 + 768);
  if ( *(_BYTE *)(v11 + 7059) )
  {
    RemoveEntryListInstrumented((KSPIN_LOCK *)v11, (struct _LIST_ENTRY *)(a2 + 768), (struct _LIST_ENTRY *)(a2 + 176));
  }
  else
  {
    v14 = *v13;
    if ( *(__int64 **)(*v13 + 8) != v13 )
      goto LABEL_41;
    v15 = *(__int64 **)(a2 + 776);
    if ( (__int64 *)*v15 != v13 )
      goto LABEL_41;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
    *(_QWORD *)(a2 + 776) = 0LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 760) + 48LL) == 6 )
  {
    v16 = (_QWORD *)(a2 + 784);
    v14 = *(_QWORD *)(a2 + 784);
    if ( *(_QWORD *)(v14 + 8) != a2 + 784 )
      goto LABEL_41;
    v17 = *(__int64 **)(a2 + 792);
    if ( (_QWORD *)*v17 != v16 )
      goto LABEL_41;
    *v17 = v14;
    *(_QWORD *)(v14 + 8) = v17;
    *v16 = 0LL;
    *(_QWORD *)(a2 + 792) = 0LL;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(a2 + 760) + 48LL);
  if ( ((v18 - 2) & 0xFFFFFFFC) == 0 && v18 != 3 )
  {
    v19 = *(_QWORD *)(a2 + 88);
    if ( v19 )
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 800));
    if ( (*(_DWORD *)(a2 + 752) & 8) != 0 )
    {
      --*(_DWORD *)(v11 + 876);
      *(_DWORD *)(a2 + 752) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a2 + 760), v14);
  v20 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 752) = *(_DWORD *)(a2 + 752) ^ ((unsigned __int8)*(_DWORD *)(a2 + 752) ^ (unsigned __int8)(2 * v5)) & 2 | 1;
  if ( (v20 & 0x10) != 0 )
  {
    v21 = (_QWORD *)(a2 + 32);
    v22 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v22 + 8) == a2 + 32 )
    {
      v23 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v23 == v21 )
      {
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(*(_QWORD *)(a2 + 88) + 804LL);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88), a2);
        return;
      }
    }
LABEL_41:
    __fastfail(3u);
  }
  v24 = *(_QWORD *)(a2 + 88);
  if ( v24 )
  {
    if ( (*(_DWORD *)(v24 + 184) & 0x20) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 184LL) &= ~0x20u;
      if ( VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 0x69C6u) )
      {
        *(_QWORD *)(v11 + 1480) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v11 + 1448), 0, 0);
      }
    }
  }
  else
  {
    if ( a4 && !*((_QWORD *)*v9 + 6) )
      *a4 = *v9;
    HwQueueStagingList::AddHwQueue(this, *v9);
  }
}
