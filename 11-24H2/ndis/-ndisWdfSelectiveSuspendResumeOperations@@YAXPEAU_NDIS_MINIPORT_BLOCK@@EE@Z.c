/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038B60
 * Callers:
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C3A60 (-ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1401652F0 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008D800 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2EF0 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_FILTER_BLOCK *a1, __int64 a2, char a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *PendingOidRequest; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rdi
  struct _NET_BUFFER_LIST *v10; // rbp
  struct _LIST_ENTRY *v11; // rax
  int v12; // r8d
  _LIST_ENTRY *Flink; // rax
  struct _NET_BUFFER_LIST *v14; // rbx
  _QWORD *v15; // r12
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  struct _NET_BUFFER_LIST *v18; // rdx
  _LIST_ENTRY *v19; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v21; // eax
  struct _LIST_ENTRY v22; // [rsp+30h] [rbp-38h] BYREF

  PendingOidRequest = (struct _NDIS_SELECTIVE_SUSPEND *)a1[3].PendingOidRequest;
  v22 = 0LL;
  KeSetEvent((PRKEVENT)((char *)PendingOidRequest + 272), 0, 0);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PendingOidRequest);
  v7 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)PendingOidRequest + 82)) / 10000LL;
  *((_QWORD *)PendingOidRequest + 84) += v7;
  *((_QWORD *)PendingOidRequest + 83) = v7;
  v8 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)PendingOidRequest + 81)) / 10000LL;
  *((_QWORD *)PendingOidRequest + 86) += v8;
  *((_QWORD *)PendingOidRequest + 85) = v8;
  v9 = (__int64 *)*((_QWORD *)PendingOidRequest + 68);
  *((_QWORD *)PendingOidRequest + 68) = 0LL;
  *((_QWORD *)PendingOidRequest + 69) = (char *)PendingOidRequest + 544;
  v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PendingOidRequest + 70);
  *((_QWORD *)PendingOidRequest + 70) = 0LL;
  *((_QWORD *)PendingOidRequest + 71) = (char *)PendingOidRequest + 560;
  v11 = (struct _LIST_ENTRY *)((char *)PendingOidRequest + 584);
  if ( v11->Flink == v11 )
  {
    v22.Blink = &v22;
    v22.Flink = &v22;
  }
  else
  {
    v22 = *v11;
    *((_QWORD *)PendingOidRequest + 74) = (char *)PendingOidRequest + 584;
    v11->Flink = v11;
    v22.Flink->Blink = &v22;
    v22.Blink->Flink = &v22;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)PendingOidRequest, v6);
  if ( v9 )
  {
    if ( a3 )
    {
      if ( byte_14011D800 && ((__int64)a1[4].PendingOidRequest & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5816, (_DWORD)v9, v12, 2, -1071448017, -536866806);
      NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v9, -1073676271);
      ndisMSendNetBufferListsCompleteInternal(a1, (struct _NET_BUFFER_LIST *)v9, 0, 0);
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          (struct _NET_BUFFER_LIST *)v9,
          0LL,
          *(_QWORD *)&a1[2].NicSwitchCurrentCapabilities.MaxNumRssCapableNonDefaultPFVPorts,
          0x92u,
          0);
      do
      {
        v17 = *((_DWORD *)v9 + 28);
        if ( v14 && v17 != v16 )
        {
          *v15 = 0LL;
          ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v14, v16, 0, 1u);
          v14 = 0LL;
        }
        v18 = (struct _NET_BUFFER_LIST *)v9;
        v15 = v9;
        v9 = (__int64 *)*v9;
        if ( v14 )
        {
          v18 = v14;
          v17 = v16;
        }
        v16 = v17;
        v14 = v18;
      }
      while ( v9 );
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v18, v17, 0, 1u);
    }
  }
  if ( v10 )
    ndisReplayRecvNbls((struct _NDIS_MINIPORT_BLOCK *)a1, v10);
  if ( a3 )
  {
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v22);
  }
  else
  {
    while ( 1 )
    {
      Flink = v22.Flink;
      if ( v22.Flink == &v22 )
        break;
      if ( v22.Flink->Blink != &v22 || (v19 = v22.Flink->Flink, v22.Flink->Flink->Blink != v22.Flink) )
        __fastfail(3u);
      v22.Flink = v22.Flink->Flink;
      v19->Blink = &v22;
      p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v21 = ndisMDoDirectOidRequest((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1u);
      if ( v21 != 259 )
        ndisMOidRequestCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, p_Blink, v21, 0LL);
    }
  }
}
