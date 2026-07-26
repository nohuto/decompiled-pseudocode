/*
 * XREFs of ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BC834
 * Callers:
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA8F8 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005D3A0 (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisRejectUnsupportedPMOffloads(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *i; // r8
  __int64 v3; // r8
  int v4; // r9d
  int v5; // ecx
  NDIS_PORT_NUMBER v6; // esi
  int v7; // ecx
  _QWORD v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+B0h] [rbp-50h] BYREF

  memset(&v10, 0, 248);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  LODWORD(v8[0]) = 0;
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
LABEL_2:
  LODWORD(v8[0]) = 0;
  for ( i = a1->PMProtocolOffloadList.Next; i; i = *(_SINGLE_LIST_ENTRY **)v3 )
  {
    if ( !ndisIsPMProtocolOffloadSupported(SHIDWORD(i[7].Next), a1) )
    {
      v5 = *(_DWORD *)(v3 + 196);
      LODWORD(v8[0]) = v5;
      v6 = *(_DWORD *)(v3 + 44);
      if ( !v5 )
        break;
      if ( v5 == v4 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x7Au,
            (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
            v5,
            v8[0]);
      }
      else
      {
        memset(&v10, 0, 0xF8uLL);
        *(_DWORD *)&v10.NdisReserved[16] |= 8u;
        *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
        *(_DWORD *)&v10.NdisReserved[16] |= 0x1800000u;
        v10.DATA.QUERY_INFORMATION.InformationBuffer = v8;
        v10.Header = (NDIS_OBJECT_HEADER)15466902;
        v10.DATA.QUERY_INFORMATION.Oid = -50265841;
        v10.RequestType = NdisRequestSetInformation;
        v10.PortNumber = v6;
        v10.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
        v7 = ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
        if ( !v7 )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v8;
          StatusIndication.SourceHandle = a1;
          StatusIndication.StatusCode = 1073938514;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(a1, &StatusIndication);
          goto LABEL_2;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x7Bu,
            (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
            v7,
            v8[0]);
      }
      break;
    }
  }
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
}
