/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C3A60 (-ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x1400275B0 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140031540 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140038F10 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_sq @ 0x14003A480 (WPP_RECORDER_SF_sq.c)
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x14008D800 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400C2EF0 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  unsigned int v11; // ebx
  KIRQL v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 *v15; // rdi
  struct _NET_BUFFER_LIST *v16; // r14
  struct _LIST_ENTRY *v17; // rax
  int v18; // r8d
  _LIST_ENTRY *Flink; // rax
  struct _NET_BUFFER_LIST *v20; // rbp
  _QWORD *v21; // r13
  unsigned int v22; // r15d
  unsigned int v23; // r12d
  KSPIN_LOCK *v24; // rbx
  KIRQL v25; // al
  KSPIN_LOCK v26; // rcx
  __int64 CurrentProcess; // rax
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  _LIST_ENTRY *v31; // rcx
  struct _NDIS_OID_REQUEST *p_Blink; // rbx
  int v33; // eax
  struct _LIST_ENTRY v34; // [rsp+40h] [rbp-38h] BYREF

  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
  v8 = ((__int64 (__fastcall *)(_QWORD))CxBlockFromMiniport->Chars.EvtCxPowerReference)(*(_QWORD *)(v7 + 24));
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x20u,
        (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
        (char)a1,
        v8);
    goto LABEL_3;
  }
  if ( v8 != 259 )
  {
LABEL_3:
    if ( !a2 && !a3 )
      return;
    SelectiveSuspend = a1->SelectiveSuspend;
    v11 = v9 >> 31;
    v34 = 0LL;
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 272), 0, 0);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v13 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 84) += v13;
    *((_QWORD *)SelectiveSuspend + 83) = v13;
    v14 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 86) += v14;
    *((_QWORD *)SelectiveSuspend + 85) = v14;
    v15 = (__int64 *)*((_QWORD *)SelectiveSuspend + 68);
    *((_QWORD *)SelectiveSuspend + 68) = 0LL;
    *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
    v16 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
    *((_QWORD *)SelectiveSuspend + 70) = 0LL;
    *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
    v17 = (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584);
    if ( v17->Flink == v17 )
    {
      v34.Blink = &v34;
      v34.Flink = &v34;
    }
    else
    {
      v34 = *v17;
      *((_QWORD *)SelectiveSuspend + 74) = (char *)SelectiveSuspend + 584;
      v17->Flink = v17;
      v34.Flink->Blink = &v34;
      v34.Blink->Flink = &v34;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
    if ( !v15 )
      goto LABEL_8;
    if ( (_BYTE)v11 )
    {
      if ( byte_14011D800 && (*((_DWORD *)&a1->PktMonComp + 14) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5816, (_DWORD)v15, v18, 2, -1071448017, -536866806);
      NdisSetStatusInNblChain((struct _NET_BUFFER_LIST *)v15, -1073676271);
      ndisMSendNetBufferListsCompleteInternal((struct _NDIS_FILTER_BLOCK *)a1, (struct _NET_BUFFER_LIST *)v15, 0, 0);
LABEL_8:
      if ( v16 )
        ndisReplayRecvNbls(a1, v16);
      if ( (_BYTE)v11 )
      {
        ndisCancelDequeuedDirectOidRequests(a1, &v34);
      }
      else
      {
        while ( 1 )
        {
          Flink = v34.Flink;
          if ( v34.Flink == &v34 )
            break;
          if ( v34.Flink->Blink != &v34 || (v31 = v34.Flink->Flink, v34.Flink->Flink->Blink != v34.Flink) )
            __fastfail(3u);
          v34.Flink = v34.Flink->Flink;
          v31->Blink = &v34;
          p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
          v33 = ndisMDoDirectOidRequest(a1, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, 1u);
          if ( v33 != 259 )
            ndisMOidRequestCompleteInternal(a1, p_Blink, v33, 0LL);
        }
      }
      return;
    }
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0;
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        (struct _NET_BUFFER_LIST *)v15,
        0LL,
        (unsigned __int64)a1->NblTracker,
        0x92u,
        0);
    while ( 1 )
    {
      v23 = *((_DWORD *)v15 + 28);
      if ( v20 )
      {
        if ( v23 == v22 )
          goto LABEL_21;
        *v21 = 0LL;
        ndisMSendNBLToMiniportInternal(a1, v20, v22, 0, 1u);
      }
      v20 = (struct _NET_BUFFER_LIST *)v15;
      v22 = v23;
LABEL_21:
      v21 = v15;
      v15 = (__int64 *)*v15;
      if ( !v15 )
      {
        ndisMSendNBLToMiniportInternal(a1, v20, v22, 0, 1u);
        goto LABEL_8;
      }
    }
  }
  v24 = (KSPIN_LOCK *)a1->SelectiveSuspend;
  v25 = KeAcquireSpinLockRaiseToDpc(v24);
  v26 = v24[68];
  if ( v26 )
    *(_DWORD *)(v26 + 128) |= 0x20000u;
  KeReleaseSpinLock(v24, v25);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CurrentProcess = PsGetCurrentProcess();
    PsGetProcessImageFileName(CurrentProcess);
    WPP_RECORDER_SF_sq(*((_QWORD *)WPP_GLOBAL_Control + 8), v28, v29, v30);
  }
}
