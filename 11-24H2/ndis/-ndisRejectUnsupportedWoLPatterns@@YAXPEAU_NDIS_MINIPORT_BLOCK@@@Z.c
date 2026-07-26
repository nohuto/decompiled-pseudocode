/*
 * XREFs of ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B4CF8
 * Callers:
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2AC8 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B280 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisRejectUnsupportedWoLPatterns(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *i; // r8
  int v3; // edx
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  NDIS_PORT_NUMBER v7; // esi
  int v8; // eax
  int v9; // edx
  _DWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v12; // [rsp+B0h] [rbp-50h] BYREF

  v10[0] = 0;
  memset(&v12, 0, 248);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
LABEL_2:
  v10[0] = 0;
  for ( i = a1->WOLPatternList.Next; i; i = *(_SINGLE_LIST_ENTRY **)v4 )
  {
    if ( !ndisIsWoLPacketTypeSupported(SHIDWORD(i[7].Next), a1) )
    {
      v6 = *(_DWORD *)(v4 + 196);
      v10[0] = v6;
      v7 = *(_DWORD *)(v4 + 44);
      if ( !v6 )
        break;
      if ( v6 == v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v3,
            14,
            124,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            v6);
        }
      }
      else
      {
        memset(&v12, 0, 0xF8uLL);
        *(_DWORD *)&v12.NdisReserved[16] |= 8u;
        *(_QWORD *)&v12.NdisReserved[32] = &ndisIntReqGeneric;
        EtwActivityIdControl(3u, (LPGUID)&v12.NdisReserved[96]);
        *(_DWORD *)&v12.NdisReserved[16] |= 0x1800000u;
        v12.DATA.QUERY_INFORMATION.InformationBuffer = v10;
        v12.Header = (NDIS_OBJECT_HEADER)15466902;
        v12.DATA.QUERY_INFORMATION.Oid = -50265845;
        v12.RequestType = NdisRequestSetInformation;
        v12.PortNumber = v7;
        v12.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
        v8 = ndisQuerySetMiniport(a1, 0LL, &v12, 0, 0LL);
        if ( !v8 )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v10;
          StatusIndication.SourceHandle = a1;
          StatusIndication.StatusCode = 1073938513;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(a1, &StatusIndication);
          goto LABEL_2;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            125,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            v8);
        }
      }
      break;
    }
  }
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
}
