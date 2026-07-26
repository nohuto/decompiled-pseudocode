/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x14000B1B0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqqd @ 0x140015C00 (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140016320 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x140038970 (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x140038A40 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1400714A0 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140085240 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *v1; // rsi
  _NDIS_OID_REQUEST *p_Blink; // rbp
  _LIST_ENTRY *v4; // r14
  char v5; // di
  KIRQL v6; // r8
  unsigned int WSyncFlags; // edx
  _LIST_ENTRY *p_OidRequestList; // rcx
  _LIST_ENTRY *Flink; // r9
  _KEVENT *v10; // rax
  _LIST_ENTRY *v11; // rax
  KIRQL v12; // al
  NDIS_OID Oid; // r12d
  char v14; // al
  int v15; // edx
  int v16; // r8d
  char v17; // si
  char v18; // di
  KIRQL v19; // al
  KIRQL v20; // r15
  unsigned int Flags; // ecx
  int v22; // edi
  NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int PnPFlags; // edx
  _DEVICE_POWER_STATE v25; // esi
  unsigned __int64 *p_PowerStateLock; // rdi
  KIRQL v27; // al
  unsigned __int64 *p_Lock; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  unsigned int v30; // edi
  KIRQL v31; // al
  KIRQL v32; // r14
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v34; // ecx
  int Timeout; // [rsp+20h] [rbp-A8h]
  struct _KTIMER Timer; // [rsp+50h] [rbp-78h] BYREF
  int v37; // [rsp+D0h] [rbp+8h] BYREF
  _KEVENT *AllRequestsCompletedEvent; // [rsp+D8h] [rbp+10h]

  v1 = 0LL;
  AllRequestsCompletedEvent = 0LL;
  while ( 1 )
  {
    v37 = -1073741823;
    p_Blink = 0LL;
    v4 = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) != 0 )
      goto LABEL_15;
    p_OidRequestList = &a1->OidRequestList;
    Flink = a1->OidRequestList.Flink;
    if ( Flink != &a1->OidRequestList && (a1->PnPFlags & 0x20000) == 0 )
    {
      v4 = a1->OidRequestList.Flink;
      a1->WSyncFlags = WSyncFlags | 1;
      if ( Flink->Blink != p_OidRequestList || (v11 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      p_OidRequestList->Flink = v11;
      p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v11->Blink = p_OidRequestList;
      a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
LABEL_15:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      goto LABEL_16;
    }
    if ( (a1->PnPFlags & 0x20000) != 0
      && (v5 = 1, !ndisNDPQualityWinter26IsEnabled)
      && (v10 = a1->AllRequestsCompletedEvent) != 0LL )
    {
      AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      a1->AllRequestsCompletedEvent = 0LL;
      v1 = v10;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( v5 )
        ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    }
LABEL_16:
    if ( ndisNDPQualityWinter26IsEnabled )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      if ( a1->AllRequestsCompletedEvent )
      {
        v1 = a1->AllRequestsCompletedEvent;
        AllRequestsCompletedEvent = v1;
        a1->AllRequestsCompletedEvent = 0LL;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v12);
    }
    if ( v1 )
    {
      KeSetEvent(v1, 0, 0);
      AllRequestsCompletedEvent = 0LL;
    }
    if ( !v4 )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    v14 = ndisPreProcessOid(a1, p_Blink, a1->Header.Type, &v37);
    v17 = v37;
    v18 = v14;
    if ( (byte_14011B101 & 0x40) != 0 )
      McTemplateK0jqxptdq_EtwWriteTransfer(
        a1->IfIndex,
        v15,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v14,
        v37,
        Oid);
    if ( v18 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          v16,
          20,
          Timeout,
          Oid,
          (char)p_Blink,
          (char)a1,
          v17);
      v1 = AllRequestsCompletedEvent;
    }
    else
    {
      v19 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      v20 = v19;
      Flags = a1->Flags;
      v37 = 0;
      if ( (Flags & 0x80000) != 0 )
      {
        v22 = -1073676275;
        goto LABEL_85;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v22 = -2147483633;
        goto LABEL_85;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v22 = -1073676280;
        goto LABEL_85;
      }
      if ( (PnPFlags & 0x20000) == 0
        && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = p_Blink;
        if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
          && p_Blink->RequestType == NdisRequestSetInformation
          && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v25 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
          if ( (unsigned int)(v25 - 1) <= 3 )
          {
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v19);
            p_PowerStateLock = &a1->PowerStateLock;
            v27 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
            if ( a1->PendingReturnNBLCount )
            {
              do
              {
                KeReleaseSpinLock(&a1->PowerStateLock, v27);
                memset(&Timer, 0, sizeof(Timer));
                KeInitializeTimerEx(&Timer, SynchronizationTimer);
                KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
                KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
                v27 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
              }
              while ( a1->PendingReturnNBLCount );
              p_PowerStateLock = &a1->PowerStateLock;
            }
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v25;
            KeReleaseSpinLock(p_PowerStateLock, v20);
            v20 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
          }
        }
        if ( (a1->Flags & 0x20000) != 0 )
          LODWORD(v4[1].Flink) |= 0x2000u;
        LODWORD(v4[1].Flink) |= 0x10000u;
        p_Lock = &a1->Lock;
        a1->MiniportThread = 0LL;
        if ( a1->MajorNdisVersion < 6u )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v22 = ndisMOidRequestToRequest(a1, p_Blink);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v20);
          if ( (a1->Flags & 0x20000) != 0 )
          {
            v22 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
          }
          else if ( (a1->Flags & 0x80u) == 0 )
          {
            if ( a1->SelectiveSuspend )
            {
              if ( (a1->Flags & 0x80u) == 0 )
                ndisWdmSetBusySync(a1, 33LL, Oid);
              else
                ndisWdfSetBusySync(a1, 33LL, Oid);
            }
            v37 = ndisMInvokeOidRequest(a1, p_Blink);
            v22 = v37;
            if ( v37 != 259 )
            {
              SelectiveSuspend = a1->SelectiveSuspend;
              if ( SelectiveSuspend )
              {
                v30 = a1->Flags;
                v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
                *((_DWORD *)SelectiveSuspend + 128) &= ~1u;
                v32 = v31;
                if ( (v30 & 0x80u) != 0
                  && !*((_DWORD *)SelectiveSuspend + 128)
                  && !*((_DWORD *)SelectiveSuspend + 129)
                  && !*((_DWORD *)SelectiveSuspend + 132)
                  && !*((_DWORD *)SelectiveSuspend + 133)
                  && !*((_DWORD *)SelectiveSuspend + 130)
                  && !*((_DWORD *)SelectiveSuspend + 131)
                  && !*((_DWORD *)SelectiveSuspend + 144)
                  && !*((_DWORD *)SelectiveSuspend + 127) )
                {
                  CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
                  CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
                }
                KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v32);
                v22 = v37;
              }
            }
          }
          else
          {
            v22 = ndisMInvokeOidRequest(a1, p_Blink);
          }
          v20 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        }
        --a1->RequestCount;
        if ( v22 != 259 )
        {
          p_Blink = a1->PendingOidRequest;
          a1->PendingOidRequest = 0LL;
        }
        goto LABEL_85;
      }
      if ( (RequestType & 0xFFFFFFFD) == 0 )
      {
        p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_84:
        v22 = -1073741823;
        goto LABEL_85;
      }
      if ( RequestType != NdisRequestSetInformation )
      {
        if ( RequestType != NdisRequestMethod )
        {
          v22 = v37;
          goto LABEL_85;
        }
        p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
        goto LABEL_84;
      }
      v22 = -1071448017;
      if ( (PnPFlags & 0x20000) != 0 )
        v22 = -1073741823;
      p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
LABEL_85:
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v20);
      v1 = AllRequestsCompletedEvent;
      if ( v22 != 259 && p_Blink )
      {
        memset(&Timer, 0, 48);
        if ( (byte_14011B101 & 0x40) != 0 )
          McTemplateK0jqxqdq_EtwWriteTransfer(
            v34,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v22);
        Timer.TimerListEntry.Flink = (_LIST_ENTRY *)p_Blink;
        LODWORD(Timer.TimerListEntry.Blink) = v22;
        *(_QWORD *)&Timer.Header.Lock = a1;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&Timer);
      }
    }
  }
}
