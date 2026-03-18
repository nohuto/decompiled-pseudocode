/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14000B870 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x140036888 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003A164 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14003E0C8 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1400469D4 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047050 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140051B58 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1400602F4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ @ 0x14006491C (-IsEnabled@RAPID_HPD_MANAGER@@QEAA_NXZ.c)
 *     Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline @ 0x14006B45C (Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x14006D350 (-IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ.c)
 *     ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14006F9B8 (-SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z.c)
 *     DpiDrtClearInternalPanelInfoCacheMux @ 0x140088A74 (DpiDrtClearInternalPanelInfoCacheMux.c)
 *     DpiDrtGetInternalPanelInfoCacheMux @ 0x140088A8C (DpiDrtGetInternalPanelInfoCacheMux.c)
 *     DpiDrtSetInternalPanelInfoCacheMux @ 0x140088AAC (DpiDrtSetInternalPanelInfoCacheMux.c)
 *     DpiDrtToggleMux @ 0x140088B48 (DpiDrtToggleMux.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     DxgkpIsDrtEnabled @ 0x14018AED8 (DxgkpIsDrtEnabled.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x14018F468 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x14018F4D8 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140193068 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     ?QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140194144 (-QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1401941C8 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019CF8C (-DisableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x14019D578 (-EnableIommuForDrt@ADAPTER_RENDER@@QEAAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A1C78 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1401A5E2C (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401AAC34 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAF68 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401AFEDC (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BDFB8 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401CA7FC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CB914 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CBCD4 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x14021C828 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022AC64 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x14024F2F0 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D9A4 (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x14028F620 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140307950 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031BDC4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x14032CC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403349F4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140334A74 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033D8C0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140388E50 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x140392114 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1403EF0CC (DxgkIsConsoleSessionDispBrokerEnabled.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1403FDE18 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
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
  char *v33; // rcx
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
  struct _KTHREAD **v45; // rax
  __int64 v46; // r12
  struct DXGDEVICE *v47; // r15
  __int64 v48; // r9
  DXGDEVICEACCESSLOCKEXCLUSIVE *p_IoStatusBlock; // rcx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct DXGCONTEXT *v51; // rdi
  __int64 v52; // rax
  const wchar_t *v53; // r9
  __int64 v54; // r9
  struct _KTHREAD **v55; // rax
  _QWORD *v56; // rax
  struct _KTHREAD **v57; // rax
  struct _KTHREAD **v58; // r15
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
  struct _KTHREAD **v76; // rax
  void *v77; // rcx
  NTSTATUS v78; // eax
  __int64 v79; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v81; // rax
  __int64 v82; // rcx
  struct DXGPROCESS *v83; // rax
  struct CCD_BTL *v84; // rax
  void *v85; // rdi
  int v86; // edx
  struct _KEVENT *p_Event; // rcx
  int v88; // ecx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  __int64 v90; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v91; // rdi
  struct DXGPROCESS *v92; // rax
  unsigned int MonitorHash; // eax
  __int64 v94; // r8
  int v95; // ecx
  __int64 v96; // rdx
  int v97; // edi
  __int64 v98; // rcx
  struct _KTHREAD **v99; // rax
  struct DXGDEVICE *v100; // rdi
  __int64 v101; // r9
  unsigned int v102; // r15d
  __int64 v103; // rax
  const wchar_t *v104; // r9
  int v105; // edi
  unsigned int v106; // edi
  __int64 v107; // rsi
  struct _D3DDDI_ALLOCATIONLIST *v108; // r12
  unsigned __int8 *v109; // rax
  struct DXGCONTEXT *v110; // r10
  bool IsDxgmms2; // r14
  struct DXGALLOCATION **v112; // rdi
  struct DXGALLOCATION **Elements; // rax
  void **HeadIterator; // rax
  DXGCONTEXT *v115; // r10
  void *v116; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  unsigned int v118; // edx
  int v119; // eax
  int v120; // eax
  RAPID_HPD_MANAGER *v121; // rsi
  __int64 v122; // rcx
  int v123; // edx
  __int16 v124; // di
  int v125; // eax
  unsigned int v126; // ecx
  int v127; // eax
  struct DXGHWQUEUE *v128; // rax
  unsigned __int8 v129[4]; // [rsp+50h] [rbp-4F8h] BYREF
  int v130; // [rsp+54h] [rbp-4F4h]
  struct DXGCONTEXT *v131; // [rsp+58h] [rbp-4F0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-4E8h] BYREF
  PVOID v133[2]; // [rsp+68h] [rbp-4E0h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+78h] [rbp-4D0h] BYREF
  struct DXGHWQUEUE *v135[2]; // [rsp+88h] [rbp-4C0h] BYREF
  struct DXGALLOCATION **v136; // [rsp+98h] [rbp-4B0h] BYREF
  struct DXGDEVICE *v137; // [rsp+A0h] [rbp-4A8h] BYREF
  _BYTE v138[24]; // [rsp+A8h] [rbp-4A0h] BYREF
  struct _KEVENT Event; // [rsp+C0h] [rbp-488h] BYREF
  char v140[8]; // [rsp+D8h] [rbp-470h] BYREF
  DXGPUSHLOCK *v141; // [rsp+E0h] [rbp-468h]
  int v142; // [rsp+E8h] [rbp-460h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v143[2]; // [rsp+F0h] [rbp-458h] BYREF
  struct _KTHREAD **v144; // [rsp+100h] [rbp-448h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp-440h] BYREF
  _BYTE v146[16]; // [rsp+118h] [rbp-430h] BYREF
  _DWORD v147[2]; // [rsp+128h] [rbp-420h] BYREF
  struct _KTHREAD ***v148; // [rsp+130h] [rbp-418h]
  PVOID P; // [rsp+140h] [rbp-408h] BYREF
  _BYTE v150[256]; // [rsp+148h] [rbp-400h] BYREF
  int v151; // [rsp+248h] [rbp-300h]
  unsigned __int8 v152[80]; // [rsp+250h] [rbp-2F8h] BYREF
  __int128 v153; // [rsp+2A0h] [rbp-2A8h]
  _BYTE v154[424]; // [rsp+2B0h] [rbp-298h] BYREF
  _BYTE v155[160]; // [rsp+460h] [rbp-E8h] BYREF

  AllocationSizeInSystemMemory = 0LL;
  LOBYTE(v143[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v143, 0LL, 0x2Du, 0);
  v8 = v143[1];
  IsConsoleSessionDispBrokerEnabled = 0;
  v136 = 0LL;
  v130 = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_OSTestSigningEnabled && !DxgkpIsDrtEnabled() )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1939;
      goto LABEL_450;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v7) + 102) & 0x100) != 0 )
    {
      v21 = *((int *)a2 + 2);
      if ( (unsigned int)v21 > 0x31 || (v22 = 0x2000020010000LL, !_bittest64(&v22, v21)) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 304;
LABEL_20:
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v143);
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
                    goto LABEL_451;
                  case 1:
                  case 2:
                  case 3:
                    DXGADAPTER::ForcePState((__int64)a1, v44, v43, *((_DWORD *)a2 + 6));
                    goto LABEL_451;
                  case 4:
                    *((_DWORD *)a2 + 7) = *((_DWORD *)a1 + 1108);
                    goto LABEL_451;
                  case 5:
                    DXGADAPTER::QueryPStateEngineData(
                      a1,
                      *((_DWORD *)a2 + 5),
                      (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                      (unsigned int *)a2 + 4);
                    goto LABEL_451;
                }
              }
            }
            goto LABEL_450;
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
                      goto LABEL_451;
                    case 4:
                      if ( *((_DWORD *)a2 + 1) >= 0x10u )
                      {
                        if ( (unsigned int)(*((_DWORD *)a2 + 3) - 1) <= 0x3FF )
                        {
                          g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                          goto LABEL_451;
                        }
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 389;
                      }
                      else
                      {
                        WdLogSingleEntry0(3LL);
                        WdLogGlobalForLineNumber = 380;
                      }
                      goto LABEL_450;
                    case 5:
                      if ( *((_DWORD *)a2 + 1) >= 0x14u )
                      {
                        g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                        goto LABEL_451;
                      }
                      WdLogSingleEntry0(3LL);
                      WdLogGlobalForLineNumber = 403;
LABEL_450:
                      IsConsoleSessionDispBrokerEnabled = -1073741811;
                      goto LABEL_451;
                  }
LABEL_398:
                  WdLogSingleEntry1(3LL, *((int *)a2 + 2));
                  WdLogGlobalForLineNumber = 1930;
                  goto LABEL_450;
                }
LABEL_417:
                IsConsoleSessionDispBrokerEnabled = -1073741637;
                goto LABEL_451;
              }
              MonitorDeviceObject = MonitorDRTTest(a1, a2, v8, v20);
              goto LABEL_45;
            }
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 477;
              goto LABEL_450;
            }
            Current = DXGPROCESS::GetCurrent(v24);
            v27 = Current;
            if ( !Current )
            {
              WdLogSingleEntry0(2LL);
              v28 = 485LL;
LABEL_50:
              v29 = L"Cannot get the current DXGPROCESS";
LABEL_449:
              WdLogGlobalForLineNumber = v28;
              DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v29, v28, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_450;
            }
            v30 = (char *)Current + 216;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v30, 0LL);
            *((_QWORD *)v30 + 1) = KeGetCurrentThread();
            v31 = 0LL;
            v137 = 0LL;
            v32 = *((_DWORD *)a2 + 3);
            if ( v32 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v136, v32, (struct _KTHREAD **)v27, &v137);
              v31 = v137;
              if ( !v137 )
              {
                WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
                WdLogGlobalForLineNumber = 501;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"The device handle is invalid: 0x%I64x",
                  *((unsigned int *)a2 + 3),
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                v130 = -1073741811;
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v136);
                *((_QWORD *)v30 + 1) = 0LL;
                v33 = v30;
LABEL_54:
                ExReleasePushLockExclusiveEx(v33, 0LL);
                KeLeaveCriticalRegion();
                goto LABEL_451;
              }
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v136);
            }
            if ( !v31 )
            {
              v31 = (struct DXGDEVICE *)((*((_QWORD *)v27 + 40) - 24LL) & -(__int64)(*((_QWORD *)v27 + 40) != 0LL));
              v137 = v31;
              if ( !v31 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 512;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"The process does not have any devices",
                  512LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                v130 = -1073741811;
                *((_QWORD *)v27 + 28) = 0LL;
                v33 = (char *)v27 + 216;
                goto LABEL_54;
              }
            }
            DXGDEVICE::GetContexts(v31, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
            *((_DWORD *)a2 + 3) = *((_DWORD *)v31 + 117);
            *((_QWORD *)v27 + 28) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v27 + 216, 0LL);
            KeLeaveCriticalRegion();
LABEL_60:
            IsConsoleSessionDispBrokerEnabled = v130;
            goto LABEL_451;
          }
          switch ( (_DWORD)v24 )
          {
            case 0xA:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 842);
                goto LABEL_451;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 420;
              goto LABEL_450;
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
                IsConsoleSessionDispBrokerEnabled = (int)v136;
                goto LABEL_451;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 439;
              goto LABEL_450;
            case 0xC:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v35 = *((_QWORD *)a1 + 391);
                if ( v35 )
                  *(_BYTE *)(v35 + 1024) = *((_BYTE *)a2 + 12);
                goto LABEL_451;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 458;
              goto LABEL_450;
          }
          if ( (_DWORD)v24 != 14 )
            goto LABEL_398;
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1050;
            goto LABEL_450;
          }
          v34 = *((_QWORD *)a1 + 27);
          if ( v34 )
          {
            MonitorDeviceObject = DxgkHandleThermalCoolingDrtEscape(v34, (__int64)a2);
            goto LABEL_45;
          }
LABEL_192:
          IsConsoleSessionDispBrokerEnabled = -1073741823;
          goto LABEL_451;
        }
        if ( (int)v24 > 21 )
        {
          switch ( (_DWORD)v24 )
          {
            case 0x16:
              v129[0] = 0;
              IsConsoleSessionDispBrokerEnabled = DxgkIsConsoleSessionDispBrokerEnabled((bool *)v129);
              if ( IsConsoleSessionDispBrokerEnabled < 0 )
                goto LABEL_451;
              if ( !v129[0] )
              {
                v83 = DXGPROCESS::GetCurrent(v82);
                DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)&Event, v83);
                DXGUSERCRIT::Acquire((DXGUSERCRIT *)&Event, 0);
                v84 = CCD_BTL::Global();
                CCD_TOPOLOGY::Clear((void **)v84 + 1);
                IsConsoleSessionDispBrokerEnabled = 0;
                DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)&Event);
                goto LABEL_451;
              }
              MonitorDeviceObject = DxgkRequestDisplayPrivateTest();
              goto LABEL_45;
            case 0x17:
              if ( *((_DWORD *)a2 + 1) < 0x30u )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 369;
                goto LABEL_450;
              }
              MonitorDeviceObject = DxgkpSendTestVmBusCommand(a1, a2, v19);
              goto LABEL_45;
            case 0x18:
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
                goto LABEL_451;
              }
              goto LABEL_450;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
            goto LABEL_450;
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          DeviceObject[0] = 0LL;
          v133[0] = 0LL;
          MonitorDeviceObject = DxgkGetMonitorDeviceObject(
                                  (const struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  (struct _FILE_OBJECT **)v133,
                                  DeviceObject);
          if ( MonitorDeviceObject < 0 )
          {
LABEL_45:
            IsConsoleSessionDispBrokerEnabled = MonitorDeviceObject;
            goto LABEL_451;
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
            ObfDereferenceObject(v133[0]);
            goto LABEL_451;
          }
          ObfDereferenceObject(AttachedDeviceReference);
          ObfDereferenceObject(v133[0]);
          goto LABEL_192;
        }
        if ( (_DWORD)v24 == 21 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 782;
            goto LABEL_450;
          }
          v76 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24);
          if ( !v76 )
          {
            WdLogSingleEntry0(2LL);
            v28 = 790LL;
            goto LABEL_50;
          }
          v133[0] = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
            (DXGDEVICEBYHANDLE *)DeviceObject,
            *((_DWORD *)a2 + 3),
            v76,
            (struct DXGDEVICE **)v133);
          if ( !v133[0] )
          {
            WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
            WdLogGlobalForLineNumber = 801;
            goto LABEL_140;
          }
          v77 = (void *)*((_QWORD *)a2 + 2);
          Object = 0LL;
          v78 = ObReferenceObjectByHandle(v77, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          IsConsoleSessionDispBrokerEnabled = v78;
          v130 = v78;
          if ( v78 < 0 )
          {
            v79 = v78;
            WdLogSingleEntry1(2LL, v78);
            WdLogGlobalForLineNumber = 815;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"hEvent is invalid, returning 0x%I64x",
              v79,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_142;
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v146,
            (struct DXGDEVICE *)v133[0]);
          KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
          p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)v146;
LABEL_149:
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE(p_IoStatusBlock);
          goto LABEL_142;
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
                WdLogGlobalForLineNumber = 1019;
                goto LABEL_450;
              }
              v55 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24);
              if ( !v55 )
              {
                WdLogSingleEntry0(2LL);
                v28 = 1027LL;
                goto LABEL_50;
              }
              v133[0] = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                (DXGDEVICEBYHANDLE *)DeviceObject,
                *((_DWORD *)a2 + 3),
                v55,
                (struct DXGDEVICE **)v133);
              v56 = v133[0];
              if ( v133[0] )
              {
                *((_BYTE *)v133[0] + 1919) = 1;
                *(_BYTE *)(v56[5] + 337LL) = 1;
LABEL_142:
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)DeviceObject);
                goto LABEL_451;
              }
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              WdLogGlobalForLineNumber = 1038;
              goto LABEL_140;
            }
            if ( (_DWORD)v24 == 19 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
                goto LABEL_450;
              if ( g_OSTestSigningEnabled )
              {
                *((_BYTE *)DXGGLOBAL::GetGlobal() + 1584) = *((_DWORD *)a2 + 3) != 0;
                goto LABEL_451;
              }
              goto LABEL_417;
            }
            if ( *((_DWORD *)a2 + 1) < 0x18u )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 690;
              goto LABEL_450;
            }
            v45 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24);
            v46 = (__int64)v45;
            if ( !v45 )
            {
              WdLogSingleEntry0(2LL);
              v28 = 698LL;
              goto LABEL_50;
            }
            v133[0] = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
              (DXGDEVICEBYHANDLE *)DeviceObject,
              *((_DWORD *)a2 + 3),
              v45,
              (struct DXGDEVICE **)v133);
            v47 = (struct DXGDEVICE *)v133[0];
            if ( !v133[0] )
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
              WdLogGlobalForLineNumber = 709;
LABEL_140:
              v60 = *((unsigned int *)a2 + 3);
              v61 = L"Cannot get the device by handle: 0x%I64x";
LABEL_141:
              DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v61, v60, 0LL, 0LL, 0LL, 0LL);
              IsConsoleSessionDispBrokerEnabled = -1073741811;
              goto LABEL_142;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v135, v47);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v138,
              *(struct DXGADAPTER **)(*((_QWORD *)v47 + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, (__int64)v47, 0, v48, 0);
            IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v155, 0LL);
            v130 = IsConsoleSessionDispBrokerEnabled;
            if ( IsConsoleSessionDispBrokerEnabled < 0 )
              goto LABEL_109;
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v131, 0LL);
            AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                          v46,
                                                          (DXGALLOCATIONREFERENCE *)&Object,
                                                          *((_DWORD *)a2 + 4));
            DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v131, AllocationSafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Object);
            v51 = v131;
            if ( v131 )
            {
              v54 = *((_QWORD *)v47 + 2);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v131 + 1) + 16LL) + 16LL) != *(_QWORD *)(v54 + 16) )
              {
                IsConsoleSessionDispBrokerEnabled = -1073741811;
                WdLogSingleEntry3(2LL, v47, v131, -1073741811LL);
                WdLogGlobalForLineNumber = 737;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  (__int64)v47,
                  (__int64)v51,
                  -1073741811LL,
                  0LL,
                  0LL);
                goto LABEL_113;
              }
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (*((_DWORD *)v131 + 18) & 0x800) == 0 )
                {
                  LODWORD(Object) = 0;
                  v133[0] = 0LL;
                  IsConsoleSessionDispBrokerEnabled = VIDMM_EXPORT::VidMmPinAllocation(
                                                        *(VIDMM_EXPORT **)(v54 + 760),
                                                        *(struct VIDMM_GLOBAL **)(v54 + 768),
                                                        *((struct VIDMM_MULTI_ALLOC **)v131 + 3),
                                                        0LL,
                                                        (unsigned int *)&Object,
                                                        (union _LARGE_INTEGER *)v133,
                                                        0LL);
                  if ( IsConsoleSessionDispBrokerEnabled >= 0 )
                    *((_DWORD *)v51 + 18) |= 0x800u;
                  goto LABEL_113;
                }
                WdLogSingleEntry0(2LL);
                v52 = 746LL;
                WdLogGlobalForLineNumber = 746;
                v53 = L"Allocation is already pinned";
              }
              else
              {
                if ( _bittest((const signed __int32 *)v131 + 18, 0xBu) )
                {
                  VIDMM_EXPORT::VidMmUnpinAllocation(
                    *(VIDMM_EXPORT **)(v54 + 760),
                    *(struct VIDMM_GLOBAL **)(v54 + 768),
                    *((struct VIDMM_MULTI_ALLOC **)v131 + 3));
                  *((_DWORD *)v51 + 18) &= ~0x800u;
                  goto LABEL_113;
                }
                WdLogSingleEntry0(2LL);
                v52 = 767LL;
                WdLogGlobalForLineNumber = 767;
                v53 = L"Allocation is not pinned";
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 4));
              WdLogGlobalForLineNumber = 728;
              v52 = *((unsigned int *)a2 + 4);
              v53 = L"Cannot get the allocation by handle: 0x%I64x";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v53, v52, 0LL, 0LL, 0LL, 0LL);
            IsConsoleSessionDispBrokerEnabled = -1073741811;
LABEL_113:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v131);
LABEL_109:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
            p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)v135;
            goto LABEL_149;
          }
LABEL_301:
          if ( *((_DWORD *)a2 + 1) < 0xA8u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 861;
            goto LABEL_20;
          }
          v99 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24);
          v144 = v99;
          if ( !v99 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 868;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Cannot get the current DXGPROCESS",
              868LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_20;
          }
          v131 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v146, *((_DWORD *)a2 + 3), v99, &v131, 0, 1);
          if ( !v131 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 877;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Cannot get the context",
              877LL,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_314:
            IsConsoleSessionDispBrokerEnabled = -1073741811;
LABEL_346:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v146);
            goto LABEL_451;
          }
          if ( DXGADAPTER::IsCoreResourceSharedOwner(this[11]) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          v100 = (struct DXGDEVICE *)*((_QWORD *)v131 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject, v100);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140, (struct _KTHREAD **)v131 + 55, 0);
          DXGPUSHLOCK::AcquireExclusive(v141);
          v142 = 2;
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138, a1, 1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, (__int64)v100, 0, v101, 0);
          IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v155, 0LL);
          v130 = IsConsoleSessionDispBrokerEnabled;
          if ( IsConsoleSessionDispBrokerEnabled >= 0 )
          {
            v102 = *((_DWORD *)a2 + 8);
            if ( v102 > 0x10 )
            {
              WdLogSingleEntry0(2LL);
              v103 = 899LL;
              v104 = L"Invalid number of allocations";
LABEL_312:
              WdLogGlobalForLineNumber = v103;
              DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v104, v103, 0LL, 0LL, 0LL, 0LL);
LABEL_313:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
              goto LABEL_314;
            }
            v105 = *((_DWORD *)a2 + 4);
            if ( !v105 && *((_DWORD *)a2 + 2) == 17 )
            {
              WdLogSingleEntry0(2LL);
              v103 = 905LL;
              v104 = L"Invalid command buffer size";
              goto LABEL_312;
            }
            if ( *((_BYTE *)a1 + 209) )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)v131 + 7);
              v106 = 0;
              if ( !v102 )
              {
LABEL_323:
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                IsConsoleSessionDispBrokerEnabled = 0;
                goto LABEL_346;
              }
              v107 = (__int64)v144;
              while ( 1 )
              {
                DXGPROCESS::GetAllocationSafe(v107, (DXGALLOCATIONREFERENCE *)v133, *((_DWORD *)a2 + 2 * v106 + 9));
                if ( !v133[0] )
                  break;
                *((_DWORD *)a2 + 2 * v106 + 9) = *((_DWORD *)v133[0] + 5);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v133);
                if ( ++v106 >= *((_DWORD *)a2 + 8) )
                  goto LABEL_323;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 919;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid allocation handle",
                919LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v133);
              goto LABEL_313;
            }
            memset(v154, 0, 0x170uLL);
            *(_DWORD *)v154 = *((_DWORD *)a2 + 3);
            *(_DWORD *)&v154[12] = v102;
            v108 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
            *(_QWORD *)&v154[40] = (char *)a2 + 36;
            *(_DWORD *)&v154[68] |= 0x20u;
            if ( *((_DWORD *)a2 + 2) == 17 )
            {
              v109 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
            }
            else
            {
              v105 = 80;
              memset(v152, 0, sizeof(v152));
              *(_DWORD *)&v152[4] = 80;
              *(_DWORD *)v152 = 1;
              *(_QWORD *)&v152[40] = 0x100000000LL;
              *(_DWORD *)&v152[48] = 1;
              *(_OWORD *)&v152[8] = *(_OWORD *)((char *)a2 + 168);
              *(_OWORD *)&v152[24] = *(_OWORD *)&v152[8];
              *(_QWORD *)&v152[68] = *((_QWORD *)a2 + 25);
              *(_QWORD *)&v152[56] = &v152[24];
              *(_WORD *)&v152[64] = 1;
              v109 = v152;
            }
            *(_QWORD *)&v154[24] = v109;
            *(_DWORD *)&v154[8] = v105;
            IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v131 + 2) + 16LL) + 16LL));
            v129[0] = IsDxgmms2;
            LODWORD(Object) = v102;
            P = 0LL;
            v151 = 0;
            v112 = 0LL;
            v136 = 0LL;
            if ( IsDxgmms2 )
            {
              Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                    (__int64 *)&P,
                                                    v102);
              v112 = Elements;
              v136 = Elements;
              if ( !Elements )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 977;
                if ( P != v150 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v151 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
                IsConsoleSessionDispBrokerEnabled = -1073741801;
                goto LABEL_346;
              }
              IsConsoleSessionDispBrokerEnabled = DxgkReferenceAllocationList(
                                                    (unsigned int *)&Object,
                                                    v108,
                                                    Elements,
                                                    *((struct DXGDEVICE **)v131 + 2));
              v130 = IsConsoleSessionDispBrokerEnabled;
              v110 = v131;
            }
            if ( IsConsoleSessionDispBrokerEnabled >= 0 )
            {
              HeadIterator = (void **)DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator(
                                        (_QWORD *)v110 + 50,
                                        &IoStatusBlock);
              v116 = HeadIterator[1];
              if ( v116 == *HeadIterator )
                v116 = 0LL;
              v133[0] = v116;
              v135[0] = (struct DXGHWQUEUE *)v116;
              IoStatusBlock = 0LL;
              IsConsoleSessionDispBrokerEnabled = DXGCONTEXT::Render(
                                                    v115,
                                                    (__int64)v154,
                                                    (struct COREDEVICEACCESS *)v155,
                                                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v138,
                                                    &v131,
                                                    v112,
                                                    v135);
              v130 = IsConsoleSessionDispBrokerEnabled;
            }
            if ( IsDxgmms2 )
              DxgkUnreferenceAllocationList((unsigned int)Object, (struct _EX_RUNDOWN_REF **)v112);
            if ( P != v150 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v151 = 0;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)DeviceObject);
          goto LABEL_346;
        }
        if ( *((_DWORD *)a2 + 1) < 0x60u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 527;
          goto LABEL_450;
        }
        v57 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v24);
        v58 = v57;
        if ( !v57 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 535LL;
          goto LABEL_50;
        }
        v133[0] = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
          (DXGDEVICEBYHANDLE *)DeviceObject,
          *((_DWORD *)a2 + 3),
          v57,
          (struct DXGDEVICE **)v133);
        v59 = v133[0];
        if ( !v133[0] )
        {
          WdLogSingleEntry1(2LL, *((unsigned int *)a2 + 3));
          WdLogGlobalForLineNumber = 546;
          goto LABEL_140;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
        LODWORD(v131) = 0;
        LODWORD(Object) = 0;
        v136 = 0LL;
        v62 = *(_QWORD *)(v59[2] + 16LL);
        v137 = (struct DXGDEVICE *)v62;
        if ( *(_BYTE *)(v62 + 209) )
        {
          *(_OWORD *)v152 = *(_OWORD *)a2;
          *(_OWORD *)&v152[16] = *((_OWORD *)a2 + 1);
          *(_OWORD *)&v152[32] = *((_OWORD *)a2 + 2);
          *(_OWORD *)&v152[48] = *((_OWORD *)a2 + 3);
          *(_OWORD *)&v152[64] = *((_OWORD *)a2 + 4);
          v153 = *((_OWORD *)a2 + 5);
          *(_DWORD *)&v152[12] = *((_DWORD *)v59 + 118);
          v63 = *(_DWORD *)&v152[12];
          v64 = *(_DWORD *)(v62 + 4752);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v58);
          v130 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v62 + 4664),
                   HostProcess,
                   v64,
                   v63,
                   0,
                   D3DKMT_ESCAPE_DRT_TEST,
                   0,
                   0x60u,
                   v152);
          if ( v130 < 0 )
          {
            WdLogSingleEntry0(2LL);
            v60 = 577LL;
            WdLogGlobalForLineNumber = 577;
            v61 = L"VmBusSendEscape failed to create standard allocation";
            goto LABEL_141;
          }
          LODWORD(v131) = *(_DWORD *)&v152[44];
          LODWORD(Object) = *(_DWORD *)&v152[48];
          v136 = (struct DXGALLOCATION **)v153;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock,
          (struct DXGDEVICE *)v59);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)&Event,
          *(struct DXGADAPTER **)(v59[2] + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v155, (__int64)v59, 0, v66, 0);
        IsConsoleSessionDispBrokerEnabled = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v155, 0LL);
        if ( IsConsoleSessionDispBrokerEnabled >= 0 )
        {
          memset(v154, 0, sizeof(v154));
          *(_DWORD *)&v154[4] = *((_DWORD *)a2 + 3);
          *(_DWORD *)&v154[16] = 4;
          *(_QWORD *)&v154[24] = (char *)a2 + 16;
          v67 = *(_DWORD *)v154 | 0x200;
          *(_DWORD *)v154 |= 0x200u;
          if ( *((_BYTE *)a2 + 60) )
          {
            v67 |= 1u;
            *(_DWORD *)v154 = v67;
          }
          if ( *((_BYTE *)a2 + 65) )
          {
            v67 |= 0x20u;
            *(_DWORD *)v154 = v67;
          }
          if ( *((_BYTE *)a2 + 61) )
          {
            v67 |= 0x400u;
            *(_DWORD *)v154 = v67;
          }
          if ( *((_BYTE *)a2 + 62) )
          {
            v67 |= 0x1000u;
            *(_DWORD *)v154 = v67;
          }
          if ( *((_BYTE *)a2 + 63) )
          {
            v67 |= 0x2000u;
            *(_DWORD *)v154 = v67;
          }
          if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
            *(_DWORD *)v154 = v67 | 0x8000;
          v154[408] = *((_BYTE *)a2 + 64);
          *(_DWORD *)&v154[384] = *((_DWORD *)a2 + 14);
          *(_DWORD *)&v154[388] = *((_DWORD *)a2 + 17);
          *(_DWORD *)&v154[380] = *((_DWORD *)a2 + 10);
          *(_DWORD *)&v154[392] = *((_DWORD *)a2 + 18);
          *(_QWORD *)&v154[400] = *((_QWORD *)a2 + 10);
          IsConsoleSessionDispBrokerEnabled = DXGDEVICE::CreateStandardAllocation(
                                                (DXGDEVICE *)v59,
                                                (struct _D3DKM_CREATESTANDARDALLOCATION *)v154,
                                                (struct COREDEVICEACCESS *)v155);
          if ( IsConsoleSessionDispBrokerEnabled >= 0 )
          {
            v68 = *(_DWORD *)&v154[52];
            *((_DWORD *)a2 + 11) = *(_DWORD *)&v154[52];
            *((_DWORD *)a2 + 12) = *(_DWORD *)&v154[8];
            *((_DWORD *)a2 + 13) = *(_DWORD *)&v154[12];
            if ( ((_DWORD)v58[51] & 0x100) != 0 )
            {
              Object = 0LL;
              v69 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v58,
                                                 (DXGALLOCATIONREFERENCE *)v133,
                                                 v68);
              DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Object, v69);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v133);
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
              if ( !*((_BYTE *)v137 + 209) )
                goto LABEL_148;
              v133[0] = 0LL;
              v72 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                 (__int64)v58,
                                                 (DXGALLOCATIONREFERENCE *)v135,
                                                 v68);
              DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v133, v72);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v135);
              v73 = v133[0];
              if ( v133[0] )
              {
                *((_DWORD *)v133[0] + 5) = (_DWORD)v131;
                v73[128] |= 4u;
                v74 = (int)v136;
                *(_QWORD *)(*((_QWORD *)v73 + 6) + 112LL) = v136;
                *((_DWORD *)v73 + 30) = v74;
              }
              v131 = 0LL;
              ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                          (__int64)v58,
                                                          (DXGRESOURCEREFERENCE *)v135,
                                                          *((_DWORD *)a2 + 12));
              DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v131, ResourceSafe);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v135);
              if ( v131 )
                *((_DWORD *)v131 + 5) = (_DWORD)Object;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v131);
              p_Object = (struct _EX_RUNDOWN_REF **)v133;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(p_Object);
            goto LABEL_148;
          }
          IsConsoleSessionDispBrokerEnabled = -1073741811;
        }
LABEL_148:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v155);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
        p_IoStatusBlock = (DXGDEVICEACCESSLOCKEXCLUSIVE *)&IoStatusBlock;
        goto LABEL_149;
      }
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
          goto LABEL_450;
        v85 = 0LL;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v140, a1, 1);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v86 = *((_DWORD *)a2 + 3);
          if ( v86 != -1 )
          {
            v129[0] = 0;
            IsConsoleSessionDispBrokerEnabled = DmmIsTargetInClientVidPnTopology(a1, v86, (bool *)v129);
            if ( IsConsoleSessionDispBrokerEnabled < 0 )
            {
              p_Event = (struct _KEVENT *)v140;
LABEL_291:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)p_Event);
              goto LABEL_451;
            }
            if ( !v129[0] )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
              goto LABEL_450;
            }
          }
          v85 = (void *)*((_QWORD *)a1 + 27);
          ObfReferenceObject(v85);
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
        if ( v85 )
        {
          LOBYTE(v135[0]) = 0;
          CDisplayScenarioContextScope::ContextScopeConstructor(v135, 0LL, 0x2Du, 0);
          LODWORD(Object) = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
          IsConsoleSessionDispBrokerEnabled = DxgkPowerOnOffMonitor((int)v85, 1, (int)a2 + 12, (int)&Object, 1, v135[1]);
          ObfDereferenceObject(v85);
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v135);
          goto LABEL_451;
        }
        goto LABEL_192;
      }
LABEL_245:
      IsConsoleSessionDispBrokerEnabled = -1073741790;
      goto LABEL_451;
    }
    if ( (int)v24 <= 44 )
    {
      if ( (_DWORD)v24 == 44 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 829;
          goto LABEL_450;
        }
        if ( !DXGPROCESS::GetCurrent(v24) )
        {
          WdLogSingleEntry0(2LL);
          v28 = 836LL;
          goto LABEL_50;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event, a1, 1);
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v98 = *(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v98 + 284);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v98 + 4436);
          *(_DWORD *)(v98 + 4436) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event);
          goto LABEL_60;
        }
        IsConsoleSessionDispBrokerEnabled = -1073741130;
        goto LABEL_290;
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
                v133[0] = 0LL;
                DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v133, *((_DWORD *)a2 + 3));
                if ( v133[0] )
                {
                  v135[0] = 0LL;
                  ADAPTER_DISPLAY::GetPairedRenderAdapter(
                    *((ADAPTER_DISPLAY **)v133[0] + 390),
                    (struct DXGADAPTER_REFERENCE *)v135,
                    0LL);
                  if ( v135[0] )
                    AllocationSizeInSystemMemory = *(_QWORD *)((char *)v135[0] + 412);
                  *((_QWORD *)a2 + 2) = AllocationSizeInSystemMemory;
                  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v135, 0LL);
                }
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v133, 0LL);
                goto LABEL_451;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1509;
              goto LABEL_450;
            }
            goto LABEL_245;
          case 0x1C:
            if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
              goto LABEL_450;
            v92 = DXGPROCESS::GetCurrent(v24);
            if ( v92 )
            {
              *((_DWORD *)v92 + 102) = *((_DWORD *)v92 + 102) & 0xFFFFDFFF | (*((_BYTE *)a2 + 12) != 0 ? 0x2000 : 0);
              goto LABEL_451;
            }
            goto LABEL_245;
          case 0x1D:
            MonitorDeviceObject = DrtTestSignalEventCb((struct ADAPTER_RENDER **)a1, a2);
            goto LABEL_45;
        }
        if ( (_DWORD)v24 != 30 )
        {
          if ( (_DWORD)v24 != 31 )
          {
            if ( (_DWORD)v24 == 34 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v88 = *((_DWORD *)a2 + 3);
                if ( (unsigned int)(v88 - 1) <= 2 )
                {
                  if ( *((int *)a1 + 751) >= 2600 && *((_QWORD *)a1 + 390) && *((_QWORD *)a1 + 391) )
                  {
                    DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v88);
                    v91 = DiagnosticInfoArgs;
                    if ( DiagnosticInfoArgs )
                    {
                      IsConsoleSessionDispBrokerEnabled = DXGADAPTER::DdiCollectDiagnosticInfo(
                                                            a1,
                                                            DiagnosticInfoArgs,
                                                            v90);
                      DxgFreeDiagnosticInfoArgs(v91);
                    }
                    else
                    {
                      IsConsoleSessionDispBrokerEnabled = -1073741801;
                    }
                  }
                  goto LABEL_451;
                }
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1408;
              }
              else
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1393;
              }
              goto LABEL_450;
            }
            goto LABEL_398;
          }
          if ( *((_DWORD *)a2 + 1) < 0x1Cu )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1379;
            goto LABEL_450;
          }
          MonitorDeviceObject = DrtTestUpdateRegistryForNewOverride(
                                  *(struct _LUID *)((char *)a2 + 12),
                                  *((_DWORD *)a2 + 5),
                                  *((_DWORD *)a2 + 6));
          goto LABEL_45;
        }
LABEL_367:
        if ( !_bittest((const signed __int32 *)a1 + 617, 0xBu) )
          goto LABEL_451;
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Event, a1, 1);
        if ( !*((_QWORD *)a1 + 391) )
          goto LABEL_290;
        if ( *((_DWORD *)a1 + 50) == 1 )
        {
          v119 = *((_DWORD *)a2 + 2);
          if ( v119 == 30 )
          {
            v120 = ADAPTER_RENDER::EnableIommuForDrt(
                     *((ADAPTER_RENDER **)a1 + 391),
                     *((struct SYSMM_ADAPTER **)a1 + 28));
LABEL_372:
            IsConsoleSessionDispBrokerEnabled = v120;
LABEL_290:
            p_Event = &Event;
            goto LABEL_291;
          }
          if ( v119 == 46 )
          {
            v120 = ADAPTER_RENDER::DisableIommuForDrt(
                     *((ADAPTER_RENDER **)a1 + 391),
                     *((struct SYSMM_ADAPTER **)a1 + 28));
            goto LABEL_372;
          }
        }
        IsConsoleSessionDispBrokerEnabled = v130;
        goto LABEL_290;
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
          v96 = *(_QWORD *)(*((_QWORD *)a1 + 390) + 464LL);
          if ( v96 )
            v97 = *(_DWORD *)(3040LL * *((unsigned int *)a2 + 3) + *(_QWORD *)(v96 + 8) + 136);
          else
            v97 = -1;
          *((_DWORD *)a2 + 4) = v97;
          goto LABEL_451;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1551;
        goto LABEL_450;
      }
      if ( (_DWORD)v24 != 38 )
      {
        if ( (_DWORD)v24 != 40 )
          goto LABEL_398;
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 1567;
          goto LABEL_450;
        }
        DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel = *((_DWORD *)a2 + 3);
        DXGTRACKEDWORKLOAD::m_bypassPowerLevel = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 5) = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadPhysicalAdapterIndex;
        MonitorHash = DXGTRACKEDWORKLOAD::m_lastTrackedWorkloadNodeOrdinal;
LABEL_262:
        *((_DWORD *)a2 + 6) = MonitorHash;
        goto LABEL_451;
      }
      if ( *((_DWORD *)a2 + 1) < 0x30u )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1435;
        goto LABEL_450;
      }
      if ( *((int *)a1 + 751) < 2700 || !DXGADAPTER::IsFullWDDMAdapter(a1) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1446;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DRT Test: Test is only valid for full WDDM2.7 and above adapters.",
          1446LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)a2 + 3) != 28LL || *((_DWORD *)a2 + 10) != 264 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1454;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DRT Test: Wrong value of ArgSize passed for D3DKMT_DRT_TEST_COMMAND_DISPLAY_DIAGNOSTICS_TEST.",
          1454LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v95 = *((_DWORD *)a2 + 3);
      if ( !v95 )
      {
        *((_DWORD *)a2 + 11) = !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)a1 + 390))
                             ? 0xC00000BB
                             : 0;
        goto LABEL_451;
      }
      if ( v95 != 1 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1487;
        goto LABEL_450;
      }
      v144 = (struct _KTHREAD **)*((_QWORD *)a2 + 4);
      v147[0] = 1;
      v147[1] = 264;
      v148 = &v144;
      IsConsoleSessionDispBrokerEnabled = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                                            *((ADAPTER_DISPLAY **)a1 + 390),
                                            (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v147,
                                            v94);
      v130 = IsConsoleSessionDispBrokerEnabled;
      *((_DWORD *)a2 + 11) = IsConsoleSessionDispBrokerEnabled;
      if ( IsConsoleSessionDispBrokerEnabled >= 0 )
        goto LABEL_451;
      WdLogSingleEntry0(2LL);
      v17 = 1480LL;
      v18 = L"DRT Test: DdiGetDisplayStateIntrusive failed.";
LABEL_358:
      WdLogGlobalForLineNumber = v17;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v18, v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_451;
    }
    if ( (int)v24 <= 50 )
    {
      switch ( (_DWORD)v24 )
      {
        case '2':
          MonitorDeviceObject = DpiDrtToggleMux();
          goto LABEL_45;
        case '-':
          if ( *((_DWORD *)a2 + 1) < 0x40u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1580;
            goto LABEL_450;
          }
          v121 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 305624);
          if ( !RAPID_HPD_MANAGER::IsEnabled(v121) )
          {
            IsConsoleSessionDispBrokerEnabled = -1073740959;
            goto LABEL_451;
          }
          if ( *((_DWORD *)a2 + 5) )
          {
            if ( *((_DWORD *)a2 + 6) )
              v123 = 2 - (*((_DWORD *)a2 + 7) != 0);
            else
              v123 = 0;
            RAPID_HPD_MANAGER::SetTestControl(v122, v123);
          }
          if ( *((_DWORD *)a2 + 3) )
            RAPID_HPD_MANAGER::ReportTriggerEvent((__int64)v121, 4u, 0LL);
          if ( *((_DWORD *)a2 + 4) )
            RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v121, 4u, 0LL);
          if ( *((_DWORD *)a2 + 8) )
            RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
              v121,
              1u,
              (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 36),
              (struct _GUID *)((char *)a2 + 40),
              0LL);
          *((_DWORD *)a2 + 14) = *((_DWORD *)v121 + 6);
          *((_DWORD *)a2 + 15) = *((_DWORD *)v121 + 7);
          break;
        case '.':
          goto LABEL_367;
        case '/':
          v118 = *((_DWORD *)a2 + 1);
          if ( v118 < 0x23 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1643;
            goto LABEL_450;
          }
          if ( v118 < 20 * *((_DWORD *)a2 + 7) + 35 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1651;
            goto LABEL_450;
          }
          MonitorHash = DxgkGetMonitorHash(
                          *(struct _LUID *)((char *)a2 + 12),
                          *((_DWORD *)a2 + 5),
                          (unsigned int *)a2 + 7,
                          (struct _D3DKMT_DRT_ESCAPE_HEAD *)((char *)a2 + 32));
          goto LABEL_262;
        case '0':
          if ( !a1 )
          {
            WdLogSingleEntry0(2LL);
            v28 = 1667LL;
LABEL_349:
            v29 = L"Caller should specify the adapter.";
            goto LABEL_449;
          }
          if ( !this || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[11]) )
          {
            WdLogSingleEntry0(2LL);
            v28 = 1674LL;
            v29 = L"Caller should not set the HardwareAccess so DxgkEscape will acquire the adapter lock shared.";
            goto LABEL_449;
          }
          if ( *((_DWORD *)a2 + 1) < 0x10u )
          {
            WdLogSingleEntry0(2LL);
            v28 = 1682LL;
            v29 = L"DRT test specified invalid buffer size for D3DKMT_DRT_RESET_DISPLAY_OWNERSHIP.";
            goto LABEL_449;
          }
          if ( *((_DWORD *)a2 + 3) >= *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) )
          {
            WdLogSingleEntry0(2LL);
            v28 = 1690LL;
            v29 = L"Caller specified VidPn source ID is invalid.";
            goto LABEL_449;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)this);
          IsConsoleSessionDispBrokerEnabled = COREADAPTERACCESS::AcquireExclusive((__int64)this, 2u, 0);
          v130 = IsConsoleSessionDispBrokerEnabled;
          if ( IsConsoleSessionDispBrokerEnabled < 0 )
          {
            WdLogSingleEntry0(2LL);
            v17 = 1704LL;
            v18 = L"Failed to acquire the adapter core access exclusively.";
            goto LABEL_358;
          }
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((ADAPTER_DISPLAY **)a1 + 390), *((_DWORD *)a2 + 3));
          if ( VidPnSourceOwner )
            ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*((PERESOURCE ***)a1 + 390), VidPnSourceOwner, *((_DWORD *)a2 + 3));
          break;
        default:
          if ( *((_DWORD *)a2 + 1) < 0xD0u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 853;
            goto LABEL_20;
          }
          goto LABEL_301;
      }
      IsConsoleSessionDispBrokerEnabled = 0;
      goto LABEL_451;
    }
    if ( (_DWORD)v24 != 51 )
    {
      switch ( (_DWORD)v24 )
      {
        case '4':
          MonitorDeviceObject = DpiDrtClearInternalPanelInfoCacheMux();
          break;
        case '5':
          if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1766;
            goto LABEL_450;
          }
          if ( *((_DWORD *)a2 + 1) < 0xE0u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1755;
            goto LABEL_450;
          }
          MonitorDeviceObject = DpiDrtGetInternalPanelInfoCacheMux(a2);
          break;
        case '6':
          if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_3__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1744;
            goto LABEL_450;
          }
          if ( *((_DWORD *)a2 + 1) < 0xE0u )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1733;
            goto LABEL_450;
          }
          MonitorDeviceObject = DpiDrtSetInternalPanelInfoCacheMux((__int64)a2);
          break;
        default:
          goto LABEL_398;
      }
      goto LABEL_45;
    }
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 1775LL;
      goto LABEL_349;
    }
    if ( (*((_DWORD *)a1 + 111) & 8) == 0 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 1782LL;
      v29 = L"Call only valid on SoftGPU adapters.";
      goto LABEL_449;
    }
    if ( *((int *)a1 + 751) < 3200 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 1789LL;
      v29 = L"Call only valid on WDDM >=3.2 adapters.";
      goto LABEL_449;
    }
    DXGADAPTER::IsFeatureEnabled((__int64)a1, &Object, 0x1Fu);
    if ( (BYTE2(Object) & 1) == 0 )
    {
      WdLogSingleEntry1(3LL, 31LL);
      WdLogGlobalForLineNumber = 1799;
      goto LABEL_417;
    }
    v124 = (__int16)Object;
    if ( (unsigned __int16)((_WORD)Object - 3) > 2u )
    {
      WdLogSingleEntry1(3LL, (unsigned __int16)Object);
      WdLogGlobalForLineNumber = 1806;
      goto LABEL_417;
    }
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      WdLogSingleEntry0(2LL);
      v28 = 1814LL;
      v29 = L"DRT test specified invalid buffer size for D3DKMT_DRT_TEST_COMMAND_SOFTGPU_FEATURE_SAMPLE.";
      goto LABEL_449;
    }
    v125 = *((_DWORD *)a2 + 5);
    if ( v125 )
    {
      if ( v125 == 1 )
      {
        if ( (unsigned __int16)Object < 4u )
        {
          WdLogSingleEntry1(4LL, (unsigned __int16)Object);
          WdLogGlobalForLineNumber = 1829;
          goto LABEL_417;
        }
      }
      else
      {
        if ( v125 != 2 )
        {
          WdLogSingleEntry1(4LL, *((int *)a2 + 5));
          WdLogGlobalForLineNumber = 1845;
          goto LABEL_450;
        }
        if ( (unsigned __int16)Object < 5u )
        {
          WdLogSingleEntry1(4LL, (unsigned __int16)Object);
          WdLogGlobalForLineNumber = 1838;
          goto LABEL_417;
        }
      }
    }
    *(_OWORD *)v135 = 0LL;
    DXGADAPTER::QueryFeatureInterface((__int64)a1, 31, (unsigned __int16)Object, 16, v135);
    if ( v124 == 3 )
    {
      if ( v135[0] )
        goto LABEL_450;
    }
    else
    {
      if ( v124 != 4 )
      {
        if ( v124 == 5 && (!v135[0] || !v135[1]) )
          goto LABEL_450;
        goto LABEL_439;
      }
      if ( !v135[0] )
        goto LABEL_450;
    }
    if ( v135[1] )
      goto LABEL_450;
LABEL_439:
    v126 = *((_DWORD *)a2 + 3);
    v127 = *((_DWORD *)a2 + 5);
    if ( !v127 )
      *((_DWORD *)a2 + 4) = v126;
    if ( v127 == 1 )
    {
      v128 = v135[0];
    }
    else
    {
      if ( v127 != 2 )
        goto LABEL_451;
      v128 = v135[1];
    }
    v133[0] = (PVOID)v126;
    IsConsoleSessionDispBrokerEnabled = ((__int64 (__fastcall *)(_QWORD, PVOID *))v128)(*((_QWORD *)a1 + 36), v133);
    if ( IsConsoleSessionDispBrokerEnabled >= 0 )
      *((_DWORD *)a2 + 4) = HIDWORD(v133[0]);
    goto LABEL_451;
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
      goto LABEL_451;
    if ( !*((_BYTE *)a1 + 209) )
      goto LABEL_451;
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
    v130 = IsConsoleSessionDispBrokerEnabled;
    if ( IsConsoleSessionDispBrokerEnabled >= 0 )
      goto LABEL_451;
    WdLogSingleEntry0(2LL);
    v17 = 280LL;
    v18 = L"VmBusSendEscape D3DKMT_ESCAPE_DRT_TEST failed";
    goto LABEL_358;
  }
  WdLogSingleEntry1(3LL, *((unsigned int *)a2 + 1));
  WdLogGlobalForLineNumber = 291;
  IsConsoleSessionDispBrokerEnabled = -1073741789;
LABEL_451:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v143);
  return (unsigned int)IsConsoleSessionDispBrokerEnabled;
}
