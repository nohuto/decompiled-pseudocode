/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025D8D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x14037BBD0 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037C1F0 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C4BC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E324 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3434@Z @ 0x1400061F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x14001009C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140021DB8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x140022F20 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1400294D4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400295F4 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14002974C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140029B50 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140031638 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x14003181C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043344 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140050C6C (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140050DE8 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140051E78 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x140052690 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005350C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1400564F4 (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x140056F04 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140058DE0 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140067388 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline @ 0x140067948 (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140188D58 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x14019B4C4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x14028EA4C (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402903F4 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402919B0 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402E2B94 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1402FFD84 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140314390 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     LogSetTimingSourceMask @ 0x14031FBA8 (LogSetTimingSourceMask.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x140349BD4 (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FDCC (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14037206C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140381BDC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x14039D148 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403A2910 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3878 (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403D3B8C (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403D56DC (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403DCCE4 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1403E0F24 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403EDFFC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403EF7C8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x140405134 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1404084E8 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042C500 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        struct DMMVIDPN *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned __int64 v10; // r14
  struct DMMVIDPN *v11; // rdi
  int v12; // eax
  int v13; // r15d
  const struct DMMVIDPN *ClientCommittedVidPnRef; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  ADAPTER_RENDER *v17; // r8
  int v18; // r12d
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v20; // r8
  struct DXGDEVICE *v21; // r9
  int v22; // ebx
  int v23; // ecx
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  unsigned int v26; // r12d
  unsigned int v27; // ebx
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // edx
  unsigned int v33; // ebx
  int v34; // edi
  int v35; // ecx
  __int64 v36; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  int v39; // ecx
  unsigned __int8 v40; // al
  D3DKMDT_HVIDPN v41; // r9
  _DWORD *v42; // rbx
  int v43; // r12d
  unsigned __int8 v44; // r13
  unsigned int v45; // r15d
  _BYTE *v46; // rdi
  VIDPN_MGR *v47; // r14
  __int64 v48; // r12
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int64 v51; // xmm0_8
  char *v52; // rax
  unsigned __int8 v53; // al
  int v54; // eax
  ADAPTER_DISPLAY *v55; // rcx
  int v56; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  int v58; // edx
  unsigned __int8 v59; // r12
  _OWORD *v60; // rax
  __int128 v61; // xmm3
  __int128 v62; // xmm4
  __int64 v63; // xmm0_8
  char *v64; // rax
  ADAPTER_DISPLAY *v65; // rcx
  int v66; // eax
  unsigned int v67; // eax
  _BYTE *v68; // rbx
  unsigned int i; // r10d
  __int64 v70; // rax
  __int64 v71; // rdx
  char *v72; // rax
  __int128 v73; // xmm3
  __int128 v74; // xmm4
  __int64 v75; // xmm0_8
  unsigned int v76; // r12d
  __int64 v77; // rbx
  int v78; // r13d
  struct DMMVIDEOPRESENTTARGET *v79; // r15
  __int64 v80; // r8
  __int64 v81; // r9
  int TargetLinkTrainingStatus; // eax
  __int64 v83; // r9
  int v84; // eax
  int v85; // eax
  __int64 v86; // rdx
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v88; // r8
  ADAPTER_DISPLAY *v89; // rbx
  unsigned int v90; // r15d
  int v91; // r12d
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v93; // rcx
  DMMVIDPNTOPOLOGY *v94; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int v96; // r10d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v98; // r8
  struct DXGADAPTERALLOCATION *v99; // rbx
  void *v100; // rax
  ADAPTER_RENDER *v101; // rcx
  int v102; // eax
  unsigned int v103; // r9d
  __int64 v104; // r8
  int v105; // ebx
  int v106; // eax
  int v107; // r13d
  int v108; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int j; // ebx
  __int64 v112; // r15
  DMMVIDEOPRESENTTARGET *v113; // rax
  DMMVIDEOPRESENTTARGET *v114; // r13
  _BYTE *v115; // rdx
  __int64 v116; // r8
  int v117; // r9d
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // r8
  ADAPTER_DISPLAY *v121; // r10
  unsigned int v122; // r15d
  struct DXGDEVICE *v123; // rbx
  int v124; // r12d
  ADAPTER_DISPLAY *v125; // rcx
  ADAPTER_DISPLAY *v126; // rbx
  const struct _D3DKMT_DISPLAYMODE *v127; // rax
  int v128; // eax
  int v129; // r13d
  int v130; // eax
  __int64 v131; // r9
  DMMVIDPNTOPOLOGY *v132; // rbx
  int v133; // eax
  __int64 v134; // r10
  unsigned int k; // r9d
  __int64 v136; // r8
  unsigned int v137; // ecx
  __int64 v139; // [rsp+20h] [rbp-E0h]
  char v140; // [rsp+70h] [rbp-90h]
  unsigned __int8 v141; // [rsp+71h] [rbp-8Fh]
  char v142; // [rsp+71h] [rbp-8Fh]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v144; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v145; // [rsp+84h] [rbp-7Ch] BYREF
  int v146; // [rsp+88h] [rbp-78h]
  __int64 v147; // [rsp+90h] [rbp-70h] BYREF
  int v148; // [rsp+98h] [rbp-68h]
  unsigned int v149; // [rsp+9Ch] [rbp-64h] BYREF
  int v150; // [rsp+A0h] [rbp-60h] BYREF
  int v151; // [rsp+A4h] [rbp-5Ch]
  struct DXGDEVICE *v152; // [rsp+A8h] [rbp-58h]
  _BYTE *v153; // [rsp+B0h] [rbp-50h] BYREF
  VIDPN_MGR *v154; // [rsp+B8h] [rbp-48h]
  DMMVIDPNTOPOLOGY *v155; // [rsp+C0h] [rbp-40h]
  __int64 v156; // [rsp+C8h] [rbp-38h]
  __int64 v157; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 ContainingAdapter; // [rsp+D8h] [rbp-28h] BYREF
  int v159; // [rsp+E0h] [rbp-20h] BYREF
  int v160; // [rsp+E4h] [rbp-1Ch]
  unsigned int v161; // [rsp+E8h] [rbp-18h] BYREF
  int v162; // [rsp+ECh] [rbp-14h] BYREF
  struct DMMVIDPN *v163; // [rsp+F0h] [rbp-10h]
  void *v164; // [rsp+F8h] [rbp-8h] BYREF
  struct DXGDEVICE *v165; // [rsp+100h] [rbp+0h]
  ADAPTER_RENDER *v166[2]; // [rsp+108h] [rbp+8h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v167; // [rsp+118h] [rbp+18h] BYREF
  const struct DMMVIDPN *v168; // [rsp+140h] [rbp+40h]
  const struct DMMVIDPN *v169; // [rsp+148h] [rbp+48h] BYREF
  __int64 v170; // [rsp+150h] [rbp+50h] BYREF
  __int64 v171; // [rsp+158h] [rbp+58h] BYREF
  __int64 v172; // [rsp+160h] [rbp+60h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v173; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v174[24]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v175[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v176; // [rsp+1C0h] [rbp+C0h]
  unsigned int v177[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v178; // [rsp+220h] [rbp+120h] BYREF
  GUID ActivityId; // [rsp+230h] [rbp+130h] BYREF

  v152 = a8;
  v165 = (struct DXGDEVICE *)a9;
  v163 = a4;
  v146 = a3;
  v149 = a2;
  v154 = a1;
  v153 = a6;
  v145 = 0;
  ContainingAdapter = (unsigned __int64)VIDPN_MGR::GetContainingAdapter(a1);
  v10 = ContainingAdapter;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2510;
  }
  v159 = 0;
  *a6 = 0;
  v11 = v163;
  v144 = 0;
  Src = 0LL;
  v147 = 0LL;
  v157 = 0LL;
  v12 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          (__int64)&v159,
          (__int64)&v144,
          (__int64)&Src,
          (__int64)&v147,
          (__int64)&v157);
  v13 = v12;
  v148 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v12);
    WdLogGlobalForLineNumber = 2542;
    goto LABEL_284;
  }
  if ( !v144 )
  {
    WdLogSingleEntry2(3LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412));
    WdLogGlobalForLineNumber = 2560;
    goto LABEL_284;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
  {
    v140 = 1;
  }
  else
  {
    v140 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
    {
      DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), 0LL, 56 * v144);
      goto LABEL_283;
    }
  }
  v150 = 0;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
  v169 = ClientCommittedVidPnRef;
  if ( v11 )
    ClientCommittedVidPnRef = v11;
  v168 = ClientCommittedVidPnRef;
  v155 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
  v15 = 56LL * v144;
  if ( !is_mul_ok(v144, 0x38uLL) )
    v15 = -1LL;
  v164 = (void *)operator new[](v15, 0x4E506456u, 256LL);
  if ( !v164 )
  {
    WdLogSingleEntry1(6LL, v144);
    WdLogGlobalForLineNumber = 2622;
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v164);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v169, 0LL);
    v13 = -1073741801;
    goto LABEL_284;
  }
  memmove(v164, Src, 56LL * v144);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v16 = *((_QWORD *)a1 + 15);
  v17 = *(ADAPTER_RENDER **)(v10 + 3128);
  v156 = v16;
  v18 = 0;
  v160 = 0;
  LODWORD(v166[0]) = 0;
  v166[1] = v17;
  IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v10);
  v22 = *(_DWORD *)(v10 + 3004);
  v141 = IsLegacyDisplayStateSynchronization;
  v151 = v22;
  if ( !v20 )
    goto LABEL_49;
  v23 = *(_DWORD *)(v20 + 756);
  if ( a7 == (_BYTE)v21 )
  {
    if ( !v23 )
      goto LABEL_27;
  }
  else if ( v23 )
  {
    goto LABEL_27;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2677;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"(i_DoNotSuspend && pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask()) || (!i_DoNotSuspend && !pDispl"
     "ayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask())",
    2677LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v21) = 0;
LABEL_27:
  if ( v22 >= 2200 )
  {
    v24 = (unsigned int)v21;
    v25 = (unsigned int)v21;
    v26 = (unsigned int)v21;
    v27 = (unsigned int)v21;
    v28 = *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL);
    v29 = 0;
    if ( v28 )
    {
      v30 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
      if ( v141 )
      {
        do
        {
          v32 = 1 << v29;
          if ( ((1 << v29) & v30) != 0 )
          {
            v24 |= v32;
          }
          else if ( (v32 & *(_DWORD *)a5) != 0 )
          {
            v25 |= v32;
            if ( !a7 )
              v27 |= v32;
          }
          ++v29;
        }
        while ( v29 < v28 );
        v13 = v148;
      }
      else
      {
        do
        {
          v31 = 1 << v29;
          if ( ((1 << v29) & v30) != 0 )
          {
            v24 |= v31;
            v26 |= v31;
          }
          else if ( (v31 & *(_DWORD *)a5) != 0 )
          {
            v25 |= v31;
            if ( !a7 )
              v27 |= v31;
          }
          ++v29;
        }
        while ( v29 < v28 );
        ClientCommittedVidPnRef = v168;
      }
    }
    ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v10 + 3128), v24, v25, v26, v27);
    *((_DWORD *)a5 + 16) |= v26;
    v21 = 0LL;
    if ( !v27 )
    {
      v18 = v160;
      goto LABEL_49;
    }
    CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v166, v27);
    v18 = (int)v166[0];
  }
  else
  {
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v10 + 3128), 8, 0xFFFFFFFFLL, 0);
  }
  v21 = 0LL;
LABEL_49:
  v33 = (unsigned int)v21;
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL) <= (unsigned int)v21 )
    goto LABEL_73;
  v34 = v151;
  do
  {
    v35 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3);
    if ( _bittest(&v35, v33) )
    {
      v36 = *(_QWORD *)(v10 + 3128);
      if ( v36 && v34 < 2200 )
      {
        ADAPTER_RENDER::FlushScheduler(v36, 8, v33, 0);
        v21 = 0LL;
      }
      if ( v152 != v21 && v165 != v21 )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v10 + 3120), v33);
        IsEnabledDeviceUsageNoInline = Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline();
        v21 = 0LL;
        if ( IsEnabledDeviceUsageNoInline )
        {
          if ( !VidPnSourceOwner )
            goto LABEL_66;
        }
        else if ( !VidPnSourceOwner
               || *((_QWORD *)VidPnSourceOwner + 237) != *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) )
        {
          goto LABEL_66;
        }
        if ( v18 || a7 )
          LOBYTE(v21) = 1;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice(
          *(ADAPTER_DISPLAY **)(v10 + 3120),
          VidPnSourceOwner,
          v33,
          (unsigned __int8)v21);
        v21 = 0LL;
      }
    }
LABEL_66:
    v39 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
    if ( _bittest(&v39, v33)
      && *(struct DXGDEVICE **)(v10 + 3128) != v21
      && *(_BYTE *)(v10 + 3049) != (_BYTE)v21
      && v141 )
    {
      ADAPTER_DISPLAY::DisableMPOPlanes(*(ADAPTER_DISPLAY **)(v10 + 3120), v33, 0);
      *((_DWORD *)a5 + 16) |= 1 << v33;
    }
    ++v33;
    v21 = 0LL;
  }
  while ( v33 < *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL) );
  v16 = v156;
  v13 = v148;
  ClientCommittedVidPnRef = v168;
LABEL_73:
  if ( *((_DWORD *)a5 + 5) != (_DWORD)v21 )
    VIDPN_MGR::RequestPowerStateForTargets(v154, ClientCommittedVidPnRef);
  v40 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v10);
  v42 = v164;
  if ( v40 )
  {
    v142 = (char)v41;
    if ( v140 == (_BYTE)v41 )
    {
LABEL_79:
      v43 = v146;
      v44 = 0;
    }
    else
    {
      v43 = v146;
      *(_QWORD *)&v167.SetFlags.Reserved = v41;
      *(&v167.PathCount + 1) = (unsigned int)v41;
      v178 = 0LL;
      if ( v146 == 4 )
      {
        DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v178);
        v41 = 0LL;
      }
      if ( ClientCommittedVidPnRef == (const struct DMMVIDPN *)-88LL )
        v167.hFunctionalVidPn = v41;
      else
        v167.hFunctionalVidPn = (D3DKMDT_HVIDPN)ClientCommittedVidPnRef;
      v55 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      v167.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v145;
      v167.PathCount = v144;
      v167.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
      v56 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v55, &v167);
      v13 = v56;
      if ( v56 < 0 )
      {
        WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v56);
        WdLogGlobalForLineNumber = 2857;
      }
      if ( v144 == 1
        && ((v43 - 1) & 0xFFFFFFFD) == 0
        && (v13 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
        && (*((_DWORD *)Src + 3) & 4) != 0
        && ((v145 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 216) + 64LL) + 3652LL) & 3) != 0)
        && (TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, *(_DWORD *)Src)) != 0LL
        && !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
      {
        DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), (unsigned int)v13, 56 * v144);
        v42[3] = v42[3] & 0xFFFFFFF0 | 9;
        v58 = *((_DWORD *)a5 + 1);
        *((_DWORD *)a5 + 6) = v58 & (*((_DWORD *)a5 + 6) ^ *((_DWORD *)a5 + 5));
        *((_DWORD *)a5 + 5) = 0;
        *((_DWORD *)a5 + 20) = v58;
        if ( v13 < 0 )
          v59 = 0;
        else
          v59 = v145 & 1;
        v60 = Src;
        v145 = 0;
        v61 = *((_OWORD *)v42 + 1);
        v62 = *((_OWORD *)v42 + 2);
        v63 = *((_QWORD *)v42 + 6);
        *(_OWORD *)Src = *(_OWORD *)v42;
        v60[1] = v61;
        v60[2] = v62;
        *((_QWORD *)v60 + 6) = v63;
        v64 = (char *)ClientCommittedVidPnRef + 88;
        v44 = 0;
        *(_QWORD *)&v167.SetFlags.Reserved = 0LL;
        *(&v167.PathCount + 1) = 0;
        if ( v64 )
          v167.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v64 - 88);
        else
          v167.hFunctionalVidPn = 0LL;
        v65 = *(ADAPTER_DISPLAY **)(v10 + 3120);
        v167.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v145;
        v167.PathCount = v144;
        v167.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v66 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v65, &v167);
        v13 = v66;
        if ( v66 < 0 )
        {
          WdLogSingleEntry4(2LL, *(unsigned int *)Src, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v66);
          WdLogGlobalForLineNumber = 2940;
        }
        DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v13, *((_BYTE *)Src + 35) & 0xF, *(_QWORD *)(v10 + 412));
        v145 = v145 & 0xFFFFFFFE | ((unsigned __int8)v145 | v59) & 1;
        v43 = v146;
      }
      else
      {
        v44 = 0;
      }
      if ( v43 == 4 )
        DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v13, &v178);
    }
  }
  else
  {
    v142 = 1;
    if ( v140 == (_BYTE)v41 && *((_DWORD *)a5 + 10) == (_DWORD)v41 )
    {
      v140 = (char)v41;
      goto LABEL_79;
    }
    v140 = 1;
    if ( a7 != (_BYTE)v41 || (v53 = (unsigned __int8)v41, v18) )
      v53 = 1;
    v43 = v146;
    v54 = VIDPN_MGR::CommitVidPnOnAdapter(
            v154,
            v149,
            v146,
            (__int64)ClientCommittedVidPnRef,
            v144,
            (__int64)Src,
            (_DWORD *)v147,
            a5,
            &v150,
            v157,
            &v145,
            v152,
            (__int64)v165,
            v53);
    v44 = 0;
    v13 = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v54);
      WdLogGlobalForLineNumber = 3002;
    }
  }
  DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), (unsigned int)v13, 56 * v144);
  LogSetTimingSourceMask(v10, a5);
  if ( v140 )
  {
    if ( v13 < 0 )
    {
      *((_DWORD *)a5 + 21) = -1;
      FillFailedStatus(a5, v13);
      for ( i = 0; i < v144; *(_DWORD *)((char *)Src + v71 + 16) |= 1u )
      {
        v70 = i++;
        v71 = 56 * v70;
        v72 = (char *)Src;
        v73 = *(_OWORD *)&v42[(unsigned __int64)v71 / 4 + 4];
        v74 = *(_OWORD *)&v42[(unsigned __int64)v71 / 4 + 8];
        v75 = *(_QWORD *)&v42[(unsigned __int64)v71 / 4 + 12];
        *(_OWORD *)((char *)Src + v71) = *(_OWORD *)&v42[(unsigned __int64)v71 / 4];
        *(_OWORD *)&v72[v71 + 16] = v73;
        *(_OWORD *)&v72[v71 + 32] = v74;
        *(_QWORD *)&v72[v71 + 48] = v75;
        *(_DWORD *)((char *)Src + v71 + 32) = *(_DWORD *)((_BYTE *)Src + v71 + 32) & 0xF0FFFFFF | 0xD000000;
      }
      v68 = v153;
      v67 = 1;
      v145 = 1;
      *v153 = (((v43 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v153 & 0xFD;
    }
    else
    {
      v45 = 0;
      if ( v144 )
      {
        v46 = v153;
        v47 = v154;
        do
        {
          v48 = 56LL * v45;
          if ( VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                 v47,
                 (struct _DXGK_SET_TIMING_PATH_INFO *)&v42[(unsigned __int64)v48 / 4],
                 (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v48)) )
          {
            if ( (*(_DWORD *)((_BYTE *)Src + v48 + 32) & 0xF000000) == 0xD000000 )
            {
              *((_DWORD *)a5 + *(unsigned int *)(v147 + 4LL * v45) + 22) = -1073741506;
              *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v147 + 4LL * v45);
              *v46 = (((v146 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v46 & 0xFD;
            }
          }
          else
          {
            v49 = *(_OWORD *)&v42[(unsigned __int64)v48 / 4 + 4];
            v50 = *(_OWORD *)&v42[(unsigned __int64)v48 / 4 + 8];
            v51 = *(_QWORD *)&v42[(unsigned __int64)v48 / 4 + 12];
            v52 = (char *)Src;
            *(_OWORD *)((char *)Src + v48) = *(_OWORD *)&v42[(unsigned __int64)v48 / 4];
            *(_OWORD *)&v52[v48 + 16] = v49;
            *(_OWORD *)&v52[v48 + 32] = v50;
            *(_QWORD *)&v52[v48 + 48] = v51;
            *(_DWORD *)((char *)Src + v48 + 32) = *(_DWORD *)((_BYTE *)Src + v48 + 32) & 0xF0FFFFFF | 0xD000000;
            *((_DWORD *)a5 + *(unsigned int *)(v147 + 4LL * v45) + 22) = -1073741437;
            *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v147 + 4LL * v45);
          }
          ++v45;
        }
        while ( v45 < v144 );
        v67 = v145;
        v44 = 0;
        v16 = v156;
        v10 = ContainingAdapter;
        v68 = v153;
      }
      else
      {
        v67 = v145;
        v68 = v153;
      }
    }
    if ( (v67 & 0xFFFFFFFE) != 0 )
    {
      WdLogSingleEntry1(1LL, (unsigned __int64)v67 >> 1);
      LOBYTE(v67) = v145;
      WdLogGlobalForLineNumber = 3124;
    }
    if ( (v67 & 1) != 0 )
      *v68 |= 1u;
  }
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v76 = 0;
  if ( v144 )
  {
    do
    {
      v77 = 56LL * v76;
      v151 = *(_DWORD *)(v147 + 4LL * v76);
      v78 = 1 << v151;
      v79 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, *(_DWORD *)((char *)Src + v77));
      if ( v79 )
      {
        if ( v140 )
        {
          LogMonitorHandleOnOffState(*((_QWORD *)v79 + 14), &ActivityId, (*(_DWORD *)((char *)Src + v77 + 12) >> 2) & 1);
          if ( !v142 )
          {
            DxgkLogCodePointPacket(
              0x58u,
              *(_DWORD *)((char *)Src + v77),
              *((_BYTE *)Src + v77 + 35) & 0xF | 0x80000000,
              *(_DWORD *)((char *)Src + v77 + 24),
              *(_QWORD *)(v10 + 412));
            if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x4000LL) )
            {
              v161 = *((_BYTE *)Src + v77 + 35) & 0xF | 0x80000000;
              v170 = *(_QWORD *)((char *)Src + v77 + 24);
              v162 = *(_DWORD *)((char *)Src + v77);
              v171 = *(_QWORD *)(v10 + 412);
              LODWORD(v153) = 1;
              v172 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                (__int64)Src,
                (__int64)&unk_140140233,
                v80,
                v81,
                (__int64)&v172,
                (__int64)&v153,
                (__int64)&v171,
                (__int64)&v162,
                (__int64)&v170,
                (__int64)&v161);
            }
            DxgkLogCodePointPacket(
              0x59u,
              *(_DWORD *)((char *)Src + v77),
              *(_DWORD *)((char *)Src + v77 + 48),
              0,
              *(_QWORD *)(v10 + 412));
          }
          TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v79, 0LL);
          if ( TargetLinkTrainingStatus != (*(_BYTE *)(v77 + v83 + 35) & 0xF) )
            *((_DWORD *)a5 + 9) |= v78;
          DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(
            (__int64)v79,
            *((_QWORD *)Src + 7 * v76 + 3),
            *((_BYTE *)Src + 56 * v76 + 35) & 0xF);
          if ( (*((_DWORD *)Src + 14 * v76 + 8) & 0xF000000) == 0xC000000 )
            DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v79, 1u);
          else
            DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v79);
          *((_BYTE *)v79 + 414) = 0;
        }
        else
        {
          v84 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v79, 0LL);
          *(_DWORD *)((char *)Src + v77 + 32) ^= (*(_DWORD *)((char *)Src + v77 + 32) ^ (v84 << 24)) & 0xF000000;
        }
        if ( (*((_DWORD *)Src + 14 * v76 + 3) & 4) != 0 && (v78 & *((_DWORD *)a5 + 18)) == 0 )
        {
          v85 = *((_DWORD *)a5 + 21) | v150;
          if ( !_bittest(&v85, v151) )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(v79, 1u, 1u);
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v78) != 0 )
            {
              v86 = 56LL * v76;
              if ( (*(_DWORD *)((_BYTE *)Src + v86 + 32) & 0xF000000) == 0xE000000 )
              {
                PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v155, *(_DWORD *)((char *)Src + v86));
                DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
              }
            }
          }
        }
        v88 = 56LL * v76;
        if ( (*(_DWORD *)((_BYTE *)Src + v88 + 32) & 0xF000000) != 0xD000000
          && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v78) != 0 )
        {
          MonitorSetLastWireformatAndColorspace(
            *((struct HDXGMONITOR__ **)v79 + 14),
            *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)Src + v88 + 8),
            *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)((char *)Src + v88 + 4));
        }
      }
      ++v76;
    }
    while ( v76 < v144 );
    v44 = 0;
  }
  CVidSchSuspendResume::Resume(v166);
  v89 = *(ADAPTER_DISPLAY **)(v10 + 3120);
  v90 = 0;
  if ( *((_DWORD *)v89 + 24) )
  {
    while ( 2 )
    {
      v148 = 0;
      memset(v177, 0, sizeof(v177));
      v91 = 1 << v90;
      if ( ((1 << v90) & *((_DWORD *)a5 + 3)) != 0 )
      {
        v148 = 2;
      }
      else if ( (v91 & *((_DWORD *)a5 + 10)) != 0 )
      {
        v148 = 4;
      }
      else if ( (v91 & ~*((_DWORD *)a5 + 8) & *((_DWORD *)a5 + 2)) != 0 )
      {
        v148 = (*(_DWORD *)a5 & v91) != 0 ? 3 : 1;
        v44 = 0;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v89, v90);
      v93 = *((_DWORD *)a5 + 2) | (unsigned int)(*((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13));
      v94 = v155;
      *(_OWORD *)v177 = *(_OWORD *)DisplayModeInfo;
      *(_OWORD *)&v177[4] = *((_OWORD *)DisplayModeInfo + 1);
      *(_OWORD *)&v177[8] = *((_OWORD *)DisplayModeInfo + 2);
      *(_OWORD *)&v177[12] = *((_OWORD *)DisplayModeInfo + 3);
      *(_OWORD *)&v177[16] = *((_OWORD *)DisplayModeInfo + 4);
      if ( ((unsigned int)v93 & v91) != 0 )
        DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
          v155,
          ((v146 - 1) & 0xFFFFFFFD) == 0,
          v90,
          (struct _DXGK_DISPLAYMODE_INFO *)v177);
      if ( (v91 & *((_DWORD *)a5 + 21)) != 0 )
        goto LABEL_221;
      if ( (v91 & v150) == 0 )
      {
        if ( (v91 & *((_DWORD *)a5 + 10)) != 0 )
        {
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(DXGADAPTER ***)(v10 + 3120),
            v90,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v177);
          OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
            *(_QWORD *)(*(_QWORD *)(v10 + 3120) + 120LL),
            v90,
            0LL,
            0,
            0,
            1);
          v175[0] = 11LL;
          v175[1] = 0LL;
          v176 = 0LL;
          if ( (int)DxgkStatusChangeNotify(v175) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3395;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"NT_SUCCESS(NotificationStatus)",
              3395LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v93 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
        if ( ((unsigned int)v93 & v91) != 0 )
        {
          v149 = 0;
          MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v94, v90, &v149);
          if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
            && MostImportantVidPnPathTargetsFromSource != -1071774919 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3430;
            goto LABEL_176;
          }
          if ( MostImportantVidPnPathTargetsFromSource < 0 || (v96 = v149, v149 == -1) || (v103 = 0, !v144) )
          {
LABEL_176:
            v96 = -1;
          }
          else
          {
            while ( 1 )
            {
              v44 = 0;
              if ( v90 == *(_DWORD *)(v147 + 4LL * v103) )
              {
                v104 = 56LL * v103;
                if ( v149 == *(_DWORD *)((char *)Src + v104)
                  && (*(_DWORD *)((_BYTE *)Src + v104 + 32) & 0xF000000) == 0xE000000
                  && (*(_DWORD *)((_BYTE *)Src + v104 + 12) & 4) != 0
                  && (v91 & *((_DWORD *)a5 + 18)) == 0 )
                {
                  break;
                }
              }
              if ( ++v103 >= v144 )
                goto LABEL_176;
            }
            *((_DWORD *)a5 + 19) |= v91;
            v44 = 1;
          }
          ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, v96);
          if ( (v91 & *((_DWORD *)a5 + 2)) != 0 )
          {
            v177[11] = 1;
            *(_QWORD *)&v177[12] = 1LL;
            if ( *(_QWORD *)(v10 + 3128) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *(ADAPTER_DISPLAY **)(v10 + 3120),
                                             v90);
              v99 = DisplayedPrimaryAllocation;
              if ( DisplayedPrimaryAllocation )
              {
                if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                  v99 = 0LL;
                if ( v99 )
                {
                  v100 = (void *)*((_QWORD *)v99 + 2);
                  v101 = *(ADAPTER_RENDER **)(v10 + 3128);
                  memset(&v173.Width, 0, 40);
                  v173.hAllocation = v100;
                  v102 = ADAPTER_RENDER::DdiDescribeAllocation(v101, &v173, v98);
                  if ( v102 < 0 )
                  {
                    WdLogSingleEntry3(3LL, v99, v90, v102);
                    WdLogGlobalForLineNumber = 3540;
                  }
                  else if ( v173.Width == v177[0]
                         && v173.Height == v177[1]
                         && v173.Format == v177[2]
                         && *(_QWORD *)&v173.RefreshRate == *(_QWORD *)&v177[14]
                         && (((unsigned __int8)~(v177[10] >> 4) ^ (unsigned __int8)~(*((_DWORD *)v99 + 1) >> 12)) & 1) == 0 )
                  {
                    *(D3DDDI_MULTISAMPLINGMETHOD *)&v177[11] = v173.MultisampleMethod;
                    v177[13] = v173.PrivateDriverFormatAttribute;
                  }
                  else if ( v142 || (*((_DWORD *)v99 + 1) & 2) == 0 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 3528;
                  }
                }
              }
            }
          }
          v105 = v146;
          v106 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                   *(PERESOURCE ***)(v10 + 3120),
                   v90,
                   v44,
                   (const struct _DXGK_DISPLAYMODE_INFO *)v177,
                   v146 == 4,
                   a7 != 0);
          v107 = v106;
          if ( v106 < 0 )
          {
            WdLogSingleEntry3(2LL, v10, v90, v106);
            *((_DWORD *)a5 + v90 + 22) = v107;
            *((_DWORD *)a5 + 21) |= v91;
            WdLogGlobalForLineNumber = 3558;
            goto LABEL_207;
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v10 + 3120), v90, 0);
          if ( (v91 & *((_DWORD *)a5 + 3)) != 0 )
          {
            if ( ((v105 - 1) & 0xFFFFFFFD) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3574;
            }
            ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, 0);
            ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, &stru_140161460);
            ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, 0LL);
            ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v90, 0);
LABEL_207:
            v44 = 0;
          }
          else
          {
            v44 = 0;
            ContainingAdapter = 0LL;
            if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v155, v90, &ContainingAdapter) < 0 || !ContainingAdapter )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3587;
            }
            v93 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 13));
            if ( ((unsigned int)v93 & v91) != 0 )
            {
              if ( ((v105 - 1) & 0xFFFFFFFD) == 0 )
                ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, 1u);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(DXGADAPTER ***)(v10 + 3120),
                v90,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v177);
              ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(ADAPTER_DISPLAY **)(v10 + 3120), v90, v177[3]);
              ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v10 + 3120), v90);
              ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v90, (v91 & *((_DWORD *)a5 + 64)) != 0);
              if ( v152 && v165 )
                ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                  *(ADAPTER_DISPLAY **)(v10 + 3120),
                  v90,
                  *(struct DXGADAPTER **)(*((_QWORD *)v152 + 2) + 16LL));
            }
          }
        }
LABEL_221:
        v108 = v148;
        if ( v148 )
        {
          CurrentProcess = PsGetCurrentProcess(v93);
          ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
          VIDPN_MGR::CacheDisplayModeChangeRequest(
            (__int64)v154,
            v90,
            (__int64)v177,
            1u,
            *((_DWORD *)a5 + v90 + 22),
            v108,
            *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 424LL),
            ProcessImageFileName);
        }
      }
      v89 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      if ( ++v90 >= *((_DWORD *)v89 + 24) )
      {
        v16 = v156;
        break;
      }
      continue;
    }
  }
  for ( j = 0; j < v144; ++j )
  {
    v112 = 56LL * j;
    v113 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, *(_DWORD *)((char *)Src + v112));
    v114 = v113;
    if ( v113 )
    {
      v115 = Src;
      if ( (*(_DWORD *)((_BYTE *)Src + v112 + 12) & 4) == 0
        || (v116 = v147, v117 = 1 << *(_DWORD *)(v147 + 4LL * j), (v117 & *((_DWORD *)a5 + 18)) != 0)
        || (v117 & *((_DWORD *)a5 + 21)) != 0 )
      {
        DMMVIDEOPRESENTTARGET::SetTargetActivated(
          v113,
          0,
          (*(_DWORD *)((_BYTE *)Src + v112 + 32) & 0xF000000) == 201326592);
        v115 = Src;
        v116 = v147;
      }
      if ( !v142
        && *((_BYTE *)v114 + 416)
        && ((*(_DWORD *)&v115[v112 + 32] & 0xF000000) != 0xE000000 || v115[v112 + 48] != 0xFF) )
      {
        v118 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                 *(ADAPTER_DISPLAY **)(v10 + 3120),
                 *(_DWORD *)(v116 + 4LL * j),
                 0,
                 0x800u,
                 a7);
        if ( v118 < 0 )
        {
          WdLogSingleEntry3(2LL, v10, *(unsigned int *)(v147 + 4LL * j), v118);
          WdLogGlobalForLineNumber = 3695;
        }
        if ( (*((_DWORD *)Src + 14 * j + 8) & 0xF000000) == 0xE000000 )
        {
          v119 = *(_QWORD *)(v10 + 3128);
          if ( v119 )
          {
            VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(
              *(VIDSCH_EXPORT **)(v119 + 736),
              *(struct _VIDSCH_GLOBAL **)(v119 + 744),
              *(_DWORD *)(v147 + 4LL * j));
          }
          else
          {
            v120 = *(_QWORD *)(*(_QWORD *)(v10 + 3120) + 464LL);
            if ( v120 )
              _InterlockedExchange(
                (volatile __int32 *)(3040LL * *(unsigned int *)(v147 + 4LL * j) + *(_QWORD *)(v120 + 8) + 1080),
                1);
          }
        }
      }
      *((_BYTE *)v114 + 416) = 0;
    }
    else if ( (*(_DWORD *)((_BYTE *)Src + v112 + 12) & 4) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3739;
    }
    if ( (*((_DWORD *)Src + 14 * j + 4) & 1) != 0 )
      *((_DWORD *)a5 + 16) |= 1 << *(_DWORD *)(v147 + 4LL * j);
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)v154 + 40, 0LL);
  CVidSchSuspendResume::Resume(v166);
  v121 = *(ADAPTER_DISPLAY **)(v10 + 3120);
  v122 = 0;
  if ( *((_DWORD *)v121 + 24) )
  {
    v123 = v152;
    do
    {
      v124 = 1 << v122;
      if ( ((1 << v122) & *((_DWORD *)a5 + 15)) != 0 )
        ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v121, v122);
      if ( (v124 & *((_DWORD *)a5 + 16)) != 0 )
        DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v10, v122);
      if ( v123 && !v142 )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v10 + 3120), v122, 0)
          && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v10 + 3120), v122) )
        {
          ADAPTER_DISPLAY::DestroyCddAllocations(v125, v123, v122);
        }
        v126 = *(ADAPTER_DISPLAY **)(v10 + 3120);
        v127 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v126, v122);
        ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)v126, v122, v127);
        v123 = v152;
      }
      if ( (v124 & *((_DWORD *)a5 + 21)) != 0 )
      {
        v128 = *((_DWORD *)a5 + v122 + 40);
        if ( (v128 & 7) != 0 )
        {
          *((_DWORD *)a5 + 4 * (v128 & 7) + 56) = 0;
          DxgkLogCodePointPacket(0x65u, v122, *((_DWORD *)a5 + v122 + 40) & 7, 2u, *(_QWORD *)(v10 + 412));
        }
        v129 = v146;
        v130 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 3120), v122, 0, 0LL, v146 == 4, a7 != 0);
        if ( v130 < 0 )
        {
          WdLogSingleEntry3(2LL, v10, v122, v130);
          WdLogGlobalForLineNumber = 3863;
        }
        if ( v163 )
        {
          v132 = (struct DMMVIDPN *)((char *)v163 + 96);
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v174,
            ((unsigned __int64)v163 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v163 + 96) != 0LL),
            2u,
            v131,
            v139,
            *((_QWORD *)v163 + 17));
          v133 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v132, v122);
          if ( (int)(v133 + 0x80000000) >= 0 && v133 != -1071774919 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3878;
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v174);
        }
        v123 = v152;
        if ( v152 )
          ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v10 + 3120), v152, v122);
        if ( ((v129 - 1) & 0xFFFFFFFD) == 0 )
        {
          ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v122, 0);
          ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v10 + 3120), v122, &stru_140161460);
          ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v10 + 3120), v122, 0LL);
        }
        ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 3120), v122, -1);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v10 + 3120), v122, 1);
        ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v122, 0);
      }
      v121 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      ++v122;
    }
    while ( v122 < *((_DWORD *)v121 + 24) );
    v16 = v156;
  }
  if ( v163 )
  {
    ADAPTER_DISPLAY::SetSyncLockGroup(
      (__int64)v121,
      1u,
      *((_DWORD *)a5 + 60),
      *((_DWORD *)a5 + 61),
      *((_DWORD *)a5 + 62),
      *((_DWORD *)a5 + 63));
    v134 = *(_QWORD *)(v10 + 3120);
    for ( k = 0; k < *(_DWORD *)(v134 + 96); v134 = *(_QWORD *)(v10 + 3120) )
    {
      v136 = k;
      v137 = *((_DWORD *)a5 + k++ + 40) & 7;
      *(_DWORD *)(4024 * v136 + *(_QWORD *)(v134 + 128) + 3804) = *((_DWORD *)a5 + 4 * v137 + 56) != 0 ? v137 : 0;
    }
  }
  DxgkInvalidateQdcCache();
  CVidSchSuspendResume::Resume(v166);
  if ( v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v164);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v169, 0LL);
LABEL_283:
  v13 = 0;
LABEL_284:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v157);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v147);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&Src);
  return (unsigned int)v13;
}
