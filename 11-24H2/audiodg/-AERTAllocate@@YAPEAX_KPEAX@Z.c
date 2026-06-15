/*
 * XREFs of ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040
 * Callers:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14000C7F4 (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCD0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D5BC (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE88 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x1400197C0 (-AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003CE3C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004194C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140053520 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x1400536F0 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080390 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080470 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080550 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080630 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A464 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A568 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14008C420 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400593C4 (--_U@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140074588 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
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
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, (_DWORD)a2, a3, 6, (char)a2, a1, 0, 0);
  return (void *)v7;
}
