/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140252D98 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x140256A30 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x14030C458 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CA78 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CD44 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030EBAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3434@Z @ 0x1400061F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140012928 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x14001688C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x140028D2C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140028E4C (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140028FA4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400293A8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140030D90 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140031718 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1400318FC (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x140043668 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x140045A48 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1400511FC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140051378 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1400529E0 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005385C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x140056C44 (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1400576F4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140059320 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400677C4 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x14006AAF8 (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140186A28 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x140198FD0 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1402BFF00 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D64B4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402EA554 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x140312430 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1403141BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140316398 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14031B064 (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403325A8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x140355EAC (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403577FC (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     LogSetTimingSourceMask @ 0x1403770BC (LogSetTimingSourceMask.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140398538 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403A6750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403B1968 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403DAA7C (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403DC10C (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1403E51E4 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1403E7524 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403F40FC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403F5758 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14040C5C4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x14040EEB4 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        unsigned int a3,
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
  __int64 v14; // r9
  D3DKMDT_HVIDPN ClientCommittedVidPnRef; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  ADAPTER_RENDER *v18; // r8
  int v19; // r12d
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v21; // r8
  struct DXGDEVICE *v22; // r9
  int v23; // ebx
  int v24; // ecx
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  unsigned int v27; // r12d
  unsigned int v28; // ebx
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // edx
  unsigned int v34; // ebx
  int v35; // edi
  __int64 v36; // r13
  int v37; // ecx
  __int64 v38; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  int v40; // ecx
  unsigned __int8 v41; // al
  D3DKMDT_HVIDPN v42; // r9
  _DWORD *v43; // rbx
  bool v44; // r13
  char v45; // al
  unsigned int v46; // r12d
  int v47; // eax
  ADAPTER_DISPLAY *v48; // rcx
  int v49; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  int v51; // edx
  unsigned __int8 v52; // r12
  _OWORD *v53; // rax
  __int128 v54; // xmm3
  __int128 v55; // xmm4
  __int64 v56; // xmm0_8
  D3DKMDT_HVIDPN v57; // rax
  ADAPTER_DISPLAY *v58; // rcx
  int v59; // eax
  UINT v60; // r15d
  _BYTE *v61; // rdi
  VIDPN_MGR *v62; // r14
  __int64 v63; // r12
  __int128 v64; // xmm3
  __int128 v65; // xmm4
  __int64 v66; // xmm0_8
  char *v67; // rax
  unsigned int v68; // eax
  _BYTE *v69; // rbx
  UINT i; // r10d
  __int64 v71; // rax
  __int64 v72; // rdx
  char *v73; // rax
  __int128 v74; // xmm3
  __int128 v75; // xmm4
  __int64 v76; // xmm0_8
  UINT v77; // r15d
  __int64 v78; // rbx
  int v79; // r12d
  struct DMMVIDEOPRESENTTARGET *v80; // r13
  __int64 v81; // r9
  __int64 v82; // rdx
  int TargetLinkTrainingStatus; // eax
  __int64 v84; // r9
  int v85; // eax
  int v86; // eax
  __int64 v87; // rdx
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v89; // r8
  ADAPTER_DISPLAY *v90; // rbx
  unsigned int v91; // r15d
  int v92; // r12d
  const struct _DXGK_DISPLAYMODE_INFO *v93; // rax
  __int64 v94; // rcx
  DMMVIDPNTOPOLOGY *v95; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int v97; // r10d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v99; // r8
  struct DXGADAPTERALLOCATION *v100; // rbx
  void *v101; // rax
  ADAPTER_RENDER *v102; // rcx
  int v103; // eax
  unsigned int v104; // r9d
  __int64 v105; // r8
  unsigned int v106; // ebx
  int v107; // eax
  int v108; // r13d
  int v109; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  UINT j; // ebx
  __int64 v113; // r15
  DMMVIDEOPRESENTTARGET *v114; // rax
  DMMVIDEOPRESENTTARGET *v115; // r13
  _BYTE *v116; // rdx
  __int64 v117; // r8
  int v118; // r9d
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 k; // r9
  ADAPTER_DISPLAY *v126; // r10
  unsigned int v127; // r15d
  struct DXGDEVICE *v128; // rbx
  int v129; // r12d
  ADAPTER_DISPLAY *v130; // rcx
  ADAPTER_DISPLAY *v131; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v133; // eax
  unsigned int v134; // r13d
  int v135; // eax
  __int64 v136; // r9
  DMMVIDPNTOPOLOGY *v137; // rbx
  int v138; // eax
  __int64 v139; // r10
  unsigned int v140; // ecx
  __int64 v142; // [rsp+20h] [rbp-E0h]
  char v143; // [rsp+70h] [rbp-90h]
  unsigned __int8 v144; // [rsp+71h] [rbp-8Fh]
  char v145; // [rsp+71h] [rbp-8Fh]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  UINT v147; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v148; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v149; // [rsp+88h] [rbp-78h]
  __int64 v150; // [rsp+90h] [rbp-70h] BYREF
  int v151; // [rsp+98h] [rbp-68h]
  unsigned int v152; // [rsp+9Ch] [rbp-64h] BYREF
  int v153; // [rsp+A0h] [rbp-60h] BYREF
  int v154; // [rsp+A4h] [rbp-5Ch]
  struct DXGDEVICE *v155; // [rsp+A8h] [rbp-58h]
  _BYTE *v156; // [rsp+B0h] [rbp-50h] BYREF
  VIDPN_MGR *v157; // [rsp+B8h] [rbp-48h]
  DMMVIDPNTOPOLOGY *v158; // [rsp+C0h] [rbp-40h]
  __int64 v159; // [rsp+C8h] [rbp-38h]
  __int64 v160; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 ContainingAdapter; // [rsp+D8h] [rbp-28h] BYREF
  int v162; // [rsp+E0h] [rbp-20h] BYREF
  int v163; // [rsp+E4h] [rbp-1Ch]
  unsigned int v164; // [rsp+E8h] [rbp-18h] BYREF
  int v165; // [rsp+ECh] [rbp-14h] BYREF
  struct DMMVIDPN *v166; // [rsp+F0h] [rbp-10h]
  void *v167; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v168; // [rsp+100h] [rbp+0h]
  ADAPTER_RENDER *v169[2]; // [rsp+108h] [rbp+8h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v170; // [rsp+118h] [rbp+18h] BYREF
  D3DKMDT_HVIDPN v171; // [rsp+140h] [rbp+40h]
  D3DKMDT_HVIDPN v172; // [rsp+148h] [rbp+48h] BYREF
  __int64 v173; // [rsp+150h] [rbp+50h] BYREF
  __int64 v174; // [rsp+158h] [rbp+58h] BYREF
  __int64 v175; // [rsp+160h] [rbp+60h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v176; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v177[24]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v178[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v179; // [rsp+1C0h] [rbp+C0h]
  unsigned int v180[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v181; // [rsp+220h] [rbp+120h] BYREF
  GUID ActivityId; // [rsp+230h] [rbp+130h] BYREF

  v155 = a8;
  v168 = a9;
  v166 = a4;
  v149 = a3;
  v152 = a2;
  v157 = a1;
  v156 = a6;
  v148 = 0;
  ContainingAdapter = (unsigned __int64)VIDPN_MGR::GetContainingAdapter(a1);
  v10 = ContainingAdapter;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2513;
  }
  v162 = 0;
  *a6 = 0;
  v11 = v166;
  v147 = 0;
  Src = 0LL;
  v150 = 0LL;
  v160 = 0LL;
  v12 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          (__int64)&v162,
          (__int64)&v147,
          (__int64)&Src,
          (__int64)&v150,
          (__int64)&v160);
  v13 = v12;
  v151 = v12;
  if ( v12 >= 0 )
  {
    if ( !v147 )
    {
      WdLogSingleEntry2(3LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412));
      WdLogGlobalForLineNumber = 2563;
      goto LABEL_283;
    }
    if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
    {
      v143 = 1;
    }
    else
    {
      v143 = 0;
      if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
      {
        DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), 0LL, 56 * v147);
LABEL_282:
        v13 = 0;
        goto LABEL_283;
      }
    }
    v153 = 0;
    ClientCommittedVidPnRef = (D3DKMDT_HVIDPN)VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
    v172 = ClientCommittedVidPnRef;
    if ( v11 )
      ClientCommittedVidPnRef = (D3DKMDT_HVIDPN)v11;
    v171 = ClientCommittedVidPnRef;
    v158 = (DMMVIDPNTOPOLOGY *)(ClientCommittedVidPnRef + 24);
    v16 = 56LL * v147;
    if ( !is_mul_ok(v147, 0x38uLL) )
      v16 = -1LL;
    v167 = (void *)operator new[](v16, 0x4E506456u, 256LL, v14);
    if ( !v167 )
    {
      WdLogSingleEntry1(6LL, v147);
      WdLogGlobalForLineNumber = 2625;
      wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v167);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v172, 0LL);
      v13 = -1073741801;
      goto LABEL_283;
    }
    memmove(v167, Src, 56LL * v147);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
    v17 = *((_QWORD *)a1 + 15);
    v18 = *(ADAPTER_RENDER **)(v10 + 3128);
    v159 = v17;
    v19 = 0;
    v163 = 0;
    LODWORD(v169[0]) = 0;
    v169[1] = v18;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v10);
    v23 = *(_DWORD *)(v10 + 3004);
    v144 = IsLegacyDisplayStateSynchronization;
    v154 = v23;
    if ( !v21 )
      goto LABEL_49;
    v24 = *(_DWORD *)(v21 + 756);
    if ( a7 == (_BYTE)v22 )
    {
      if ( v24 )
      {
LABEL_26:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2680;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(i_DoNotSuspend && pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask()) || (!i_DoNotSuspend && !"
           "pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask())",
          2680LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v22) = 0;
      }
    }
    else if ( !v24 )
    {
      goto LABEL_26;
    }
    if ( v23 < 2200 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v10 + 3128), 8, 0xFFFFFFFFLL, 0);
LABEL_29:
      v22 = 0LL;
      goto LABEL_49;
    }
    v25 = (unsigned int)v22;
    v26 = (unsigned int)v22;
    v27 = (unsigned int)v22;
    v28 = (unsigned int)v22;
    v29 = *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL);
    v30 = 0;
    if ( v29 )
    {
      v31 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
      if ( v144 )
      {
        do
        {
          v33 = 1 << v30;
          if ( ((1 << v30) & v31) != 0 )
          {
            v25 |= v33;
          }
          else if ( (v33 & *(_DWORD *)a5) != 0 )
          {
            v26 |= v33;
            if ( !a7 )
              v28 |= v33;
          }
          ++v30;
        }
        while ( v30 < v29 );
        v13 = v151;
      }
      else
      {
        do
        {
          v32 = 1 << v30;
          if ( ((1 << v30) & v31) != 0 )
          {
            v25 |= v32;
            v27 |= v32;
          }
          else if ( (v32 & *(_DWORD *)a5) != 0 )
          {
            v26 |= v32;
            if ( !a7 )
              v28 |= v32;
          }
          ++v30;
        }
        while ( v30 < v29 );
        ClientCommittedVidPnRef = v171;
      }
    }
    ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v10 + 3128), v25, v26, v27, v28);
    *((_DWORD *)a5 + 16) |= v27;
    v22 = 0LL;
    if ( v28 )
    {
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v169, v28);
      v19 = (int)v169[0];
      goto LABEL_29;
    }
    v19 = v163;
LABEL_49:
    v34 = (unsigned int)v22;
    if ( *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL) > (unsigned int)v22 )
    {
      v35 = v154;
      v36 = v168;
      do
      {
        v37 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3);
        if ( _bittest(&v37, v34) )
        {
          v38 = *(_QWORD *)(v10 + 3128);
          if ( v38 && v35 < 2200 )
          {
            ADAPTER_RENDER::FlushScheduler(v38, 8, v34, 0);
            v22 = 0LL;
          }
          if ( v155 != v22 )
          {
            if ( v36 )
            {
              VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v10 + 3120), v34);
              v22 = 0LL;
              if ( VidPnSourceOwner )
              {
                if ( *((_QWORD *)VidPnSourceOwner + 235) == *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) )
                {
                  if ( v19 || a7 )
                    LOBYTE(v22) = 1;
                  ADAPTER_DISPLAY::DisablePrimaryOnDevice(
                    *(ADAPTER_DISPLAY **)(v10 + 3120),
                    VidPnSourceOwner,
                    v34,
                    (unsigned __int8)v22);
                  v22 = 0LL;
                }
              }
            }
          }
        }
        v40 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
        if ( _bittest(&v40, v34)
          && *(struct DXGDEVICE **)(v10 + 3128) != v22
          && *(_BYTE *)(v10 + 3049) != (_BYTE)v22
          && v144 )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes(*(ADAPTER_DISPLAY **)(v10 + 3120), v34, 0);
          *((_DWORD *)a5 + 16) |= 1 << v34;
        }
        ++v34;
        v22 = 0LL;
      }
      while ( v34 < *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 96LL) );
      v17 = v159;
      v13 = v151;
      ClientCommittedVidPnRef = v171;
    }
    if ( *((_DWORD *)a5 + 5) != (_DWORD)v22 )
      VIDPN_MGR::RequestPowerStateForTargets(v157, (const struct DMMVIDPN *)ClientCommittedVidPnRef);
    v41 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v10);
    v43 = v167;
    if ( v41 )
    {
      v145 = (char)v42;
      if ( v143 == (_BYTE)v42 )
      {
        v44 = 0;
        goto LABEL_111;
      }
      v46 = v149;
      *(_QWORD *)&v170.SetFlags.Reserved = v42;
      *(&v170.PathCount + 1) = (unsigned int)v42;
      v181 = 0LL;
      if ( v149 == 4 )
      {
        DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v181);
        v42 = 0LL;
      }
      if ( ClientCommittedVidPnRef == (D3DKMDT_HVIDPN)-88LL )
        v170.hFunctionalVidPn = v42;
      else
        v170.hFunctionalVidPn = ClientCommittedVidPnRef;
      v48 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      v170.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v148;
      v170.PathCount = v147;
      v170.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
      v49 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v48, &v170);
      v13 = v49;
      if ( v49 < 0 )
      {
        WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v49);
        WdLogGlobalForLineNumber = 2850;
      }
      if ( v147 == 1
        && ((v46 - 1) & 0xFFFFFFFD) == 0
        && (v13 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
        && (*((_DWORD *)Src + 3) & 4) != 0
        && ((v148 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 216) + 64LL) + 3652LL) & 3) != 0)
        && (TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, *(_DWORD *)Src)) != 0LL
        && !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
      {
        DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), (unsigned int)v13, 56 * v147);
        v43[3] = v43[3] & 0xFFFFFFF0 | 9;
        v51 = *((_DWORD *)a5 + 1);
        *((_DWORD *)a5 + 6) = v51 & (*((_DWORD *)a5 + 6) ^ *((_DWORD *)a5 + 5));
        *((_DWORD *)a5 + 5) = 0;
        *((_DWORD *)a5 + 20) = v51;
        if ( v13 < 0 )
          v52 = 0;
        else
          v52 = v148 & 1;
        v53 = Src;
        v148 = 0;
        v54 = *((_OWORD *)v43 + 1);
        v55 = *((_OWORD *)v43 + 2);
        v56 = *((_QWORD *)v43 + 6);
        *(_OWORD *)Src = *(_OWORD *)v43;
        v53[1] = v54;
        v53[2] = v55;
        *((_QWORD *)v53 + 6) = v56;
        v57 = ClientCommittedVidPnRef + 22;
        v44 = 0;
        *(_QWORD *)&v170.SetFlags.Reserved = 0LL;
        *(&v170.PathCount + 1) = 0;
        if ( v57 )
          v170.hFunctionalVidPn = v57 - 22;
        else
          v170.hFunctionalVidPn = 0LL;
        v58 = *(ADAPTER_DISPLAY **)(v10 + 3120);
        v170.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v148;
        v170.PathCount = v147;
        v170.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v59 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v58, &v170);
        v13 = v59;
        if ( v59 < 0 )
        {
          WdLogSingleEntry4(2LL, *(unsigned int *)Src, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v59);
          WdLogGlobalForLineNumber = 2933;
        }
        DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v13, *((_BYTE *)Src + 35) & 0xF, *(_QWORD *)(v10 + 412));
        v148 = v148 & 0xFFFFFFFE | ((unsigned __int8)v148 | v52) & 1;
        v46 = v149;
      }
      else
      {
        v44 = 0;
      }
      if ( v46 == 4 )
        DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v13, &v181);
    }
    else
    {
      v145 = 1;
      if ( v143 == (_BYTE)v42 && *((_DWORD *)a5 + 10) == (_DWORD)v42 )
      {
        v44 = 0;
        v143 = 0;
LABEL_111:
        v46 = v149;
        goto LABEL_112;
      }
      v143 = 1;
      if ( a7 != (_BYTE)v42 || (v45 = (char)v42, v19) )
        v45 = 1;
      v46 = v149;
      v47 = VIDPN_MGR::CommitVidPnOnAdapter(
              v157,
              v152,
              v149,
              ClientCommittedVidPnRef,
              v147,
              Src,
              v150,
              a5,
              &v153,
              v160,
              &v148,
              v155,
              v168,
              v45);
      v44 = 0;
      v13 = v47;
      if ( v47 < 0 )
      {
        WdLogSingleEntry3(2LL, *(int *)(v10 + 416), *(unsigned int *)(v10 + 412), v47);
        WdLogGlobalForLineNumber = 2995;
      }
    }
LABEL_112:
    DisplayScenarioJournalSetSetTimingPathInfo(*(_QWORD *)(v10 + 412), (unsigned int)v13, 56 * v147);
    LogSetTimingSourceMask(v10, a5);
    if ( v143 )
    {
      if ( v13 < 0 )
      {
        *((_DWORD *)a5 + 21) = -1;
        FillFailedStatus(a5, v13);
        for ( i = 0; i < v147; *(_DWORD *)((char *)Src + v72 + 16) |= 1u )
        {
          v71 = i++;
          v72 = 56 * v71;
          v73 = (char *)Src;
          v74 = *(_OWORD *)&v43[(unsigned __int64)v72 / 4 + 4];
          v75 = *(_OWORD *)&v43[(unsigned __int64)v72 / 4 + 8];
          v76 = *(_QWORD *)&v43[(unsigned __int64)v72 / 4 + 12];
          *(_OWORD *)((char *)Src + v72) = *(_OWORD *)&v43[(unsigned __int64)v72 / 4];
          *(_OWORD *)&v73[v72 + 16] = v74;
          *(_OWORD *)&v73[v72 + 32] = v75;
          *(_QWORD *)&v73[v72 + 48] = v76;
          *(_DWORD *)((char *)Src + v72 + 32) = *(_DWORD *)((_BYTE *)Src + v72 + 32) & 0xF0FFFFFF | 0xD000000;
        }
        v69 = v156;
        v68 = 1;
        v148 = 1;
        *v156 = (((v46 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v156 & 0xFD;
      }
      else
      {
        v60 = 0;
        if ( v147 )
        {
          v61 = v156;
          v62 = v157;
          do
          {
            v63 = 56LL * v60;
            if ( VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                   v62,
                   (struct _DXGK_SET_TIMING_PATH_INFO *)&v43[(unsigned __int64)v63 / 4],
                   (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v63)) )
            {
              if ( (*(_DWORD *)((_BYTE *)Src + v63 + 32) & 0xF000000) == 0xD000000 )
              {
                *((_DWORD *)a5 + *(unsigned int *)(v150 + 4LL * v60) + 22) = -1073741506;
                *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v150 + 4LL * v60);
                *v61 = (((v149 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v61 & 0xFD;
              }
            }
            else
            {
              v64 = *(_OWORD *)&v43[(unsigned __int64)v63 / 4 + 4];
              v65 = *(_OWORD *)&v43[(unsigned __int64)v63 / 4 + 8];
              v66 = *(_QWORD *)&v43[(unsigned __int64)v63 / 4 + 12];
              v67 = (char *)Src;
              *(_OWORD *)((char *)Src + v63) = *(_OWORD *)&v43[(unsigned __int64)v63 / 4];
              *(_OWORD *)&v67[v63 + 16] = v64;
              *(_OWORD *)&v67[v63 + 32] = v65;
              *(_QWORD *)&v67[v63 + 48] = v66;
              *(_DWORD *)((char *)Src + v63 + 32) = *(_DWORD *)((_BYTE *)Src + v63 + 32) & 0xF0FFFFFF | 0xD000000;
              *((_DWORD *)a5 + *(unsigned int *)(v150 + 4LL * v60) + 22) = -1073741437;
              *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v150 + 4LL * v60);
            }
            ++v60;
          }
          while ( v60 < v147 );
          v68 = v148;
          v44 = 0;
          v17 = v159;
          v10 = ContainingAdapter;
          v69 = v156;
        }
        else
        {
          v68 = v148;
          v69 = v156;
        }
      }
      if ( (v68 & 0xFFFFFFFE) != 0 )
      {
        WdLogSingleEntry1(1LL, (unsigned __int64)v68 >> 1);
        LOBYTE(v68) = v148;
        WdLogGlobalForLineNumber = 3117;
      }
      if ( (v68 & 1) != 0 )
        *v69 |= 1u;
    }
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v77 = 0;
    if ( v147 )
    {
      do
      {
        v78 = 56LL * v77;
        v154 = *(_DWORD *)(v150 + 4LL * v77);
        v79 = 1 << v154;
        v80 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, *(_DWORD *)((char *)Src + v78));
        if ( v80 )
        {
          if ( v143 )
          {
            LogMonitorHandleOnOffState(
              *((_QWORD *)v80 + 14),
              &ActivityId,
              (*(_DWORD *)((char *)Src + v78 + 12) >> 2) & 1);
            if ( !v145 )
            {
              DxgkLogCodePointPacket(
                0x58u,
                *(_DWORD *)((char *)Src + v78),
                *((_BYTE *)Src + v78 + 35) & 0xF | 0x80000000,
                *(_DWORD *)((char *)Src + v78 + 24),
                *(_QWORD *)(v10 + 412));
              if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
                && (unsigned int)dword_14015B5B8 > 5
                && tlgKeywordOn((__int64)&dword_14015B5B8, 0x4000LL) )
              {
                v82 = 56LL * v77;
                v164 = *((_BYTE *)Src + v82 + 35) & 0xF | 0x80000000;
                v173 = *(_QWORD *)((char *)Src + v82 + 24);
                v165 = *(_DWORD *)((char *)Src + v82);
                v174 = *(_QWORD *)(v10 + 412);
                LODWORD(v156) = 1;
                v175 = 0x1000000LL;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                  (__int64)Src,
                  (__int64)&unk_14013D65B,
                  0x80000000LL,
                  v81,
                  (__int64)&v175,
                  (__int64)&v156,
                  (__int64)&v174,
                  (__int64)&v165,
                  (__int64)&v173,
                  (__int64)&v164);
              }
              DxgkLogCodePointPacket(
                0x59u,
                *((_DWORD *)Src + 14 * v77),
                *((_DWORD *)Src + 14 * v77 + 12),
                0,
                *(_QWORD *)(v10 + 412));
            }
            TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v80, 0LL);
            if ( TargetLinkTrainingStatus != (*(_BYTE *)(v84 + 35) & 0xF) )
              *((_DWORD *)a5 + 9) |= v79;
            DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(
              v80,
              *((_QWORD *)Src + 7 * v77 + 3),
              *((_BYTE *)Src + 56 * v77 + 35) & 0xF);
            if ( (*((_DWORD *)Src + 14 * v77 + 8) & 0xF000000) == 0xC000000 )
              DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v80, 1u);
            else
              DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v80);
            *((_BYTE *)v80 + 414) = 0;
          }
          else
          {
            v85 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v80, 0LL);
            *(_DWORD *)((char *)Src + v78 + 32) ^= (*(_DWORD *)((char *)Src + v78 + 32) ^ (v85 << 24)) & 0xF000000;
          }
          if ( (*((_DWORD *)Src + 14 * v77 + 3) & 4) != 0 && (v79 & *((_DWORD *)a5 + 18)) == 0 )
          {
            v86 = *((_DWORD *)a5 + 21) | v153;
            if ( !_bittest(&v86, v154) )
            {
              DMMVIDEOPRESENTTARGET::SetTargetActivated(v80, 1u, 1u);
              if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v79) != 0 )
              {
                v87 = 56LL * v77;
                if ( (*(_DWORD *)((_BYTE *)Src + v87 + 32) & 0xF000000) == 0xE000000 )
                {
                  PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v158, *(_DWORD *)((char *)Src + v87));
                  DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                }
              }
            }
          }
          v89 = 56LL * v77;
          if ( (*(_DWORD *)((_BYTE *)Src + v89 + 32) & 0xF000000) != 0xD000000
            && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v79) != 0 )
          {
            MonitorSetLastWireformatAndColorspace(
              *((struct HDXGMONITOR__ **)v80 + 14),
              *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)Src + v89 + 8),
              *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)((char *)Src + v89 + 4));
          }
        }
        ++v77;
      }
      while ( v77 < v147 );
      v44 = 0;
    }
    CVidSchSuspendResume::Resume(v169);
    v90 = *(ADAPTER_DISPLAY **)(v10 + 3120);
    v91 = 0;
    if ( !*((_DWORD *)v90 + 24) )
    {
LABEL_224:
      for ( j = 0; j < v147; ++j )
      {
        v113 = 56LL * j;
        v114 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v17, *(_DWORD *)((char *)Src + v113));
        v115 = v114;
        if ( v114 )
        {
          v116 = Src;
          if ( (*(_DWORD *)((_BYTE *)Src + v113 + 12) & 4) == 0
            || (v117 = v150, v118 = 1 << *(_DWORD *)(v150 + 4LL * j), (v118 & *((_DWORD *)a5 + 18)) != 0)
            || (v118 & *((_DWORD *)a5 + 21)) != 0 )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(
              v114,
              0,
              (*(_DWORD *)((_BYTE *)Src + v113 + 32) & 0xF000000) == 201326592);
            v116 = Src;
            v117 = v150;
          }
          if ( !v145
            && *((_BYTE *)v115 + 416)
            && ((*(_DWORD *)&v116[v113 + 32] & 0xF000000) != 0xE000000 || v116[v113 + 48] != 0xFF) )
          {
            v119 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                     *(ADAPTER_DISPLAY **)(v10 + 3120),
                     *(_DWORD *)(v117 + 4LL * j),
                     0,
                     0x800u,
                     a7);
            if ( v119 < 0 )
            {
              WdLogSingleEntry3(2LL, v10, *(unsigned int *)(v150 + 4LL * j), v119);
              WdLogGlobalForLineNumber = 3691;
            }
            if ( (*((_DWORD *)Src + 14 * j + 8) & 0xF000000) == 0xE000000 )
            {
              v120 = *(_QWORD *)(v10 + 3128);
              if ( v120 )
              {
                VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(
                  *(VIDSCH_EXPORT **)(v120 + 736),
                  *(struct _VIDSCH_GLOBAL **)(v120 + 744),
                  *(_DWORD *)(v150 + 4LL * j));
              }
              else
              {
                v121 = *(_QWORD *)(*(_QWORD *)(v10 + 3120) + 456LL);
                if ( v121 )
                  _InterlockedExchange(
                    (volatile __int32 *)(2968LL * *(unsigned int *)(v150 + 4LL * j) + *(_QWORD *)(v121 + 8) + 1008),
                    1);
              }
            }
          }
          *((_BYTE *)v115 + 416) = 0;
        }
        else if ( (*(_DWORD *)((_BYTE *)Src + v113 + 12) & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3735;
        }
        if ( (*((_DWORD *)Src + 14 * j + 4) & 1) != 0 )
          *((_DWORD *)a5 + 16) |= 1 << *(_DWORD *)(v150 + 4LL * j);
      }
      auto_rc<DMMVIDPN>::reset((__int64 *)v157 + 40, 0LL);
      CVidSchSuspendResume::Resume(v169);
      v126 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      v127 = 0;
      if ( *((_DWORD *)v126 + 24) )
      {
        v128 = v155;
        do
        {
          v123 = v127;
          v129 = 1 << v127;
          if ( ((1 << v127) & *((_DWORD *)a5 + 15)) != 0 )
            ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v126, v127);
          if ( (v129 & *((_DWORD *)a5 + 16)) != 0 )
            DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v10, v127, v124, k);
          if ( v128 && !v145 )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v10 + 3120), v127, 0)
              && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v10 + 3120), v127) )
            {
              ADAPTER_DISPLAY::DestroyCddAllocations(v130, v128, v127);
            }
            v131 = *(ADAPTER_DISPLAY **)(v10 + 3120);
            DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v131, v127);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)v131, v127, DisplayModeInfo);
            v128 = v155;
          }
          if ( (v129 & *((_DWORD *)a5 + 21)) != 0 )
          {
            v133 = *((_DWORD *)a5 + v127 + 40);
            if ( (v133 & 7) != 0 )
            {
              *((_DWORD *)a5 + 4 * (v133 & 7) + 56) = 0;
              DxgkLogCodePointPacket(0x65u, v127, *((_DWORD *)a5 + v127 + 40) & 7, 2u, *(_QWORD *)(v10 + 412));
            }
            v134 = v149;
            v135 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                     *(ADAPTER_DISPLAY **)(v10 + 3120),
                     v127,
                     0,
                     0LL,
                     v149 == 4,
                     a7 != 0);
            if ( v135 < 0 )
            {
              WdLogSingleEntry3(2LL, v10, v127, v135);
              WdLogGlobalForLineNumber = 3859;
            }
            if ( v166 )
            {
              v137 = (struct DMMVIDPN *)((char *)v166 + 96);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v177,
                ((unsigned __int64)v166 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v166 + 96) != 0LL),
                2u,
                v136,
                v142,
                *((_QWORD *)v166 + 17));
              v138 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v137, v127);
              if ( (int)(v138 + 0x80000000) >= 0 && v138 != -1071774919 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3874;
              }
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v177);
            }
            v128 = v155;
            if ( v155 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v10 + 3120), v155, v127);
            if ( ((v134 - 1) & 0xFFFFFFFD) == 0 )
            {
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v127, 0);
              ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v10 + 3120), v127, &stru_14015E460);
              ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v10 + 3120), v127, 0LL);
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 3120), v127, -1);
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v10 + 3120), v127, 1);
            ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v127, 0);
          }
          v126 = *(ADAPTER_DISPLAY **)(v10 + 3120);
          ++v127;
        }
        while ( v127 < *((_DWORD *)v126 + 24) );
        v17 = v159;
      }
      if ( v166 )
      {
        ADAPTER_DISPLAY::SetSyncLockGroup(
          (__int64)v126,
          1u,
          *((_DWORD *)a5 + 60),
          *((unsigned int *)a5 + 61),
          *((_DWORD *)a5 + 62),
          *((_DWORD *)a5 + 63));
        v139 = *(_QWORD *)(v10 + 3120);
        for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v139 + 96); v139 = *(_QWORD *)(v10 + 3120) )
        {
          v124 = (unsigned int)k;
          v140 = *((_DWORD *)a5 + (unsigned int)k + 40) & 7;
          k = (unsigned int)(k + 1);
          v122 = *((_DWORD *)a5 + 4 * v140 + 56) != 0 ? v140 : 0;
          v123 = 3984 * v124;
          *(_DWORD *)(3984 * v124 + *(_QWORD *)(v139 + 128) + 3764) = v122;
        }
      }
      DxgkInvalidateQdcCache(v123, v122, v124, k);
      CVidSchSuspendResume::Resume(v169);
      if ( v17 )
        ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
      wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&v167);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v172, 0LL);
      goto LABEL_282;
    }
    while ( 1 )
    {
      v151 = 0;
      memset(v180, 0, sizeof(v180));
      v92 = 1 << v91;
      if ( ((1 << v91) & *((_DWORD *)a5 + 3)) != 0 )
      {
        v151 = 2;
      }
      else if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
      {
        v151 = 4;
      }
      else if ( (v92 & ~*((_DWORD *)a5 + 8) & *((_DWORD *)a5 + 2)) != 0 )
      {
        v151 = (*(_DWORD *)a5 & v92) != 0 ? 3 : 1;
        v44 = 0;
      }
      v93 = ADAPTER_DISPLAY::GetDisplayModeInfo(v90, v91);
      v94 = *((_DWORD *)a5 + 2) | (unsigned int)(*((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13));
      v95 = v158;
      *(_OWORD *)v180 = *(_OWORD *)v93;
      *(_OWORD *)&v180[4] = *((_OWORD *)v93 + 1);
      *(_OWORD *)&v180[8] = *((_OWORD *)v93 + 2);
      *(_OWORD *)&v180[12] = *((_OWORD *)v93 + 3);
      *(_OWORD *)&v180[16] = *((_OWORD *)v93 + 4);
      if ( ((unsigned int)v94 & v92) != 0 )
        DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
          v158,
          ((v149 - 1) & 0xFFFFFFFD) == 0,
          v91,
          (struct _DXGK_DISPLAYMODE_INFO *)v180);
      if ( (v92 & *((_DWORD *)a5 + 21)) != 0 )
        goto LABEL_220;
      if ( (v92 & v153) == 0 )
        break;
LABEL_222:
      v90 = *(ADAPTER_DISPLAY **)(v10 + 3120);
      if ( ++v91 >= *((_DWORD *)v90 + 24) )
      {
        v17 = v159;
        goto LABEL_224;
      }
    }
    if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
    {
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        *(DXGADAPTER ***)(v10 + 3120),
        v91,
        (const struct _DXGK_DISPLAYMODE_INFO *const)v180);
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*(_QWORD *)(*(_QWORD *)(v10 + 3120) + 120LL), v91, 0LL, 0, 0, 1);
      v178[0] = 11LL;
      v178[1] = 0LL;
      v179 = 0LL;
      if ( (int)DxgkStatusChangeNotify(v178) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3391;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"NT_SUCCESS(NotificationStatus)",
          3391LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v94 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
    if ( ((unsigned int)v94 & v92) == 0 )
      goto LABEL_220;
    v152 = 0;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v95, v91, &v152);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) < 0
      || MostImportantVidPnPathTargetsFromSource == -1071774919 )
    {
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v97 = v152;
        if ( v152 != -1 )
        {
          v104 = 0;
          if ( v147 )
          {
            while ( 1 )
            {
              v44 = 0;
              if ( v91 == *(_DWORD *)(v150 + 4LL * v104) )
              {
                v105 = 56LL * v104;
                if ( v152 == *(_DWORD *)((char *)Src + v105)
                  && (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) == 0xE000000
                  && (*(_DWORD *)((_BYTE *)Src + v105 + 12) & 4) != 0
                  && (v92 & *((_DWORD *)a5 + 18)) == 0 )
                {
                  break;
                }
              }
              if ( ++v104 >= v147 )
                goto LABEL_175;
            }
            *((_DWORD *)a5 + 19) |= v92;
            v44 = 1;
            goto LABEL_176;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3426;
    }
LABEL_175:
    v97 = -1;
LABEL_176:
    ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, v97);
    if ( (v92 & *((_DWORD *)a5 + 2)) != 0 )
    {
      v180[11] = 1;
      *(_QWORD *)&v180[12] = 1LL;
      if ( *(_QWORD *)(v10 + 3128) )
      {
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                       *(ADAPTER_DISPLAY **)(v10 + 3120),
                                       v91);
        v100 = DisplayedPrimaryAllocation;
        if ( DisplayedPrimaryAllocation )
        {
          if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
            v100 = 0LL;
          if ( v100 )
          {
            v101 = (void *)*((_QWORD *)v100 + 2);
            v102 = *(ADAPTER_RENDER **)(v10 + 3128);
            memset(&v176.Width, 0, 40);
            v176.hAllocation = v101;
            v103 = ADAPTER_RENDER::DdiDescribeAllocation(v102, &v176, v99);
            if ( v103 < 0 )
            {
              WdLogSingleEntry3(3LL, v100, v91, v103);
              WdLogGlobalForLineNumber = 3536;
            }
            else if ( v176.Width == v180[0]
                   && v176.Height == v180[1]
                   && v176.Format == v180[2]
                   && *(_QWORD *)&v176.RefreshRate == *(_QWORD *)&v180[14]
                   && (((unsigned __int8)~(v180[10] >> 4) ^ (unsigned __int8)~(*((_DWORD *)v100 + 1) >> 12)) & 1) == 0 )
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)&v180[11] = v176.MultisampleMethod;
              v180[13] = v176.PrivateDriverFormatAttribute;
            }
            else if ( v145 || (*((_DWORD *)v100 + 1) & 2) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3524;
            }
          }
        }
      }
    }
    v106 = v149;
    v107 = ADAPTER_DISPLAY::SetVidPnSourceActive(
             *(ADAPTER_DISPLAY **)(v10 + 3120),
             v91,
             v44,
             (const struct _DXGK_DISPLAYMODE_INFO *)v180,
             v149 == 4,
             a7 != 0);
    v108 = v107;
    if ( v107 >= 0 )
    {
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v10 + 3120), v91, 0);
      if ( (v92 & *((_DWORD *)a5 + 3)) == 0 )
      {
        v44 = 0;
        ContainingAdapter = 0LL;
        if ( DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v158, v91, &ContainingAdapter) < 0 || !ContainingAdapter )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3583;
        }
        v94 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 13));
        if ( ((unsigned int)v94 & v92) != 0 )
        {
          if ( ((v106 - 1) & 0xFFFFFFFD) == 0 )
            ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, 1u);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(DXGADAPTER ***)(v10 + 3120),
            v91,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v180);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, v180[3]);
          ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v10 + 3120), v91);
          ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v91, (v92 & *((_DWORD *)a5 + 64)) != 0);
          if ( v155 && v168 )
            ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
              *(ADAPTER_DISPLAY **)(v10 + 3120),
              v91,
              *(struct DXGADAPTER **)(*((_QWORD *)v155 + 2) + 16LL));
        }
        goto LABEL_220;
      }
      if ( ((v106 - 1) & 0xFFFFFFFD) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3570;
      }
      ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, 0);
      ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, &stru_14015E460);
      ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v10 + 3120), v91, 0LL);
      ADAPTER_DISPLAY::SetHdrEnabled(*(DXGADAPTER ***)(v10 + 3120), v91, 0);
    }
    else
    {
      WdLogSingleEntry3(2LL, v10, v91, v107);
      *((_DWORD *)a5 + v91 + 22) = v108;
      *((_DWORD *)a5 + 21) |= v92;
      WdLogGlobalForLineNumber = 3554;
    }
    v44 = 0;
LABEL_220:
    v109 = v151;
    if ( v151 )
    {
      CurrentProcess = PsGetCurrentProcess(v94);
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
      VIDPN_MGR::CacheDisplayModeChangeRequest(
        (__int64)v157,
        v91,
        (__int64)v180,
        1LL,
        *((_DWORD *)a5 + v91 + 22),
        v109,
        *(_DWORD *)(*(_QWORD *)(v10 + 3120) + 416LL),
        ProcessImageFileName);
    }
    goto LABEL_222;
  }
  WdLogSingleEntry2(2LL, v11, v12);
  WdLogGlobalForLineNumber = 2545;
LABEL_283:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v160);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v150);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&Src);
  return (unsigned int)v13;
}
