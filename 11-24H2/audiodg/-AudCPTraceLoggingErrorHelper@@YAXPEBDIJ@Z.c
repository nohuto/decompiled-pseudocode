/*
 * XREFs of ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140022C08 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050DD0 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?GetCurrentPadding@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140051750 (-GetCurrentPadding@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051C98 (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCont.c)
 *     ?ReleaseInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140051D00 (-ReleaseInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 *     ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x1400523D0 (-AddTimestampMessage@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400529D0 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?ReleaseOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140052D70 (-ReleaseOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileCo.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053234 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     ?GetBufferSize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140081F20 (-GetBufferSize@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 *     ?GetCharacteristics@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAK@Z @ 0x140082720 (-GetCharacteristics@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetFrameFormat@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140082F50 (-GetFrameFormat@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCon.c)
 *     ?GetFrameFormat@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140082FB0 (-GetFrameFormat@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCon.c)
 *     ?GetFramesPerPacket@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAI@Z @ 0x140083010 (-GetFramesPerPacket@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@.c)
 *     ?GetFramesPerPacket@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAI@Z @ 0x140083060 (-GetFramesPerPacket@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     ?GetFrequency@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K@Z @ 0x1400830B0 (-GetFrequency@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     ?GetLatency@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEA_J@Z @ 0x140083120 (-GetLatency@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControl.c)
 *     ?GetLatency@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_J@Z @ 0x140083170 (-GetLatency@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControl.c)
 *     ?GetNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x1400831C0 (-GetNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140084818 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008486C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140084928 (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?Reset@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140084FE0 (-Reset@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?SetEventHandle@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAX@Z @ 0x140085110 (-SetEventHandle@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0.c)
 *     ?Start@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085250 (-Start@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@.c)
 *     ?Stop@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085360 (-Stop@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@.c)
 *     ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x1400868C0 (-AddTimestampMessage@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControl.c)
 *     ?GetDevicePosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087630 (-GetDevicePosition@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?GetPosition@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087930 (-GetPosition@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     ?GetDevicePosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087BD0 (-GetDevicePosition@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlDa.c)
 *     ?GetPosition@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEA_K0@Z @ 0x140087DE0 (-GetPosition@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 *     ?GetPosition_NonOffload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x140088048 (-GetPosition_NonOffload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileCont.c)
 *     ?GetPosition_Offload@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAJPEA_K0@Z @ 0x1400883C8 (-GetPosition_Offload@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400024C0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_1400024C0.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 */

void __fastcall AudCPTraceLoggingErrorHelper(const char *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  const unsigned __int16 *v5; // r11
  int v6; // [rsp+40h] [rbp-18h] BYREF
  const unsigned __int16 *v7; // [rsp+48h] [rbp-10h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1400C3478 > 2 )
  {
    if ( tlgKeywordOn((__int64)&dword_1400C3478, 1LL) )
    {
      v8 = v3;
      v6 = v4;
      v7 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v1,
        (__int64)&unk_1400B0E4C,
        v2,
        v3,
        &v7,
        (__int64)&v6,
        (__int64)&v8);
    }
  }
}
