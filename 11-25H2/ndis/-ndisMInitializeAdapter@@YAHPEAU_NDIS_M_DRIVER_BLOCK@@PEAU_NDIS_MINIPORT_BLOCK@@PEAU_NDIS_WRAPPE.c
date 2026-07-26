/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14004EA00 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x14000E620 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F380 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140017280 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140018100 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140028CB0 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14002DF40 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003D0B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14004FC40 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14004FC80 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050840 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationEx @ 0x140050AC0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x14005D8D0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x14006DAE0 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14006E4B0 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     NdisWriteErrorLogEntry @ 0x14006FC00 (NdisWriteErrorLogEntry.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_dd @ 0x1400758B0 (WPP_RECORDER_SF_dd_ea_1400758B0.c)
 *     NdisWriteConfiguration @ 0x14007D550 (NdisWriteConfiguration.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x14007F760 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FCE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081E60 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x140082750 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082AA0 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisInitializeTimer @ 0x140088F90 (NdisInitializeTimer.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140089000 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008A200 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B560 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14008B710 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008FBA0 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140090610 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096C10 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098480 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x140098760 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x14009B92C (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009BDB4 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A7DA0 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1400B9404 (-nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B9F90 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA050 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E64B4 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401407B0 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014134C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x140142208 (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149B7C (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149BC0 (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014A5F4 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BFA4 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140168320 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C6F0 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x14016C8F0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140170630 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140171750 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401721D0 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140172320 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736E0 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1401737F0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ndisPktMonMiniportRegister @ 0x140173910 (ndisPktMonMiniportRegister.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140174580 (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401746F0 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14017F110 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1401857E0 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140189910 (-ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK **a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  bool v6; // bl
  char v7; // r12
  char v8; // di
  char v9; // r15
  char v10; // r13
  char v11; // r14
  int *v12; // rdx
  int *v13; // r8
  NTSTATUS v14; // eax
  struct _NDIS_MINIPORT_BLOCK *v15; // r10
  _NDIS_MINIPORT_STATS *Pool2; // rax
  _NDIS_M_DRIVER_BLOCK *v17; // rdx
  void (__fastcall *ShutdownHandlerEx)(void *, _NDIS_SHUTDOWN_ACTION); // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int v22; // r8d
  unsigned int i; // edx
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int8 v26; // r11
  char v27; // r9
  char v28; // cl
  _NDIS_IF_BLOCK *v29; // r10
  __int16 v30; // ax
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  int ReenumerateSelfInterface; // eax
  unsigned int SupportedResetTypes; // ecx
  int v34; // eax
  int v35; // ecx
  NDIS_STATUS v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  struct _NDIS_MINIPORT_BLOCK *v39; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *PciDeviceCustomProperties; // rax
  unsigned int v42; // eax
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  _NDIS_MEDIUM v44; // edx
  unsigned int MediaType; // eax
  __int64 v46; // rcx
  unsigned __int8 v47; // al
  KIRQL v48; // dl
  int MiniportInfo; // eax
  _NDIS_MINIPORT_OFFLOAD *v50; // rdx
  bool v51; // cl
  NTSTATUS v52; // eax
  int v53; // eax
  struct _NDIS_MINIPORT_BLOCK *v54; // rdx
  unsigned int PnPFlags; // r9d
  unsigned int v56; // r8d
  unsigned __int8 v57; // al
  struct _NDIS_MINIPORT_BLOCK *v58; // rdx
  unsigned int PnPCapabilities; // r9d
  unsigned int v60; // r8d
  unsigned __int32 v61; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  bool v63; // zf
  bool v64; // cc
  int v65; // eax
  unsigned int v66; // eax
  struct _NDIS_MINIPORT_BLOCK *v67; // rax
  KIRQL v68; // dl
  struct _NDIS_MINIPORT_BLOCK *v69; // rcx
  PNDIS_RW_LOCK_EX *EthDB; // rcx
  int v71; // edx
  int v72; // edx
  int v73; // edx
  int v74; // edx
  int v75; // edx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  NTSTATUS v77; // edx
  struct _NDIS_IF_BLOCK *IfBlock; // rdx
  __int64 v79; // rcx
  struct _NDIS_MINIPORT_BLOCK *v80; // r8
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *v81; // rax
  int v82; // edx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_MINIPORT_OFFLOAD *v84; // rax
  _NDIS_MINIPORT_OFFLOAD *v85; // rax
  _NDIS_MINIPORT_OFFLOAD *v86; // rcx
  unsigned __int8 v87; // al
  enum Ndis::ReadBindingsOptions::Flags v88; // r8d
  int v89; // edx
  int v90; // edx
  int v91; // edx
  int v92; // edx
  int v93; // edx
  unsigned int Flags; // eax
  unsigned __int8 (__fastcall *v95)(_NDIS_MINIPORT_BLOCK *); // rax
  KIRQL v96; // dl
  unsigned int v97; // eax
  _NDIS_IF_BLOCK *v98; // rax
  KIRQL v99; // dl
  KIRQL v100; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // rcx
  __int64 OutputBufferLength; // [rsp+20h] [rbp-E0h]
  char v104[8]; // [rsp+28h] [rbp-D8h]
  __int64 v105; // [rsp+30h] [rbp-D0h]
  __int64 v106; // [rsp+38h] [rbp-C8h]
  unsigned __int8 MajorNdisVersion; // [rsp+40h] [rbp-C0h]
  char v108; // [rsp+41h] [rbp-BFh]
  char v109; // [rsp+42h] [rbp-BEh]
  unsigned __int8 v110; // [rsp+43h] [rbp-BDh]
  char v111; // [rsp+44h] [rbp-BCh]
  bool v112; // [rsp+44h] [rbp-BCh]
  char v113; // [rsp+45h] [rbp-BBh]
  unsigned __int8 v115; // [rsp+50h] [rbp-B0h]
  bool v116; // [rsp+51h] [rbp-AFh]
  unsigned __int8 v117; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v118; // [rsp+53h] [rbp-ADh] BYREF
  bool v119; // [rsp+54h] [rbp-ACh]
  char v120[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v121[4]; // [rsp+5Ch] [rbp-A4h]
  int Status; // [rsp+60h] [rbp-A0h] BYREF
  _DEVICE_RESET_INTERFACE_STANDARD **p_ReenumerateSelfInterface; // [rsp+68h] [rbp-98h]
  int v124; // [rsp+70h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v126; // [rsp+80h] [rbp-80h] BYREF
  BOOL v127; // [rsp+84h] [rbp-7Ch] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_MINIPORT_BLOCK **p_BaseMiniport; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v131; // [rsp+B8h] [rbp-48h] BYREF
  _DEVICE_OBJECT *InputBuffer; // [rsp+C0h] [rbp-40h] BYREF
  int v133; // [rsp+C8h] [rbp-38h]
  char v134; // [rsp+CCh] [rbp-34h]
  char v135; // [rsp+CDh] [rbp-33h]
  __int16 v136; // [rsp+CEh] [rbp-32h]
  UNICODE_STRING Keyword; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE ParameterValue[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct _NDIS_MINIPORT_INIT_PARAMETERS v139; // [rsp+100h] [rbp+0h] BYREF
  struct _X_FILTER *v140[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v141; // [rsp+150h] [rbp+50h]
  char v142[160]; // [rsp+160h] [rbp+60h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v143; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v144[6]; // [rsp+2E0h] [rbp+1E0h] BYREF
  GUID InterfaceClassGuid; // [rsp+2F8h] [rbp+1F8h] BYREF
  GUID v146; // [rsp+308h] [rbp+208h] BYREF
  _OWORD v147[3]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v148; // [rsp+348h] [rbp+248h]
  int v149; // [rsp+350h] [rbp+250h]
  char v150; // [rsp+360h] [rbp+260h] BYREF

  p_BaseMiniport = a3;
  memset(&v139, 0, sizeof(v139));
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  *(_OWORD *)v140 = 0LL;
  v141 = 0LL;
  *(_DWORD *)v120 = 1;
  DestinationString = 0LL;
  v124 = 1;
  v131 = 0;
  v127 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v126 = 0;
  v118 = 0;
  memset(v147, 0, sizeof(v147));
  v108 = 0;
  v109 = 0;
  v117 = 0;
  v110 = 0;
  v113 = 0;
  v119 = 0;
  v116 = 0;
  v148 = 0LL;
  v149 = 0;
  memset(&v143, 0, sizeof(v143));
  v115 = 0;
  v146 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  MajorNdisVersion = a1->MajorNdisVersion;
  if ( !ndisReferenceDriver(a1, 2u) )
  {
    LOBYTE(Pool2) = 0;
    v28 = 0;
LABEL_348:
    v15 = a2;
    goto LABEL_349;
  }
  v108 = 1;
  DestinationString.Buffer = (wchar_t *)&v150;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, &a2->BaseName) < 0 )
  {
    LOBYTE(Pool2) = 0;
    v28 = 1;
    goto LABEL_348;
  }
  v14 = IoCreateSymbolicLink(&DestinationString, &a2->FdoName);
  *(_DWORD *)v121 = v14;
  v6 = v14 >= 0 || v14 == -1073741771;
  v15 = a2;
  v119 = v6;
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
  if ( MajorNdisVersion >= 6u )
  {
    DriverHandle = a2->DriverHandle;
    a2->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsContext = a2->MiniportAdapterContext;
    a2->NoFilter.ReturnNetBufferListsTracker = a2->NblTracker;
    a2->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a2->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SynchronousReturnPacketContext = a2;
    if ( a1->CoSendNetBufferListsHandler )
      a2->Flags |= 0x20000u;
  }
  else
  {
    Pool2 = (_NDIS_MINIPORT_STATS *)ExAllocatePool2(64LL, 112 * ndisMaxNumberOfProcessors, 538985550);
    v15 = a2;
    a2->BottomIfStats = Pool2;
    if ( !Pool2 )
    {
      v28 = 1;
      goto LABEL_349;
    }
    v17 = a2->DriverHandle;
    a2->DeferredSendHandler = ndisMDeferredSend;
    a2->DisableInterruptHandler = v17->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
    a2->EnableInterruptHandler = v17->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
    a2->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a2->NoFilter.ReturnNetBufferListsContext = a2;
    a2->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SendHandler = v17->MiniportCharacteristics.Ndis50Chars.SendHandler;
    if ( MajorNdisVersion >= 4u )
    {
      if ( a1->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler )
        a2->InfoFlags |= 0x10u;
      a2->SynchronousReturnPacketHandler = v17->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->MiniportReturnPacketHandler = v17->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->SynchronousReturnPacketContext = a2->MiniportAdapterContext;
      if ( a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
      {
        a2->SendFlags |= 1u;
        a2->DeferredSendHandler = ndisMDeferredSendPackets;
        ShutdownHandlerEx = a1->MiniportDriverCharacteristics.ShutdownHandlerEx;
        a2->InfoFlags |= 0x8000000u;
        a2->WSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ShutdownHandlerEx;
      }
      if ( MajorNdisVersion >= 5u )
      {
        a2->InfoFlags |= 0x200u;
        if ( a1->MiniportCharacteristics.Ndis50Chars.CoSendPacketsHandler )
        {
          a2->Flags |= 0x20000u;
          a1->CoOidRequestHandler = (int (__fastcall *)(void *, void *, _NDIS_OID_REQUEST *))ndisMCoOidRequestToRequest;
          a2->NextCoOidRequestHandle = a2;
        }
      }
    }
  }
  ndisReferenceMiniportNoCheck(v15, 0x18u);
  v109 = 1;
  if ( a2->CurrentDevicePowerState == PowerDeviceUnspecified )
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
  v15 = a2;
  a2->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( PerProcessorSlot )
  {
    v22 = ndisMaxNumberOfProcessors;
    v10 = 1;
    for ( i = 0; i < v22; *(_DWORD *)((char *)a2->PeriodicReceivesNblCountIndex + v24) = 6 )
      v24 = i++ << 12;
    a2->Flags = a2->Flags & 0xDFFFFFFC | 0x20000002;
    if ( (a1->Flags & 2) != 0 )
    {
      a2->PnPFlags |= 0x100000u;
      if ( !ndisDriverTrackAlloc || (v63 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = a2, !v63) )
        ndisMiniportTrackAlloc = 0LL;
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( (a2->PnPFlags & 0x100000) == 0 )
        goto LABEL_34;
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
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
LABEL_40:
        v25 = ndisRssV2Initialize(a2);
        if ( v25 )
        {
          v12 = &WPP_RECORDER_INITIALIZED;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v105) = v25;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0xEu,
              (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
              (char)a2,
              v105);
          }
          LOBYTE(v12) = 0;
          goto LABEL_44;
        }
        v31 = a2;
        if ( a1->ReenumerateFailedAdapterHandler )
        {
          v63 = a2->ReenumerateSelfInterface == 0LL;
          p_ReenumerateSelfInterface = &a2->ReenumerateSelfInterface;
          if ( v63 )
          {
            ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                         a2->NextDeviceObject,
                                         (PVOID *)&a2->ReenumerateSelfInterface);
            *(_DWORD *)v121 = ReenumerateSelfInterface;
            if ( ReenumerateSelfInterface >= 0 )
            {
              *((_DWORD *)&ConfigObject.Header + 1) = 0;
              *(&ConfigObject.Flags + 1) = 0;
              ConfigurationHandle = 0LL;
              SupportedResetTypes = (*p_ReenumerateSelfInterface)->SupportedResetTypes;
              v34 = (SupportedResetTypes >> 1) & 1;
              LODWORD(p_ReenumerateSelfInterface) = v34;
              v35 = SupportedResetTypes & 1;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v105) = v35;
                WPP_RECORDER_SF_dd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)&WPP_RECORDER_INITIALIZED,
                  1u,
                  0x10u,
                  (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                  v34,
                  v105);
              }
              ConfigObject.NdisHandle = a2;
              ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
              ConfigObject.Flags = 0;
              v36 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
              Status = v36;
              if ( v36 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v104 = v36;
                  WPP_RECORDER_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x11u,
                    (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                    *(_QWORD *)v104);
                }
              }
              else
              {
                *(_QWORD *)&Keyword.Length = 1966108LL;
                Keyword.Buffer = L"PldrCapability";
                memset(ParameterValue, 0, 24);
                *(_DWORD *)&ParameterValue[8] = (_DWORD)p_ReenumerateSelfInterface;
                NdisWriteConfiguration(
                  &Status,
                  ConfigurationHandle,
                  &Keyword,
                  (PNDIS_CONFIGURATION_PARAMETER)ParameterValue);
                if ( Status && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v104 = Status;
                  WPP_RECORDER_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x12u,
                    (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                    *(_QWORD *)v104);
                }
                NdisCloseConfiguration(ConfigurationHandle);
              }
            }
            else
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v105) = ReenumerateSelfInterface;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0xFu,
                  (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                  (char)a2,
                  v105);
              }
              *(_DWORD *)v121 = 0;
            }
            v31 = a2;
          }
        }
        v31->State = NdisMiniportInitializing;
        v143.Header.Revision = 2;
        if ( MajorNdisVersion >= 6u )
        {
          ndisReadMiniportDefaultPortAuthStates(v31);
          v39 = a2;
          v144[0] = 1311104;
          v139.Header = (_NDIS_OBJECT_HEADER)4194689;
          v144[1] = a2->DefaultPortSendControlState;
          v144[2] = a2->DefaultPortRcvControlState;
          v144[3] = a2->DefaultPortSendAuthorizationState;
          v144[4] = a2->DefaultPortRcvAuthorizationState;
          AllocatedResources = a2->AllocatedResources;
          if ( AllocatedResources )
            v139.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
          v63 = a2->BusType == PCIBus;
          v139.IMDeviceInstanceContext = a2->DeviceContext;
          v139.MiniportAddDeviceContext = a2->AddDeviceContext;
          v139.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v144;
          v139.NetLuid.Value = a2->NetLuid.Value;
          v139.IfIndex = a2->IfIndex;
          if ( v63 )
          {
            *(_DWORD *)v121 = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
            PciDeviceCustomProperties = v139.PciDeviceCustomProperties;
            v39 = a2;
            if ( *(int *)v121 >= 0 )
              PciDeviceCustomProperties = &a2->PciDeviceCustomProperties;
            v6 = v119;
            v139.PciDeviceCustomProperties = PciDeviceCustomProperties;
          }
          if ( (v39->Flags & 0x100) != 0 )
            v42 = ndisLWMInitializeHandler(v39);
          else
            v42 = ndisMInvokeInitialize(v39, &v139);
          v15 = a2;
          v38 = v42;
          Status = v42;
          if ( a2->BusType != PCIBus )
            goto LABEL_102;
          ndisMReadPciPropertiesFromConfigSpace((char *)a2);
        }
        else
        {
          v37 = ((__int64 (__fastcall *)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_MINIPORT_BLOCK **))a1->MiniportDriverCharacteristics.PauseHandler)(
                  &v131,
                  &v126,
                  ndisMediumArray,
                  15LL,
                  v31,
                  p_BaseMiniport);
          v15 = a2;
          v38 = v37;
          Status = v37;
          if ( a2->BusType != PCIBus )
          {
LABEL_102:
            v13 = &WPP_RECORDER_INITIALIZED;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v105) = v38;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xDu,
                0x13u,
                (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                (char)v15,
                v105);
              v15 = a2;
              v13 = &WPP_RECORDER_INITIALIZED;
              v38 = (unsigned int)Status;
            }
            if ( (byte_140125102 & 8) != 0 )
            {
              LODWORD(v106) = v38;
              LODWORD(v105) = 1;
              LODWORD(OutputBufferLength) = v15->IfIndex;
              McTemplateK0jqxqq_EtwWriteTransfer(
                v38,
                &InitializeAdapterInfo,
                &v15->InterfaceGuid,
                (__int64)&v15->InterfaceGuid,
                OutputBufferLength,
                v15->NetLuid.Value,
                v105,
                v106);
              v15 = a2;
              v13 = &WPP_RECORDER_INITIALIZED;
              LODWORD(v38) = Status;
            }
            v15->Flags &= ~2u;
            if ( !(_DWORD)v38 )
            {
              LODWORD(v12) = 1;
              v110 = 1;
              if ( v15->MajorNdisVersion >= 6u && !v15->GeneralAttributes )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
                v15 = a2;
                v13 = &WPP_RECORDER_INITIALIZED;
                LODWORD(v12) = 1;
                if ( !a2->GeneralAttributes )
                {
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v12) = 2;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v12,
                      1,
                      20,
                      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                      (char)a2);
                    v15 = a2;
                    LODWORD(v12) = 1;
                  }
                  *(_DWORD *)v120 = 32;
                  v117 = 1;
                  goto LABEL_45;
                }
              }
              v63 = (v15->PnPFlags & 0x8000000) == 0;
              p_BaseMiniport = &v15->BaseMiniport;
              if ( v63 )
              {
                v15->BaseMiniport = v15;
              }
              else
              {
                ndisReferenceMiniportByName(v15->BindPaths->Paths, &v15->BaseMiniport, 1, 0x1Fu);
                if ( *p_BaseMiniport )
                  ndisDereferenceMiniportRef(*p_BaseMiniport, 0x1Fu);
                v15 = a2;
                v13 = &WPP_RECORDER_INITIALIZED;
                LODWORD(v12) = 1;
              }
              v26 = MajorNdisVersion;
              if ( MajorNdisVersion < 6u )
              {
                Interrupt = v15->Interrupt;
                if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
                  v15->Flags &= ~1u;
                else
                  v15->Flags |= 1u;
                if ( !v15->ShutdownHandler )
                {
                  v15->ShutdownHandler = a1->MiniportCharacteristics.AdapterShutdownHandler;
                  v15->ShutdownContext = v15->MiniportAdapterContext;
                }
                v44 = *((_DWORD *)ndisMediumArray + v126);
                v143.MediaType = v44;
                v15->MediaType = v44;
                v15->MiniportMediaType = v44;
                LODWORD(v12) = 1;
              }
              MediaType = v15->MediaType;
              v15->State = NdisMiniportPaused;
              if ( MediaType <= 0xD )
              {
                v46 = 8390LL;
                if ( _bittest((const int *)&v46, MediaType) )
                {
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v12) = 4;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v12,
                      13,
                      21,
                      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                      (char)v15);
                    v15 = a2;
                    LODWORD(v12) = 1;
                    v26 = MajorNdisVersion;
                  }
                  if ( (byte_140125103 & 0x10) != 0 )
                  {
                    LODWORD(v105) = v15->MediaType;
                    LODWORD(OutputBufferLength) = v15->IfIndex;
                    McTemplateK0jqxd_EtwWriteTransfer(
                      v46,
                      &UnsupportedMiniportMediaType,
                      &v15->InterfaceGuid,
                      (__int64)&v15->InterfaceGuid,
                      OutputBufferLength,
                      v15->NetLuid.Value,
                      v105);
                    v15 = a2;
                    LODWORD(v12) = 1;
                    v26 = MajorNdisVersion;
                  }
                  *(_DWORD *)v120 = 32;
                  v117 = 1;
                  goto LABEL_46;
                }
              }
              ndisMRegisterBugCheckHandler((char *)v15);
              v15 = a2;
              if ( a2->MediaType == NdisMediumWan )
              {
                v26 = MajorNdisVersion;
                if ( MajorNdisVersion <= 4u )
                {
                  if ( (a2->Flags & 0x20000) == 0 )
                    a2->DeferredSendHandler = ndisMStartWanSends;
                }
                else if ( (a2->Flags & 0x20000) == 0 )
                {
                  *(_DWORD *)v120 = 32;
                  LODWORD(v12) = 1;
                  v117 = 1;
                  goto LABEL_46;
                }
              }
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v118);
              v47 = ndisSetWakeUpTimer(a2);
              v48 = v118;
              v112 = v47 != 0;
              a2->MiniportThread = 0LL;
              KeReleaseSpinLock(&a2->Lock, v48);
              ndisMStartInitMode(a2);
              if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v105) = *(_DWORD *)v121;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x16u,
                    (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                    (char)a2,
                    v105);
                }
                if ( (byte_140125102 & 0x10) != 0 )
                {
                  LODWORD(v106) = *(_DWORD *)v121;
                  LODWORD(v105) = 2;
                  LODWORD(OutputBufferLength) = a2->IfIndex;
                  McTemplateK0jqxqq_EtwWriteTransfer(
                    (__int64)a2,
                    &InitializeAdapterFailed,
                    &a2->InterfaceGuid,
                    (__int64)&a2->InterfaceGuid,
                    OutputBufferLength,
                    a2->NetLuid.Value,
                    v105,
                    v106);
                }
                *(_DWORD *)v120 = 36;
LABEL_146:
                v116 = v112;
LABEL_147:
                LODWORD(v12) = 1;
LABEL_44:
                v15 = a2;
LABEL_45:
                v26 = MajorNdisVersion;
LABEL_46:
                LOBYTE(v13) = 0;
                v27 = 0;
LABEL_47:
                v28 = 1;
                LOBYTE(Pool2) = 1;
                goto LABEL_48;
              }
              if ( MajorNdisVersion >= 6u )
              {
                v15 = a2;
                v51 = v112;
                if ( a2->MP6SupportPM )
                  v124 = 0;
                goto LABEL_158;
              }
              v143.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v147;
              a2->GeneralAttributes = &v143;
              MiniportInfo = ndisGetMiniportInfo(a2, &v143, (int *)v120, &v117, &v124);
              if ( !MiniportInfo )
              {
                MiniportInfo = ndisMSetGeneralAttributes(a2, a2->GeneralAttributes);
                v15 = a2;
                if ( MiniportInfo || (v50 = a2->Offload) == 0LL )
                {
LABEL_154:
                  v51 = v112;
                  v116 = v112;
                  if ( MiniportInfo )
                  {
LABEL_155:
                    LODWORD(v12) = 1;
                    goto LABEL_45;
                  }
LABEL_158:
                  if ( (v15->Flags & 0x180) == 0 )
                  {
                    v116 = v51;
                    v52 = ndisCheckNetworkInterfaceDataMismatch(v15, v15->GeneralAttributes);
                    v53 = NdisConvertNtStatusToNdisStatus(v52);
                    v15 = a2;
                    if ( v53 )
                      goto LABEL_155;
                  }
                  v116 = v112;
                  *(_DWORD *)v121 = ndisIovCreateDefaultNicSwitch(v15);
                  if ( *(_DWORD *)v121 )
                    goto LABEL_147;
                  ndisMNotifyMachineName(a2);
                  v54 = a2;
                  PnPFlags = a2->PnPFlags;
                  if ( (PnPFlags & 0x8001) != 0 || (v56 = a2->PnPFlags, (a2->DriverHandle->Flags & 1) != 0) )
                  {
                    v56 = a2->PnPFlags;
                    if ( a2->MediaType < (unsigned int)NdisMediumMax )
                    {
                      if ( v124 )
                        v56 = PnPFlags & 0xFFFFFFFE;
                      else
                        v56 = PnPFlags | 1;
                      a2->PnPFlags = v56;
                    }
                  }
                  if ( ((v56 & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
                    && (unsigned int)(a2->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
                    && (a2->PMAdminConfig.Value & 0xC) == 0 )
                  {
                    DisableMagicPacketKeyword(a2);
                    v54 = a2;
                  }
                  NdisInitializeTimer(&v54->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, v54);
                  KeInitializeEvent(&a2->WaitWakeIrpCompleted, NotificationEvent, 1u);
                  ndisUpdatePMCurrentCapabilities(a2);
                  if ( (a2->PnPFlags & 1) != 0 )
                  {
                    v57 = ndisCheckMiniportWakeUpCapable(a2);
                    v58 = a2;
                    PnPCapabilities = a2->PnPCapabilities;
                    if ( (PnPCapabilities & 8) == 0 )
                    {
                      v60 = a2->PnPFlags | 0x20;
                      v61 = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2;
                      a2->PnPFlags = v60;
                      if ( v61 <= 2 )
                        a2->PMCurrentParameters.WakeUpFlags |= 1u;
                      if ( (PnPCapabilities & 0x10) == 0 && v57 )
                      {
                        MinPatternWakeUp = a2->PMAdvertisedCapabilities.MinPatternWakeUp;
                        if ( (unsigned int)(MinPatternWakeUp - 2) <= 1 || MinPatternWakeUp == NdisDeviceStateD3 )
                        {
                          v60 |= 0x40u;
                          a2->PnPFlags = v60;
                        }
                        if ( (unsigned int)(a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
                        {
                          a2->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
                          v63 = a2->MajorNdisVersion == 6;
                          v64 = a2->MajorNdisVersion <= 6u;
                          a2->PnPFlags = v60 | 0x40;
                          if ( !v64 || v63 && a2->MinorNdisVersion >= 0x14u )
                          {
                            v65 = ndisAddWoLMagicPacket(a2);
                            *(_DWORD *)v121 = v65;
                            if ( v65 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                            {
                              LODWORD(v105) = v65;
                              WPP_RECORDER_SF_qL(
                                *((_QWORD *)WPP_GLOBAL_Control + 8),
                                2u,
                                1u,
                                0x17u,
                                (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                                (char)a2,
                                v105);
                            }
                            v58 = a2;
                          }
                        }
                      }
                      if ( (v58->Flags & 0x80u) == 0 )
                      {
                        v66 = v58->PnPFlags;
                        if ( (v66 & 0x40) != 0 )
                        {
                          if ( !v58->WaitWakeIrp )
                          {
                            v58->PnPFlags = v66 & 0xFFFFFBFF;
                            *(_DWORD *)v121 = ndisRequestWaitWake(
                                                a2,
                                                (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                          }
                        }
                        else
                        {
                          ndisCancelWaitWake(v58);
                        }
                      }
                    }
                  }
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v118);
                  v67 = a2;
                  if ( a2->MediaConnectState == MediaConnectStateDisconnected )
                  {
                    ndisSetMediaDisconnectTimer(a2);
                    v67 = a2;
                  }
                  v68 = v118;
                  v67->MiniportThread = 0LL;
                  KeReleaseSpinLock(&v67->Lock, v68);
                  v69 = a2;
                  a2->D0CompleteSignalWorkItem.WorkItem.Context = a2;
                  a2->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
                  a2->DevicePowerOnWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerOn;
                  a2->DevicePowerOnWorkItem.Workitem.Parameter = &a2->DevicePowerOnWorkItem;
                  a2->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
                  a2->DevicePowerDownWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerDown;
                  a2->DevicePowerDownWorkItem.Workitem.Parameter = &a2->DevicePowerDownWorkItem;
                  a2->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
                  if ( (a2->PMAdvertisedCapabilities.Flags & 6) != 0 )
                  {
                    ndisSelectiveSuspendInitialize(a2);
                    v69 = a2;
                  }
                  if ( (v69->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (v69->FilterPnPFlags & 0x200) != 0 )
                  {
                    ndisAoAcInitialize(v69);
                    ndisReadModernStandyWoLMagicPacketKeywords(a2);
                    ndisMRegisterPDCTaskClient(a2);
                    ndisMInitializePDCTaskClient((struct _NDIS_TIMER *)a2);
                    v69 = a2;
                  }
                  if ( v69->MediaType )
                  {
                    EthDB = (PNDIS_RW_LOCK_EX *)v69->EthDB;
                    if ( EthDB )
                    {
                      nullDeleteFilter(EthDB);
                      a2->EthDB = 0LL;
                    }
                    if ( !(unsigned __int8)nullCreateFilter(v140) )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v71) = 3;
                        WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v71,
                          1,
                          25,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          (char)a2);
                      }
                      *(_DWORD *)v120 = 30;
                      v117 = 1;
                      if ( (byte_140125102 & 0x10) == 0 )
                        goto LABEL_218;
                      LODWORD(v106) = 30;
                      LODWORD(v105) = 6;
LABEL_217:
                      LODWORD(OutputBufferLength) = a2->IfIndex;
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        (__int64)a2,
                        &InitializeAdapterFailed,
                        &a2->InterfaceGuid,
                        (__int64)&a2->InterfaceGuid,
                        OutputBufferLength,
                        a2->NetLuid.Value,
                        v105,
                        v106);
LABEL_218:
                      v15 = a2;
                      goto LABEL_220;
                    }
                  }
                  else if ( !EthCreateFilter(
                               v69->GeneralAttributes->MaxMulticastListSize,
                               v69->GeneralAttributes->CurrentMacAddress,
                               v140) )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v72) = 3;
                      WPP_RECORDER_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v72,
                        1,
                        24,
                        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                        (char)a2);
                    }
                    *(_DWORD *)v120 = 9;
                    v117 = 1;
                    if ( (byte_140125102 & 0x10) == 0 )
                      goto LABEL_218;
                    LODWORD(v106) = 9;
                    LODWORD(v105) = 4;
                    goto LABEL_217;
                  }
                  v15 = a2;
                  v140[0]->Miniport = a2;
LABEL_220:
                  v26 = MajorNdisVersion;
                  if ( v15->MiniportMediaType == NdisMediumNative802_11 && MajorNdisVersion >= 6u )
                  {
                    ConfigurationHandle = &v15->600;
                    if ( !(unsigned __int8)nullCreateFilter((struct _X_FILTER **)&v15->600) )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v73) = 3;
                        WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v73,
                          1,
                          26,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          (char)a2);
                      }
                      v117 = 1;
                      *(_DWORD *)v120 = 30;
                      *(_QWORD *)ConfigurationHandle = 0LL;
                      if ( (byte_140125102 & 0x10) != 0 )
                      {
                        LODWORD(v106) = 30;
                        LODWORD(v105) = 7;
                        LODWORD(OutputBufferLength) = a2->IfIndex;
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          (__int64)a2,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          OutputBufferLength,
                          a2->NetLuid.Value,
                          v105,
                          v106);
                        v116 = v112;
                        LODWORD(v12) = 1;
                        goto LABEL_44;
                      }
                      goto LABEL_146;
                    }
                    v15 = a2;
                    v26 = MajorNdisVersion;
                    *(_QWORD *)(*(_QWORD *)ConfigurationHandle + 296LL) = a2;
                  }
                  if ( v15->MediaType == NdisMedium802_3 )
                    v15->CheckPacketFilters = 1;
                  if ( (v15->Flags & 0x180) != 0 )
                  {
                    v27 = 0;
                  }
                  else
                  {
                    LODWORD(p_ReenumerateSelfInterface) = IoWMIRegistrationControl(v15->DeviceObject, 1u);
                    v74 = (int)p_ReenumerateSelfInterface;
                    if ( (int)p_ReenumerateSelfInterface < 0 )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LODWORD(v105) = (_DWORD)p_ReenumerateSelfInterface;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          3u,
                          1u,
                          0x1Bu,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          (char)a2,
                          v105);
                        v74 = (int)p_ReenumerateSelfInterface;
                      }
                      if ( (byte_140125102 & 0x10) != 0 )
                      {
                        LODWORD(v106) = v74;
                        LODWORD(v105) = 8;
                        LODWORD(OutputBufferLength) = a2->IfIndex;
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          (__int64)a2,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          OutputBufferLength,
                          a2->NetLuid.Value,
                          v105,
                          v106);
                      }
                      v15 = a2;
                      *(_DWORD *)v120 = 31;
                      v117 = 1;
                      goto LABEL_240;
                    }
                    v15 = a2;
                    v27 = 1;
                    v26 = MajorNdisVersion;
                    v113 = 1;
                  }
                  if ( v117 )
                  {
LABEL_240:
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v105) = v117;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        1u,
                        0x1Cu,
                        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                        (char)v15,
                        v105);
                      v15 = a2;
                    }
                    LODWORD(OutputBufferLength) = *(_DWORD *)v120;
                    NdisWriteErrorLogEntry(v15, 0xC000138D, 2u, 4278255360LL, OutputBufferLength);
                    LOBYTE(v13) = 0;
                    v15 = a2;
                    v27 = v113;
                    v26 = MajorNdisVersion;
                    v116 = v112;
                    LODWORD(v12) = 1;
                    goto LABEL_47;
                  }
                  v63 = (v15->Flags & 0x100) == 0;
                  *(_DWORD *)v120 = 1;
                  if ( v63 )
                  {
                    LODWORD(p_ReenumerateSelfInterface) = IoRegisterDeviceInterface(
                                                            v15->PhysicalDeviceObject,
                                                            &InterfaceClassGuid,
                                                            &v15->BaseName,
                                                            &v15->SymbolicLinkName);
                    v75 = (int)p_ReenumerateSelfInterface;
                    if ( (int)p_ReenumerateSelfInterface < 0 )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LODWORD(v105) = (_DWORD)p_ReenumerateSelfInterface;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x1Du,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          (char)a2,
                          v105);
                        v75 = (int)p_ReenumerateSelfInterface;
                      }
                      if ( (byte_140125102 & 0x10) != 0 )
                      {
                        LODWORD(v106) = v75;
                        LODWORD(v105) = 10;
                        LODWORD(OutputBufferLength) = a2->IfIndex;
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          (__int64)a2,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          OutputBufferLength,
                          a2->NetLuid.Value,
                          v105,
                          v106);
                      }
                      LOBYTE(v13) = 0;
                      v15 = a2;
                      v27 = v113;
                      v26 = MajorNdisVersion;
                      v116 = v112;
                      LODWORD(v12) = 1;
                      *(_DWORD *)v120 = 35;
                      goto LABEL_47;
                    }
                    v15 = a2;
                    v8 = 1;
                    SriovCurrentCapabilities = a2->SriovCurrentCapabilities;
                    if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
                    {
                      v77 = IoRegisterDeviceInterface(
                              a2->PhysicalDeviceObject,
                              &v146,
                              0LL,
                              &a2->DevinterfaceVirtSymbolicLinkName);
                      LODWORD(p_ReenumerateSelfInterface) = v77;
                      if ( *(int *)v121 < 0 )
                      {
                        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        {
                          LODWORD(v105) = v77;
                          WPP_RECORDER_SF_qL(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            2u,
                            1u,
                            0x1Eu,
                            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                            (char)a2,
                            v105);
                          v77 = (int)p_ReenumerateSelfInterface;
                        }
                        if ( (byte_140125102 & 0x10) != 0 )
                        {
                          LODWORD(v106) = v77;
                          LODWORD(v105) = 0;
                          LODWORD(OutputBufferLength) = a2->IfIndex;
                          McTemplateK0jqxqq_EtwWriteTransfer(
                            (__int64)a2,
                            &InitializeAdapterFailed,
                            &a2->InterfaceGuid,
                            (__int64)&a2->InterfaceGuid,
                            OutputBufferLength,
                            a2->NetLuid.Value,
                            v105,
                            v106);
                        }
                        LOBYTE(v13) = 0;
                        v15 = a2;
                        v27 = v113;
                        v26 = MajorNdisVersion;
                        v116 = v112;
                        LODWORD(v12) = 1;
                        *(_DWORD *)v120 = 34;
                        v117 = 1;
                        goto LABEL_47;
                      }
                      v15 = a2;
                      LODWORD(v13) = 1;
                      v115 = 1;
                    }
                    else
                    {
                      LOBYTE(v13) = 0;
                    }
                    v27 = v113;
                    v26 = MajorNdisVersion;
                    v15->DeviceObject->Flags &= ~0x80u;
                  }
                  else
                  {
                    LOBYTE(v13) = 0;
                  }
                  if ( !v15->GeneralAttributes || (IfBlock = v15->IfBlock) == 0LL )
                  {
                    v79 = 3221225473LL;
                    *(_DWORD *)v121 = -1073741823;
LABEL_326:
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LODWORD(v105) = v79;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Fu,
                        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                        (char)v15,
                        v105);
                      v15 = a2;
                      LODWORD(v13) = v115;
                      v27 = v113;
                      v26 = MajorNdisVersion;
                      v79 = *(unsigned int *)v121;
                    }
                    if ( (byte_140125102 & 0x10) != 0 )
                    {
                      LODWORD(v106) = v79;
                      LODWORD(v105) = 11;
                      LODWORD(OutputBufferLength) = v15->IfIndex;
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        v79,
                        &InitializeAdapterFailed,
                        &v15->InterfaceGuid,
                        (__int64)&v15->InterfaceGuid,
                        OutputBufferLength,
                        v15->NetLuid.Value,
                        v105,
                        v106);
                      v15 = a2;
                      LODWORD(v13) = v115;
                      v27 = v113;
                      v26 = MajorNdisVersion;
                    }
                    v116 = v112;
                    LODWORD(v12) = 1;
                    *(_DWORD *)v120 = 32;
                    v117 = 1;
                    goto LABEL_47;
                  }
                  *(_DWORD *)v121 = ndisIfUpdateInterfaceOnInitialize(v15, IfBlock, v15->GeneralAttributes);
                  v79 = *(unsigned int *)v121;
                  if ( *(_DWORD *)v121 )
                  {
                    v15 = a2;
                    LODWORD(v13) = v115;
                    v27 = v113;
                    v26 = MajorNdisVersion;
                    goto LABEL_326;
                  }
                  v80 = a2;
                  v11 = 1;
                  if ( (a2->PnPFlags & 0x200000) != 0 )
                  {
                    v81 = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePool2(64LL, 32LL, 2002994254);
                    v80 = a2;
                    a2->PhysicalPerformanceCounters = v81;
                  }
                  if ( !v80->OidList )
                  {
                    *(_QWORD *)&ParameterValue[8] = v80;
                    *(_QWORD *)ParameterValue = 0LL;
                    *(_OWORD *)&ParameterValue[16] = 0LL;
                    LODWORD(p_ReenumerateSelfInterface) = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)ParameterValue);
                    v82 = (int)p_ReenumerateSelfInterface;
                    if ( (_DWORD)p_ReenumerateSelfInterface )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        LODWORD(v105) = (_DWORD)p_ReenumerateSelfInterface;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x20u,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          (char)a2,
                          v105);
                        v82 = (int)p_ReenumerateSelfInterface;
                      }
                      if ( (byte_140125102 & 0x10) != 0 )
                      {
                        LODWORD(v106) = v82;
                        LODWORD(v105) = 12;
                        LODWORD(OutputBufferLength) = a2->IfIndex;
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          (__int64)a2,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          OutputBufferLength,
                          a2->NetLuid.Value,
                          v105,
                          v106);
                      }
                    }
                    v80 = a2;
                  }
                  Offload = v80->Offload;
                  if ( Offload )
                  {
                    if ( Offload->SupportsOffload == 1 )
                    {
                      Offload->SupportsTopOffload = 1;
                      v84 = v80->Offload;
                      *(_OWORD *)&v84->TopCapabilities.Header.Type = *(_OWORD *)&v84->MiniportCurrentConfig.Header.Type;
                      *(_OWORD *)((char *)&v84->TopCapabilities.Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv4Receive + 4);
                      *(_OWORD *)((char *)&v84->TopCapabilities.Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv6Receive + 4);
                      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v84->TopCapabilities.LsoV1.IPv4
                                                                              + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v84->MiniportCurrentConfig.LsoV1.IPv4 + 12);
                      *(_OWORD *)&v84->TopCapabilities.IPsecV1.Supported.IPv4Options = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV1.Supported.IPv4Options;
                      *(_OWORD *)&v84->TopCapabilities.LsoV2.IPv4.Encapsulation = *(_OWORD *)&v84->MiniportCurrentConfig.LsoV2.IPv4.Encapsulation;
                      *(_OWORD *)&v84->TopCapabilities.LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v84->MiniportCurrentConfig.LsoV2.IPv6.MaxOffLoadSize;
                      *(_OWORD *)&v84->TopCapabilities.IPsecV2.Encapsulation = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV2.Encapsulation;
                      *(_OWORD *)&v84->TopCapabilities.IPsecV2.UdpEsp = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV2.UdpEsp;
                      *(_OWORD *)&v84->TopCapabilities.Rsc.IPv4.Enabled = *(_OWORD *)&v84->MiniportCurrentConfig.Rsc.IPv4.Enabled;
                      *(_OWORD *)&v84->TopCapabilities.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported = *(_OWORD *)&v84->MiniportCurrentConfig.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
                      *(_OWORD *)&v84->TopCapabilities.EncapsulationTypes = *(_OWORD *)&v84->MiniportCurrentConfig.EncapsulationTypes;
                      *(_OWORD *)&v84->TopCapabilities.UdpSegmentation.IPv4.MaxOffLoadSize = *(_OWORD *)&v84->MiniportCurrentConfig.UdpSegmentation.IPv4.MaxOffLoadSize;
                      *((_QWORD *)&v84->TopCapabilities.UdpSegmentation.IPv6 + 1) = *((_QWORD *)&v84->MiniportCurrentConfig.UdpSegmentation.IPv6
                                                                                    + 1);
                      *(_DWORD *)&v84->TopCapabilities.UdpRsc.Enabled = *(_DWORD *)&v84->MiniportCurrentConfig.UdpRsc.Enabled;
                      ndisMergeOffloadCapsAndRegistry(v80, &v80->Offload->TopCapabilities);
                      v80 = a2;
                    }
                    v85 = v80->Offload;
                    if ( v85->SupportsTcpConnectionOffload == 1 )
                    {
                      v85->SupportsTopTcpConnectionOffload = 1;
                      v86 = v80->Offload;
                      *(_OWORD *)&v86->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v86->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
                      v86->TopTcpConnectionOffloadCapabilities.Flags = v86->MiniportTcpConnectionOffloadCurrentConfig.Flags;
                    }
                  }
                  v116 = v112;
                  v87 = ndisQueueMiniportOnDriver(v80, a1);
                  LODWORD(v12) = 1;
                  if ( !v87 )
                  {
                    v15 = a2;
                    LODWORD(v13) = v115;
                    v27 = v113;
                    v26 = MajorNdisVersion;
                    goto LABEL_47;
                  }
                  v7 = 1;
                  ndisSetDeviceInterfaceState(a2, 1u);
                  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v88) < 0 )
                  {
                    v15 = a2;
                    LODWORD(v13) = v115;
                    v27 = v113;
                    v26 = MajorNdisVersion;
                    v116 = v112;
                    LODWORD(v12) = 1;
                    *(_DWORD *)v120 = 39;
                    v117 = 1;
                    goto LABEL_47;
                  }
                  ndisPcwNotifyMiniportCreation(a2);
                  Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
                  if ( Ndis::BindState::SetBinding(
                         &a2->Bindings.Miniport,
                         BindingDisabled,
                         Reason_MiniportDeviceNotStarted) )
                  {
                    memset(v142, 0, sizeof(v142));
                    if ( (unsigned __int8)byte_140126C63 >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v89,
                          0x1Cu,
                          0x21u,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          *(unsigned __int16 **)&v142[8],
                          *(_QWORD *)v142);
                    }
                  }
                  if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
                  {
                    memset(v142, 0, sizeof(v142));
                    if ( (unsigned __int8)byte_140126C63 >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v90,
                          0x1Cu,
                          0x22u,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          *(unsigned __int16 **)&v142[8],
                          *(_QWORD *)v142);
                    }
                  }
                  if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_RemovingMiniport) )
                  {
                    memset(v142, 0, sizeof(v142));
                    if ( (unsigned __int8)byte_140126C63 >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v91,
                          0x1Cu,
                          0x23u,
                          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                          *(unsigned __int16 **)&v142[8],
                          *(_QWORD *)v142);
                    }
                  }
                  if ( (a2->Flags & 0x10000) == 0 )
                  {
                    if ( Ndis::BindState::SetBinding(
                           &a2->Bindings.Miniport,
                           BindingDisabled,
                           Reason_DefaultPortNotActive) )
                    {
                      memset(v142, 0, sizeof(v142));
                      if ( (unsigned __int8)byte_140126C63 >= 4u )
                      {
                        ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
                        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                          WPP_RECORDER_SF_Zq(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v92,
                            0x1Cu,
                            0x24u,
                            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                            *(unsigned __int16 **)&v142[8],
                            *(_QWORD *)v142);
                      }
                    }
                  }
                  Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
                  Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
                  if ( (a2->Flags & 0x100) == 0 )
                  {
                    v127 = (_BYTE)ndisAcOnLine == 1;
                    ndisNotifyMiniports(a2, v93, &v127);
                  }
                  a2->EthDB = v140[0];
                  if ( MajorNdisVersion >= 6u )
                  {
                    a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                    a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                  }
                  else
                  {
                    a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
                    Flags = a2->Flags;
                    if ( (Flags & 0x40000) != 0 )
                    {
                      a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
                      a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
                    }
                    else if ( (Flags & 0x40) != 0 )
                    {
                      a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                      a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                      v95 = ndisMDeferredSendPacketsSG;
                      if ( !a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
                        v95 = ndisMDeferredSendSG;
                      a2->DeferredSendHandler = v95;
                    }
                    else
                    {
                      a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
                      a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
                    }
                  }
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v118);
                  ndisMSetIndicatePacketHandler(a2);
                  v96 = v118;
                  a2->MiniportThread = 0LL;
                  KeReleaseSpinLock(&a2->Lock, v96);
                  if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
                    && a2->PhysicalMediumType == NdisPhysicalMedium802_3 )
                  {
                    v63 = a2->PMHardwareCapabilities.Header.Revision == 2;
                    InputBuffer = a2->PhysicalDeviceObject;
                    v136 = 0;
                    v133 = 4;
                    v134 = 1;
                    if ( !v63
                      || (a2->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
                      || a2->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
                      || a2->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
                      || (unsigned int)(a2->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
                      || (a2->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
                      || (v97 = a2->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v135 = 1, (_BYTE)v97 != 3) )
                    {
                      v135 = 0;
                    }
                    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
                  }
                  ndisPktMonMiniportRegister(a2);
                  LODWORD(v12) = v112;
                  v28 = 0;
                  v15 = a2;
                  v6 = 0;
                  v119 = 0;
                  *(_DWORD *)v120 = 0;
                  v108 = 0;
                  v116 = v112;
                  goto LABEL_346;
                }
                MiniportInfo = ndisMSetOffloadAttributes(
                                 a2,
                                 &v50->MiniportInitialConfig,
                                 &v50->MiniportInitialConfig,
                                 0LL,
                                 0LL);
              }
              v15 = a2;
              goto LABEL_154;
            }
            v15->State = NdisMiniportHalted;
            *(_QWORD *)&v15->OperStatus = 2LL;
            v98 = v15->IfBlock;
            if ( v98 && v98->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
            {
              v98->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
              v15->IfBlock->ifOperStatusFlags = v15->OperStatusFlags;
              ndisNsiSyncMiniportOperStatusNotification(v15);
              v15 = a2;
            }
            if ( v15->InvalidateBlockIoctlVf )
            {
              ndisIovTeardownVf(v15);
              v15 = a2;
            }
            ndisMDeregisterBugCheckHandler(v15);
            v15 = a2;
            *(_DWORD *)v120 = Status;
            if ( a2->TimerQueue )
              goto LABEL_381;
            if ( a2->Interrupt )
              goto LABEL_340;
            if ( a2->InterruptEx )
            {
LABEL_381:
              if ( a2->Interrupt )
              {
LABEL_340:
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
              if ( (a2->Flags & 0x80u) == 0 )
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
            v28 = 1;
LABEL_346:
            v26 = MajorNdisVersion;
            LOBYTE(v12) = 0;
            v27 = 0;
            v110 = 0;
            v7 = 0;
            v113 = 0;
            v8 = 0;
            v109 = v28;
            v11 = 0;
            LOBYTE(Pool2) = v28;
            LOBYTE(v13) = 0;
            v9 = v28;
            v115 = 0;
            v10 = v28;
            goto LABEL_48;
          }
          *(_DWORD *)v121 = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
        }
        v38 = (unsigned int)Status;
        v15 = a2;
        goto LABEL_102;
      }
      a2->DriverVerifyFlags |= 0x1000u;
      goto LABEL_40;
    }
    a2->DriverVerifyFlags |= 0x800u;
    goto LABEL_34;
  }
  LOBYTE(Pool2) = 1;
  v28 = 1;
LABEL_349:
  v26 = MajorNdisVersion;
  LOBYTE(v12) = 0;
  LOBYTE(v13) = 0;
  v27 = 0;
LABEL_48:
  if ( *(_DWORD *)v120 )
  {
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)v15, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v13);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    LODWORD(v12) = v110;
    LOBYTE(v13) = v115;
    v27 = v113;
    v26 = MajorNdisVersion;
  }
  if ( v11 )
  {
    *(_QWORD *)&a2->OperStatus = 2LL;
    v29 = a2->IfBlock;
    if ( v29->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v29->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
      LOBYTE(Pool2) = v109;
      v28 = v108;
      LODWORD(v12) = v110;
      LOBYTE(v13) = v115;
      v27 = v113;
      v26 = MajorNdisVersion;
    }
    if ( a2->PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(a2->PhysicalPerformanceCounters, 0);
      v28 = v108;
      LODWORD(v12) = v110;
      LOBYTE(v13) = v115;
      v27 = v113;
      v26 = MajorNdisVersion;
      a2->PhysicalPerformanceCounters = 0LL;
      LOBYTE(Pool2) = v109;
    }
  }
  if ( v27 )
  {
    IoWMIRegistrationControl(a2->DeviceObject, 2u);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    LODWORD(v12) = v110;
    LOBYTE(v13) = v115;
    v26 = MajorNdisVersion;
    v113 = 0;
  }
  v111 = v8;
  if ( v8 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceNetSymbolicLinkName, 0);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    LODWORD(v12) = v110;
    LOBYTE(v13) = v115;
    v26 = MajorNdisVersion;
    v111 = 0;
  }
  if ( (_BYTE)v13 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a2->DevinterfaceVirtSymbolicLinkName);
    v6 = v119;
    v28 = v108;
    LODWORD(v12) = v110;
    v26 = MajorNdisVersion;
    a2->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v115 = 0;
    LOBYTE(Pool2) = v109;
  }
  if ( (_BYTE)v12 )
  {
    ndisIovDeleteDefaultNicSwitch(a2);
    v30 = 130;
    if ( !v113 )
      v30 = 128;
    ndisMCommonHaltMiniport(
      a2,
      (v8 != 0 ? 4 : 0) | (v111 != 0 ? 0x40 : 0) | v30 | (v116 ? 8 : 0) | (v115 != 0 ? 0x100 : 0));
    ndisMDeregisterBugCheckHandler(a2);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    v26 = MajorNdisVersion;
  }
  if ( v9 )
  {
    if ( (a2->Flags & 0x40) != 0 && a2->MiniportSGDmaBlock )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v12,
          1,
          37,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a2);
      }
      ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v118);
    if ( a2->MiniportSGDmaBlock )
    {
      memset(&ConfigObject, 0, sizeof(ConfigObject));
      KeInitializeEvent((PRKEVENT)&ConfigObject, NotificationEvent, 0);
      v99 = v118;
      a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = (_KEVENT *)&ConfigObject;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v99);
      LOBYTE(Pool2) = ndisWaitForKernelObject(&ConfigObject, 30000LL);
      v28 = v108;
      v63 = (_BYTE)Pool2 == 0;
      LOBYTE(Pool2) = v109;
      v26 = MajorNdisVersion;
      if ( !v63 )
        a2->Flags &= ~0x40u;
    }
    else
    {
      v100 = v118;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v100);
      a2->Flags &= ~0x40u;
      LOBYTE(Pool2) = v109;
      v28 = v108;
      v26 = MajorNdisVersion;
    }
  }
  if ( v7 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        1,
        38,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a2);
    }
    ndisDeQueueMiniportOnDriver(a2, a1);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    v26 = MajorNdisVersion;
  }
  if ( v6 )
  {
    IoDeleteSymbolicLink(&DestinationString);
    LOBYTE(Pool2) = v109;
    v28 = v108;
    v26 = MajorNdisVersion;
  }
  if ( (_BYTE)Pool2 )
  {
    ndisDereferenceMiniportRef(a2, 0x18u);
    v28 = v108;
    v26 = MajorNdisVersion;
  }
  if ( v28 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v12,
        1,
        39,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a2);
    }
    ndisDereferenceDriver(a1, 0, 2u);
    v26 = MajorNdisVersion;
  }
  GeneralAttributes = a2->GeneralAttributes;
  if ( GeneralAttributes )
  {
    if ( v26 >= 6u )
      ExFreePoolWithTag(GeneralAttributes, 0);
    a2->GeneralAttributes = 0LL;
  }
  if ( v10 )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)a2->PeriodicReceivesNblCountIndex, 0x527374uLL);
    a2->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v105) = *(_DWORD *)v120;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a2,
      v105);
  }
  return *(unsigned int *)v120;
}
