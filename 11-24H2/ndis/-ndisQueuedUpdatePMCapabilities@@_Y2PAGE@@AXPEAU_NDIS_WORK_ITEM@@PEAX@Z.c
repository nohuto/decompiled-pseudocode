/*
 * XREFs of ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140167B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140084010 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2220 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2AC8 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // edx
  struct _NDIS_OID_REQUEST v8; // [rsp+30h] [rbp-128h] BYREF

  memset(&v8, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      117,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( ndisUpdatePMCurrentCapabilities(MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (MiniportAdapterHandle->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
    {
      *(_DWORD *)&v8.NdisReserved[16] |= 8u;
      *(_QWORD *)&v8.NdisReserved[32] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v8.NdisReserved[96]);
      *(_DWORD *)&v8.NdisReserved[16] |= 0x100000u;
      v8.Header = (NDIS_OBJECT_HEADER)15466902;
      v8.DATA.QUERY_INFORMATION.Oid = -50265847;
      *(_QWORD *)&v8.RequestType = 1LL;
      v8.DATA.QUERY_INFORMATION.InformationBuffer = &MiniportAdapterHandle->PMCurrentParameters;
      v8.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
      v5 = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, &v8, 0, 0LL);
      if ( v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            14,
            118,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            v5);
        }
      }
    }
    if ( (MiniportAdapterHandle->MajorNdisVersion > 6u
       || MiniportAdapterHandle->MajorNdisVersion == 6 && MiniportAdapterHandle->MinorNdisVersion >= 0x14u)
      && (MiniportAdapterHandle->PMCurrentParameters.EnabledWoLPacketPatterns & 2) != 0 )
    {
      ndisAddWoLMagicPacket(MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport(MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      119,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
