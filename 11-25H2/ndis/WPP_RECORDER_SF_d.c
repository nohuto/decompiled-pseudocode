/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140026510
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ndisLwmCreateIrpHandler @ 0x140028670 (ndisLwmCreateIrpHandler.c)
 *     NdisMAllocateNetBufferSGList @ 0x140048000 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14004D510 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140054F10 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005BCC0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D410 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ndisReceiveWorkerThread @ 0x140060670 (ndisReceiveWorkerThread.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisAllocateSharedMemory @ 0x140077CD0 (NdisAllocateSharedMemory.c)
 *     ndisWnfPdcCallback @ 0x14007D060 (ndisWnfPdcCallback.c)
 *     ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x140086980 (-ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     NdisTryAcquireNicActive @ 0x140091900 (NdisTryAcquireNicActive.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     NdisLWMRegisterMiniportDriver @ 0x14009CE60 (NdisLWMRegisterMiniportDriver.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x14009D250 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A7DA0 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA050 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BC834 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BCA88 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C7A8C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisCreateThread @ 0x1400C8EF4 (ndisCreateThread.c)
 *     ndisAoAcTraceRundown @ 0x1400CBE7C (ndisAoAcTraceRundown.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400D0CC0 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfDeleteCompartment @ 0x1400D1CEC (ndisIfDeleteCompartment.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D36C8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D497C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     NdisClCloseCall @ 0x1400D6E60 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1400D75B0 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1400D8BE0 (NdisCoDeleteVc.c)
 *     NdisOpenFile @ 0x1400DBBC0 (NdisOpenFile.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1270 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1610 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     KLoaderRegisterModule @ 0x1400E3AC0 (KLoaderRegisterModule.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400EB2D0 (NdisRegisterUserThreadExitCallback.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400EB858 (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400EB938 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140141DA4 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014AA60 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014ADE0 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014B868 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BA60 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1401537DC (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140153888 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140154860 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1401553D4 (-Initialize@NdisPoll@@QEAAJXZ.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x140156338 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167E00 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x140168ED0 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x140169030 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisNsiClientParameterChangeHandler @ 0x14016C490 (ndisNsiClientParameterChangeHandler.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x14016DE60 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140174390 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1401763C0 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisMAllocateMapRegisters @ 0x14017B8C0 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x14017C470 (NdisMRegisterDmaChannel.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x140196078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 *     ndisLoadNotifyRegister @ 0x140196F60 (ndisLoadNotifyRegister.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140199AEC (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, ...)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  int v10; // ecx
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v10, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v7 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va, 4LL, 0LL);
}
