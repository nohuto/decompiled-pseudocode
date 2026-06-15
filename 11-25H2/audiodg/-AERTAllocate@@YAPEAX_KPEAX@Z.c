/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010
 * Callers:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14000C7C4 (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCA0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D58C (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D94C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE58 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x140019AC0 (-AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x140035CF0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003D13C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140041C4C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053370 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140054740 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140054910 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082160 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082240 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082320 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082400 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A9E4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008AAE8 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14008C9A0 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400594B4 (--_U@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140076A78 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

void *__fastcall AERTAllocate(unsigned __int64 a1, void *a2, int a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  if ( g_bSkipRTHeap )
    return operator new[](a1);
  v7 = 0LL;
  if ( a2 && (unsigned int)RtlAllocateMemoryBlockLookaside(a2, a1, &v7) == -1073741670 )
  {
    v6 = 0x100000LL;
    if ( a1 > 0x100000 )
      v6 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v6);
    RtlAllocateMemoryBlockLookaside(a2, a1, &v7);
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, (_DWORD)a2, a3, 6, (char)a2, a1, 0, 0);
  return (void *)v7;
}
