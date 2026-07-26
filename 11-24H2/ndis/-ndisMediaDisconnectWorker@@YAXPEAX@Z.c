/*
 * XREFs of ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1400A87E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400810F0 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisMediaDisconnectWorker(_QWORD *P)
{
  __int64 v1; // rbx
  POWER_STATE v3; // edi
  POWER_STATE v4; // r14d
  struct _NDIS_OID_REQUEST v5; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v6[17]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v7; // [rsp+141h] [rbp+41h]
  char v8; // [rsp+143h] [rbp+43h]

  v1 = P[4];
  memset(&v5, 0, 248);
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      21,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4420) & 8) != 0 )
  {
    v3.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 1272);
    v4.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 1108);
    *(_DWORD *)v6 = 1311360;
    *(_DWORD *)&v6[12] = 1;
    memset(&v5, 0, 0xF8uLL);
    *(_DWORD *)&v5.NdisReserved[16] |= 8u;
    *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v5.NdisReserved[96]);
    v5.PortNumber = 0;
    v5.DATA.QUERY_INFORMATION.InformationBuffer = v6;
    v5.Header = (NDIS_OBJECT_HEADER)15466902;
    v5.DATA.QUERY_INFORMATION.Oid = -50265847;
    v5.RequestType = NdisRequestSetInformation;
    v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
    if ( !(unsigned int)ndisQuerySetMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0LL, &v5, 0, 0LL) )
    {
      *(_DWORD *)(v1 + 1332) = *(_DWORD *)(v1 + 1268);
      if ( v3.SystemState >= v4.SystemState )
        v3.SystemState = v4.SystemState;
      ndisRequestDeviceLowPower(
        (struct _NDIS_MINIPORT_BLOCK *)v1,
        v3,
        (PREQUEST_POWER_COMPLETE)ndisMediaDisconnectComplete,
        (PVOID)v1,
        NdisMEventDx_D3DTimeout);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xBu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      22,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v1);
}
