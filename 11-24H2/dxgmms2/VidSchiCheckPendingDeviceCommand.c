/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x140015574
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140009610 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001F3F4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x140025748 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140026FB0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140029970 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14002C91C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400351E0 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1400540EC (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 * Callees:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x14001D2A8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140033250 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x140033300 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400338C0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140034F40 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140038574 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void *__fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r8
  _VIDSCH_SYNC_POINT *v5; // r12
  _VIDSCH_SYNC_POINT *v6; // rbx
  unsigned int i; // ecx
  __int64 j; // rcx
  _QWORD *v9; // rdi
  __int64 *v10; // rsi
  _VIDSCH_SYNC_POINT *v11; // rcx
  _VIDSCH_SYNC_POINT **v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r10
  __int64 *v16; // rdi
  __int64 **v17; // rcx
  VIDMM_GLOBAL ***v18; // r10
  __int64 v19; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  _QWORD *v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rax
  void **v25; // r9
  _QWORD *v26; // r9
  __int64 v27; // rax
  __int64 **v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  result = (void *)VidSchiProcessPrimariesTerminationList(a1[4]);
  v5 = (_VIDSCH_SYNC_POINT *)a1[233];
  while ( v5 != (_VIDSCH_SYNC_POINT *)(a1 + 233) )
  {
    v6 = v5;
    v5 = *(_VIDSCH_SYNC_POINT **)v5;
    if ( *((_QWORD *)v6 + 2) > a1[232] )
    {
      v4 = (_QWORD *)*((unsigned int *)v6 + 16);
      for ( i = 0; i < (unsigned int)v4; ++i )
      {
        v13 = (__int64 *)(*((_QWORD *)v6 + 3) + 16LL * i);
        v3 = *v13;
        if ( *v13 )
        {
          result = (void *)v13[1];
          if ( *(_QWORD *)(v3 + 160) < (unsigned __int64)result )
            return result;
        }
      }
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 32); j = (unsigned int)(j + 1) )
      {
        v23 = *((_QWORD *)v6 + 9);
        v24 = *(_QWORD *)(v23 + 24 * j);
        if ( v24 && *(_DWORD *)(v24 + 148) )
        {
          LODWORD(v3) = 0;
          v4 = (_QWORD *)(v24 + 64);
          v25 = (void **)(v23 + 8 * (3 * j + 1));
          while ( (unsigned int)v3 < 2 )
          {
            result = *v25;
            if ( *v4 < (unsigned __int64)*v25 )
              return result;
            LODWORD(v3) = v3 + 1;
            ++v25;
            v4 += 3;
          }
        }
      }
      a1[232] = *((_QWORD *)v6 + 2);
    }
    v9 = (_QWORD *)*((_QWORD *)v6 + 19);
    while ( v9 != (_QWORD *)((char *)v6 + 152) )
    {
      v19 = *v9;
      v20 = v9 - 29;
      v21 = v9;
      v9 = (_QWORD *)v19;
      if ( *(_QWORD **)(v19 + 8) != v21 )
        goto LABEL_35;
      v22 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v22 != v21 )
        goto LABEL_35;
      *v22 = v19;
      *(_QWORD *)(v19 + 8) = v22;
      VidMmOfferAllocationCallback(v20);
      *v21 = 0LL;
      v20[30] = 0LL;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    v10 = (__int64 *)*((_QWORD *)v6 + 17);
    while ( v10 != (__int64 *)((char *)v6 + 136) )
    {
      v14 = *v10;
      v15 = v10 - 27;
      v16 = v10;
      v10 = (__int64 *)v14;
      if ( *(__int64 **)(v14 + 8) != v16 )
        goto LABEL_35;
      v17 = (__int64 **)v16[1];
      if ( *v17 != v16 )
        goto LABEL_35;
      *v17 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v17;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v17, v15) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(*v18[1], (struct VIDMM_ALLOC *)v18);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 2016LL), &LockHandle);
        v27 = a1[4] + 2048LL;
        v28 = *(__int64 ***)(a1[4] + 2056LL);
        if ( *v28 != (__int64 *)v27 )
          goto LABEL_35;
        v16[1] = (__int64)v28;
        *v16 = v27;
        *v28 = v16;
        *(_QWORD *)(v27 + 8) = v16;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v11 = *(_VIDSCH_SYNC_POINT **)v6;
    if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v6 + 8LL) != v6
      || (v12 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v6 + 1), *v12 != v6) )
    {
LABEL_35:
      __fastfail(3u);
    }
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    if ( (byte_140081241 & 1) != 0 )
    {
      v26 = (_QWORD *)a1[1];
      if ( !v26 )
        v26 = a1;
      McTemplateK0pp_EtwWriteTransfer(v11, &EventRetireSyncPoint, v4, v26, *((_QWORD *)v6 + 2));
    }
    result = _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v6, v3);
  }
  return result;
}
