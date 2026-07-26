/*
 * XREFs of ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B1B0
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14005F180 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14003B520 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x140061F90 (McTemplateK0jqqqqqqqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dq @ 0x140063790 (WPP_RECORDER_SF_dq_ea_140063790.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfSendPmParametersForSx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  unsigned int MediaSpecificWakeUpEvents; // ecx
  int v4; // r9d
  unsigned int SupportedWoLPacketPatterns; // edx
  int v6; // eax
  int v7; // edx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  struct _NDIS_OID_REQUEST v9; // [rsp+80h] [rbp-80h] BYREF
  __int64 v10; // [rsp+170h] [rbp+70h]
  __int128 v11; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v12; // [rsp+190h] [rbp+90h]

  if ( ndisReferenceMiniportByHandle(a1, 1u, MPREF_PM_OID) )
  {
    v11 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
    MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    v12 = MediaSpecificWakeUpEvents;
    HIDWORD(v11) = 0;
    if ( ndisAoAcCapable || ndisAoAcTest )
    {
      v4 = 0;
      DWORD1(v11) = 0;
    }
    else
    {
      v4 = DWORD1(v11);
    }
    SupportedWoLPacketPatterns = a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns;
    if ( (SupportedWoLPacketPatterns & 2) != 0 )
      DWORD1(v11) = v4 | 2;
    if ( (byte_14011B103 & 4) != 0 )
      McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        MediaSpecificWakeUpEvents,
        SupportedWoLPacketPatterns,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->PMAdvertisedCapabilities.Flags,
        SupportedWoLPacketPatterns,
        a1->PMAdvertisedCapabilities.SupportedProtocolOffloads,
        a1->PMAdvertisedCapabilities.SupportedWakeUpEvents,
        a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents);
    memset(&v9.NdisReserved[40], 0, 128);
    v10 = 0LL;
    *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
    memset(&v9, 0, 32);
    *(&v9.DATA.METHOD_INFORMATION.Oid + 1) = 0;
    memset(&v9.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
    *(_DWORD *)&v9.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v9.NdisReserved[96]);
    v9.Header = (NDIS_OBJECT_HEADER)15466902;
    v9.DATA.QUERY_INFORMATION.InformationBuffer = &v11;
    v9.DATA.QUERY_INFORMATION.Oid = -50265847;
    *(_QWORD *)&v9.RequestType = 1LL;
    v9.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
    v6 = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          11,
          (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
          v6,
          (char)a1);
      }
    }
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    CxBlockFromMiniport->Chars.EvtCxUpdatePMParameters(a1->MiniportAdapterContext, (_NDIS_PM_PARAMETERS *)&v11);
    ndisDereferenceMiniport(a1, 0xEu);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      10,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
  }
}
