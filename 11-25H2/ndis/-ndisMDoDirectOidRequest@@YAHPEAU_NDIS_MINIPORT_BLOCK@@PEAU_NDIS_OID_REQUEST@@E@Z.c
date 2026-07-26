/*
 * XREFs of ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0
 * Callers:
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1400403A0 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x140069780 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     ndisMInvokeDirectOidRequest @ 0x140028310 (ndisMInvokeDirectOidRequest.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char a3)
{
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rbp
  unsigned int v7; // edi
  KIRQL v8; // r12
  unsigned int DirectOidRequestCount; // ecx
  unsigned int PnPFlags; // edx
  KIRQL v11; // dl
  NDIS_REQUEST_TYPE RequestType; // eax
  int v13; // edx
  int v14; // edx
  KIRQL v15; // al
  bool v16; // zf

  AllDirectRequestsCompletedEvent = 0LL;
  v7 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      a2);
  if ( !a3 && a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync(a1, 1LL, 50LL, a2, 0) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        11,
        19,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a2);
    }
    v7 = 259;
    goto LABEL_24;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  DirectOidRequestCount = a1->DirectOidRequestCount;
  if ( DirectOidRequestCount >= 0x4E20 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x14u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a1,
        (char)a2,
        32,
        a1->DirectOidRequestCount);
    v7 = -1073741670;
    goto LABEL_8;
  }
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x20000) != 0 )
  {
    v7 = -1073676276;
LABEL_8:
    v11 = v8;
    a1->MiniportThread = 0LL;
    goto LABEL_18;
  }
  if ( (a1->Flags & 0x80000) != 0 )
  {
    v7 = -1073676275;
    goto LABEL_8;
  }
  RequestType = a2->RequestType;
  if ( RequestType == NdisRequestQueryStatistics
    && ((PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
  {
    v7 = -2147483633;
    goto LABEL_8;
  }
  v13 = PnPFlags & 0x20100;
  if ( v13 || a1->CurrentDevicePowerState > PowerDeviceD0 )
  {
    if ( (RequestType & 0xFFFFFFFD) != 0 )
    {
      if ( RequestType == NdisRequestSetInformation )
      {
        a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        v7 = -1071448017;
        if ( v13 )
          v7 = 0;
      }
      else if ( RequestType == NdisRequestMethod )
      {
        a2->DATA.METHOD_INFORMATION.BytesRead = 0;
      }
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v8);
    goto LABEL_19;
  }
  a1->DirectOidRequestCount = DirectOidRequestCount + 1;
  *(_DWORD *)&a2->NdisReserved[16] |= 0x10000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  v7 = ndisMInvokeDirectOidRequest(&a1->Header, a2);
  if ( v7 == 259 )
    goto LABEL_24;
  v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v16 = a1->DirectOidRequestCount-- == 1;
  if ( v16 && a1->AllDirectRequestsCompletedEvent )
  {
    AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
    a1->AllDirectRequestsCompletedEvent = 0LL;
  }
  a1->MiniportThread = 0LL;
  v11 = v15;
LABEL_18:
  KeReleaseSpinLock(&a1->Lock, v11);
LABEL_19:
  if ( !a3 && a1->SelectiveSuspend )
    ndisClearBusy(a1, 1LL, 50LL);
  if ( AllDirectRequestsCompletedEvent )
    KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
LABEL_24:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      11,
      21,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      v7);
  }
  return v7;
}
