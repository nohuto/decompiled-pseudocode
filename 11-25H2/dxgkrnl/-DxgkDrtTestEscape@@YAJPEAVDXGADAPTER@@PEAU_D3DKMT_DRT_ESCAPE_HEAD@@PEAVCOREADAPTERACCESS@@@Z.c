/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14001AE50 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x140036938 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003BBA4 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14003EB08 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400419B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046F04 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047630 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140052108 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x14005FA3C (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ @ 0x140064CFC (-IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x14006D590 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14006EFCC (-SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z.c)
 *     DpiDrtClearInternalPanelInfoCacheMux @ 0x14008844C (DpiDrtClearInternalPanelInfoCacheMux.c)
 *     DpiDrtModifyInternalPanelInfoCacheMux @ 0x140088464 (DpiDrtModifyInternalPanelInfoCacheMux.c)
 *     DpiDrtToggleMux @ 0x140088480 (DpiDrtToggleMux.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     DxgkpIsDrtEnabled @ 0x140188BF0 (DxgkpIsDrtEnabled.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x14018D11C (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x14018D18C (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140190D18 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     ?QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140191DC0 (-QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x140191E44 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019AACC (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019B108 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x14019F75C (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1401A3910 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401A8714 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8A48 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401ADA2C (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BB630 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401C55AC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C66C4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C6A48 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x140216248 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1402484C0 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140266AA4 (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1402D7C08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402E0234 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1403251D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x140346894 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140346914 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403600FC (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140372AB0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140394F30 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x14039A1B4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1403F5064 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x140404204 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **this)
{
  __int64 AllocationSizeInSystemMemory; // rbx
  __int64 v7; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r15
  int IsConsoleSessionDispBrokerEnabled; // esi
  int v10; // edi
  struct DXGPROCESS *v11; // r15
  char IsDrtEnabled; // al
  int v13; // edx
  unsigned int v14; // edi
  int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  const wchar_t *v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rcx
  int MonitorDeviceObject; // eax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v27; // r15
  __int64 v28; // rax
  const wchar_t *v29; // r9
  char *v30; // r13
  struct DXGDEVICE *v31; // rdi
  unsigned int v32; // edx
  _QWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  char *v37; // r14
  __int64 v38; // r9
  __int64 v39; // rdx
  char *v40; // rax
  _OWORD *v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r8d
  int v44; // edx
  struct DXGPROCESS *v45; // rax
  __int64 v46; // r12
  struct DXGDEVICE *v47; // r15
  __int64 v48; // r9
  DXGDEVICEACCESSLOCKEXCLUSIVE *p_IoStatusBlock; // rcx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct DXGCONTEXT *v51; // rdi
  __int64 v52; // rax
  const wchar_t *v53; // r9
  __int64 v54; // r9
  struct DXGPROCESS *v55; // rax
  _QWORD *v56; // rax
  struct DXGPROCESS *v57; // rax
  DXGPROCESS *v58; // r15
  _QWORD *v59; // r13
  __int64 v60; // rax
  const wchar_t *v61; // r9
  __int64 v62; // r12
  int v63; // esi
  int v64; // edi
  int HostProcess; // eax
  __int64 v66; // r9
  int v67; // ecx
  unsigned int v68; // r8d
  struct _EX_RUNDOWN_REF **v69; // rax
  __int64 v70; // r8
  struct _EX_RUNDOWN_REF **p_Object; // rcx
  struct _EX_RUNDOWN_REF **v72; // rax
  _BYTE *v73; // rax
  int v74; // edx
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  struct DXGPROCESS *v76; // rax
  void *v77; // rcx
  NTSTATUS v78; // eax
  __int64 v79; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  struct DXGPROCESS *v86; // rax
  struct CCD_BTL *v87; // rax
  void *v88; // rdi
  int v89; // edx
  struct _KEVENT *p_Event; // rcx
  __int64 v91; // rdx
  int v92; // ecx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v94; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v95; // rdi
  struct DXGPROCESS *v96; // rax
  unsigned int MonitorHash; // eax
  __int64 v98; // r8
  int v99; // ecx
  __int64 v100; // rdx
  int v101; // edi
  __int64 v102; // rcx
  __int16 v103; // di
  int v104; // eax
  unsigned int v105; // ecx
  int v106; // eax
  struct DXGHWQUEUE *v107; // rax
  struct DXGPROCESS *v108; // rax
  struct DXGDEVICE *v109; // rdi
  __int64 v110; // r9
  unsigned int v111; // r15d
  __int64 v112; // rax
  const wchar_t *v113; // r9
  int v114; // edi
  unsigned int v115; // edi
  __int64 v116; // rsi
  struct _D3DDDI_ALLOCATIONLIST *v117; // r12
  unsigned __int8 *v118; // rax
  __int64 v119; // r8
  __int64 v120; // r9
  struct DXGCONTEXT *v121; // r10
  bool IsDxgmms2; // r14
  struct DXGALLOCATION **v123; // rdi
  struct DXGALLOCATION **Elements; // rax
  void **HeadIterator; // rax
  DXGCONTEXT *v126; // r10
  void *v127; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  unsigned int v129; // edx
  int v130; // eax
  int v131; // eax
  RAPID_HPD_MANAGER *v132; // rsi
  __int64 v133; // rcx
  int v134; // edx
  unsigned __int8 v135[4]; // [rsp+50h] [rbp-4F8h] BYREF
  int v136; // [rsp+54h] [rbp-4F4h]
  struct DXGCONTEXT *v137; // [rsp+58h] [rbp-4F0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-4E8h] BYREF
  PVOID v139[2]; // [rsp+68h] [rbp-4E0h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+78h] [rbp-4D0h] BYREF
  struct DXGHWQUEUE *v141[2]; // [rsp+88h] [rbp-4C0h] BYREF
  struct DXGALLOCATION **v142; // [rsp+98h] [rbp-4B0h] BYREF
  struct DXGDEVICE *v143; // [rsp+A0h] [rbp-4A8h] BYREF
  _BYTE v144[24]; // [rsp+A8h] [rbp-4A0h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-488h] BYREF
  _BYTE v146[8]; // [rsp+D8h] [rbp-470h] BYREF
  DXGPUSHLOCK *v147; // [rsp+E0h] [rbp-468h]
  int v148; // [rsp+E8h] [rbp-460h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v149[2]; // [rsp+F0h] [rbp-458h] BYREF
  struct DXGPROCESS *v150; // [rsp+100h] [rbp-448h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp-440h] BYREF
  _BYTE v152[16]; // [rsp+118h] [rbp-430h] BYREF
  _DWORD v153[2]; // [rsp+128h] [rbp-420h] BYREF
  struct DXGPROCESS **v154; // [rsp+130h] [rbp-418h]
  PVOID P; // [rsp+140h] [rbp-408h] BYREF
  _BYTE v156[256]; // [rsp+148h] [rbp-400h] BYREF
  int v157; // [rsp+248h] [rbp-300h]
  unsigned __int8 v158[80]; // [rsp+250h] [rbp-2F8h] BYREF
  __int128 v159; // [rsp+2A0h] [rbp-2A8h]
  _BYTE v160[424]; // [rsp+2B0h] [rbp-298h] BYREF
  _BYTE v161[160]; // [rsp+460h] [rbp-E8h] BYREF

  AllocationSizeInSystemMemory = 0LL;
  LOBYTE(v149[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v149, 0LL, 0x2Du, 0);
  v8 = v149[1];
  IsConsoleSessionDispBrokerEnabled = 0;
  v136 = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_OSTestSigningEnabled && !DxgkpIsDrtEnabled() )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1902;
      goto LABEL_202;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v7) + 102) & 0x100) != 0 )
    {
      v21 = *((int *)a2 + 2);
      if ( (unsigned int)v21 > 0x31 || (v22 = 0x2000020010000LL, !_bittest64(&v22, v21)) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 296;
LABEL_20:
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v149);
        return -1073741811LL;
      }
    }
    v24 = *((int *)a2 + 2);
    if ( (int)v24 <= 26 )
    {
      if ( (_DWORD)v24 != 26 )
      {
        if ( (int)v24 <= 15 )
        {
          if ( (_DWORD)v24 == 15 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0xA8u )
            {
              v43 = *((_DWORD *)a2 + 4);
              if ( v43 < *((_DWORD *)a1 + 842) )
              {
                v44 = *((_DWORD *)a2 + 3);
                switch ( v44 )
                {
                  case 0:
                    DXGADAPTER::ForcePStateAcrossNodes(a1, *((_DWORD *)a2 + 6));
                    goto LABEL_443;
                  case 1:
                  case 2:
                  case 3:
                    DXGADAPTER::ForcePState((__int64)a1, v44, v43, *((_DWORD *)a2 + 6));
                    goto LABEL_443;
                  case 4:
                    *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1108);
                    goto LABEL_443;
                  case 5:
                    DXGADAPTER::QueryPStateEngineData(
                      a1,
                      *((_DWORD *)a2 + 5),
                      (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                      (unsigned int *)a2 + 4);
                    goto LABEL_443;
                }
              }
            }
            goto LABEL_202;
          }
          if ( (int)v24 <= 6 )
          {
            if ( (_DWORD)v24 != 6 )
            {
              if ( (_DWORD)v24 != 1 )
              {
                if ( (_DWORD)v24 != 2 )
                {
                  switch ( (_DWORD)v24 )
                  {
                    case 3:
                      if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
                        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
                      IsConsoleSessionDispBrokerEnabled = COREADAPTERACCESS::AcquireExclusive((__int64)this, 1u, 0);
                      if ( IsConsoleSessionDispBrokerEnabled >= 0 )
                        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
                      goto LABEL_443;
                    case 4:
                      if ( *((_DWORD *)a2 + 1) >= 0x10u )
                      {
                        if ( (unsigned int)(*((_DWORD *)a2 + 3) - 1) <= 0x3FF )
                        {
                          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                          goto LABEL_443;
                        }
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 381;
                      }
                      else
                      {
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 372;
                      }
                      goto LABEL_202;
                    case 5:
                      if ( *((_DWORD *)a2 + 1) >= 0x14u )
                      {
                        g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                        goto LABEL_443;
                      }
                      WdLogSingleEntry0(3LL);
                      WdLogGlobalForLineNumber = 395;
LABEL_202:
                      IsConsoleSessionDispBrokerEnabled = -1073741811;
                      goto LABEL_443;
                  }
LABEL_304:
                  WdLogSingleEntry1(3LL, *((int *)a2 + 2));
                  WdLogGlobalForLineNumber = 1893;
                  goto LABEL_202;
                }
LABEL_317:
                IsConsoleSessionDispBrokerEnabled = -1073741637;
                goto LABEL_443;
              }
              MonitorDeviceObject = MonitorDRTTest(a1, a2, v8, v20);
              goto LABEL_45;
            }
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 469;
              goto LABEL_202;
            }
            Current = DXGPROCESS::GetCurrent(v24);
            v27 = Current;
            if ( !Current )
            {
              WdLogSingleEntry0(2LL);
              v28 = 477LL;
LABEL_50:
              v29 = L"Cannot get the current DXGPROCESS";
LABEL_51:
              WdLogGlobalForLineNumber = v28;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, v28, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_202;
            }
            v30 = (char *)Current + 216;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v30, 0LL);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *((_QWORD *)v30 + 1) = KeGetCurrentThread();
            v31 = 0LL;
            v143 = 0LL;
            v32 = *((_DWORD *)a2 + 3);
            if ( v32 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v142, v32, v27, &v143);
              v31 = v143;
              if ( !v143 )
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                WdLogGlobalForLineNumber = 493;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"The device handle is invalid: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                v136 = -1073741811;
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v142);
                Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                *((_QWORD *)v30 + 1) = 0LL;
                v33 = v30;
LABEL_55:
                ExReleasePushLockExclusiveEx(v33, 0LL);
                KeLeaveCriticalRegion();
                goto LABEL_443;
              }
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v142);
            }
            if ( !v31 )
            {
              v31 = (struct DXGDEVICE *)((*((_QWORD *)v27 + 40) - 24LL) & -(__int64)(*((_QWORD *)v27 + 40) != 0LL));
              v143 = v31;
              if ( !v31 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 504;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"The process does not have any devices",
                  504LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                v136 = -1073741811;
                Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                *((_QWORD *)v27 + 28) = 0LL;
                v33 = (_QWORD *)((char *)v27 + 216);
                goto LABEL_55;
              }
            }
            DXGDEVICE::GetContexts(v31, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
            *((_DWORD *)a2 + 3) = *((_DWORD *)v31 + 117);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *((_QWORD *)v27 + 28) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v27 + 216, 0LL);
            KeLeaveCriticalRegion();
LABEL_61:
            IsConsoleSessionDispBrokerEnabled = v136;
            goto LABEL_443;
          }
          switch ( (_DWORD)v24 )
          {
            case 0xA:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 842);
                goto LABEL_443;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 412;
              goto LABEL_202;
            case 0xB:
              v36 = *((_DWORD *)a1 + 842);
              if ( v36 && *((unsigned int *)a2 + 1) >= 344 * (unsigned __int64)(v36 - 1) + 360 )
              {
                v37 = (char *)a2 + 352;
                v38 = v36;
                do
                {
                  v39 = *((_QWORD *)a1 + 403);
                  v40 = v37 - 336;
                  v41 = (_OWORD *)(AllocationSizeInSystemMemory + v39 + 8);
                  v42 = 2LL;
                  do
                  {
                    *(_OWORD *)v40 = *v41;
                    *((_OWORD *)v40 + 1) = v41[1];
                    *((_OWORD *)v40 + 2) = v41[2];
                    *((_OWORD *)v40 + 3) = v41[3];
                    *((_OWORD *)v40 + 4) = v41[4];
                    *((_OWORD *)v40 + 5) = v41[5];
                    *((_OWORD *)v40 + 6) = v41[6];
                    v40 += 128;
                    *((_OWORD *)v40 - 1) = v41[7];
                    v41 += 8;
                    --v42;
                  }
                  while ( v42 );
                  *(_OWORD *)v40 = *v41;
                  *((_OWORD *)v40 + 1) = v41[1];
                  *((_OWORD *)v40 + 2) = v41[2];
                  *((_OWORD *)v40 + 3) = v41[3];
                  *((_OWORD *)v40 + 4) = v41[4];
                  *(_DWORD *)v37 = *(_DWORD *)(AllocationSizeInSystemMemory + v39 + 344);
                  v37[4] = *(_BYTE *)(AllocationSizeInSystemMemory + v39 + 356);
                  AllocationSizeInSystemMemory += 520LL;
                  v37 += 344;
                  --v38;
                }
                while ( v38 );
                goto LABEL_443;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 431;
              goto LABEL_202;
            case 0xC:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v35 = *((_QWORD *)a1 + 391);
                if ( v35 )
                  *(_BYTE *)(v35 + 1024) = *((_BYTE *)a2 + 12);
                goto LABEL_443;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 450;
              goto LABEL_202;
          }
          if ( (_DWORD)v24 != 14 )
            goto LABEL_304;
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1042;
            goto LABEL_202;
          }
          v34 = *((_QWORD *)a1 + 27);
          if ( v34 )
          {
            MonitorDeviceObject = DxgkHandleThermalCoolingDrtEscape(v34, (__int64)a2);
            goto LABEL_45;
          }
LABEL_193:
          IsConsoleSessionDispBrokerEnabled = -1073741823;
          goto LABEL_443;
        }
        if ( (int)v24 > 21 )
        {
          switch ( (_DWORD)v24 )
          {
            case 0x16:
              v135[0] = 0;
              IsConsoleSessionDispBrokerEnabled = DxgkIsConsoleSessionDispBrokerEnabled((bool *)v135);
              if ( IsConsoleSessionDispBrokerEnabled < 0 )
                goto LABEL_443;
              if ( !v135[0] )
              {
                v86 = DXGPROCESS::GetCurrent(v83);
                DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)&Event, v86);
                DXGUSERCRIT::Acquire((DXGUSERCRIT *)&Event, 0);
                v87 = CCD_BTL::Global();
                CCD_TOPOLOGY::Clear((void **)v87 + 1);
                IsConsoleSessionDispBrokerEnabled = 0;
                DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)&Event);
                goto LABEL_443;
              }
              MonitorDeviceObject = DxgkRequestDisplayPrivateTest(v83, v82, v84, v85);
              goto LABEL_45;
            case 0x17:
              if ( *((_DWORD *)a2 + 1) < 0x30u )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 361;
                goto LABEL_202;
              }
              MonitorDeviceObject = DxgkpSendTestVmBusCommand(a1, a2, v19, v20);
              goto LABEL_45;
            case 0x18:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
                goto LABEL_443;
              }
              goto LABEL_202;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
            goto LABEL_202;
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          DeviceObject[0] = 0LL;
          v139[0] = 0LL;
          MonitorDeviceObject = DxgkGetMonitorDeviceObject(
                                  (const struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  (struct _FILE_OBJECT **)v139,
                                  DeviceObject);
          if ( MonitorDeviceObject < 0 )
          {
LABEL_45:
            IsConsoleSessionDispBrokerEnabled = MonitorDeviceObject;
            goto LABEL_443;
          }
          AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject[0]);
          IoStatusBlock = 0LL;
          v81 = IoBuildDeviceIoControlRequest(
                  0x232433u,
                  AttachedDeviceReference,
                  (char *)a2 + 24,
                  4u,
                  0LL,
                  0,
                  1u,
                  &Event,
                  &IoStatusBlock);
          if ( v81 )
          {
            IsConsoleSessionDispBrokerEnabled = IofCallDriver(AttachedDeviceReference, v81);
            if ( IsConsoleSessionDispBrokerEnabled == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
              IsConsoleSessionDispBrokerEnabled = IoStatusBlock.Status;
            }
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(v139[0]);
            goto LABEL_443;
          }
          ObfDereferenceObject(AttachedDeviceReference);
          ObfDereferenceObject(v139[0]);
          goto LABEL_193;
        }
        if ( (_DWORD)v24 == 21 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 774;
            goto LABEL_202;
          }
          v76 = DXGPROCESS::GetCurrent(v24);
          if ( !v76 )
          {
            WdLogSingleEntry0(2LL);
            v28 = 782LL;
            goto LABEL_50;
          }
          v139[0] = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
            (DXGDEVICEBYHANDLE *)DeviceObject,
            *((_DWORD *)a2 + 3),
            v76,
            (struct DXGDEVICE **)v139);
          if ( !v139[0] )
          {
            WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
            WdLogGlobalForLineNumber = 793;
            goto LABEL_141;
          }
          v77 = (void *)*((_QWORD *)a2 + 2);
          Object = 0LL;
          v78 = ObReferenceObjectByHandle(v77, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          IsConsoleSessionDispBrokerEnabled = v78;
          v136 = v78;
          if ( v78 < 0 )
          {
            v79 = v78;
            WdLogSingleEntry1(2LL, v78);
            WdLogGlobalForLineNumber = 807;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"hEvent is invalid, returning 0x%I64x",
              v79,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_143;
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v152,
            (struct DXGDEVICE *)v139[0]);
          KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
          p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)v152;
LABEL_150:
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE(p_IoStatusBlock);
          goto LABEL_143;
        }
        if ( (_DWORD)v24 != 16 )
        {
          if ( (_DWORD)v24 != 17 )
          {
            if ( (_DWORD)v24 == 18 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1011;
                goto LABEL_202;
              }
              v55 = DXGPROCESS::GetCurrent(v24);
              if ( !v55 )
              {
                WdLogSingleEntry0(2LL);
                v28 = 1019LL;
                goto LABEL_50;
              }
              v139[0] = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                (DXGDEVICEBYHANDLE *)DeviceObject,
                *((_DWORD *)a2 + 3),
                v55,
                (struct DXGDEVICE **)v139);
              v56 = v139[0];
              if ( v139[0] )
              {
                *((_BYTE *)v139[0] + 1903) = 1;
                *(_BYTE *)(v56[5] + 337LL) = 1;
LABEL_143:
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)DeviceObject);
                goto LABEL_443;
              }
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              WdLogGlobalForLineNumber = 1030;
              goto LABEL_141;
            }
            if ( (_DWORD)v24 == 19 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
                goto LABEL_202;
              if ( g_OSTestSigningEnabled )
              {
                *((_BYTE *)DXGGLOBAL::GetGlobal() + 1552) = *((_DWORD *)a2 + 3) != 0;
                goto LABEL_443;
              }
              goto LABEL_317;
            }
            if ( *((_DWORD *)a2 + 1) < 0x18u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 682;
              goto LABEL_202;
            }
            v45 = DXGPROCESS::GetCurrent(v24);
            v46 = (__int64)v45;
            if ( !v45 )
            {
              WdLogSingleEntry0(2LL);
              v28 = 690LL;
              goto LABEL_50;
            }
            v139[0] = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
              (DXGDEVICEBYHANDLE *)DeviceObject,
              *((_DWORD *)a2 + 3),
              v45,
              (struct DXGDEVICE **)v139);
            v47 = (struct DXGDEVICE *)v139[0];
            if ( !v139[0] )
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              WdLogGlobalForLineNumber = 701;
LABEL_141:
              v60 = *((unsigned int *)a2 + 3);
              v61 = L"Cannot get the device by handle: 0x%I64x";
LABEL_142:
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v61, v60, 0LL, 0LL, 0LL, 0LL);
              IsConsoleSessionDispBrokerEnabled = -1073741811;
              goto LABEL_143;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v141, v47);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v144,
              *(struct DXGADAPTER **)(*((_QWORD *)v47 + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, (__int64)v47, 0, v48, 0);
            IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v161, 0LL);
            v136 = IsConsoleSessionDispBrokerEnabled;
            if ( IsConsoleSessionDispBrokerEnabled < 0 )
              goto LABEL_110;
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v137, 0LL);
            AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                          v46,
                                                          (DXGALLOCATIONREFERENCE *)&Object,
                                                          *((_DWORD *)a2 + 4));
            DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v137, AllocationSafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Object);
            v51 = v137;
            if ( v137 )
            {
              v54 = *((_QWORD *)v47 + 2);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v137 + 1) + 16LL) + 16LL) != *(_QWORD *)(v54 + 16) )
              {
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                WdLogSingleEntry3(2LL, v47, v137, -1073741811LL);
                WdLogGlobalForLineNumber = 729;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  (__int64)v47,
                  (__int64)v51,
                  -1073741811LL,
                  0LL,
                  0LL);
                goto LABEL_114;
              }
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (*((_DWORD *)v137 + 18) & 0x800) == 0 )
                {
                  LODWORD(Object) = 0;
                  v139[0] = 0LL;
                  IsConsoleSessionDispBrokerEnabled = VIDMM_EXPORT::VidMmPinAllocation(
                                                        *(VIDMM_EXPORT **)(v54 + 760),
                                                        *(struct VIDMM_GLOBAL **)(v54 + 768),
                                                        *((struct VIDMM_MULTI_ALLOC **)v137 + 3),
                                                        0LL,
                                                        (unsigned int *)&Object,
                                                        (union _LARGE_INTEGER *)v139,
                                                        0LL);
                  if ( IsConsoleSessionDispBrokerEnabled >= 0 )
                    *((_DWORD *)v51 + 18) |= 0x800u;
                  goto LABEL_114;
                }
                WdLogSingleEntry0(2LL);
                v52 = 738LL;
                WdLogGlobalForLineNumber = 738;
                v53 = L"Allocation is already pinned";
              }
              else
              {
                if ( _bittest((const signed __int32 *)v137 + 18, 0xBu) )
                {
                  VIDMM_EXPORT::VidMmUnpinAllocation(
                    *(VIDMM_EXPORT **)(v54 + 760),
                    *(struct VIDMM_GLOBAL **)(v54 + 768),
                    *((struct VIDMM_MULTI_ALLOC **)v137 + 3));
                  *((_DWORD *)v51 + 18) &= ~0x800u;
                  goto LABEL_114;
                }
                WdLogSingleEntry0(2LL);
                v52 = 759LL;
                WdLogGlobalForLineNumber = 759;
                v53 = L"Allocation is not pinned";
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 4));
              WdLogGlobalForLineNumber = 720;
              v52 = *((unsigned int *)a2 + 4);
              v53 = L"Cannot get the allocation by handle: 0x%I64x";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v53, v52, 0LL, 0LL, 0LL, 0LL);
            IsConsoleSessionDispBrokerEnabled = -1073741811;
LABEL_114:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v137);
LABEL_110:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
            p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)v141;
            goto LABEL_150;
          }
LABEL_352:
          if ( *((_DWORD *)a2 + 1) < 0xA8u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 853;
            goto LABEL_20;
          }
          v108 = DXGPROCESS::GetCurrent(v24);
          v150 = v108;
          if ( !v108 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 860;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Cannot get the current DXGPROCESS",
              860LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_20;
          }
          v137 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152, *((_DWORD *)a2 + 3), v108, &v137, 0, 1);
          if ( !v137 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 869;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Cannot get the context", 869LL, 0LL, 0LL, 0LL, 0LL);
LABEL_365:
            IsConsoleSessionDispBrokerEnabled = -1073741811;
LABEL_397:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v152);
            goto LABEL_443;
          }
          if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          v109 = (struct DXGDEVICE *)*((_QWORD *)v137 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject, v109);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v146, (struct _KTHREAD **)v137 + 55, 0);
          DXGPUSHLOCK::AcquireExclusive(v147);
          v148 = 2;
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144, a1, 1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, (__int64)v109, 0, v110, 0);
          IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v161, 0LL);
          v136 = IsConsoleSessionDispBrokerEnabled;
          if ( IsConsoleSessionDispBrokerEnabled >= 0 )
          {
            v111 = *((_DWORD *)a2 + 8);
            if ( v111 > 0x10 )
            {
              WdLogSingleEntry0(2LL);
              v112 = 891LL;
              v113 = L"Invalid number of allocations";
LABEL_363:
              WdLogGlobalForLineNumber = v112;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v113, v112, 0LL, 0LL, 0LL, 0LL);
LABEL_364:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v146);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
              goto LABEL_365;
            }
            v114 = *((_DWORD *)a2 + 4);
            if ( !v114 && *((_DWORD *)a2 + 2) == 17 )
            {
              WdLogSingleEntry0(2LL);
              v112 = 897LL;
              v113 = L"Invalid command buffer size";
              goto LABEL_363;
            }
            if ( *((_BYTE *)a1 + 209) )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)v137 + 7);
              v115 = 0;
              if ( !v111 )
              {
LABEL_374:
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v146);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                IsConsoleSessionDispBrokerEnabled = 0;
                goto LABEL_397;
              }
              v116 = (__int64)v150;
              while ( 1 )
              {
                DXGPROCESS::GetAllocationSafe(v116, (DXGALLOCATIONREFERENCE *)v139, *((_DWORD *)a2 + 2 * v115 + 9));
                if ( !v139[0] )
                  break;
                *((_DWORD *)a2 + 2 * v115 + 9) = *((_DWORD *)v139[0] + 5);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v139);
                if ( ++v115 >= *((_DWORD *)a2 + 8) )
                  goto LABEL_374;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 911;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Invalid allocation handle",
                911LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v139);
              goto LABEL_364;
            }
            memset(v160, 0, 0x170uLL);
            *(_DWORD *)v160 = *((_DWORD *)a2 + 3);
            *(_DWORD *)&v160[12] = v111;
            v117 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
            *(_QWORD *)&v160[40] = (char *)a2 + 36;
            *(_DWORD *)&v160[68] |= 0x20u;
            if ( *((_DWORD *)a2 + 2) == 17 )
            {
              v118 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
            }
            else
            {
              v114 = 80;
              memset(v158, 0, sizeof(v158));
              *(_DWORD *)&v158[4] = 80;
              *(_DWORD *)v158 = 1;
              *(_QWORD *)&v158[40] = 0x100000000LL;
              *(_DWORD *)&v158[48] = 1;
              *(_OWORD *)&v158[8] = *(_OWORD *)((char *)a2 + 168);
              *(_OWORD *)&v158[24] = *(_OWORD *)&v158[8];
              *(_QWORD *)&v158[68] = *((_QWORD *)a2 + 25);
              *(_QWORD *)&v158[56] = &v158[24];
              *(_WORD *)&v158[64] = 1;
              v118 = v158;
            }
            *(_QWORD *)&v160[24] = v118;
            *(_DWORD *)&v160[8] = v114;
            IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v137 + 2) + 16LL) + 16LL));
            v135[0] = IsDxgmms2;
            LODWORD(Object) = v111;
            P = 0LL;
            v157 = 0;
            v123 = 0LL;
            v142 = 0LL;
            if ( IsDxgmms2 )
            {
              Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                    (__int64 *)&P,
                                                    v111,
                                                    v119,
                                                    v120);
              v123 = Elements;
              v142 = Elements;
              if ( !Elements )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 969;
                if ( P != v156 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v157 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v146);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                IsConsoleSessionDispBrokerEnabled = -1073741801;
                goto LABEL_397;
              }
              IsConsoleSessionDispBrokerEnabled = DxgkReferenceAllocationList(
                                                    (unsigned int *)&Object,
                                                    v117,
                                                    Elements,
                                                    *((struct DXGDEVICE **)v137 + 2));
              v136 = IsConsoleSessionDispBrokerEnabled;
              v121 = v137;
            }
            if ( IsConsoleSessionDispBrokerEnabled >= 0 )
            {
              HeadIterator = (void **)DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator(
                                        (_QWORD *)v121 + 50,
                                        &IoStatusBlock);
              v127 = HeadIterator[1];
              if ( v127 == *HeadIterator )
                v127 = 0LL;
              v139[0] = v127;
              v141[0] = (struct DXGHWQUEUE *)v127;
              IoStatusBlock = 0LL;
              IsConsoleSessionDispBrokerEnabled = DXGCONTEXT::Render(
                                                    v126,
                                                    (__int64)v160,
                                                    (struct COREDEVICEACCESS *)v161,
                                                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v144,
                                                    &v137,
                                                    v123,
                                                    v141);
              v136 = IsConsoleSessionDispBrokerEnabled;
            }
            if ( IsDxgmms2 )
              DxgkUnreferenceAllocationList((unsigned int)Object, (struct _EX_RUNDOWN_REF **)v123);
            if ( P != v156 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v157 = 0;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v144);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v146);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
          goto LABEL_397;
        }
        if ( *((_DWORD *)a2 + 1) < 0x60u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 519;
          goto LABEL_202;
        }
        v57 = DXGPROCESS::GetCurrent(v24);
        v58 = v57;
        if ( !v57 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 527LL;
          goto LABEL_50;
        }
        v139[0] = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
          (DXGDEVICEBYHANDLE *)DeviceObject,
          *((_DWORD *)a2 + 3),
          v57,
          (struct DXGDEVICE **)v139);
        v59 = v139[0];
        if ( !v139[0] )
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
          WdLogGlobalForLineNumber = 538;
          goto LABEL_141;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
        LODWORD(v137) = 0;
        LODWORD(Object) = 0;
        v142 = 0LL;
        v62 = *(_QWORD *)(v59[2] + 16LL);
        if ( *(_BYTE *)(v62 + 209) )
        {
          *(_OWORD *)v158 = *(_OWORD *)a2;
          *(_OWORD *)&v158[16] = *((_OWORD *)a2 + 1);
          *(_OWORD *)&v158[32] = *((_OWORD *)a2 + 2);
          *(_OWORD *)&v158[48] = *((_OWORD *)a2 + 3);
          *(_OWORD *)&v158[64] = *((_OWORD *)a2 + 4);
          v159 = *((_OWORD *)a2 + 5);
          *(_DWORD *)&v158[12] = *((_DWORD *)v59 + 118);
          v63 = *(_DWORD *)&v158[12];
          v64 = *(_DWORD *)(v62 + 4752);
          HostProcess = DXGPROCESS::GetHostProcess(v58);
          v136 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v62 + 4664),
                   HostProcess,
                   v64,
                   v63,
                   0,
                   D3DKMT_ESCAPE_DRT_TEST,
                   0,
                   0x60u,
                   v158);
          if ( v136 < 0 )
          {
            WdLogSingleEntry0(2LL);
            v60 = 569LL;
            WdLogGlobalForLineNumber = 569;
            v61 = L"VmBusSendEscape failed to create standard allocation";
            goto LABEL_142;
          }
          LODWORD(v137) = *(_DWORD *)&v158[44];
          LODWORD(Object) = *(_DWORD *)&v158[48];
          v142 = (struct DXGALLOCATION **)v159;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock,
          (struct DXGDEVICE *)v59);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)&Event,
          *(struct DXGADAPTER **)(v59[2] + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, (__int64)v59, 0, v66, 0);
        IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v161, 0LL);
        if ( IsConsoleSessionDispBrokerEnabled >= 0 )
        {
          memset(v160, 0, sizeof(v160));
          *(_DWORD *)&v160[4] = *((_DWORD *)a2 + 3);
          *(_DWORD *)&v160[16] = 4;
          *(_QWORD *)&v160[24] = (char *)a2 + 16;
          v67 = *(_DWORD *)v160 | 0x200;
          *(_DWORD *)v160 |= 0x200u;
          if ( *((_BYTE *)a2 + 60) )
          {
            v67 |= 1u;
            *(_DWORD *)v160 = v67;
          }
          if ( *((_BYTE *)a2 + 65) )
          {
            v67 |= 0x20u;
            *(_DWORD *)v160 = v67;
          }
          if ( *((_BYTE *)a2 + 61) )
          {
            v67 |= 0x400u;
            *(_DWORD *)v160 = v67;
          }
          if ( *((_BYTE *)a2 + 62) )
          {
            v67 |= 0x1000u;
            *(_DWORD *)v160 = v67;
          }
          if ( *((_BYTE *)a2 + 63) )
          {
            v67 |= 0x2000u;
            *(_DWORD *)v160 = v67;
          }
          if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
            *(_DWORD *)v160 = v67 | 0x8000;
          v160[408] = *((_BYTE *)a2 + 64);
          *(_DWORD *)&v160[384] = *((_DWORD *)a2 + 14);
          *(_DWORD *)&v160[388] = *((_DWORD *)a2 + 17);
          *(_DWORD *)&v160[380] = *((_DWORD *)a2 + 10);
          *(_DWORD *)&v160[392] = *((_DWORD *)a2 + 18);
          *(_QWORD *)&v160[400] = *((_QWORD *)a2 + 10);
          IsConsoleSessionDispBrokerEnabled = DXGDEVICE::CreateStandardAllocation(
                                                (DXGDEVICE *)v59,
                                                (struct _D3DKM_CREATESTANDARDALLOCATION *)v160,
                                                (struct COREDEVICEACCESS *)v161);
          if ( IsConsoleSessionDispBrokerEnabled >= 0 )
          {
            v68 = *(_DWORD *)&v160[52];
            *((_DWORD *)a2 + 11) = *(_DWORD *)&v160[52];
            *((_DWORD *)a2 + 12) = *(_DWORD *)&v160[8];
            *((_DWORD *)a2 + 13) = *(_DWORD *)&v160[12];
            if ( (*((_DWORD *)v58 + 102) & 0x100) != 0 )
            {
              Object = 0LL;
              v69 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v58,
                                                 (DXGALLOCATIONREFERENCE *)v139,
                                                 v68);
              DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Object, v69);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v139);
              if ( Object )
              {
                v70 = v59[2];
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 16LL) == *(_QWORD *)(v70 + 16) )
                  AllocationSizeInSystemMemory = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                                   *(VIDMM_EXPORT **)(v70 + 760),
                                                   *((const struct VIDMM_MULTI_ALLOC **)Object + 3),
                                                   0);
              }
              *((_QWORD *)a2 + 10) = AllocationSizeInSystemMemory;
              p_Object = (struct _EX_RUNDOWN_REF **)&Object;
            }
            else
            {
              if ( !*(_BYTE *)(v62 + 209) )
                goto LABEL_149;
              v139[0] = 0LL;
              v72 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v58,
                                                 (DXGALLOCATIONREFERENCE *)v141,
                                                 v68);
              DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v139, v72);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v141);
              v73 = v139[0];
              if ( v139[0] )
              {
                *((_DWORD *)v139[0] + 5) = (_DWORD)v137;
                v73[128] |= 4u;
                v74 = (int)v142;
                *(_QWORD *)(*((_QWORD *)v73 + 6) + 112LL) = v142;
                *((_DWORD *)v73 + 30) = v74;
              }
              v137 = 0LL;
              ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                          (__int64)v58,
                                                          (DXGRESOURCEREFERENCE *)v141,
                                                          *((_DWORD *)a2 + 12));
              DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v137, ResourceSafe);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v141);
              if ( v137 )
                *((_DWORD *)v137 + 5) = (_DWORD)Object;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v137);
              p_Object = (struct _EX_RUNDOWN_REF **)v139;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(p_Object);
            goto LABEL_149;
          }
          IsConsoleSessionDispBrokerEnabled = -1073741811;
        }
LABEL_149:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock;
        goto LABEL_150;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          goto LABEL_202;
        v88 = 0LL;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v146, a1, 1);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v89 = *((_DWORD *)a2 + 3);
          if ( v89 != -1 )
          {
            v135[0] = 0;
            IsConsoleSessionDispBrokerEnabled = DmmIsTargetInClientVidPnTopology(a1, v89, (bool *)v135);
            if ( IsConsoleSessionDispBrokerEnabled < 0 )
            {
              p_Event = (struct _KEVENT *)v146;
LABEL_293:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)p_Event);
              goto LABEL_443;
            }
            if ( !v135[0] )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v146);
              goto LABEL_202;
            }
          }
          v88 = (void *)*((_QWORD *)a1 + 27);
          ObfReferenceObject(v88);
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v146);
        if ( v88 )
        {
          LOBYTE(v141[0]) = 0;
          CDisplayScenarioContextScope::ContextScopeConstructor(v141, 0LL, 0x2Du, 0);
          LODWORD(Object) = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
          IsConsoleSessionDispBrokerEnabled = DxgkPowerOnOffMonitor((int)v88, 1, (int)a2 + 12, (int)&Object, 1, v141[1]);
          ObfDereferenceObject(v88);
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v141);
          goto LABEL_443;
        }
        goto LABEL_193;
      }
LABEL_247:
      IsConsoleSessionDispBrokerEnabled = -1073741790;
      goto LABEL_443;
    }
    if ( (int)v24 <= 44 )
    {
      if ( (_DWORD)v24 == 44 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 821;
          goto LABEL_202;
        }
        if ( !DXGPROCESS::GetCurrent(v24) )
        {
          WdLogSingleEntry0(2LL);
          v28 = 828LL;
          goto LABEL_50;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event, a1, 1);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v102 = *(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v102 + 284);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v102 + 4436);
          *(_DWORD *)(v102 + 4436) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
          goto LABEL_61;
        }
        IsConsoleSessionDispBrokerEnabled = -1073741130;
        goto LABEL_292;
      }
      if ( (int)v24 <= 35 )
      {
        switch ( (_DWORD)v24 )
        {
          case 0x23:
            if ( g_OSTestSigningEnabled )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x18u )
              {
                if ( *((_QWORD *)a2 + 2) )
                  IsConsoleSessionDispBrokerEnabled = DxgkSetIndirectDisplayRenderAdapterByHandle(
                                                        *((_DWORD *)a2 + 3),
                                                        (struct _LUID *)a2 + 2);
                v139[0] = 0LL;
                DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v139, *((_DWORD *)a2 + 3));
                if ( v139[0] )
                {
                  v141[0] = 0LL;
                  ADAPTER_DISPLAY::GetPairedRenderAdapter(
                    *((ADAPTER_DISPLAY **)v139[0] + 390),
                    (struct DXGADAPTER_REFERENCE *)v141,
                    0LL);
                  if ( v141[0] )
                    AllocationSizeInSystemMemory = *(_QWORD *)((char *)v141[0] + 412);
                  *((_QWORD *)a2 + 2) = AllocationSizeInSystemMemory;
                  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v141, 0LL);
                }
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v139, 0LL);
                goto LABEL_443;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1501;
              goto LABEL_202;
            }
            goto LABEL_247;
          case 0x1C:
            if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
              goto LABEL_202;
            v96 = DXGPROCESS::GetCurrent(v24);
            if ( v96 )
            {
              *((_DWORD *)v96 + 102) = *((_DWORD *)v96 + 102) & 0xFFFFDFFF | (*((_BYTE *)a2 + 12) != 0 ? 0x2000 : 0);
              goto LABEL_443;
            }
            goto LABEL_247;
          case 0x1D:
            MonitorDeviceObject = DrtTestSignalEventCb((struct ADAPTER_RENDER **)a1, a2);
            goto LABEL_45;
        }
        if ( (_DWORD)v24 != 30 )
        {
          v91 = (unsigned int)(v24 - 31);
          if ( (_DWORD)v24 != 31 )
          {
            if ( (_DWORD)v24 == 34 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v92 = *((_DWORD *)a2 + 3);
                if ( (unsigned int)(v92 - 1) <= 2 )
                {
                  if ( *((int *)a1 + 751) >= 2600 && *((_QWORD *)a1 + 390) && *((_QWORD *)a1 + 391) )
                  {
                    DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(
                                                                                    v92,
                                                                                    v91,
                                                                                    v19,
                                                                                    v20);
                    v95 = DiagnosticInfoArgs;
                    if ( DiagnosticInfoArgs )
                    {
                      IsConsoleSessionDispBrokerEnabled = DXGADAPTER::DdiCollectDiagnosticInfo(
                                                            a1,
                                                            DiagnosticInfoArgs,
                                                            v94);
                      DxgFreeDiagnosticInfoArgs(v95);
                    }
                    else
                    {
                      IsConsoleSessionDispBrokerEnabled = -1073741801;
                    }
                  }
                  goto LABEL_443;
                }
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1400;
              }
              else
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1385;
              }
              goto LABEL_202;
            }
            goto LABEL_304;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1371;
            goto LABEL_202;
          }
          MonitorDeviceObject = DrtTestUpdateRegistryForNewOverride(
                                  *(struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  *((_DWORD *)a2 + 6));
          goto LABEL_45;
        }
LABEL_417:
        if ( !_bittest((const signed __int32 *)a1 + 617, 0xBu) )
          goto LABEL_443;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event, a1, 1);
        if ( !*((_QWORD *)a1 + 391) )
          goto LABEL_292;
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v130 = *((_DWORD *)a2 + 2);
          if ( v130 == 30 )
          {
            v131 = ADAPTER_RENDER::EnableIommuForDrt(
                     *((ADAPTER_RENDER **)a1 + 391),
                     *((struct SYSMM_ADAPTER **)a1 + 28));
LABEL_422:
            IsConsoleSessionDispBrokerEnabled = v131;
LABEL_292:
            p_Event = &Event;
            goto LABEL_293;
          }
          if ( v130 == 46 )
          {
            v131 = ADAPTER_RENDER::DisableIommuForDrt(
                     *((ADAPTER_RENDER **)a1 + 391),
                     *((struct SYSMM_ADAPTER **)a1 + 28));
            goto LABEL_422;
          }
        }
        IsConsoleSessionDispBrokerEnabled = v136;
        goto LABEL_292;
      }
      if ( (_DWORD)v24 == 36 )
      {
        MonitorDeviceObject = ForceGpupTdr(a2);
        goto LABEL_45;
      }
      if ( (_DWORD)v24 == 37 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x14u )
        {
          v100 = *(_QWORD *)(*((_QWORD *)a1 + 390) + 456LL);
          if ( v100 )
            v101 = *(_DWORD *)(2968LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v100 + 8) + 136);
          else
            v101 = -1;
          *((_DWORD *)a2 + 4) = v101;
          goto LABEL_443;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1543;
        goto LABEL_202;
      }
      if ( (_DWORD)v24 != 38 )
      {
        if ( (_DWORD)v24 != 40 )
          goto LABEL_304;
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1559;
          goto LABEL_202;
        }
        DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel = *((_DWORD *)a2 + 3);
        DXGTRACKEDWORKLOAD::m_bypassPowerLevel = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 5) = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadPhysicalAdapterIndex;
        MonitorHash = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadNodeOrdinal;
LABEL_264:
        *((_DWORD *)a2 + 6) = MonitorHash;
        goto LABEL_443;
      }
      if ( *((_DWORD *)a2 + 1) < 0x30u )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1427;
        goto LABEL_202;
      }
      if ( *((int *)a1 + 751) < 2700 || !DXGADAPTER::IsFullWDDMAdapter(a1) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1438;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DRT Test: Test is only valid for full WDDM2.7 and above adapters.",
          1438LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1446;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DRT Test: Wrong value of ArgSize passed for D3DKMT_DRT_TEST_COMMAND_DISPLAY_DIAGNOSTICS_TEST.",
          1446LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v99 = *((_DWORD *)a2 + 3);
      if ( !v99 )
      {
        *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)a1 + 390))
                             ? 0xC00000BB
                             : 0;
        goto LABEL_443;
      }
      if ( v99 != 1 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1479;
        goto LABEL_202;
      }
      v150 = (struct DXGPROCESS *)*((_QWORD *)a2 + 4);
      v153[0] = 1;
      v153[1] = 264;
      v154 = &v150;
      IsConsoleSessionDispBrokerEnabled = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                            *((ADAPTER_DISPLAY **)a1 + 390),
                                            (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v153,
                                            v98);
      v136 = IsConsoleSessionDispBrokerEnabled;
      *((_DWORD *)a2 + 11) = IsConsoleSessionDispBrokerEnabled;
      if ( IsConsoleSessionDispBrokerEnabled >= 0 )
        goto LABEL_443;
      WdLogSingleEntry0(2LL);
      v17 = 1472LL;
      v18 = L"DRT Test: DdiGetDisplayStateIntrusive failed.";
LABEL_408:
      WdLogGlobalForLineNumber = v17;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v18, v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_443;
    }
    if ( (_DWORD)v24 == 45 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x40u )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1572;
        goto LABEL_202;
      }
      v132 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 305544);
      if ( !RAPID_HPD_MANAGER::IsEnabled(v132) )
      {
        IsConsoleSessionDispBrokerEnabled = -1073740959;
        goto LABEL_443;
      }
      if ( *((_DWORD *)a2 + 5) )
      {
        if ( *((_DWORD *)a2 + 6) )
          v134 = 2 - (*((_DWORD *)a2 + 7) != 0);
        else
          v134 = 0;
        RAPID_HPD_MANAGER::SetTestControl(v133, v134);
      }
      if ( *((_DWORD *)a2 + 3) )
        RAPID_HPD_MANAGER::ReportTriggerEvent((__int64)v132, 4u, 0LL);
      if ( *((_DWORD *)a2 + 4) )
        RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v132, 4u, 0LL);
      if ( *((_DWORD *)a2 + 8) )
        RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
          v132,
          1u,
          (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 36),
          (struct _GUID *)((char *)a2 + 40),
          0LL);
      *((_DWORD *)a2 + 14) = *((_DWORD *)v132 + 6);
      *((_DWORD *)a2 + 15) = *((_DWORD *)v132 + 7);
    }
    else
    {
      if ( (_DWORD)v24 == 46 )
        goto LABEL_417;
      if ( (_DWORD)v24 == 47 )
      {
        v129 = *((_DWORD *)a2 + 1);
        if ( v129 < 0x23 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1635;
          goto LABEL_202;
        }
        if ( v129 < 20 * *((_DWORD *)a2 + 7) + 35 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1643;
          goto LABEL_202;
        }
        MonitorHash = DxgkGetMonitorHash(
                        *(struct _LUID *)((char *)a2 + 12),
                        *((_DWORD *)a2 + 5),
                        (unsigned int *)a2 + 7,
                        (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 32));
        goto LABEL_264;
      }
      if ( (_DWORD)v24 != 48 )
      {
        if ( (_DWORD)v24 == 49 )
        {
          if ( *((_DWORD *)a2 + 1) < 0xD0u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 845;
            goto LABEL_20;
          }
          goto LABEL_352;
        }
        if ( (_DWORD)v24 == 50 )
        {
          MonitorDeviceObject = DpiDrtToggleMux();
          goto LABEL_45;
        }
        if ( (_DWORD)v24 != 51 )
        {
          if ( (_DWORD)v24 == 52 )
          {
            MonitorDeviceObject = DpiDrtClearInternalPanelInfoCacheMux();
          }
          else
          {
            if ( (_DWORD)v24 != 53 )
              goto LABEL_304;
            if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline() )
            {
              WdLogSingleEntry1(3LL, *((int *)a2 + 2));
              WdLogGlobalForLineNumber = 1728;
              goto LABEL_202;
            }
            MonitorDeviceObject = DpiDrtModifyInternalPanelInfoCacheMux();
          }
          goto LABEL_45;
        }
        if ( !a1 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 1738LL;
LABEL_311:
          v29 = L"Caller should specify the adapter.";
          goto LABEL_51;
        }
        if ( (*((_DWORD *)a1 + 111) & 8) == 0 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 1745LL;
          v29 = L"Call only valid on SoftGPU adapters.";
          goto LABEL_51;
        }
        if ( *((int *)a1 + 751) < 3200 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 1752LL;
          v29 = L"Call only valid on WDDM >=3.2 adapters.";
          goto LABEL_51;
        }
        DXGADAPTER::IsFeatureEnabled((__int64)a1, &Object, 0x1Fu);
        if ( (BYTE2(Object) & 1) == 0 )
        {
          WdLogSingleEntry1(3LL, 31LL);
          WdLogGlobalForLineNumber = 1762;
          goto LABEL_317;
        }
        v103 = (__int16)Object;
        if ( (unsigned __int16)((_WORD)Object - 3) > 2u )
        {
          WdLogSingleEntry1(3LL, (unsigned __int16)Object);
          WdLogGlobalForLineNumber = 1769;
          goto LABEL_317;
        }
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          WdLogSingleEntry0(2LL);
          v28 = 1777LL;
          v29 = L"DRT test specified invalid buffer size for D3DKMT_DRT_TEST_COMMAND_SOFTGPU_FEATURE_SAMPLE.";
          goto LABEL_51;
        }
        v104 = *((_DWORD *)a2 + 5);
        if ( v104 )
        {
          if ( v104 == 1 )
          {
            if ( (unsigned __int16)Object < 4u )
            {
              WdLogSingleEntry1(4LL, (unsigned __int16)Object);
              WdLogGlobalForLineNumber = 1792;
              goto LABEL_317;
            }
          }
          else
          {
            if ( v104 != 2 )
            {
              WdLogSingleEntry1(4LL, *((int *)a2 + 5));
              WdLogGlobalForLineNumber = 1808;
              goto LABEL_202;
            }
            if ( (unsigned __int16)Object < 5u )
            {
              WdLogSingleEntry1(4LL, (unsigned __int16)Object);
              WdLogGlobalForLineNumber = 1801;
              goto LABEL_317;
            }
          }
        }
        *(_OWORD *)v141 = 0LL;
        DXGADAPTER::QueryFeatureInterface((__int64)a1, 31, (unsigned __int16)Object, 16, v141);
        if ( v103 == 3 )
        {
          if ( v141[0] )
            goto LABEL_202;
        }
        else
        {
          if ( v103 != 4 )
          {
            if ( v103 == 5 && (!v141[0] || !v141[1]) )
              goto LABEL_202;
            goto LABEL_339;
          }
          if ( !v141[0] )
            goto LABEL_202;
        }
        if ( v141[1] )
          goto LABEL_202;
LABEL_339:
        v105 = *((_DWORD *)a2 + 3);
        v106 = *((_DWORD *)a2 + 5);
        if ( !v106 )
          *((_DWORD *)a2 + 4) = v105;
        if ( v106 == 1 )
        {
          v107 = v141[0];
        }
        else
        {
          if ( v106 != 2 )
            goto LABEL_443;
          v107 = v141[1];
        }
        v139[0] = (PVOID)v105;
        IsConsoleSessionDispBrokerEnabled = ((__int64 (__fastcall *)(_QWORD, PVOID *))v107)(*((_QWORD *)a1 + 36), v139);
        if ( IsConsoleSessionDispBrokerEnabled >= 0 )
          *((_DWORD *)a2 + 4) = HIDWORD(v139[0]);
        goto LABEL_443;
      }
      if ( !a1 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 1659LL;
        goto LABEL_311;
      }
      if ( !this || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[11]) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 1666LL;
        v29 = L"Caller should not set the HardwareAccess so DxgkEscape will acquire the adapter lock shared.";
        goto LABEL_51;
      }
      if ( *((_DWORD *)a2 + 1) < 0x10u )
      {
        WdLogSingleEntry0(2LL);
        v28 = 1674LL;
        v29 = L"DRT test specified invalid buffer size for D3DKMT_DRT_RESET_DISPLAY_OWNERSHIP.";
        goto LABEL_51;
      }
      if ( *((_DWORD *)a2 + 3) >= *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 1682LL;
        v29 = L"Caller specified VidPn source ID is invalid.";
        goto LABEL_51;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
      IsConsoleSessionDispBrokerEnabled = COREADAPTERACCESS::AcquireExclusive((__int64)this, 2u, 0);
      v136 = IsConsoleSessionDispBrokerEnabled;
      if ( IsConsoleSessionDispBrokerEnabled < 0 )
      {
        WdLogSingleEntry0(2LL);
        v17 = 1696LL;
        v18 = L"Failed to acquire the adapter core access exclusively.";
        goto LABEL_408;
      }
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((ADAPTER_DISPLAY **)a1 + 390), *((_DWORD *)a2 + 3));
      if ( VidPnSourceOwner )
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*((PERESOURCE ***)a1 + 390), VidPnSourceOwner, *((_DWORD *)a2 + 3));
    }
    IsConsoleSessionDispBrokerEnabled = 0;
    goto LABEL_443;
  }
  if ( *((_DWORD *)a2 + 1) >= 0x10u )
  {
    v10 = *((_DWORD *)a2 + 3);
    v11 = DXGPROCESS::GetCurrent(v7);
    if ( v11 )
    {
      if ( !v10 || (IsDrtEnabled = DxgkpIsDrtEnabled(), v13 = 4096, !IsDrtEnabled) )
        v13 = 0;
      *((_DWORD *)v11 + 102) = v13 | *((_DWORD *)v11 + 102) & 0xFFFFEFFF;
    }
    if ( !a1 )
      goto LABEL_443;
    if ( !*((_BYTE *)a1 + 209) )
      goto LABEL_443;
    v14 = *((_DWORD *)a2 + 1);
    v15 = *((_DWORD *)a1 + 1188);
    v16 = DXGPROCESS::GetHostProcess(v11);
    IsConsoleSessionDispBrokerEnabled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                                          (struct DXGADAPTER *)((char *)a1 + 4664),
                                          v16,
                                          v15,
                                          0,
                                          0,
                                          D3DKMT_ESCAPE_DRT_TEST,
                                          0,
                                          v14,
                                          (unsigned __int8 *)a2);
    v136 = IsConsoleSessionDispBrokerEnabled;
    if ( IsConsoleSessionDispBrokerEnabled >= 0 )
      goto LABEL_443;
    WdLogSingleEntry0(2LL);
    v17 = 272LL;
    v18 = L"VmBusSendEscape D3DKMT_ESCAPE_DRT_TEST failed";
    goto LABEL_408;
  }
  WdLogSingleEntry1(3LL, *((unsigned int *)a2 + 1));
  WdLogGlobalForLineNumber = 283;
  IsConsoleSessionDispBrokerEnabled = -1073741789;
LABEL_443:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v149);
  return (unsigned int)IsConsoleSessionDispBrokerEnabled;
}
