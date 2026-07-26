/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0
 * Callers:
 *     NdisReturnNetBufferLists @ 0x140017B90 (NdisReturnNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisFSendNetBufferListsComplete @ 0x140018CE0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1400192A0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1400197A0 (NdisFReturnNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x14001B440 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001C100 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001CCD0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020F60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x140021180 (NdisMSendNetBufferListsComplete.c)
 *     NdisFreeFragmentNetBufferList @ 0x140021FE0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140022930 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400275E0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031B90 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038B60 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140038E10 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140041950 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14004BB30 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x14004CC20 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004D370 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400678A0 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x140071670 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisNblTrackerTransferOwnership @ 0x1400A2040 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2E90 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2EF0 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  char v8; // r13
  struct _NET_BUFFER_LIST *Alignment; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  struct _NET_BUFFER_LIST *v15; // rsi
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rax
  _BYTE *SourceHandle; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v28; // [rsp+88h] [rbp+10h]
  char v29; // [rsp+A0h] [rbp+28h]

  v28 = a2;
  v6 = 0LL;
  v7 = ndisNblTrackerEpoch;
  v8 = a5 & 1;
  v29 = 0;
  Alignment = a1;
  v11 = 0LL;
  v12 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a1, a2, a4, (void *)a3, a5);
    a2 = v28;
  }
  v13 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (a3 & 1) != 0 )
  {
    v14 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v13 = (2 * v7) ^ (a3 ^ (2 * v7)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v27 = v14;
  v15 = Alignment;
  if ( !Alignment )
    goto LABEL_45;
  while ( 2 )
  {
    v16 = (ULONG_PTR)v15->NetBufferListInfo[27];
    while ( v15->NetBufferListInfo[27] == (void *)v16 )
    {
      if ( g_featureNdisDetectCircularNblChain && Alignment )
      {
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( Alignment )
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( v15 == Alignment )
          ndisBugCheckEx(0x32uLL, 5uLL, v16, (ULONG_PTR)v15);
      }
      if ( v16 )
      {
        if ( (v16 & 4) != 0 )
          goto LABEL_23;
      }
      else if ( !v15->SourceHandle )
      {
        v17 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( ((unsigned __int8)a2 & 1) != 0 )
          v17 = *(_QWORD *)(((unsigned __int64)a2 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v15->SourceHandle = (void *)v17;
      }
      SourceHandle = v15->SourceHandle;
      if ( SourceHandle )
      {
        if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || *SourceHandle == 5 )
        {
          if ( SourceHandle != (_BYTE *)v14 || v15->ParentNetBufferList )
          {
            ++v6;
            v19 = v13;
          }
          else
          {
            ++v12;
            v19 = 24LL;
            ++v6;
          }
          goto LABEL_24;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = (unsigned __int8)*SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_9b060fe0224b38c36bb70306e6018616_Traceguids,
            (char)v15,
            v26);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          27,
          11,
          (struct _GUID *)&WPP_9b060fe0224b38c36bb70306e6018616_Traceguids,
          (char)v15);
      }
LABEL_23:
      v14 = v27;
      v19 = v13 | 4;
LABEL_24:
      v15->NetBufferListInfo[27] = (void *)v19;
      v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
      a2 = v28;
      if ( !v15 )
        break;
    }
    v20 = v11 - v6;
    if ( (v16 & 1) != 0 && v20 )
    {
      if ( v8 || v29 )
      {
        v21 = 16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( !v8 )
          goto LABEL_40;
LABEL_44:
        v22 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(*(_QWORD *)v21 + v22) += v20;
      }
      else
      {
        v29 = 1;
        if ( KeGetCurrentIrql() == 2 )
        {
          v8 = 1;
          v21 = 16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          goto LABEL_44;
        }
        v8 = 0;
        v21 = 16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_40:
        _InterlockedAdd64((volatile signed __int64 *)(v21 + 8), v20);
      }
    }
    v11 = v6;
    if ( v15 )
    {
      v14 = v27;
      a2 = v28;
      continue;
    }
    break;
  }
LABEL_45:
  v23 = v6 - v12;
  if ( (v13 & 1) != 0 && v23 )
  {
    if ( v8 || v29 )
    {
      v24 = 16 * ((v13 >> 1) & 1) + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( !v8 )
        goto LABEL_52;
LABEL_55:
      v25 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v24 + v25) += v23;
    }
    else
    {
      if ( KeGetCurrentIrql() == 2 )
      {
        v24 = 16 * ((v13 >> 1) & 1) + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_55;
      }
      v24 = 16 * ((v13 >> 1) & 1) + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_52:
      _InterlockedAdd64((volatile signed __int64 *)(v24 + 8), v23);
    }
  }
}
