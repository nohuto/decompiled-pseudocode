/*
 * XREFs of ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C
 * Callers:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14000C7F4 (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCD0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCF0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x14000CFC0 (--_ECPrivateAPO@@UEAAPEAXI@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D5BC (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE88 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?ReleaseConnection@CConnectionNode@@QEAAXXZ @ 0x14000EF6C (-ReleaseConnection@CConnectionNode@@QEAAXXZ.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x14001DAA0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x1400217F0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140039150 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003CE3C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     wil::details::lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___::_lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___ @ 0x14003E010 (wil--details--lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___--_lambda_call__lambda_4ad8.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004194C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140053520 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x1400536F0 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053C50 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ??3?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@SAXPEAX@Z @ 0x140055148 (--3-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x1400553C8 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080390 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080470 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080550 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@.c)
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080630 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V0@.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140080EC4 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 *     ?Initialize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400832F0 (-Initialize@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400836A0 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A464 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A568 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14008C420 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AERTGetDLLRTHeap(void)
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  Context = 0LL;
  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
