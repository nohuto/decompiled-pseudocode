/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x140010D90 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140012CC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x140036BD0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003A730 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140043BE0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400447A0 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140045400 (NdisCloseConfiguration.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140049E20 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x14004E500 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14004E700 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004E910 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004F210 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140052670 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_dd @ 0x14005AD40 (WPP_RECORDER_SF_dd_ea_14005AD40.c)
 *     NdisWriteErrorLogEntry @ 0x14005BCE0 (NdisWriteErrorLogEntry.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x140061030 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     NdisWriteConfiguration @ 0x1400622A0 (NdisWriteConfiguration.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x140063C10 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064190 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140065D90 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140066D70 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400670C0 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisInitializeTimer @ 0x14006CE00 (NdisInitializeTimer.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006DE10 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006F060 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14006F210 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400748F0 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076E30 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F440 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x140081290 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140084010 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B9B0 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x14008CE30 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x14009053C (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400909C4 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400926B0 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F208 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1400B1638 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2160 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2220 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DF2A4 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401357B0 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401362FC (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1401371EC (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013ECBC (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013ED00 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013F734 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401412C8 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401648B0 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140165450 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140165B80 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167D10 (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167E80 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016A990 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ndisPktMonMiniportRegister @ 0x14016BAF0 (ndisPktMonMiniportRegister.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C2F0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140176B70 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  char v8; // r12
  char v9; // r15
  bool v10; // r14
  __int64 v11; // rdx
  char v12; // di
  char *Offload; // rdx
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // r8
  NTSTATUS v15; // eax
  int ReenumerateSelfInterface; // r15d
  bool v17; // cf
  _NDIS_MINIPORT_STATS *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  unsigned __int8 v20; // dl
  void (__fastcall *ShutdownHandlerEx)(void *, _NDIS_SHUTDOWN_ACTION); // rax
  _NDIS_M_DRIVER_BLOCK *v22; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int i; // edx
  __int64 v26; // rcx
  int v27; // eax
  char v28; // si
  _NDIS_IF_BLOCK *v29; // rax
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  char v31; // si
  __int16 v32; // ax
  int v33; // edx
  KIRQL v34; // al
  KIRQL v35; // si
  int v36; // edx
  _DEVICE_RESET_INTERFACE_STANDARD *v37; // rax
  unsigned int v38; // edi
  NDIS_STATUS v39; // eax
  int v40; // edx
  PVOID v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  NDIS_STATUS v44; // edi
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *PciDeviceCustomProperties; // rax
  NDIS_STATUS v47; // eax
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  unsigned __int8 v49; // di
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  _NDIS_MEDIUM MediaType; // eax
  __int64 v52; // rcx
  KIRQL v53; // di
  bool v54; // r12
  __int64 v55; // rcx
  unsigned __int8 v56; // si
  int MiniportInfo; // eax
  NTSTATUS v58; // eax
  unsigned int PnPFlags; // r8d
  unsigned int v60; // edx
  unsigned __int8 v61; // al
  unsigned int PnPCapabilities; // r8d
  unsigned int v63; // edx
  unsigned __int32 v64; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  bool v66; // zf
  bool v67; // cc
  int v68; // eax
  unsigned int v69; // eax
  KIRQL v70; // di
  PNDIS_RW_LOCK_EX *EthDB; // rcx
  int v72; // edx
  __int64 v73; // rcx
  int v74; // edx
  __int64 v75; // rcx
  NTSTATUS v76; // edi
  unsigned __int8 v77; // al
  __int64 v78; // rcx
  NTSTATUS v79; // edi
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  NTSTATUS v81; // edi
  int updated; // edi
  __int64 v83; // rcx
  int OidList; // edi
  _NDIS_MINIPORT_OFFLOAD *v85; // rax
  _NDIS_MINIPORT_OFFLOAD *v86; // rax
  _NDIS_MINIPORT_OFFLOAD *v87; // rax
  _NDIS_MINIPORT_OFFLOAD *v88; // rcx
  unsigned __int8 v89; // si
  KIRQL v90; // al
  _REFERENCE_EX *p_Ref; // rcx
  enum Ndis::ReadBindingsOptions::Flags v92; // r8d
  int v93; // edx
  int v94; // edx
  int v95; // edx
  int v96; // edx
  int v97; // edx
  unsigned __int8 (__fastcall *v98)(_NDIS_MINIPORT_BLOCK *); // rax
  KIRQL v99; // r8
  unsigned int v100; // eax
  char v101; // al
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v103; // rcx
  __int64 OutputBufferLength; // [rsp+20h] [rbp-E0h]
  __int64 v106; // [rsp+30h] [rbp-D0h]
  __int64 v107; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v108; // [rsp+40h] [rbp-C0h] BYREF
  char v109; // [rsp+41h] [rbp-BFh]
  char v110; // [rsp+42h] [rbp-BEh]
  unsigned __int8 MajorNdisVersion; // [rsp+43h] [rbp-BDh]
  char v112; // [rsp+44h] [rbp-BCh]
  char v113[4]; // [rsp+48h] [rbp-B8h] BYREF
  char v114; // [rsp+4Ch] [rbp-B4h]
  bool v115; // [rsp+4Dh] [rbp-B3h]
  char v116; // [rsp+4Eh] [rbp-B2h]
  char v117; // [rsp+4Fh] [rbp-B1h]
  char v118; // [rsp+50h] [rbp-B0h]
  char v119; // [rsp+51h] [rbp-AFh]
  char v120; // [rsp+52h] [rbp-AEh]
  int Status; // [rsp+54h] [rbp-ACh] BYREF
  int v122; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v123; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v124; // [rsp+60h] [rbp-A0h] BYREF
  int v125; // [rsp+64h] [rbp-9Ch] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DEVICE_OBJECT *InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  int v128; // [rsp+80h] [rbp-80h]
  char v129; // [rsp+84h] [rbp-7Ch]
  char v130; // [rsp+85h] [rbp-7Bh]
  __int16 v131; // [rsp+86h] [rbp-7Ah]
  PVOID ConfigurationHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Keyword; // [rsp+A8h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v135; // [rsp+C0h] [rbp-40h] BYREF
  struct _X_FILTER *v136[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v137; // [rsp+110h] [rbp+10h]
  struct _KEVENT Event; // [rsp+120h] [rbp+20h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v140[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v141; // [rsp+160h] [rbp+60h]
  __int128 v142; // [rsp+170h] [rbp+70h]
  __int128 v143; // [rsp+180h] [rbp+80h]
  __int128 v144; // [rsp+190h] [rbp+90h]
  __int128 v145; // [rsp+1A0h] [rbp+A0h]
  char v146[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v147[160]; // [rsp+250h] [rbp+150h] BYREF
  char v148[160]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v149[160]; // [rsp+390h] [rbp+290h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v150; // [rsp+430h] [rbp+330h] BYREF
  _DWORD v151[6]; // [rsp+510h] [rbp+410h] BYREF
  GUID InterfaceClassGuid; // [rsp+528h] [rbp+428h] BYREF
  GUID v153; // [rsp+538h] [rbp+438h] BYREF
  _OWORD v154[3]; // [rsp+548h] [rbp+448h] BYREF
  __int64 v155; // [rsp+578h] [rbp+478h]
  int v156; // [rsp+580h] [rbp+480h]
  char v157; // [rsp+590h] [rbp+490h] BYREF

  *(_DWORD *)v113 = 1;
  v122 = 1;
  memset(&v135, 0, sizeof(v135));
  v110 = 0;
  *(_OWORD *)v136 = 0LL;
  v125 = 0;
  v8 = 0;
  v137 = 0LL;
  v124 = 0;
  v9 = 0;
  DestinationString = 0LL;
  v123 = 0;
  v10 = 0;
  v112 = 0;
  v118 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v117 = 0;
  v108 = 0;
  memset(v154, 0, sizeof(v154));
  v120 = 0;
  v119 = 0;
  v116 = 0;
  v115 = 0;
  v155 = 0LL;
  v156 = 0;
  memset(&v150, 0, sizeof(v150));
  v12 = 0;
  v114 = 0;
  v153 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  MajorNdisVersion = a1->MajorNdisVersion;
  if ( !ndisReferenceDriver(a1, 2u) )
    goto LABEL_44;
  v112 = 1;
  DestinationString.Buffer = (wchar_t *)&v157;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, &a2->BaseName) < 0 )
    goto LABEL_44;
  v15 = IoCreateSymbolicLink(&DestinationString, &a2->FdoName);
  ReenumerateSelfInterface = v15;
  v115 = v15 >= 0 || v15 == -1073741771;
  v17 = MajorNdisVersion < 6u;
  a2->DeviceContext = a5;
  a2->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->EthRxIndicateHandler = (void (__fastcall *)(_X_FILTER *, void *, char *, void *, unsigned int, void *, unsigned int, unsigned int))EthFilterDprIndicateReceive;
  a2->EthRxCompleteHandler = (void (__fastcall *)(_X_FILTER *))EthFilterDprIndicateReceiveComplete;
  a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))NdisMSendComplete;
  a2->SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete;
  a2->TDCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int, unsigned int))NdisMTransferDataComplete;
  a2->ResetCompleteHandler = (void (__fastcall *)(void *, int, unsigned __int8))NdisMResetComplete;
  a2->StatusHandler = (void (__fastcall *)(void *, int, void *, unsigned int))NdisMIndicateStatus;
  a2->StatusCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
  a2->SendResourcesHandler = (void (__fastcall *)(void *))NdisMSendResourcesAvailable;
  a2->QueryCompleteHandler = (void (__fastcall *)(void *, int))NdisMQueryInformationComplete;
  a2->SetCompleteHandler = (void (__fastcall *)(void *, int))NdisMSetInformationComplete;
  a2->WanSendCompleteHandler = (void (__fastcall *)(void *, void *, int))ndisMWanSendCompleteInternal;
  a2->WanRcvHandler = (void (__fastcall *)(int *, void *, void *, unsigned __int8 *, unsigned int))NdisMWanIndicateReceive;
  a2->WanRcvCompleteHandler = (void (__fastcall *)(void *, void *))NdisMWanIndicateReceiveComplete;
  a2->NoFilter.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->Next.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->NormalTopReceive = 1;
  a2->NoFilter.SendNetBufferListsCompleteContext = a2;
  a2->NoFilter.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->NoFilter.SendNetBufferListsCompleteObject = &a2->Header;
  a2->Next.SendNetBufferListsCompleteContext = a2;
  a2->Next.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->Next.SendNetBufferListsCompleteObject = &a2->Header;
  a2->NoFilter.RequestHandle = a2;
  a2->NoFilter.DirectRequestHandle = a2;
  a2->Next.RequestHandle = a2;
  a2->Next.DirectRequestHandle = a2;
  a2->TimeOfInitialization.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( v17 )
  {
    Pool2 = (_NDIS_MINIPORT_STATS *)ExAllocatePool2(64LL, 112 * ndisMaxNumberOfProcessors, 538985550LL);
    a2->BottomIfStats = Pool2;
    if ( !Pool2 )
    {
LABEL_43:
      v9 = 0;
LABEL_44:
      v28 = 0;
      goto LABEL_45;
    }
    DriverHandle = a2->DriverHandle;
    v20 = MajorNdisVersion;
    a2->DeferredSendHandler = ndisMDeferredSend;
    a2->DisableInterruptHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
    a2->EnableInterruptHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
    a2->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a2->NoFilter.ReturnNetBufferListsContext = a2;
    a2->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SendHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.SendHandler;
    if ( v20 >= 4u )
    {
      if ( a1->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler )
        a2->InfoFlags |= 0x10u;
      a2->SynchronousReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->MiniportReturnPacketHandler = DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->SynchronousReturnPacketContext = a2->MiniportAdapterContext;
      if ( a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
      {
        a2->SendFlags |= 1u;
        a2->DeferredSendHandler = ndisMDeferredSendPackets;
        ShutdownHandlerEx = a1->MiniportDriverCharacteristics.ShutdownHandlerEx;
        a2->InfoFlags |= 0x8000000u;
        a2->WSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ShutdownHandlerEx;
      }
      if ( v20 >= 5u )
      {
        a2->InfoFlags |= 0x200u;
        if ( a1->MiniportCharacteristics.Ndis50Chars.CoSendPacketsHandler )
        {
          _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000u);
          a1->CoOidRequestHandler = (int (__fastcall *)(void *, void *, _NDIS_OID_REQUEST *))ndisMCoOidRequestToRequest;
          a2->NextCoOidRequestHandle = a2;
        }
      }
    }
  }
  else
  {
    v22 = a2->DriverHandle;
    a2->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = v22->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsContext = a2->MiniportAdapterContext;
    a2->NoFilter.ReturnNetBufferListsTracker = a2->NblTracker;
    a2->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a2->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SynchronousReturnPacketContext = a2;
    if ( a1->CoSendNetBufferListsHandler )
      _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000u);
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v66 = a2->CurrentDevicePowerState == PowerDeviceUnspecified;
  v118 = 1;
  if ( v66 )
  {
    a2->CurrentDevicePowerState = PowerDeviceD0;
    a2->DriverPowerState = PowerDeviceD0;
  }
  ndisQueryPowerCapabilities(a2);
  ndisMInitializeInitMode((char *)a2);
  a2->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                  0,
                                                  (__int64)a2,
                                                  (__int64)a2->pAdapterInstanceName);
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  a2->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_43;
  v119 = 1;
  for ( i = 0; i < ndisMaxNumberOfProcessors; *(_DWORD *)((char *)a2->PeriodicReceivesNblCountIndex + v26) = 6 )
    v26 = i++ << 12;
  _InterlockedOr((volatile signed __int32 *)&a2->Flags, 0x20000002u);
  _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFFE);
  if ( (a1->Flags & 2) != 0 )
  {
    a2->PnPFlags |= 0x100000u;
    if ( !ndisDriverTrackAlloc || (v66 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = a2, !v66) )
      ndisMiniportTrackAlloc = 0LL;
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_34;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_34;
  }
  a2->DriverVerifyFlags |= 0x800u;
LABEL_34:
  if ( a2->MajorNdisVersion < 6u )
    goto LABEL_40;
  if ( ndisNblContextVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_40;
  }
  else if ( ndisNblContextVerifierMode != 2 )
  {
    goto LABEL_40;
  }
  a2->DriverVerifyFlags |= 0x1000u;
LABEL_40:
  v27 = ndisRssV2Initialize(a2);
  Status = v27;
  if ( v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v106) = v27;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2,
        v106);
    }
    goto LABEL_43;
  }
  if ( a1->ReenumerateFailedAdapterHandler && !a2->ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                 a2->NextDeviceObject,
                                 (PVOID *)&a2->ReenumerateSelfInterface);
    if ( ReenumerateSelfInterface >= 0 )
    {
      v37 = a2->ReenumerateSelfInterface;
      *((_DWORD *)&ConfigObject.Header + 1) = 0;
      *(&ConfigObject.Flags + 1) = 0;
      ConfigurationHandle = 0LL;
      v38 = (v37->SupportedResetTypes >> 1) & 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v106) = v37->SupportedResetTypes & 1;
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v36,
          1u,
          0x10u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (v37->SupportedResetTypes & 2) != 0,
          v106);
      }
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = a2;
      ConfigObject.Flags = 0;
      v39 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v39;
      if ( v39 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v40) = 3;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v40,
            1,
            17,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            v39);
        }
      }
      else
      {
        *(_QWORD *)&Keyword.Length = 1966108LL;
        memset(&ParameterValue, 0, sizeof(ParameterValue));
        ParameterValue.ParameterData.IntegerData = v38;
        v41 = ConfigurationHandle;
        Keyword.Buffer = L"PldrCapability";
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 3;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v42,
            1,
            18,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            Status);
        }
        NdisCloseConfiguration(v41);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v106) = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2,
          v106);
      }
      ReenumerateSelfInterface = 0;
    }
  }
  v17 = MajorNdisVersion < 6u;
  a2->State = NdisMiniportInitializing;
  v150.Header.Revision = 2;
  if ( v17 )
  {
    v44 = ((__int64 (__fastcall *)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *))a1->MiniportDriverCharacteristics.PauseHandler)(
            &v125,
            &v123,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( a2->BusType == PCIBus )
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v151[1] = a2->DefaultPortSendControlState;
    v151[2] = a2->DefaultPortRcvControlState;
    v151[3] = a2->DefaultPortSendAuthorizationState;
    v151[4] = a2->DefaultPortRcvAuthorizationState;
    AllocatedResources = a2->AllocatedResources;
    v151[0] = 1311104;
    v135.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v135.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v66 = a2->BusType == PCIBus;
    v135.IMDeviceInstanceContext = a2->DeviceContext;
    v135.MiniportAddDeviceContext = a2->AddDeviceContext;
    v135.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v151;
    v135.NetLuid.Value = a2->NetLuid.Value;
    v135.IfIndex = a2->IfIndex;
    if ( v66 )
    {
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
      PciDeviceCustomProperties = v135.PciDeviceCustomProperties;
      if ( ReenumerateSelfInterface >= 0 )
        PciDeviceCustomProperties = &a2->PciDeviceCustomProperties;
      v135.PciDeviceCustomProperties = PciDeviceCustomProperties;
    }
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) != 0 )
      v47 = ndisLWMInitializeHandler(a2);
    else
      v47 = ndisMInvokeInitialize(a2, &v135);
    v44 = v47;
    if ( a2->BusType == PCIBus )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v106) = v44;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a2,
      v106);
  }
  if ( (byte_14011B102 & 8) != 0 )
  {
    LODWORD(v107) = v44;
    LODWORD(v106) = 1;
    LODWORD(OutputBufferLength) = a2->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v43,
      (__int64)&InitializeAdapterInfo,
      (__int64)&a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      OutputBufferLength,
      a2->NetLuid.Value,
      v106,
      v107);
  }
  _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFFD);
  if ( v44 )
  {
    a2->State = NdisMiniportHalted;
    *(_QWORD *)&a2->OperStatus = 2LL;
    IfBlock = a2->IfBlock;
    if ( IfBlock && IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( a2->InvalidateBlockIoctlVf )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v66 = a2->TimerQueue == 0LL;
    *(_DWORD *)v113 = v44;
    if ( !v66 )
      goto LABEL_370;
    if ( a2->Interrupt )
      goto LABEL_339;
    if ( a2->InterruptEx )
    {
LABEL_370:
      if ( a2->Interrupt )
      {
LABEL_339:
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->Interrupt, 0LL);
      }
      if ( a2->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->InterruptEx, 0LL);
      }
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a2->pAdapterInstanceName,
          "Init failed without canceling timer");
        KeBugCheckEx(0x7Cu, 0xCuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->TimerQueue, 0LL);
      }
    }
    v101 = v112;
LABEL_345:
    v28 = 0;
    v117 = 0;
    v8 = 0;
    v110 = 0;
    v9 = 0;
    v116 = 0;
    v12 = 0;
    v118 = v101;
    v120 = v101;
    v119 = v101;
    goto LABEL_45;
  }
  v17 = a2->MajorNdisVersion < 6u;
  v8 = 1;
  v109 = 1;
  if ( !v17 && !a2->GeneralAttributes )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( !a2->GeneralAttributes )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Offload) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)Offload,
          1,
          20,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2);
      }
      goto LABEL_110;
    }
  }
  if ( (a2->PnPFlags & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName(a2->BindPaths->Paths, &a2->BaseMiniport, 1, 0x1Fu);
    BaseMiniport = a2->BaseMiniport;
    if ( BaseMiniport )
      ndisDereferenceMiniportRef(BaseMiniport, 0x1Fu);
  }
  else
  {
    a2->BaseMiniport = a2;
  }
  v49 = MajorNdisVersion;
  if ( MajorNdisVersion < 6u )
  {
    Interrupt = a2->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      a2->Flags &= ~1u;
    else
      a2->Flags |= 1u;
    if ( !a2->ShutdownHandler )
    {
      a2->ShutdownHandler = a1->MiniportCharacteristics.AdapterShutdownHandler;
      a2->ShutdownContext = a2->MiniportAdapterContext;
    }
    LODWORD(Offload) = *((_DWORD *)ndisMediumArray + v123);
    v150.MediaType = (int)Offload;
    a2->MediaType = (int)Offload;
    a2->MiniportMediaType = (int)Offload;
  }
  MediaType = a2->MediaType;
  a2->State = NdisMiniportPaused;
  if ( (unsigned int)MediaType <= NdisMedium1394 )
  {
    v52 = 8390LL;
    if ( _bittest((const int *)&v52, MediaType) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Offload) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)Offload,
          13,
          21,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2);
      }
      if ( (byte_14011B103 & 0x10) != 0 )
      {
        LODWORD(v106) = a2->MediaType;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v52,
          (__int64)&UnsupportedMiniportMediaType,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v106);
        v12 = 0;
        *(_DWORD *)v113 = 32;
        v108 = 1;
        goto LABEL_43;
      }
      goto LABEL_110;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( a2->MediaType == NdisMediumWan )
  {
    if ( v49 > 4u && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x20000) == 0 )
    {
LABEL_110:
      *(_DWORD *)v113 = 32;
      v12 = 0;
      v108 = 1;
      goto LABEL_43;
    }
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x20000) == 0 )
      a2->DeferredSendHandler = ndisMStartWanSends;
  }
  v53 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v54 = ndisSetWakeUpTimer(a2) != 0;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v53);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v106) = ReenumerateSelfInterface;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x16u,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2,
        v106);
    }
    if ( (byte_14011B102 & 0x10) != 0 )
    {
      LODWORD(v107) = ReenumerateSelfInterface;
      LODWORD(v106) = 2;
      LODWORD(OutputBufferLength) = a2->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v55,
        (__int64)&InitializeAdapterFailed,
        (__int64)&a2->InterfaceGuid,
        (__int64)&a2->InterfaceGuid,
        OutputBufferLength,
        a2->NetLuid.Value,
        v106,
        v107);
    }
    *(_DWORD *)v113 = 36;
LABEL_141:
    v10 = v54;
    goto LABEL_142;
  }
  v56 = MajorNdisVersion;
  if ( MajorNdisVersion >= 6u )
  {
    if ( a2->MP6SupportPM )
      v122 = 0;
  }
  else
  {
    v150.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v154;
    a2->GeneralAttributes = &v150;
    MiniportInfo = ndisGetMiniportInfo(a2, &v150, (int *)v113, &v108, &v122);
    if ( !MiniportInfo )
    {
      MiniportInfo = ndisMSetGeneralAttributes(a2, a2->GeneralAttributes);
      if ( !MiniportInfo )
      {
        Offload = (char *)a2->Offload;
        if ( Offload )
          MiniportInfo = ndisMSetOffloadAttributes(
                           a2,
                           (struct _NDIS_OFFLOAD *)(Offload + 448),
                           (struct _NDIS_OFFLOAD *)(Offload + 448),
                           0LL,
                           0LL);
      }
    }
    v10 = v54;
    if ( MiniportInfo )
      goto LABEL_142;
  }
  if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL
    && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0
    && (v10 = v54,
        v58 = ndisCheckNetworkInterfaceDataMismatch(a2, a2->GeneralAttributes),
        (unsigned int)NdisConvertNtStatusToNdisStatus(v58))
    || (Status = ndisIovCreateDefaultNicSwitch(a2), v10 = v54, Status) )
  {
LABEL_142:
    v8 = v109;
    v12 = 0;
    goto LABEL_43;
  }
  ndisMNotifyMachineName(a2);
  PnPFlags = a2->PnPFlags;
  if ( (PnPFlags & 0x8001) != 0 || (v60 = a2->PnPFlags, (a2->DriverHandle->Flags & 1) != 0) )
  {
    v60 = a2->PnPFlags;
    if ( a2->MediaType < (unsigned int)NdisMediumMax )
    {
      if ( v122 )
        v60 = PnPFlags & 0xFFFFFFFE;
      else
        v60 = PnPFlags | 1;
      a2->PnPFlags = v60;
    }
  }
  if ( ((v60 & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
    && (unsigned int)(a2->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
    && (a2->PMAdminConfig.Value & 0xC) == 0 )
  {
    DisableMagicPacketKeyword(a2);
  }
  NdisInitializeTimer(&a2->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, a2);
  KeInitializeEvent(&a2->WaitWakeIrpCompleted, NotificationEvent, 1u);
  ndisUpdatePMCurrentCapabilities(a2);
  if ( (a2->PnPFlags & 1) != 0 )
  {
    v61 = ndisCheckMiniportWakeUpCapable(a2);
    PnPCapabilities = a2->PnPCapabilities;
    if ( (PnPCapabilities & 8) == 0 )
    {
      v63 = a2->PnPFlags | 0x20;
      v64 = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2;
      a2->PnPFlags = v63;
      if ( v64 <= 2 )
        a2->PMCurrentParameters.WakeUpFlags |= 1u;
      if ( (PnPCapabilities & 0x10) == 0 && v61 )
      {
        MinPatternWakeUp = a2->PMAdvertisedCapabilities.MinPatternWakeUp;
        if ( (unsigned int)(MinPatternWakeUp - 2) <= 1 || MinPatternWakeUp == NdisDeviceStateD3 )
        {
          v63 |= 0x40u;
          a2->PnPFlags = v63;
        }
        if ( (unsigned int)(a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
        {
          a2->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
          v66 = a2->MajorNdisVersion == 6;
          v67 = a2->MajorNdisVersion <= 6u;
          a2->PnPFlags = v63 | 0x40;
          if ( !v67 || v66 && a2->MinorNdisVersion >= 0x14u )
          {
            v68 = ndisAddWoLMagicPacket(a2);
            Status = v68;
            if ( v68 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v106) = v68;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x17u,
                  (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                  (char)a2,
                  v106);
              }
            }
          }
        }
      }
      if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL )
      {
        v69 = a2->PnPFlags;
        if ( (v69 & 0x40) != 0 )
        {
          if ( !a2->WaitWakeIrp )
          {
            a2->PnPFlags = v69 & 0xFFFFFBFF;
            Status = ndisRequestWaitWake(a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
          }
        }
        else
        {
          ndisCancelWaitWake(a2);
        }
      }
    }
  }
  v70 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v66 = a2->MediaConnectState == MediaConnectStateDisconnected;
  a2->MiniportThread = KeGetCurrentThread();
  if ( v66 )
    ndisSetMediaDisconnectTimer(a2);
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v70);
  a2->D0CompleteSignalWorkItem.WorkItem.Context = a2;
  a2->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
  a2->DevicePowerOnWorkItem.Workitem.WorkerRoutine = ndisDevicePowerOn;
  a2->DevicePowerOnWorkItem.Workitem.Parameter = &a2->DevicePowerOnWorkItem;
  a2->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
  a2->DevicePowerDownWorkItem.Workitem.WorkerRoutine = ndisDevicePowerDown;
  a2->DevicePowerDownWorkItem.Workitem.Parameter = &a2->DevicePowerDownWorkItem;
  a2->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
  if ( (a2->PMAdvertisedCapabilities.Flags & 6) != 0 )
    ndisSelectiveSuspendInitialize(a2);
  if ( (a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0 )
  {
    ndisAoAcInitialize(a2);
    ndisReadModernStandyWoLMagicPacketKeywords(a2);
    ndisMRegisterPDCTaskClient(a2);
    ndisMInitializePDCTaskClient((struct _NDIS_TIMER *)a2);
  }
  if ( a2->MediaType )
  {
    EthDB = (PNDIS_RW_LOCK_EX *)a2->EthDB;
    if ( EthDB )
    {
      nullDeleteFilter(EthDB);
      a2->EthDB = 0LL;
    }
    if ( !(unsigned __int8)nullCreateFilter(v136) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v72) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v72,
          1,
          25,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2);
      }
      v73 = 30LL;
      *(_DWORD *)v113 = 30;
      v108 = 1;
      if ( (byte_14011B102 & 0x10) != 0 )
      {
        LODWORD(v107) = 30;
        LODWORD(v106) = 6;
LABEL_211:
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v73,
          (__int64)&InitializeAdapterFailed,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v106,
          v107);
        goto LABEL_213;
      }
      goto LABEL_213;
    }
LABEL_212:
    v136[0]->Miniport = a2;
    goto LABEL_213;
  }
  if ( EthCreateFilter(a2->GeneralAttributes->MaxMulticastListSize, a2->GeneralAttributes->CurrentMacAddress, v136) )
    goto LABEL_212;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v74) = 3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v74,
      1,
      24,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a2);
  }
  *(_DWORD *)v113 = 9;
  v108 = 1;
  if ( (byte_14011B102 & 0x10) != 0 )
  {
    LODWORD(v107) = 9;
    LODWORD(v106) = 4;
    goto LABEL_211;
  }
LABEL_213:
  if ( a2->MiniportMediaType == NdisMediumNative802_11 && v56 >= 6u )
  {
    if ( !(unsigned __int8)nullCreateFilter((struct _X_FILTER **)&a2->600) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Offload) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)Offload,
          1,
          26,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2);
      }
      a2->Reserved1 = 0LL;
      *(_DWORD *)v113 = 30;
      v108 = 1;
      if ( (byte_14011B102 & 0x10) != 0 )
      {
        LODWORD(v107) = 30;
        LODWORD(v106) = 7;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          30LL,
          (__int64)&InitializeAdapterFailed,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v106,
          v107);
        v10 = v54;
        v12 = 0;
        v8 = v109;
        goto LABEL_43;
      }
      goto LABEL_141;
    }
    *(_QWORD *)(a2->Reserved1 + 296) = a2;
  }
  if ( a2->MediaType == NdisMedium802_3 )
    a2->CheckPacketFilters = 1;
  if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x80u) == 0LL
    && (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0 )
  {
    v76 = IoWMIRegistrationControl(a2->DeviceObject, 1u);
    if ( v76 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v106) = v76;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0x1Bu,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2,
          v106);
      }
      if ( (byte_14011B102 & 0x10) != 0 )
      {
        LODWORD(v107) = v76;
        LODWORD(v106) = 8;
        LODWORD(OutputBufferLength) = a2->IfIndex;
        McTemplateK0jqxqq_EtwWriteTransfer(
          v75,
          (__int64)&InitializeAdapterFailed,
          (__int64)&a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          OutputBufferLength,
          a2->NetLuid.Value,
          v106,
          v107);
      }
      v77 = 1;
      *(_DWORD *)v113 = 31;
      v108 = 1;
      goto LABEL_233;
    }
    v110 = 1;
  }
  v77 = v108;
  if ( v108 )
  {
LABEL_233:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v106) = v77;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x1Cu,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2,
        v106);
    }
    LODWORD(OutputBufferLength) = *(_DWORD *)v113;
    NdisWriteErrorLogEntry(a2, 0xC000138D, 2u, 4278255360LL, OutputBufferLength);
LABEL_236:
    v28 = v110;
    v12 = 0;
    v10 = v54;
    v9 = 0;
    v8 = v109;
    goto LABEL_45;
  }
  *(_DWORD *)v113 = 1;
  if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) != 0 )
  {
    v9 = 0;
    goto LABEL_255;
  }
  v79 = IoRegisterDeviceInterface(a2->PhysicalDeviceObject, &InterfaceClassGuid, &a2->BaseName, &a2->SymbolicLinkName);
  if ( v79 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v106) = v79;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x1Du,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2,
        v106);
    }
    if ( (byte_14011B102 & 0x10) != 0 )
    {
      LODWORD(v107) = v79;
      LODWORD(v106) = 10;
      LODWORD(OutputBufferLength) = a2->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v78,
        (__int64)&InitializeAdapterFailed,
        (__int64)&a2->InterfaceGuid,
        (__int64)&a2->InterfaceGuid,
        OutputBufferLength,
        a2->NetLuid.Value,
        v106,
        v107);
    }
    *(_DWORD *)v113 = 35;
    goto LABEL_236;
  }
  SriovCurrentCapabilities = a2->SriovCurrentCapabilities;
  v9 = 1;
  if ( !SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
  {
LABEL_253:
    a2->DeviceObject->Flags &= ~0x80u;
LABEL_255:
    GeneralAttributes = a2->GeneralAttributes;
    if ( GeneralAttributes && (Offload = (char *)a2->IfBlock) != 0LL )
    {
      updated = ndisIfUpdateInterfaceOnInitialize(a2, (struct _NDIS_IF_BLOCK *)Offload, GeneralAttributes);
      if ( !updated )
      {
        v66 = (a2->PnPFlags & 0x200000) == 0;
        v116 = 1;
        if ( !v66 )
          a2->PhysicalPerformanceCounters = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePool2(
                                                                                     64LL,
                                                                                     32LL,
                                                                                     2002994254LL);
        if ( !a2->OidList )
        {
          v140[0] = 0LL;
          v140[1] = a2;
          v141 = 0LL;
          v142 = 0LL;
          v143 = 0LL;
          v144 = 0LL;
          v145 = 0LL;
          OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v140);
          if ( OidList )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v106) = OidList;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x20u,
                (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                (char)a2,
                v106);
            }
            if ( (byte_14011B102 & 0x10) != 0 )
            {
              LODWORD(v107) = OidList;
              LODWORD(v106) = 12;
              LODWORD(OutputBufferLength) = a2->IfIndex;
              McTemplateK0jqxqq_EtwWriteTransfer(
                v83,
                (__int64)&InitializeAdapterFailed,
                (__int64)&a2->InterfaceGuid,
                (__int64)&a2->InterfaceGuid,
                OutputBufferLength,
                a2->NetLuid.Value,
                v106,
                v107);
            }
          }
        }
        v85 = a2->Offload;
        if ( v85 )
        {
          if ( v85->SupportsOffload == 1 )
          {
            v85->SupportsTopOffload = 1;
            v86 = a2->Offload;
            *(_OWORD *)&v86->TopCapabilities.Header.Type = *(_OWORD *)&v86->MiniportCurrentConfig.Header.Type;
            *(_OWORD *)((char *)&v86->TopCapabilities.Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v86->MiniportCurrentConfig.Checksum.IPv4Receive
                                                                                            + 4);
            *(_OWORD *)((char *)&v86->TopCapabilities.Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v86->MiniportCurrentConfig.Checksum.IPv6Receive
                                                                                            + 4);
            *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v86->TopCapabilities.LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v86->MiniportCurrentConfig.LsoV1.IPv4 + 12);
            *(_OWORD *)&v86->TopCapabilities.IPsecV1.Supported.IPv4Options = *(_OWORD *)&v86->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options;
            *(_OWORD *)&v86->TopCapabilities.LsoV2.IPv4.Encapsulation = *(_OWORD *)&v86->MiniportCurrentConfig.LsoV2.IPv4.Encapsulation;
            *(_OWORD *)&v86->TopCapabilities.LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v86->MiniportCurrentConfig.LsoV2.IPv6.MaxOffLoadSize;
            *(_OWORD *)&v86->TopCapabilities.IPsecV2.Encapsulation = *(_OWORD *)&v86->MiniportCurrentConfig.IPsecV2.Encapsulation;
            *(_OWORD *)&v86->TopCapabilities.IPsecV2.UdpEsp = *(_OWORD *)&v86->MiniportCurrentConfig.IPsecV2.UdpEsp;
            *(_OWORD *)&v86->TopCapabilities.Rsc.IPv4.Enabled = *(_OWORD *)&v86->MiniportCurrentConfig.Rsc.IPv4.Enabled;
            *(_OWORD *)&v86->TopCapabilities.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&v86->MiniportCurrentConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
            *(_OWORD *)&v86->TopCapabilities.EncapsulationTypes = *(_OWORD *)&v86->MiniportCurrentConfig.EncapsulationTypes;
            *(_OWORD *)&v86->TopCapabilities.UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&v86->MiniportCurrentConfig.UdpSegmentation.IPv4.MaxOffLoadSize;
            *((_QWORD *)&v86->TopCapabilities.UdpSegmentation.IPv6 + 1) = *((_QWORD *)&v86->MiniportCurrentConfig.UdpSegmentation.IPv6
                                                                          + 1);
            *(_DWORD *)&v86->TopCapabilities.UdpRsc.Enabled = *(_DWORD *)&v86->MiniportCurrentConfig.UdpRsc.Enabled;
            ndisMergeOffloadCapsAndRegistry(a2, &a2->Offload->TopCapabilities);
          }
          v87 = a2->Offload;
          if ( v87->SupportsTcpConnectionOffload == 1 )
          {
            v87->SupportsTopTcpConnectionOffload = 1;
            v88 = a2->Offload;
            *(_OWORD *)&v88->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v88->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
            v88->TopTcpConnectionOffloadCapabilities.Flags = v88->MiniportTcpConnectionOffloadCurrentConfig.Flags;
          }
        }
        v89 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(Offload) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)Offload,
            1,
            19,
            (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
            (char)a2,
            (char)a1);
        }
        ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
        v90 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
        p_Ref = &a1->Ref;
        if ( a1->Ref.Closing )
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v90);
          v89 = 0;
        }
        else
        {
          a2->NextMiniport = a1->MiniportQueue;
          a1->MiniportQueue = a2;
          KeReleaseSpinLock(&p_Ref->SpinLock, v90);
        }
        ndisDereferencePackage((PVOID *)&ndisPkgs);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v107) = v89;
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0x14u,
            (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
            (char)a2,
            (char)a1,
            v107);
        }
        v10 = v54;
        if ( v89 )
        {
          v117 = 1;
          ndisSetDeviceInterfaceState(a2, 1u);
          if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v92) < 0 )
          {
            v12 = v114;
            v8 = v109;
            v28 = v110;
            *(_DWORD *)v113 = 39;
            v108 = 1;
            goto LABEL_45;
          }
          ndisPcwNotifyMiniportCreation(a2);
          Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
          if ( Ndis::BindState::SetBinding(&a2->Bindings.Miniport, BindingDisabled, Reason_MiniportDeviceNotStarted) )
          {
            memset(v146, 0, sizeof(v146));
            if ( (unsigned __int8)byte_14011CBA3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v146);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v93,
                  0x1Cu,
                  0x21u,
                  (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                  *(unsigned __int16 **)&v146[8],
                  *(_QWORD *)v146);
            }
          }
          if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
          {
            memset(v147, 0, sizeof(v147));
            if ( (unsigned __int8)byte_14011CBA3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v147);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v94,
                  0x1Cu,
                  0x22u,
                  (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                  *(unsigned __int16 **)&v147[8],
                  *(_QWORD *)v147);
            }
          }
          if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_RemovingMiniport) )
          {
            memset(v148, 0, sizeof(v148));
            if ( (unsigned __int8)byte_14011CBA3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v148);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v95,
                  0x1Cu,
                  0x23u,
                  (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                  *(unsigned __int16 **)&v148[8],
                  *(_QWORD *)v148);
            }
          }
          if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x10000) == 0 )
          {
            if ( Ndis::BindState::SetBinding(&a2->Bindings.Miniport, BindingDisabled, Reason_DefaultPortNotActive) )
            {
              memset(v149, 0, sizeof(v149));
              if ( (unsigned __int8)byte_14011CBA3 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v149);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v96,
                    0x1Cu,
                    0x24u,
                    (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                    *(unsigned __int16 **)&v149[8],
                    *(_QWORD *)v149);
              }
            }
          }
          Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
          Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
          if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x100) == 0 )
          {
            v124 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v97, &v124);
          }
          v17 = MajorNdisVersion < 6u;
          a2->EthDB = v136[0];
          if ( v17 )
          {
            a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
            if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40000) != 0 )
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
            }
            else if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40) != 0 )
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
              v98 = ndisMDeferredSendPacketsSG;
              if ( !a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
                v98 = ndisMDeferredSendSG;
              a2->DeferredSendHandler = v98;
            }
            else
            {
              a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
              a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
            }
          }
          else
          {
            a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
            a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
          }
          KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
          ndisMSetIndicatePacketHandler(a2);
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(&a2->Lock, v99);
          if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
            && a2->PhysicalMediumType == NdisPhysicalMedium802_3 )
          {
            v66 = a2->PMHardwareCapabilities.Header.Revision == 2;
            InputBuffer = a2->PhysicalDeviceObject;
            v131 = 0;
            v128 = 4;
            v129 = 1;
            if ( !v66
              || (a2->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
              || a2->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
              || a2->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
              || (unsigned int)(a2->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
              || (a2->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
              || (v100 = a2->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v130 = 1, (_BYTE)v100 != 3) )
            {
              v130 = 0;
            }
            ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
          }
          ndisPktMonMiniportRegister(a2);
          v101 = 0;
          *(_DWORD *)v113 = 0;
          v112 = 0;
          v10 = v54;
          v115 = 0;
          goto LABEL_345;
        }
LABEL_329:
        v12 = v114;
        v8 = v109;
        v28 = v110;
        goto LABEL_45;
      }
    }
    else
    {
      updated = -1073741823;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v106) = updated;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x1Fu,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2,
        v106);
    }
    if ( (byte_14011B102 & 0x10) != 0 )
    {
      LODWORD(v107) = updated;
      LODWORD(v106) = 11;
      LODWORD(OutputBufferLength) = a2->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v78,
        (__int64)&InitializeAdapterFailed,
        (__int64)&a2->InterfaceGuid,
        (__int64)&a2->InterfaceGuid,
        OutputBufferLength,
        a2->NetLuid.Value,
        v106,
        v107);
    }
    *(_DWORD *)v113 = 32;
    v10 = v54;
    v108 = 1;
    goto LABEL_329;
  }
  v81 = IoRegisterDeviceInterface(a2->PhysicalDeviceObject, &v153, 0LL, &a2->DevinterfaceVirtSymbolicLinkName);
  if ( Status >= 0 )
  {
    v114 = 1;
    goto LABEL_253;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v106) = v81;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a2,
      v106);
  }
  if ( (byte_14011B102 & 0x10) != 0 )
  {
    LODWORD(v107) = v81;
    LODWORD(v106) = 0;
    LODWORD(OutputBufferLength) = a2->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v78,
      (__int64)&InitializeAdapterFailed,
      (__int64)&a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      OutputBufferLength,
      a2->NetLuid.Value,
      v106,
      v107);
  }
  v28 = v110;
  v10 = v54;
  v8 = 1;
  *(_DWORD *)v113 = 34;
  v108 = 1;
  v12 = 0;
LABEL_45:
  if ( *(_DWORD *)v113 )
  {
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)GeneralAttributes);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
  }
  if ( v116 )
  {
    *(_QWORD *)&a2->OperStatus = 2LL;
    v29 = a2->IfBlock;
    if ( v29->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v29->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    PhysicalPerformanceCounters = a2->PhysicalPerformanceCounters;
    if ( PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
      a2->PhysicalPerformanceCounters = 0LL;
    }
  }
  if ( v28 )
  {
    IoWMIRegistrationControl(a2->DeviceObject, 2u);
    v110 = 0;
  }
  v31 = v9;
  if ( v9 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceNetSymbolicLinkName, 0);
    v31 = 0;
  }
  if ( v12 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a2->DevinterfaceVirtSymbolicLinkName);
    a2->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v12 = 0;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch(a2);
    v32 = 130;
    if ( !v110 )
      v32 = 128;
    ndisMCommonHaltMiniport(
      a2,
      (v9 != 0 ? 4 : 0) | (v31 != 0 ? 0x40 : 0) | v32 | (v10 ? 8 : 0) | (v12 != 0 ? 0x100 : 0));
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v120 )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a2->Flags) & 0x40) != 0 && a2->MiniportSGDmaBlock )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v33,
          1,
          37,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a2);
      }
      ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    }
    v34 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v35 = v34;
    a2->MiniportThread = KeGetCurrentThread();
    if ( a2->MiniportSGDmaBlock )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v35);
      if ( ndisWaitForKernelObject(&Event, 30000LL) )
        _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
    }
    else
    {
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v34);
      _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
    }
  }
  if ( v117 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Offload) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Offload,
        1,
        38,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2);
    }
    ndisDeQueueMiniportOnDriver(a2, a1);
  }
  if ( v115 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v118 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v112 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Offload) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Offload,
        1,
        39,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a2);
    }
    ndisDereferenceDriver(a1, 0, 2u);
  }
  v103 = a2->GeneralAttributes;
  if ( v103 )
  {
    if ( MajorNdisVersion >= 6u )
      ExFreePoolWithTag(v103, 0);
    a2->GeneralAttributes = 0LL;
  }
  if ( v119 )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)a2->PeriodicReceivesNblCountIndex, 0x527374uLL);
    a2->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v106) = *(_DWORD *)v113;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a2,
      v106);
  }
  return *(unsigned int *)v113;
}
