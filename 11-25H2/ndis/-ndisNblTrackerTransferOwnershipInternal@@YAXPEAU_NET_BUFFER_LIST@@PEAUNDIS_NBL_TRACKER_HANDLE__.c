/*
 * XREFs of ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x14001F290
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x14001A010 (NdisFreeFragmentNetBufferList.c)
 *     NdisReturnNetBufferLists @ 0x14001BA20 (NdisReturnNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisFReturnNetBufferLists @ 0x14001E7D0 (NdisFReturnNetBufferLists.c)
 *     ?ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14002EEA0 (-ndisMSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x140031F80 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400324C0 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E270 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140044330 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     NdisMSendNetBufferListsComplete @ 0x140047050 (NdisMSendNetBufferListsComplete.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x14004C7D0 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B3B0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B720 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140083280 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1400A3AA0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     NdisNblTrackerTransferOwnership @ 0x1400AA1F0 (NdisNblTrackerTransferOwnership.c)
 *     ?ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA0C0 (-ndisQueueReceiveNblsOnMiniport@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA120 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipInternal(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  char v8; // r13
  char v9; // bp
  struct _NET_BUFFER_LIST *Alignment; // r14
  __int64 v12; // r12
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned int v20; // eax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h]
  char v27; // [rsp+90h] [rbp+8h]
  unsigned __int64 v28; // [rsp+98h] [rbp+10h]
  __int64 v29; // [rsp+A0h] [rbp+18h]
  char v30; // [rsp+B0h] [rbp+28h]

  v28 = (unsigned __int64)a2;
  v6 = 0LL;
  v7 = ndisNblTrackerEpoch;
  v8 = 0;
  v29 = 0LL;
  v9 = a5 & 1;
  v27 = 0;
  v30 = a5 & 1;
  Alignment = a1;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal(a1, a2, a4, (void *)a3, a5);
    v13 = 0LL;
  }
  v14 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (a3 & 1) != 0 )
  {
    v15 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v14 = (2 * v7) ^ (a3 ^ (2 * v7)) & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else
  {
    v15 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  v26 = v15;
  if ( !Alignment )
    goto LABEL_21;
  do
  {
    v16 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == (void *)v16 )
    {
      if ( v16 )
      {
        if ( (v16 & 4) != 0 )
          goto LABEL_45;
      }
      else if ( !Alignment->SourceHandle )
      {
        v24 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v28 & 1) != 0 )
          v24 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        Alignment->SourceHandle = (void *)v24;
      }
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        LODWORD(a2) = *SourceHandle;
        if ( (unsigned __int8)((_BYTE)a2 - 17) <= 1u || (_BYTE)a2 == 5 )
        {
          if ( SourceHandle != (unsigned __int8 *)v15 || Alignment->ParentNetBufferList )
          {
            ++v6;
            v18 = v14;
          }
          else
          {
            ++v13;
            v18 = 24LL;
            v29 = v13;
            ++v6;
          }
          goto LABEL_14;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = *SourceHandle;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0x1Bu,
            0xCu,
            (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
            (char)Alignment,
            v25);
LABEL_50:
          v13 = v29;
          v15 = v26;
        }
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          27,
          11,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
          (char)Alignment);
        goto LABEL_50;
      }
LABEL_45:
      v18 = v14 | 4;
LABEL_14:
      Alignment->NetBufferListInfo[27] = (void *)v18;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    v9 = v30;
    v19 = v12 - v6;
    v8 = v27;
    if ( (v16 & 1) == 0 || !v19 )
      goto LABEL_20;
    if ( v30 || v27 )
    {
      a2 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
      if ( !v30 )
        goto LABEL_34;
      goto LABEL_19;
    }
    v8 = 1;
    v27 = 1;
    if ( KeGetCurrentIrql() == 2 )
    {
      v30 = 1;
      v9 = 1;
      a2 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_19:
      v20 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)a2 + v20) += v19;
      goto LABEL_20;
    }
    v9 = 0;
    v30 = 0;
    a2 = (struct NDIS_NBL_TRACKER_HANDLE__ *)(16 * ((v16 >> 1) & 1) + (v16 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_34:
    _InterlockedAdd64((volatile signed __int64 *)a2 + 1, v19);
LABEL_20:
    v13 = v29;
    v12 = v6;
    v15 = v26;
  }
  while ( Alignment );
LABEL_21:
  v21 = v6 - v13;
  if ( (v14 & 1) != 0 && v21 )
  {
    if ( v9 || v8 )
    {
      v22 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( v9 )
        goto LABEL_29;
LABEL_27:
      _InterlockedAdd64((volatile signed __int64 *)(v22 + 8), v21);
    }
    else
    {
      if ( KeGetCurrentIrql() != 2 )
      {
        v22 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_27;
      }
      v22 = 16 * ((v14 >> 1) & 1) + (v14 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_29:
      v23 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(*(_QWORD *)v22 + v23) += v21;
    }
  }
}
