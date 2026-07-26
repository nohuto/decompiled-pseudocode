/*
 * XREFs of ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1400876A0
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038B60 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x14004E080 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140050D80 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140016CB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, char a3)
{
  struct _NDIS_OID_REQUEST *v3; // r14
  unsigned int v6; // esi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // r12
  int v9; // edx
  KIRQL v10; // bl
  NDIS_REQUEST_TYPE RequestType; // ecx
  unsigned int v12; // edx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r15
  NDIS_OID Oid; // ebp
  NDIS_STATUS v15; // eax
  struct _NDIS_OID_REQUEST *v16; // rbx
  _NDIS_OID_REQUEST *v17; // rdx
  KIRQL v18; // al
  bool v19; // zf
  KIRQL v20; // dl
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  unsigned int Flags; // ebx
  KIRQL v23; // al
  KIRQL v24; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  char v27[8]; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v30; // [rsp+88h] [rbp+10h] BYREF

  v3 = a2;
  v6 = -1073741823;
  AllDirectRequestsCompletedEvent = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      18,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      v28);
  }
  if ( !a3
    && a1->SelectiveSuspend
    && !((a1->Flags & 0x80u) == 0
       ? ndisWdmSetBusyAsync((__int64)a1, 1, 0x32u, (__int64)v3, 0)
       : ndisWdfSetBusyAsync((__int64)a1, 1u, 0x32u, (__int64)v3, 0)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        11,
        19,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v3);
    }
    v6 = 259;
    goto LABEL_69;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a1->DirectOidRequestCount >= 0x4E20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x14u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a1,
        (char)v3,
        32,
        a1->DirectOidRequestCount);
    v6 = -1073741670;
    goto LABEL_53;
  }
  if ( (a1->PnPFlags & 0x20000) != 0 )
  {
    v6 = -1073676276;
LABEL_53:
    a1->MiniportThread = 0LL;
    v20 = v10;
LABEL_54:
    KeReleaseSpinLock(&a1->Lock, v20);
    if ( !a3 )
    {
      SelectiveSuspend = a1->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        Flags = a1->Flags;
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
        --*((_DWORD *)SelectiveSuspend + 132);
        v24 = v23;
        if ( (Flags & 0x80u) != 0
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
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v24);
      }
    }
    if ( AllDirectRequestsCompletedEvent )
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
    goto LABEL_69;
  }
  if ( (a1->Flags & 0x80000) != 0 )
  {
    v6 = -1073676275;
    goto LABEL_53;
  }
  RequestType = v3->RequestType;
  if ( RequestType == NdisRequestQueryStatistics
    && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
  {
    v6 = -2147483633;
    goto LABEL_53;
  }
  v12 = a1->PnPFlags & 0x20100;
  if ( v12 || a1->CurrentDevicePowerState > PowerDeviceD0 )
  {
    if ( (RequestType & 0xFFFFFFFD) != 0 )
    {
      if ( RequestType == NdisRequestSetInformation )
      {
        v6 = -1071448017;
        v3->DATA.QUERY_INFORMATION.BytesWritten = v3->DATA.QUERY_INFORMATION.InformationBufferLength;
        if ( v12 )
          v6 = 0;
      }
      else if ( RequestType == NdisRequestMethod )
      {
        v3->DATA.METHOD_INFORMATION.BytesRead = 0;
      }
    }
    else
    {
      v3->DATA.QUERY_INFORMATION.BytesWritten = 0;
    }
    goto LABEL_53;
  }
  ++a1->DirectOidRequestCount;
  *(_DWORD *)&v3->NdisReserved[16] |= 0x10000u;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
  DriverHandle = a1->DriverHandle;
  Oid = v3->DATA.QUERY_INFORMATION.Oid;
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v27 = Oid;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      *(_QWORD *)v27);
  }
  v15 = ndisOidCloneForCompatibility(&a1->Header, v3, 0, &v30);
  v16 = v30;
  v6 = v15;
  if ( !v15 )
  {
    if ( v30 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v15 + 11,
        v15 + 16,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v3,
        (char)v30,
        v30->DATA.QUERY_INFORMATION.Oid);
    v17 = v3;
    if ( v16 )
      v17 = v16;
    v6 = DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler(a1->MiniportAdapterContext, v17);
  }
  if ( v6 != 259 && v16 )
    ndisOidFreeInternalCloneRequest(&a1->Header, v16, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      v29);
  }
  if ( v6 != 259 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v19 = a1->DirectOidRequestCount-- == 1;
    v20 = v18;
    if ( v19 && a1->AllDirectRequestsCompletedEvent )
    {
      AllDirectRequestsCompletedEvent = a1->AllDirectRequestsCompletedEvent;
      a1->AllDirectRequestsCompletedEvent = 0LL;
    }
    a1->MiniportThread = 0LL;
    goto LABEL_54;
  }
LABEL_69:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v6;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)v3,
      v29);
  }
  return v6;
}
