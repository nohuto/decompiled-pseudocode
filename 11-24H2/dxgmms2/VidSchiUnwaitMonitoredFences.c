/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x14000E4E0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008B04 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchSubmitWaitFromCpu @ 0x14000DF30 (VidSchSubmitWaitFromCpu.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14001FBBC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x140039450 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003B954 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400518DC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1400254A0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400342D0 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x140037F88 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  void *v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rbx
  _DWORD *v20; // rdi
  unsigned __int64 v21; // r10
  _QWORD *v22; // r14
  unsigned int *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax

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
    WdLogGlobalForLineNumber = 27344;
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 104);
    else
      v12 = *(_QWORD *)(*(_QWORD *)(v7[12] + 40LL) + 8LL);
    if ( (v7[94] & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(this);
    VidSchiUnwaitWaitQueuePacket(this);
    VidSchiCheckPendingDeviceCommand(v12, v13, v14, v15);
    goto LABEL_19;
  }
LABEL_20:
  v16 = *(_QWORD **)(a2 + 896);
  while ( v16 != (_QWORD *)(a2 + 896) )
  {
    v17 = v16;
    v16 = (_QWORD *)*v16;
    UnblockCpuWaiter(v17, 0LL, 0LL);
  }
  v18 = *(_QWORD **)(a2 + 912);
  while ( v18 != (_QWORD *)(a2 + 912) )
  {
    v19 = *(v18 - 2);
    v20 = v18 - 3;
    v21 = *(v18 - 1);
    v22 = v18;
    v18 = (_QWORD *)*v18;
    if ( *(_BYTE *)(v19 + 29) )
      goto LABEL_30;
    if ( *(_DWORD *)(v19 + 48) == 6 || *(_BYTE *)(v19 + 30) )
    {
      if ( **(_QWORD **)(v19 + 72) >= v21 )
        goto LABEL_29;
    }
    else if ( **(_DWORD **)(v19 + 72) - (int)v21 >= 0 )
    {
LABEL_29:
      if ( *(_BYTE *)(v19 + 29) )
LABEL_30:
        v20[11] |= 1u;
      v23 = *(unsigned int **)(v19 + 72);
      if ( *(_DWORD *)(v19 + 48) == 6 )
      {
        v24 = *(_QWORD *)v23;
      }
      else if ( *(_BYTE *)(v19 + 30) )
      {
        v24 = *(_QWORD *)v23;
      }
      else
      {
        v24 = *v23;
      }
      WdLogSingleEntry4(4LL, v19, v24);
      WdLogGlobalForLineNumber = 27406;
      VidSchiSubmitPresentHistoryToken((_DWORD)this, 0, (_DWORD)v20 + 40, 0, a2);
      v25 = *v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v26 = (_QWORD *)v22[1], (_QWORD *)*v26 != v22) )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 928), v20);
      --*(_DWORD *)(v19 + 44);
      VidSchiReleaseSyncObjectReference((PVOID)v19);
    }
  }
  if ( *(_DWORD *)(a2 + 860) )
    VidSchUnwaitFlipQueue(this, a2);
}
