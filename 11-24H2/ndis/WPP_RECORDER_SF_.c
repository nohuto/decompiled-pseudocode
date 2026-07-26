/*
 * XREFs of WPP_RECORDER_SF_ @ 0x14001DD50
 * Callers:
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x140005DC0 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x140007580 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400076B0 (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 *     NdisFOidRequestComplete @ 0x14000C810 (NdisFOidRequestComplete.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400173A0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x14001B5E0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001C100 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001D9D0 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001FB00 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisLwmCreateIrpHandler @ 0x14002BD70 (ndisLwmCreateIrpHandler.c)
 *     IsFileObjectForNetworkInterface @ 0x14002BF30 (IsFileObjectForNetworkInterface.c)
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 *     NdisLWMInitializeNetworkInterface @ 0x14002D300 (NdisLWMInitializeNetworkInterface.c)
 *     NdisRetreatNetBufferListDataStart @ 0x14003CB90 (NdisRetreatNetBufferListDataStart.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003F570 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140040490 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisFreeSharedMemory @ 0x140049470 (NdisFreeSharedMemory.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049980 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMCoRequestComplete @ 0x14004B150 (NdisMCoRequestComplete.c)
 *     NdisAllocateNetBufferListPool @ 0x140055B30 (NdisAllocateNetBufferListPool.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x14005AE50 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     NdisOpenProtocolConfiguration @ 0x14005BF80 (NdisOpenProtocolConfiguration.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1400668D0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140067560 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14006F210 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     NdisWriteEventLogEntry @ 0x1400708B0 (NdisWriteEventLogEntry.c)
 *     NdisReleaseNicActive @ 0x140075FC0 (NdisReleaseNicActive.c)
 *     NdisTryAcquireNicActive @ 0x1400761B0 (NdisTryAcquireNicActive.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140080060 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092830 (-ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400929E4 (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisLWMDeregisterMiniportDriver @ 0x140093170 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ndisEtwRegisterGuids @ 0x1400A2FFC (ndisEtwRegisterGuids.c)
 *     ndisMapOpenByName @ 0x1400A32B8 (ndisMapOpenByName.c)
 *     ?NdisGetVersion640Shim@@YAIXZ @ 0x1400AE340 (-NdisGetVersion640Shim@@YAIXZ.c)
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AFAA8 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B2458 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B265C (-ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400B2728 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B2808 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B50F4 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B5474 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B57F8 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6B08 (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6DD0 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C085C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C1BE0 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1400C1E10 (ndisKillReceiveWorkerThreadPool.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C4F04 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     ndisMEmitTraceRundown @ 0x1400C50DC (ndisMEmitTraceRundown.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400C9B20 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisNsiQueuedTimestampingChangeNotification @ 0x1400CBFA0 (ndisNsiQueuedTimestampingChangeNotification.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400CD33C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1400CECE8 (-ndisStopNsiProvider@@YAXXZ.c)
 *     NdisCmMakeCallComplete @ 0x1400CFF70 (NdisCmMakeCallComplete.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     NdisCoCreateVc @ 0x1400D0AC0 (NdisCoCreateVc.c)
 *     NdisMCmCreateVc @ 0x1400D19B0 (NdisMCmCreateVc.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D2934 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D2B60 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2FA0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1400D3E90 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoIndicateStatus @ 0x1400D4150 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1400D4250 (NdisMCoIndicateStatusEx.c)
 *     NdisCloseFile @ 0x1400D47D0 (NdisCloseFile.c)
 *     NdisOpenFile @ 0x1400D4880 (NdisOpenFile.c)
 *     NdisUnmapFile @ 0x1400D4D50 (NdisUnmapFile.c)
 *     NdisInitializeWrapper @ 0x1400D7080 (NdisInitializeWrapper.c)
 *     NdisTerminateWrapper @ 0x1400D7180 (NdisTerminateWrapper.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400DA9BC (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     ndisValidateSGDmaDescription @ 0x1400DB0FC (ndisValidateSGDmaDescription.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1400DB5E0 (NdisMDeregisterScatterGatherDma.c)
 *     KLoaderDereferenceModule @ 0x1400DC740 (KLoaderDereferenceModule.c)
 *     ?ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z @ 0x1400DCD98 (-ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DD68C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1A80 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E40C0 (NdisRegisterUserThreadExitCallback.c)
 *     NdisUnregisterUserThreadExitCallback @ 0x1400E4510 (NdisUnregisterUserThreadExitCallback.c)
 *     ndisThreadStateDelete @ 0x1400E48A0 (ndisThreadStateDelete.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E4B78 (-Register@TriageData@@IEAAJXZ.c)
 *     ?Unregister@TriageData@@IEAAXXZ @ 0x1400E4C08 (-Unregister@TriageData@@IEAAXXZ.c)
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140136100 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 *     NdisSetAoAcOptions @ 0x140136790 (NdisSetAoAcOptions.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140136D84 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ndisHandleLegacyBindIoctl @ 0x1401390A8 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401409A8 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140140D84 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x140146BE4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140146D54 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140148B0C (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140148BB8 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     NdisRegisterPoll @ 0x14014A2E0 (NdisRegisterPoll.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x14014AA10 (ndisRegisterScatterGatherDmaForGenericObject.c)
 *     CreateKModule @ 0x14014ACA4 (CreateKModule.c)
 *     GetModuleParameters @ 0x14014AE30 (GetModuleParameters.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x14014B51C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x14014B668 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015AC50 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140162A00 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     BuildServicePath @ 0x140166040 (BuildServicePath.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140169140 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x140169500 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisMDeregisterDmaChannel @ 0x140170F00 (NdisMDeregisterDmaChannel.c)
 *     NdisMapFile @ 0x140172AC0 (NdisMapFile.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140173CB0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140182FC0 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018C098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018C23C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x14018D72C (-ndisInitializePerProcRcvTracker@@YAXXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x14018E9AC (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x14001DD50
 * Reason: Hex-Rays returned no pseudocode for 0x14001DD50
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014001DD50: mov     [rsp+arg_0], rbx
 * 000000014001DD55: mov     [rsp+arg_8], rsi
 * 000000014001DD5A: mov     [rsp+arg_10], rdi
 * 000000014001DD5F: push    r14
 * 000000014001DD61: sub     rsp, 30h
 * 000000014001DD65: mov     ebx, r8d
 * 000000014001DD68: mov     r14, rcx
 * 000000014001DD6B: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014001DD72: mov     r11d, r8d
 * 000000014001DD75: shr     r11, 10h
 * 000000014001DD79: lea     r10d, [rbx-1]
 * 000000014001DD7D: movzx   edi, r9w
 * 000000014001DD81: mov     r8d, r10d
 * 000000014001DD84: movzx   esi, dl
 * 000000014001DD87: shr     r8, 5
 * 000000014001DD8B: and     r10d, 1Fh
 * 000000014001DD8F: and     r8d, 7FFh
 * 000000014001DD96: lea     rax, [r11+r11*4]
 * 000000014001DD9A: lea     rax, [r8+rax*4]
 * 000000014001DD9E: mov     eax, [rcx+rax*4+2Ch]
 * 000000014001DDA2: bt      eax, r10d
 * 000000014001DDA6: jb      short loc_14001DDE6
 * 000000014001DDA8: mov     r9, [rsp+38h+arg_20]
 * 000000014001DDAD: mov     r8d, ebx
 * 000000014001DDB0: mov     [rsp+38h+var_10], 0
 * 000000014001DDB9: mov     edx, esi
 * 000000014001DDBB: mov     rcx, r14
 * 000000014001DDBE: mov     [rsp+38h+var_18], di
 * 000000014001DDC3: call    cs:__imp_WppAutoLogTrace
 * 000000014001DDCA: nop     dword ptr [rax+rax+00h]
 * 000000014001DDCF: mov     rbx, [rsp+38h+arg_0]
 * 000000014001DDD4: mov     rsi, [rsp+38h+arg_8]
 * 000000014001DDD9: mov     rdi, [rsp+38h+arg_10]
 * 000000014001DDDE: add     rsp, 30h
 * 000000014001DDE2: pop     r14
 * 000000014001DDE4: retn
 * 000000014001DDE6: lea     rax, [r11+r11*4]
 * 000000014001DDEA: add     rax, rax
 * 000000014001DDED: cmp     [rcx+rax*8+29h], sil
 * 000000014001DDF2: jb      short loc_14001DDA8
 * 000000014001DDF4: mov     rcx, [rsp+38h+arg_20]; struct _GUID *
 * 000000014001DDF9: xor     r8d, r8d
 * 000000014001DDFC: mov     edx, edi; unsigned __int16
 * 000000014001DDFE: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 000000014001DE03: jmp     short loc_14001DDA8
 */
