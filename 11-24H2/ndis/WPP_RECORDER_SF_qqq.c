/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x14003E6D0
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400070D0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D050 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D170 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D280 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisAllocateConfigurationString @ 0x14003D4B0 (ndisAllocateConfigurationString.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003D9C0 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14003E130 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003E220 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003E340 (-ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS.c)
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003E520 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140043BE0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140067C10 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140069D20 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006B640 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007AC50 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007B190 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x140089330 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisCoOidRequest @ 0x140089750 (NdisCoOidRequest.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BA00 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x140099088 (-ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x140099400 (NdisIMInitializeDeviceInstanceEx.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x14009A280 (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 *     ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x14009A558 (-ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E98C (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     NdisPDStartup @ 0x1400A4FD0 (NdisPDStartup.c)
 *     ?ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AA5F0 (-ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AAE90 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AC630 (-ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AC730 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400ADA24 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B3460 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B36B0 (-ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B4260 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B4814 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B5474 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA568 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostTaskOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA6A0 (-ndisOidPostTaskOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB420 (-ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFC0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BC320 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1400BD6E0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE794 (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisCmActivateVc @ 0x1400D0870 (NdisCmActivateVc.c)
 *     NdisCoRequest @ 0x1400D23A0 (NdisCoRequest.c)
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E00B0 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0740 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3190 (-ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x14013C410 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x140148424 (ndisNsiGetIfRcvAddressRodInformation.c)
 *     ndisIfGetMiniportStatistics @ 0x140150D30 (ndisIfGetMiniportStatistics.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1401517F0 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016CC70 (ndisNsiGetInterfaceRodInformation.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqq(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // r11
  unsigned int v11; // edi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, va, 8LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v14, &a6, 8LL, &a7, 8LL, va);
}
