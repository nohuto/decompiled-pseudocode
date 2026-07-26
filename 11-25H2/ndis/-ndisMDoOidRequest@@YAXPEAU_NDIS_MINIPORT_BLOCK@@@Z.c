/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x140015A90 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1400234F0 (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x140024200 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140024320 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x140024760 (WPP_RECORDER_SF_Dqqd.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140062000 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006AF90 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140084F90 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *v1; // r15
  unsigned __int64 *p_Lock; // r12
  struct _KEVENT *v3; // rdi
  _NDIS_OID_REQUEST *p_Blink; // r13
  char v6; // bl
  KIRQL v7; // dl
  unsigned int WSyncFlags; // ecx
  struct _NDIS_MINIPORT_BLOCK **v9; // rdx
  unsigned int v10; // r8d
  _NDIS_OID_REQUEST *v11; // rsi
  UCHAR Type; // r11
  NDIS_OID Oid; // r10d
  char v14; // bl
  char v15; // di
  unsigned int v16; // r9d
  unsigned int v17; // eax
  struct _NDIS_MINIPORT_BLOCK *v18; // rcx
  NDIS_OID v19; // r10d
  __int64 (__fastcall *v20)(__int128 *, struct _NDIS_MINIPORT_BLOCK **); // rax
  KIRQL v21; // al
  int v22; // esi
  bool v23; // zf
  KIRQL v24; // bl
  NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int PnPFlags; // edx
  int v27; // ecx
  _LIST_ENTRY *p_OidRequestList; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v30; // rax
  unsigned __int64 *v31; // rcx
  unsigned int Flags; // eax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int16 i; // si
  KIRQL v35; // al
  int v36; // ecx
  KIRQL v37; // di
  struct _NDIS_SELECTIVE_SUSPEND *v38; // rdi
  unsigned int v39; // ebx
  KIRQL v40; // al
  KIRQL v41; // r15
  unsigned int Timeout; // eax
  unsigned int CheckForHangSeconds; // ecx
  _KEVENT *v44; // rax
  _DEVICE_POWER_STATE v45; // edi
  unsigned __int64 *p_PowerStateLock; // rsi
  KIRQL v47; // al
  __int64 v48; // rcx
  int v49; // [rsp+20h] [rbp-60h]
  __int64 v50; // [rsp+48h] [rbp-38h]
  __int128 v51; // [rsp+50h] [rbp-30h] BYREF
  __int128 v52; // [rsp+60h] [rbp-20h]
  __int128 v53; // [rsp+70h] [rbp-10h]
  unsigned int v54; // [rsp+C0h] [rbp+40h]
  _KEVENT *AllRequestsCompletedEvent; // [rsp+C8h] [rbp+48h]
  _NDIS_OID_REQUEST *v56; // [rsp+D0h] [rbp+50h]

  v1 = 0LL;
  p_Lock = &a1->Lock;
  v3 = 0LL;
  AllRequestsCompletedEvent = 0LL;
  while ( 1 )
  {
    v56 = 0LL;
    p_Blink = 0LL;
    v6 = 0;
    v7 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    a1->MiniportThread = KeGetCurrentThread();
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 1) != 0 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v7);
      v11 = 0LL;
      goto LABEL_7;
    }
    p_OidRequestList = &a1->OidRequestList;
    Flink = a1->OidRequestList.Flink;
    if ( Flink == &a1->OidRequestList || (a1->PnPFlags & 0x20000) != 0 )
    {
      if ( (a1->PnPFlags & 0x20000) != 0 && (v44 = a1->AllRequestsCompletedEvent, v6 = 1, v44) )
      {
        AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
        a1->AllRequestsCompletedEvent = 0LL;
        a1->MiniportThread = 0LL;
        v3 = v44;
        KeReleaseSpinLock(p_Lock, v7);
        v11 = 0LL;
      }
      else
      {
        a1->MiniportThread = 0LL;
        v11 = 0LL;
        KeReleaseSpinLock(p_Lock, v7);
        if ( !v6 )
          goto LABEL_7;
      }
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    }
    else
    {
      v1 = a1->OidRequestList.Flink;
      a1->WSyncFlags = WSyncFlags | 1;
      if ( Flink->Blink != p_OidRequestList || (v30 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      p_OidRequestList->Flink = v30;
      p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v30->Blink = p_OidRequestList;
      v56 = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v7);
      v11 = p_Blink;
    }
LABEL_7:
    if ( v3 )
    {
      KeSetEvent(v3, 0, 0);
      AllRequestsCompletedEvent = 0LL;
    }
    if ( !v1 )
      break;
    Type = a1->Header.Type;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    v14 = 0;
    v15 = 0;
    v54 = Oid;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    if ( Type == 17 )
    {
      Timeout = p_Blink->Timeout;
      if ( Timeout < 0x3C )
      {
        CheckForHangSeconds = a1->CheckForHangSeconds;
        if ( CheckForHangSeconds )
        {
          LODWORD(v9) = (CheckForHangSeconds + Timeout - 1) % CheckForHangSeconds;
          a1->CFHangXTicks = (CheckForHangSeconds + Timeout - 1) / CheckForHangSeconds;
        }
      }
    }
    *(_DWORD *)&p_Blink->NdisReserved[16] &= ~4u;
    v16 = 0;
    v17 = 73;
    if ( a1->Header.Type == 17 )
      v18 = a1;
    else
      v18 = *(struct _NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    if ( !p_Blink->PortNumber || (v18->InfoFlags & 0x200) == 0 )
    {
      v19 = p_Blink->DATA.QUERY_INFORMATION.Oid;
      v10 = 146;
      while ( v17 <= v10 && v17 >= v16 )
      {
        LODWORD(v9) = 3 * v17;
        v18 = (struct _NDIS_MINIPORT_BLOCK *)&unk_1400FB000;
        if ( *((_DWORD *)&unk_1400FB000 + 6 * v17) > v19 )
        {
          if ( !v17 )
            break;
          v10 = v17 - 1;
          v17 = v16 + ((v17 - v16) >> 1);
        }
        else
        {
          if ( *((_DWORD *)&unk_1400FB000 + 6 * v17) == v19 )
          {
            *(_DWORD *)&p_Blink->NdisReserved[20] = v17;
            v10 = *(_DWORD *)&p_Blink->NdisReserved[16];
            HIDWORD(v53) = 0;
            *(_DWORD *)&p_Blink->NdisReserved[16] = v10 | 4;
            if ( Type == 17 )
            {
              *(_QWORD *)&v51 = a1;
              *(_QWORD *)&v52 = 0LL;
            }
            else
            {
              v18 = 0LL;
              if ( Type == 5 )
                v18 = a1;
              *(_QWORD *)&v52 = v18;
            }
            *(_QWORD *)&v53 = p_Blink;
            if ( (v10 & 0x220) != 0 )
            {
              v18 = *(struct _NDIS_MINIPORT_BLOCK **)&p_Blink->NdisReserved[32];
              v9 = (struct _NDIS_MINIPORT_BLOCK **)&p_Blink->NdisReserved[32];
              *((_QWORD *)&v52 + 1) = v18;
            }
            else
            {
              *((_QWORD *)&v52 + 1) = 0LL;
              v9 = (struct _NDIS_MINIPORT_BLOCK **)&v11->NdisReserved[32];
            }
            if ( (v10 & 0x40) != 0 )
            {
              v18 = *v9;
              *((_QWORD *)&v51 + 1) = *v9;
            }
            else
            {
              *((_QWORD *)&v51 + 1) = 0LL;
            }
            DWORD2(v53) = 0;
            if ( (v10 & 0x840080) == 0 )
            {
              v18 = (struct _NDIS_MINIPORT_BLOCK *)&unk_1400FB000;
              v20 = (__int64 (__fastcall *)(__int128 *, struct _NDIS_MINIPORT_BLOCK **))*(&funcs_140021A7B + 3 * v17);
              if ( v20 )
              {
                v14 = v20(&v51, v9);
                if ( v14 == 1 )
                {
                  HIDWORD(v53) |= 4u;
                  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v51);
                  v15 = 3;
                }
                else
                {
                  v15 = BYTE8(v53);
                }
              }
            }
            break;
          }
          v16 = v17 + 1;
          v17 += 1 + ((v10 - v17) >> 1);
        }
      }
      Oid = v54;
    }
    if ( (byte_140125101 & 0x40) != 0 )
    {
      LODWORD(v50) = Oid;
      McTemplateK0jqxptdq_EtwWriteTransfer(
        (_DWORD)v18,
        (_DWORD)v9,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v14,
        v15,
        v50,
        v51,
        v52,
        (_QWORD)v53);
    }
    if ( v14 == 1 )
    {
      v1 = 0LL;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Dqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (_DWORD)v9,
          v10,
          20,
          v49,
          v54,
          (char)p_Blink,
          (char)a1,
          v15);
        v1 = 0LL;
      }
      v3 = AllRequestsCompletedEvent;
    }
    else
    {
      v21 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      v22 = 0;
      v23 = (a1->Flags & 0x80000) == 0;
      v24 = v21;
      a1->MiniportThread = KeGetCurrentThread();
      if ( !v23 )
      {
        v22 = -1073676275;
        v1 = 0LL;
        goto LABEL_93;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v22 = -2147483633;
        v1 = 0LL;
        goto LABEL_93;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v22 = -1073676280;
        v1 = 0LL;
        goto LABEL_93;
      }
      if ( (PnPFlags & 0x20000) != 0
        || (unsigned int)(a1->DriverPowerState - 2) <= 2 && p_Blink->DATA.QUERY_INFORMATION.Oid != -50265855 )
      {
        if ( (RequestType & 0xFFFFFFFD) != 0 )
        {
          if ( RequestType == NdisRequestSetInformation )
          {
            p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
            v22 = -1071448017;
            if ( (PnPFlags & 0x20000) != 0 )
              v22 = -1073741823;
            goto LABEL_45;
          }
          if ( RequestType != NdisRequestMethod )
          {
LABEL_45:
            v1 = 0LL;
            goto LABEL_46;
          }
          v1 = 0LL;
          p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
        }
        else
        {
          v1 = 0LL;
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
        }
        v22 = -1073741823;
        goto LABEL_93;
      }
      ++a1->RequestCount;
      a1->PendingOidRequest = p_Blink;
      if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
        && p_Blink->RequestType == NdisRequestSetInformation
        && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
      {
        v45 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
        if ( (unsigned int)(v45 - 1) <= 3 )
        {
          a1->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v21);
          p_PowerStateLock = &a1->PowerStateLock;
          v47 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
          if ( a1->PendingReturnNBLCount )
          {
            do
            {
              KeReleaseSpinLock(&a1->PowerStateLock, v47);
              NdisMSleep(0x32u);
              v47 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
            }
            while ( a1->PendingReturnNBLCount );
            p_PowerStateLock = &a1->PowerStateLock;
          }
          a1->PrevDriverPowerState = a1->DriverPowerState;
          a1->DriverPowerState = v45;
          KeReleaseSpinLock(p_PowerStateLock, v24);
          v24 = KeAcquireSpinLockRaiseToDpc(p_Lock);
          a1->MiniportThread = KeGetCurrentThread();
        }
      }
      if ( (a1->Flags & 0x20000) != 0 )
        LODWORD(v1[1].Flink) |= 0x2000u;
      LODWORD(v1[1].Flink) |= 0x10000u;
      v31 = &a1->Lock;
      v1 = 0LL;
      a1->MiniportThread = 0LL;
      if ( a1->MajorNdisVersion < 6u )
      {
        KeReleaseSpinLockFromDpcLevel(v31);
        v22 = ndisMOidRequestToRequest(a1, p_Blink);
        KeAcquireSpinLockAtDpcLevel(p_Lock);
      }
      else
      {
        KeReleaseSpinLock(v31, v24);
        Flags = a1->Flags;
        if ( (Flags & 0x20000) != 0 )
        {
          v22 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
        }
        else if ( (Flags & 0x80u) != 0 )
        {
          v22 = ndisMInvokeOidRequest(a1, p_Blink);
        }
        else
        {
          SelectiveSuspend = a1->SelectiveSuspend;
          if ( SelectiveSuspend )
          {
            for ( i = 0; ; ++i )
            {
              v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
              v36 = *((_DWORD *)SelectiveSuspend + 126);
              v37 = v35;
              if ( (v36 & 0x14) == 0 || (v36 & 0x200) != 0 )
                break;
              KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v35);
              if ( !i )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xFu,
                    0x24u,
                    (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
                    (char)a1);
                if ( (byte_140125101 & 8) != 0 )
                {
                  v49 = 33;
                  McTemplateK0qq_EtwWriteTransfer(
                    v48,
                    &SSResumeRequested,
                    &a1->InterfaceGuid,
                    (a1->NetLuid.Value >> 24) & 0xFFFFFF);
                }
              }
              ndisCancelIdleRequestSync(a1, 33, v54, 1u);
            }
            ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, 33LL, v54);
            ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 0LL, 33LL, v54);
            KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v37);
            p_Blink = v56;
            p_Lock = &a1->Lock;
          }
          v22 = ndisMInvokeOidRequest(a1, p_Blink);
          if ( v22 != 259 )
          {
            v38 = a1->SelectiveSuspend;
            if ( v38 )
            {
              v39 = a1->Flags;
              v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
              *((_DWORD *)v38 + 128) &= ~1u;
              v41 = v40;
              if ( (v39 & 0x80u) != 0
                && !*((_DWORD *)v38 + 128)
                && !*((_DWORD *)v38 + 129)
                && !*((_DWORD *)v38 + 132)
                && !*((_DWORD *)v38 + 133)
                && !*((_DWORD *)v38 + 130)
                && !*((_DWORD *)v38 + 131)
                && !*((_DWORD *)v38 + 144)
                && !*((_DWORD *)v38 + 127) )
              {
                if ( (a1->Flags & 0x80u) == 0 )
                  __int2c();
                a1->DriverHandle->CxBlock->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v38, v41);
            }
          }
        }
        v24 = KeAcquireSpinLockRaiseToDpc(p_Lock);
        v1 = 0LL;
      }
      --a1->RequestCount;
      if ( v22 != 259 )
      {
        p_Blink = a1->PendingOidRequest;
        a1->PendingOidRequest = 0LL;
LABEL_93:
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v24);
        goto LABEL_47;
      }
LABEL_46:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v24);
      v3 = AllRequestsCompletedEvent;
      if ( v22 != 259 )
      {
LABEL_47:
        v3 = AllRequestsCompletedEvent;
        if ( p_Blink )
        {
          v51 = 0LL;
          v52 = 0LL;
          v53 = 0LL;
          if ( (byte_140125101 & 0x40) != 0 )
            McTemplateK0jqxqdq_EtwWriteTransfer(
              v27,
              (unsigned int)&CompletingOidRequestMiniportEx,
              (_DWORD)a1 + 4008,
              (_DWORD)a1 + 4008,
              a1->IfIndex,
              a1->NetLuid.Value,
              p_Blink->DATA.QUERY_INFORMATION.Oid,
              v22);
          *(_QWORD *)&v53 = p_Blink;
          DWORD2(v53) = v22;
          *(_QWORD *)&v51 = a1;
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v51);
        }
      }
    }
  }
}
