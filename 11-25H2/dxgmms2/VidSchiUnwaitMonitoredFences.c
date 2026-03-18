/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x140019940
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchSubmitWaitFromCpu @ 0x140019390 (VidSchSubmitWaitFromCpu.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x14003B450 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003D844 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140051E5C (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140014038 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400358F0 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(HwQueueStagingList *this, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rsi
  __int64 v6; // r10
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r9
  unsigned int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  void *v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r10
  _QWORD *v20; // r14
  unsigned int *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax

  v2 = (_QWORD *)(a2 + 880);
  v3 = *(_QWORD **)(a2 + 880);
  if ( v3 != (_QWORD *)(a2 + 880) )
  {
    while ( 1 )
    {
      v6 = *(v3 - 1);
      v7 = v3 - 96;
      v3 = (_QWORD *)*v3;
      v8 = v7[100];
      if ( *(_BYTE *)(v6 + 29) )
        break;
      if ( *(_DWORD *)(v6 + 48) == 6 || *(_BYTE *)(v6 + 30) )
      {
        if ( **(_QWORD **)(v6 + 72) >= v8 )
          break;
      }
      else if ( **(_DWORD **)(v6 + 72) - (int)v8 >= 0 )
      {
        break;
      }
LABEL_19:
      if ( v3 == v2 )
        goto LABEL_20;
    }
    v9 = *(unsigned int **)(v6 + 72);
    if ( *(_DWORD *)(v6 + 48) == 6 )
    {
      v10 = *(_QWORD *)v9;
    }
    else if ( *(_BYTE *)(v6 + 30) )
    {
      v10 = *(_QWORD *)v9;
    }
    else
    {
      v10 = *v9;
    }
    WdLogSingleEntry4(4LL, v6, v10);
    v11 = v7[11];
    WdLogGlobalForLineNumber = 27235;
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 104);
    else
      v12 = *(_QWORD *)(*(_QWORD *)(v7[12] + 40LL) + 8LL);
    if ( (v7[94] & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(this);
    VidSchiUnwaitWaitQueuePacket(this);
    VidSchiCheckPendingDeviceCommand(v12, v13);
    goto LABEL_19;
  }
LABEL_20:
  v14 = *(_QWORD **)(a2 + 896);
  while ( v14 != (_QWORD *)(a2 + 896) )
  {
    v15 = v14;
    v14 = (_QWORD *)*v14;
    UnblockCpuWaiter(v15, 0LL, 0LL);
  }
  v16 = *(_QWORD **)(a2 + 912);
  while ( v16 != (_QWORD *)(a2 + 912) )
  {
    v17 = *(v16 - 2);
    v18 = v16 - 3;
    v19 = *(v16 - 1);
    v20 = v16;
    v16 = (_QWORD *)*v16;
    if ( *(_BYTE *)(v17 + 29) )
      goto LABEL_30;
    if ( *(_DWORD *)(v17 + 48) == 6 || *(_BYTE *)(v17 + 30) )
    {
      if ( **(_QWORD **)(v17 + 72) >= v19 )
        goto LABEL_29;
    }
    else if ( **(_DWORD **)(v17 + 72) - (int)v19 >= 0 )
    {
LABEL_29:
      if ( *(_BYTE *)(v17 + 29) )
LABEL_30:
        *((_DWORD *)v18 + 11) |= 1u;
      v21 = *(unsigned int **)(v17 + 72);
      if ( *(_DWORD *)(v17 + 48) == 6 )
      {
        v22 = *(_QWORD *)v21;
      }
      else if ( *(_BYTE *)(v17 + 30) )
      {
        v22 = *(_QWORD *)v21;
      }
      else
      {
        v22 = *v21;
      }
      WdLogSingleEntry4(4LL, v17, v22);
      WdLogGlobalForLineNumber = 27297;
      VidSchiSubmitPresentHistoryToken(this, 0LL, v18 + 5, 0LL, a2);
      v23 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v24 = (_QWORD *)v20[1], (_QWORD *)*v24 != v20) )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 928), v18);
      --*(_DWORD *)(v17 + 44);
      VidSchiReleaseSyncObjectReference((PVOID)v17);
    }
  }
  if ( *(_DWORD *)(a2 + 860) )
    VidSchUnwaitFlipQueue(this, a2);
}
