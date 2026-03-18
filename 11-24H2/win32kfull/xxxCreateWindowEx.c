/*
 * XREFs of xxxCreateWindowEx @ 0x14004B6FC
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     xxxCsDdeInitialize @ 0x14015F1B4 (xxxCsDdeInitialize.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     NeedsWindowEdge @ 0x140032008 (NeedsWindowEdge.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x140045FEC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x140046994 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1400469F0 (GetClassPtr.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140046E7C (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140048A8C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140070748 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxAdjustSize @ 0x140074BF8 (xxxAdjustSize.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     SetTiledRect @ 0x140079510 (SetTiledRect.c)
 *     xxxCreateClassSmIcon @ 0x14007ADE4 (xxxCreateClassSmIcon.c)
 *     ClassLock @ 0x14007DF9C (ClassLock.c)
 *     ClassUnlock @ 0x14007E328 (ClassUnlock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14008854C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x140088640 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ValidateNewParent @ 0x1400893F4 (ValidateNewParent.c)
 *     ValidateParentDepth @ 0x1400894E8 (ValidateParentDepth.c)
 *     IsTopLevelParent @ 0x140089594 (IsTopLevelParent.c)
 *     GetMessageWindow @ 0x14008A42C (GetMessageWindow.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     PWInsertAfter @ 0x14008C888 (PWInsertAfter.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x14008D950 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14009E59C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     DereferenceClass @ 0x1400B4660 (DereferenceClass.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B4D18 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     GetAppCompatFlags @ 0x1400C13E0 (GetAppCompatFlags.c)
 *     IsValidBand @ 0x1400F63FC (IsValidBand.c)
 *     CalcForegroundInsertAfter @ 0x1400F6C44 (CalcForegroundInsertAfter.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x14014F09C (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     CheckGrantedAccess @ 0x140174598 (CheckGrantedAccess.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x140185654 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x14018A5C8 (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     ReferenceClass @ 0x14019A370 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x14019A644 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14019BAB8 (UpdateTopLevelWindowDPITransform.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x14019D004 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxSendSizeMessage @ 0x14019DCF0 (xxxSendSizeMessage.c)
 *     RECTFromSIZERECT @ 0x14019F7D0 (RECTFromSIZERECT.c)
 *     ??1CDwmWindowNotifyBatch@@QEAA@XZ @ 0x1401A51E0 (--1CDwmWindowNotifyBatch@@QEAA@XZ.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401A6A48 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ConstrainWindowSIZERECT @ 0x1401A71F0 (ConstrainWindowSIZERECT.c)
 *     RtlInitLargeAnsiString @ 0x1401A7A6C (RtlInitLargeAnsiString.c)
 *     xxxClientLoadMenu @ 0x1401A9338 (xxxClientLoadMenu.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1401AA75C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401AEAE0 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     MapClientNeuterToClientPfn @ 0x1401B1164 (MapClientNeuterToClientPfn.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401BC7BC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BCB74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BD73C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x1401CFBA0 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     xxxLoadUserApiHook @ 0x1401D111C (xxxLoadUserApiHook.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     RtlInitUnicodeStringOrId @ 0x1401EB634 (RtlInitUnicodeStringOrId.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401F4C58 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140204128 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x140210D30 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     GetTopMostInsertAfter @ 0x14022F0DC (GetTopMostInsertAfter.c)
 *     RegisterDefaultClass @ 0x140239260 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140239490 (RegisterIconTitleClass.c)
 *     ValidateOwnerDepth @ 0x14024CA00 (ValidateOwnerDepth.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     GETCLIENTWNDINFO @ 0x14026C270 (GETCLIENTWNDINFO.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB038 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB060 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     HasMessageRootWindow @ 0x1402AB144 (HasMessageRootWindow.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B4358 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 *     Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline @ 0x1402B4754 (Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1402B6200 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F13E4 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  unsigned int v18; // edi
  struct tagWND *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // r12
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 UserSessionState; // rax
  __int64 v45; // r10
  unsigned __int16 v46; // r9
  _QWORD *ClassPtr; // rax
  __int64 v48; // r8
  int v49; // r10d
  unsigned int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // r14
  tagObjLock *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct tagWND *v56; // rbx
  struct tagTHREADINFO *v57; // rax
  __int64 v58; // rax
  int v59; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // ecx
  wchar_t *v65; // rcx
  __int64 v66; // rdx
  __int16 v67; // bx
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  LONG v72; // edx
  int v73; // r8d
  int v74; // r9d
  int v75; // r11d
  struct _HEAD *v76; // rax
  LONG v77; // eax
  LONG v78; // ecx
  int v79; // edx
  int v80; // eax
  struct tagMONITOR *v81; // rbx
  __int16 v82; // di
  _DWORD *v83; // rax
  const struct tagWND *ThreadDesktopWindow; // rdx
  int v85; // r9d
  int v86; // ecx
  unsigned __int16 v87; // r8
  __int64 v88; // rcx
  char v89; // r12
  __int64 v90; // rax
  int v91; // r13d
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // eax
  unsigned int ClientExtraBytesTotalSize; // eax
  __int64 v96; // rdi
  Scrollbar::NonClient *v97; // rcx
  Scrollbar::NonClient *v98; // rcx
  bool v99; // al
  int v100; // edx
  __int64 v101; // rax
  __int128 **v102; // rdx
  __int128 *v103; // rcx
  int v104; // ebx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int16 v125; // bx
  int v126; // ebx
  char v127; // di
  ULONG_PTR v128; // r12
  __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rcx
  char v132; // cl
  char v133; // di
  int v134; // eax
  int v135; // r9d
  int v136; // r10d
  int v137; // edx
  struct tagMONITOR *v138; // rax
  __int64 v139; // rbx
  int v140; // edx
  __int16 v141; // ax
  int v142; // eax
  __int64 MonitorRect; // rax
  __int64 v144; // rax
  int v145; // edx
  int v146; // ecx
  __int64 v147; // rcx
  int v148; // eax
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // rcx
  __int64 v152; // rcx
  struct _HEAD *v153; // rcx
  struct _HEAD *v154; // rcx
  char v155; // bl
  __int64 NonChildAncestor; // rdi
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v163; // rdx
  int v164; // ecx
  bool v165; // zf
  __int64 v166; // rcx
  unsigned int v167; // eax
  int v168; // edx
  __int64 KernelEvent; // rax
  __int64 v170; // rdx
  __int64 v171; // rbx
  unsigned int v172; // eax
  NTSTATUS v173; // eax
  ULONG v174; // eax
  __int64 v175; // rdx
  __int64 v176; // rcx
  struct tagWND *v177; // rax
  __int64 MessageWindow; // rax
  struct tagWND *v179; // r9
  __int64 v180; // rcx
  int v181; // eax
  int v182; // eax
  __int64 v183; // rax
  struct tagMONITOR *v184; // rbx
  __int64 v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 StyleWindow; // rbx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rax
  int v201; // ebx
  __int64 v202; // rcx
  __int64 v203; // rdx
  unsigned __int128 v204; // rax
  unsigned int v205; // ecx
  __int64 v206; // rcx
  __int64 v207; // rdx
  struct tagTHREADINFO ***v208; // rbx
  struct tagWND *DefaultImeWindow; // rax
  ULONG_PTR v210; // rbx
  int v211; // ecx
  __int64 v212; // rdx
  __int64 v213; // rdx
  __int64 v214; // rax
  unsigned __int64 CompositeAppFrameWindowOrSelf; // rbx
  __int64 v216; // rax
  __int64 v217; // rdx
  int v218; // ebx
  __int64 v219; // rcx
  int v220; // eax
  const struct tagWND *v221; // rax
  __int64 TopMostInsertAfter; // rax
  __int64 v223; // r9
  int v224; // edx
  int v225; // r8d
  __int64 v226; // rdx
  __int64 v227; // rcx
  int v228; // ebx
  __int64 v229; // rdi
  void *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rdx
  __int64 v233; // rcx
  void *v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  unsigned int v237; // ebx
  char v238; // cl
  __int64 v239; // rdx
  __int64 v240; // rcx
  ULONG_PTR v241; // rbx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  unsigned int v247; // ecx
  __int64 v248; // rax
  __int64 v249; // rbx
  __int64 v250; // rdx
  unsigned int v251; // [rsp+50h] [rbp-408h]
  int v252; // [rsp+54h] [rbp-404h]
  int v253; // [rsp+54h] [rbp-404h]
  char v254; // [rsp+58h] [rbp-400h]
  __int16 Atom; // [rsp+5Ch] [rbp-3FCh]
  int v256; // [rsp+60h] [rbp-3F8h]
  int v257; // [rsp+64h] [rbp-3F4h]
  _QWORD v258[2]; // [rsp+70h] [rbp-3E8h] BYREF
  int v259; // [rsp+80h] [rbp-3D8h]
  int v260; // [rsp+84h] [rbp-3D4h]
  int v261; // [rsp+88h] [rbp-3D0h]
  int v262; // [rsp+90h] [rbp-3C8h]
  int v263; // [rsp+98h] [rbp-3C0h]
  wchar_t *Str1; // [rsp+A0h] [rbp-3B8h]
  int WindowCloakStateComponentUIAware; // [rsp+A8h] [rbp-3B0h]
  int v266; // [rsp+ACh] [rbp-3ACh]
  int v267; // [rsp+B0h] [rbp-3A8h]
  int v268; // [rsp+B4h] [rbp-3A4h]
  __int64 *v269[2]; // [rsp+B8h] [rbp-3A0h] BYREF
  struct _HEAD *v270; // [rsp+C8h] [rbp-390h]
  int v271; // [rsp+D0h] [rbp-388h]
  int v272; // [rsp+D4h] [rbp-384h]
  int v273; // [rsp+D8h] [rbp-380h]
  int v274; // [rsp+DCh] [rbp-37Ch]
  __int64 v275; // [rsp+E0h] [rbp-378h]
  ULONG_PTR v276[2]; // [rsp+E8h] [rbp-370h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+F8h] [rbp-360h] BYREF
  int v278; // [rsp+108h] [rbp-350h]
  int v279; // [rsp+110h] [rbp-348h]
  __int128 *v280; // [rsp+118h] [rbp-340h]
  void *v281[2]; // [rsp+120h] [rbp-338h] BYREF
  __int64 v282; // [rsp+130h] [rbp-328h]
  __int64 v283; // [rsp+138h] [rbp-320h]
  __int128 *v284; // [rsp+140h] [rbp-318h]
  __int128 v285; // [rsp+148h] [rbp-310h] BYREF
  BOOL v286; // [rsp+158h] [rbp-300h]
  int v287; // [rsp+178h] [rbp-2E0h]
  __int128 v288; // [rsp+180h] [rbp-2D8h] BYREF
  __int64 InheritedMonitor; // [rsp+190h] [rbp-2C8h]
  _BYTE v290[16]; // [rsp+198h] [rbp-2C0h] BYREF
  __int64 v291; // [rsp+1A8h] [rbp-2B0h] BYREF
  __int64 v292; // [rsp+1B0h] [rbp-2A8h]
  __int128 v293; // [rsp+1B8h] [rbp-2A0h]
  ULONG_PTR v294[2]; // [rsp+1C8h] [rbp-290h] BYREF
  wchar_t *v295; // [rsp+1D8h] [rbp-280h]
  _QWORD v296[2]; // [rsp+1E0h] [rbp-278h] BYREF
  struct _HEAD *v297; // [rsp+1F0h] [rbp-268h]
  __int64 v298; // [rsp+1F8h] [rbp-260h]
  int v299; // [rsp+200h] [rbp-258h]
  int v300; // [rsp+204h] [rbp-254h]
  int v301; // [rsp+208h] [rbp-250h]
  int v302; // [rsp+20Ch] [rbp-24Ch]
  int v303; // [rsp+210h] [rbp-248h]
  __int64 v304; // [rsp+218h] [rbp-240h]
  wchar_t *v305; // [rsp+220h] [rbp-238h]
  unsigned int v306; // [rsp+228h] [rbp-230h]
  __int128 v307; // [rsp+230h] [rbp-228h]
  __int128 v308; // [rsp+240h] [rbp-218h] BYREF
  int v309; // [rsp+254h] [rbp-204h]
  __int128 v310; // [rsp+268h] [rbp-1F0h] BYREF
  __int64 v311; // [rsp+278h] [rbp-1E0h]
  __int128 v312; // [rsp+280h] [rbp-1D8h] BYREF
  _QWORD v313[2]; // [rsp+290h] [rbp-1C8h] BYREF
  ULONG_PTR v314[2]; // [rsp+2A0h] [rbp-1B8h] BYREF
  _QWORD v315[5]; // [rsp+2B0h] [rbp-1A8h] BYREF
  _BYTE v316[24]; // [rsp+2D8h] [rbp-180h] BYREF
  __int128 v317; // [rsp+2F0h] [rbp-168h] BYREF
  __int128 v318; // [rsp+300h] [rbp-158h] BYREF
  __int128 v319; // [rsp+310h] [rbp-148h] BYREF
  _BYTE v320[16]; // [rsp+320h] [rbp-138h] BYREF
  ULONG_PTR v321[2]; // [rsp+330h] [rbp-128h] BYREF
  __int128 v322; // [rsp+340h] [rbp-118h] BYREF
  ULONG_PTR v323[2]; // [rsp+358h] [rbp-100h] BYREF
  char v324[16]; // [rsp+368h] [rbp-F0h] BYREF
  char v325[16]; // [rsp+378h] [rbp-E0h] BYREF
  char v326[16]; // [rsp+388h] [rbp-D0h] BYREF
  char v327[16]; // [rsp+398h] [rbp-C0h] BYREF
  char v328[16]; // [rsp+3A8h] [rbp-B0h] BYREF
  _BYTE v329[40]; // [rsp+3B8h] [rbp-A0h] BYREF
  __int128 v330; // [rsp+3E0h] [rbp-78h] BYREF
  __int128 v331; // [rsp+3F0h] [rbp-68h] BYREF
  struct tagRECT v332; // [rsp+400h] [rbp-58h] BYREF

  v280 = a4;
  v295 = a2;
  v263 = a1;
  v18 = a14;
  v287 = a1;
  v251 = a1;
  v262 = a1;
  Str1 = a2;
  v284 = a4;
  v19 = a10;
  v275 = (__int64)a10;
  v281[0] = a12;
  *(_QWORD *)&v288 = a13;
  v272 = 0;
  v278 = 0;
  v271 = 0;
  v267 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v258, (__int64)a2);
  v331 = 0LL;
  v330 = 0LL;
  v268 = 5;
  v279 = 5;
  v282 = 0LL;
  memset_0(v296, 0, 0x70uLL);
  v22 = PtiCurrent(v21, v20);
  v276[0] = (ULONG_PTR)v22;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v310 = 0LL;
  v311 = 0LL;
  v273 = 0;
  v274 = *(_DWORD *)(*((_QWORD *)v22 + 58) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v23 = 0;
  v252 = 0;
  v285 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v269, a11);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v290);
  if ( (*(_DWORD *)(*((_QWORD *)v22 + 58) + 12LL) & 0x10000000) == 0 && !(unsigned int)RegisterIconTitleClass() )
    goto LABEL_30;
  if ( a1 < 0 )
  {
    v251 = a1 & 0x7FFFFFFF;
    v262 = a1 & 0x7FFFFFFF;
  }
  v24 = 800;
  if ( a1 >= 0 )
    LOWORD(v24) = 0;
  v266 = v24;
  v25 = *((_QWORD *)v22 + 62);
  *(_QWORD *)&v293 = v25;
  InheritedMonitor = v25;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v25 )
      goto LABEL_30;
  }
  v26 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*((_QWORD *)v22 + 58)) )
    {
LABEL_42:
      v31 = 5LL;
      goto LABEL_31;
    }
    v23 = 1;
    v252 = 1;
    v26 = a16;
  }
  if ( (v26 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*((_QWORD *)v22 + 58)) )
    goto LABEL_42;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_30;
    if ( a14 == 15 )
      goto LABEL_30;
    v27 = *(_QWORD *)(*((_QWORD *)v22 + 58) + 816LL);
    if ( (v27 & 0x30) == 0x10 && (v27 & 0x200) == 0 && a14 == 1 && !v23 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_30;
  }
  v28 = HIWORD(a5) & 0xC000;
  v260 = v28;
  v286 = (_WORD)v28 == 0x4000;
  if ( (_WORD)v28 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*((_QWORD *)v22 + 58), a10) )
      v19 = 0LL;
    v275 = (__int64)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( a14 )
      goto LABEL_41;
    if ( (unsigned int)IsImmersiveAppIORestricted(*((_QWORD *)v22 + 58)) )
    {
      v252 = 1;
      v18 = 15;
      goto LABEL_41;
    }
    v35 = *(_BYTE *)(v34 + 816);
    v30 = 2;
    if ( (v35 & 2) == 0 || (v251 & 8) == 0 )
    {
      v18 = 1;
      goto LABEL_41;
    }
LABEL_39:
    v18 = v30;
    goto LABEL_41;
  }
  v29 = *((_QWORD *)v19 + 5);
  v252 = *(_BYTE *)(v29 + 232) & 0x40;
  v30 = *(_DWORD *)(v29 + 236);
  if ( !a14 )
    goto LABEL_39;
  if ( a14 != v30 )
  {
LABEL_30:
    v31 = 87LL;
    goto LABEL_31;
  }
LABEL_41:
  if ( !(unsigned __int8)IsValidBandForProcess(*((_QWORD *)v22 + 58), v18, v19) )
    goto LABEL_42;
  v37 = v251;
  if ( (v251 & 0x400000) != 0 )
    goto LABEL_55;
  if ( v19 )
  {
    if ( (_WORD)v28 != 0x4000 || (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) != 0x40 )
      goto LABEL_55;
    v37 = v251 | 0x400000;
  }
  else
  {
    if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v36 = 32770LL;
      if ( (_WORD)Str1 == 0x8002 )
        goto LABEL_55;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36);
    v39 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v39 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v40 = *(_DWORD *)(v39 + 824);
    v37 = v251;
    if ( (v40 & 1) == 0 )
      goto LABEL_55;
    LODWORD(v37) = v251 | 0x400000;
  }
  v262 = v37;
  v251 = v37;
LABEL_55:
  v41 = 35651584LL;
  if ( (v37 & 0x2200000) == 0x2200000 )
    goto LABEL_30;
  if ( *((_QWORD *)v22 + 79) && !(unsigned int)CheckGrantedAccess(*((unsigned int *)v22 + 234), 2LL) )
    goto LABEL_32;
  if ( (_WORD)v28 != 0x4000 )
    goto LABEL_62;
  if ( !v19 )
  {
    v31 = 1406LL;
LABEL_31:
    UserSetLastError(v31);
LABEL_32:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v290);
LABEL_33:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v269);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v32);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v258);
    return 0LL;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    goto LABEL_30;
  while ( 1 )
  {
LABEL_62:
    if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v316);
      UserSessionState = W32GetUserSessionState(v43, v42);
      if ( (int)RtlStringCchCopyW(
                  (unsigned __int16 *)(UserSessionState + 41780),
                  0x100uLL,
                  *(const unsigned __int16 **)(a3 + 8)) < 0 )
      {
        Atom = 0;
        v274 = 1;
      }
      else
      {
        Atom = UserFindAtom(v45);
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v316);
    }
    else
    {
      v46 = a3;
      Atom = a3;
    }
    if ( v46 )
    {
      ClassPtr = (_QWORD *)GetClassPtr((_QWORD *)v46, *((_QWORD **)v22 + 58), (__int64)v281[0]);
      if ( ClassPtr )
        break;
    }
LABEL_107:
    if ( v274
      || (*(_DWORD *)(*((_QWORD *)PtiCurrent(v41, v37) + 58) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v65 = Str1)
        : (v65 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v65)) )
    {
      v31 = 1407LL;
      goto LABEL_31;
    }
    v274 = 1;
    v25 = v293;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v258, *ClassPtr);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_32;
  if ( (unsigned int)NeedsWindowEdge(a5, v251, a15 >= 0x400u) )
    v50 = v49 | 0x100;
  else
    v50 = v49 & 0xFFFFFEFF;
  v262 = v50;
  v251 = v50;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v22 + 132, 0, 0) & 1) != 0 )
  {
    v259 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 866LL);
  }
  LOBYTE(v48) = 1;
  v51 = HMAllocObject(v22, v25, v48, 416LL);
  v52 = v51;
  v283 = v51;
  if ( !v51 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v51 + 56));
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 328LL) = (unsigned int)PsGetThreadId(*(PETHREAD *)v22);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 332LL) = *(_DWORD *)(*((_QWORD *)v22 + 58) + 56LL);
  *(_QWORD *)(v52 + 328) = v52 + 320;
  *(_QWORD *)(v52 + 320) = v52 + 320;
  *(_QWORD *)(v52 + 344) = v52 + 336;
  *(_QWORD *)(v52 + 336) = v52 + 336;
  *(_QWORD *)(v52 + 360) = v52 + 352;
  *(_QWORD *)(v52 + 352) = v52 + 352;
  *(_QWORD *)(v52 + 408) = v52 + 400;
  *(_QWORD *)(v52 + 400) = v52 + 400;
  *(_DWORD *)(v52 + 396) = 5;
  *(_DWORD *)(v52 + 392) = 1;
  v53 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v52 + 144) = v53;
  if ( !v53 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v52 + 56));
    HMFreeObject(v52);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize(v53);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 464LL) + 816LL) & 0x1000000) != 0 )
    *(_DWORD *)(v52 + 384) |= 1u;
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v52 + 280) = 0LL;
  *(_DWORD *)(v52 + 180) = -1;
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 292LL) = W32GetCurrentThreadDpiHostingBehavior();
  if ( (_WORD)v260 != 0x4000 || !v19 || v19 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_95;
  v56 = 0LL;
  v57 = PtiCurrent(v55, v54);
  if ( v57 )
  {
    v58 = *((_QWORD *)v57 + 62);
    if ( v58 )
      v56 = *(struct tagWND **)(v58 + 112);
  }
  if ( v19 == v56
    || *((_QWORD *)v22 + 58) != *(_QWORD *)(*((_QWORD *)v19 + 2) + 464LL)
    || IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_95:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) = CurrentThreadDpiAwarenessContext;
    if ( (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) & 0x4000000F) == 0 )
    {
      v61 = PsGetCurrentProcessWin32Process(CurrentThreadDpiAwarenessContext);
      v62 = v61;
      if ( v61 )
        v62 = -(__int64)(*(_QWORD *)v61 != 0LL) & v61;
      if ( (*(_DWORD *)(v62 + 12) & 0x20000000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
    v59 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
    if ( (((unsigned __int8)v59 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext()) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v52, v19, 0LL);
  }
  v63 = *(_QWORD *)(v52 + 40);
  v64 = *(_DWORD *)(v63 + 288);
  if ( (v64 & 0xF) == 2 && (v64 & 0xF0) == 0x20 )
    *(_DWORD *)(v52 + 380) |= 0x180000u;
  if ( (*(_BYTE *)(v63 + 288) & 0xF) == 3 )
    *(_DWORD *)(v52 + 380) |= 0x80000u;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(v52 + 136, *(_QWORD *)v258[0]);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 24LL) = v251 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v258[0], v52) )
  {
LABEL_106:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v52 + 144));
    Win32FreePool(*(void **)(v52 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v52 + 56));
    HMFreeObject(v52);
    goto LABEL_107;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v258, *(_QWORD *)(v52 + 136));
  if ( !(unsigned int)ClassLock(*(_QWORD *)v258[0], &v310) )
  {
    DereferenceClass(*((_QWORD *)v22 + 58), v52);
    goto LABEL_106;
  }
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 224LL) = a17;
  v67 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 2LL);
  if ( v67 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v258[0], v66) + 19928) + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 208LL) = 0LL;
  }
  else
  {
    v68 = (__int64 *)*((_QWORD *)v22 + 104);
    v69 = 0LL;
    if ( v68 )
      v69 = *v68;
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 208LL) = v69;
  }
  *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = v18;
  v70 = *(_QWORD *)(v52 + 40);
  if ( *(_DWORD *)(v70 + 236) == 1 )
    v71 = 0;
  else
    v71 = IsTopLevelParent(v19);
  if ( v71 )
    *(_DWORD *)(v70 + 24) |= 8u;
  if ( v252 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xD840u, 0);
  ++*((_DWORD *)v22 + 236);
  memset_0(v296, 0, 0x70uLL);
  v306 = v251;
  v296[1] = v281[0];
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v263 >= 0 )
    {
      v305 = (wchar_t *)*((_QWORD *)Str1 + 1);
      v308 = *(_OWORD *)v295;
    }
    else
    {
      v305 = *(wchar_t **)(*(_QWORD *)v258[0] + 104LL);
      if ( ((unsigned __int64)v305 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v308);
    }
  }
  else
  {
    v305 = Str1;
  }
  if ( v284 )
  {
    v304 = *((_QWORD *)v284 + 1);
    v307 = *v280;
  }
  v303 = a5;
  v72 = a6;
  v256 = a6;
  v302 = a6;
  v73 = a7;
  v257 = a7;
  v301 = a7;
  v74 = a8;
  v253 = a8;
  v300 = a8;
  v75 = a9;
  v259 = a9;
  v299 = a9;
  if ( v19 )
    v298 = *(_QWORD *)v19;
  else
    v298 = 0LL;
  if ( (_WORD)v260 == 0x4000 )
  {
    v76 = v270;
    if ( !v270 )
      v76 = (struct _HEAD *)*v269[0];
    v297 = v76;
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 24LL) |= *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL) & 0xC4000000;
  }
  else if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v269) )
  {
    v297 = 0LL;
  }
  else
  {
    v297 = **(struct _HEAD ***)v269[0];
  }
  v296[0] = v288;
  *(_QWORD *)&v332.left = 0LL;
  if ( v72 == 0x80000000 || v72 == 0x8000 )
  {
    v77 = 0;
    v332.left = 0;
  }
  else
  {
    v77 = v72;
    v332.left = v72;
  }
  if ( v73 == 0x80000000 || (v78 = v73, v73 == 0x8000) )
    v78 = 0;
  v332.top = v78;
  if ( v74 == 0x80000000 || (v79 = v74, v74 == 0x8000) )
    v79 = 0;
  v332.right = v79 + v77;
  if ( v75 == 0x80000000 || (v80 = v75, v75 == 0x8000) )
    v80 = 0;
  v332.bottom = v78 + v80;
  InheritedMonitor = GetInheritedMonitor((struct tagWND *)v52);
  v280 = (__int128 *)InheritedMonitor;
  v81 = (struct tagMONITOR *)InheritedMonitor;
  if ( !InheritedMonitor && v19 )
    v81 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
  if ( !v81 )
    v81 = (struct tagMONITOR *)MonitorFromRect(&v332.left, 2u, 0);
  UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, v81);
  *(_WORD *)(*(_QWORD *)(v52 + 40) + 286LL) = 0;
  *(_QWORD *)(v52 + 296) = 0LL;
  v82 = v260;
  if ( (_WORD)v260 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v52, v19) )
    UpdateTopLevelWindowDPITransform(v52, v81);
  Str1 = 0LL;
  if ( v82 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*(_QWORD *)(v52 + 40) + 286LL) = *(_WORD *)(*((_QWORD *)v19 + 5) + 286LL);
      v83 = (_DWORD *)*((_QWORD *)v19 + 37);
      if ( v83 )
      {
        *(_QWORD *)(v52 + 296) = v83;
        ++*v83;
      }
    }
  }
  if ( *(_QWORD *)(v52 + 24) )
  {
    GetMessageWindow(v52);
    v317 = *(_OWORD *)LockPointer(&v324, v52 + 104);
    HMAssignmentLock(&v317, 0LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    ThreadDesktopWindow = v19;
    if ( v82 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL)) )
      ThreadDesktopWindow = (const struct tagWND *)GetThreadDesktopWindow(0LL);
    DwmWindowCreate((struct tagWND *)v52, ThreadDesktopWindow, &v332);
  }
  *(void **)(*(_QWORD *)(v52 + 40) + 32LL) = v281[0];
  *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = MapClientNeuterToClientPfn(
                                                 *(_QWORD *)v258[0],
                                                 0LL,
                                                 (unsigned __int16)v266);
  v85 = 1;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 6LL) & 1) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
    v86 = 1;
    v87 = -9724;
    v85 = 0;
  }
  else
  {
    v86 = 0;
    v87 = 516;
  }
  SetOrClrWF(v86, (struct tagWND *)v52, v87, v85);
  v88 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v88 + 30) & 0x30) != 0 && (*(_BYTE *)(v88 + 234) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1225LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v290);
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v294, (__int64)v22, v52);
  v89 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 18LL) & 4;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 84LL) )
  {
    v90 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v52 + 280) = v90;
    if ( !v90 )
    {
      v91 = 5;
      goto LABEL_185;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
LABEL_189:
    if ( v89 )
      goto LABEL_193;
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      v93 = *(_QWORD *)(v52 + 40);
      v94 = *(_DWORD *)(v93 + 200) + 7;
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || !Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v97) )
      {
        goto LABEL_193;
      }
      v99 = Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v98);
      v93 = *(_QWORD *)(v52 + 40);
      v100 = *(_DWORD *)(v93 + 200);
      v165 = !v99;
      v94 = v100 + 7;
      if ( !v165 )
      {
        *(_DWORD *)(v93 + 336) = (v94 & 0xFFFFFFF8) - v100;
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 336LL) += 48;
        goto LABEL_193;
      }
    }
    *(_DWORD *)(v93 + 200) = v94 & 0xFFFFFFF8;
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 200LL) += 48;
    goto LABEL_193;
  }
  if ( !v89 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1264LL);
    goto LABEL_189;
  }
LABEL_193:
  ClientExtraBytesTotalSize = GetClientExtraBytesTotalSize((const struct tagWND *)v52);
  if ( ClientExtraBytesTotalSize )
  {
    v96 = xxxClientAllocWindowClassExtraBytes(ClientExtraBytesTotalSize);
    if ( !v96 )
    {
      v91 = 2;
LABEL_185:
      *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = 0LL;
      SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
LABEL_466:
      v201 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0x10;
      if ( v273 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v92);
      SetOrClrWF(1, (struct tagWND *)v52, 0x480u, 1);
      SetOrClrWF(1, (struct tagWND *)v52, 0x380u, 1);
      if ( v201 )
        SetVisible(v52, 0);
      v202 = *(_QWORD *)(v52 + 104);
      if ( v202 )
      {
        if ( v201 )
          zzzLockDisplayAreaAndInvalidateDCCache(v202, 16LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) == 0x40 && !IsTopLevelWindow(v52) )
        {
          v203 = *(_QWORD *)(*(_QWORD *)(v52 + 104) + 16LL);
          if ( v276[0] != v203 )
            zzzAttachThreadInput(*(_QWORD *)(v52 + 16), v203, 0LL);
        }
        UnlinkWindow((struct tagWND *)v52);
      }
      ClassUnlock(*(struct tagCLS **)v258[0]);
      xxxFreeWindow((struct tagTHREADINFO *)v276[0], (struct tagWND *)v52, (ULONG_PTR)v294);
      if ( v91 )
      {
        v204 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v205 = v91;
        goto LABEL_534;
      }
      goto LABEL_535;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v52) && (*(_BYTE *)(_HMPheFromObject(v52) + 25) & 1) == 0 )
    {
      v101 = *(_QWORD *)(v52 + 40);
      if ( !*(_QWORD *)(v101 + 296) )
      {
        *(_QWORD *)(v101 + 296) = v96;
        v82 = v260;
        goto LABEL_204;
      }
    }
    UserSetLastError(87LL);
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = 0LL;
    SetOrClrWF(1, (struct tagWND *)v52, 0x204u, 1);
LABEL_465:
    v91 = 0;
    goto LABEL_466;
  }
LABEL_204:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v89 )
  {
    v104 = v263;
  }
  else
  {
    v102 = (__int128 **)GETCLIENTWNDINFO(v52);
    v103 = *(__int128 **)(*(_QWORD *)(v52 + 40) + 120LL);
    v284 = v103;
    *v102 = v103;
    v104 = v263;
    v105 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 19928);
    if ( v104 >= 0 )
      v106 = *(_QWORD *)(v105 + 768);
    else
      v106 = *(_QWORD *)(v105 + 576);
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 120LL) = v106;
  }
  if ( *(_QWORD *)(*(_QWORD *)v258[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v258[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v258);
  }
  SetOrClrWF(1, (struct tagWND *)v52, v266, 1);
  v108 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 6LL);
  if ( (v108 & 2) != 0 )
  {
LABEL_228:
    SetOrClrWF(1, (struct tagWND *)v52, 0x208u, 1);
    goto LABEL_229;
  }
  if ( v104 < 0 )
  {
    v110 = *(_QWORD *)(W32GetUserSessionState(v108, v107) + 19928);
    if ( Atom == *(_WORD *)(v110 + 868) )
      goto LABEL_228;
    v112 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 19928);
    if ( Atom == *(_WORD *)(v112 + 878) )
      goto LABEL_228;
    v114 = *(_QWORD *)(W32GetUserSessionState(v112, v111) + 19928);
    if ( Atom == *(_WORD *)(v114 + 882) )
      goto LABEL_228;
    v116 = *(_QWORD *)(W32GetUserSessionState(v114, v113) + 19928);
    if ( Atom == *(_WORD *)(v116 + 904) )
      goto LABEL_228;
    v118 = *(_QWORD *)(W32GetUserSessionState(v116, v115) + 19928);
    if ( Atom == *(_WORD *)(v118 + 870) )
      goto LABEL_228;
    v120 = *(_QWORD *)(W32GetUserSessionState(v118, v117) + 19928);
    if ( Atom == *(_WORD *)(v120 + 874) )
      goto LABEL_228;
    v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 19928);
    if ( Atom == *(_WORD *)(v122 + 880) )
      goto LABEL_228;
    v124 = *(_QWORD *)(W32GetUserSessionState(v122, v121) + 19928);
    if ( Atom == *(_WORD *)(v124 + 898)
      || Atom == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v124, v123) + 19928) + 872LL) )
    {
      goto LABEL_228;
    }
LABEL_229:
    v104 = v263;
  }
  if ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 6LL) & 2) != 0 || v104 < 0)
    && v82 != 0x4000
    && (*(_QWORD *)&v288 = PsGetProcessPeb(**(_QWORD **)(*(_QWORD *)(v52 + 16) + 464LL)), (_QWORD)v288) )
  {
    v125 = *(_WORD *)(v288 + 844);
    if ( v125 == -535 )
    {
      v266 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1423LL);
    }
    if ( v125 == -10600 )
    {
      v260 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1424LL);
    }
    v126 = a6;
    v127 = v251;
  }
  else
  {
    v126 = a6;
    v127 = v251;
  }
  v128 = v276[0];
  if ( (GetAppCompatFlags(v276[0]) & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0x408u, 1);
    v251 = v127 & 0x3F;
    v306 &= 0x3Fu;
  }
  SetOrClrWF(1, (struct tagWND *)v52, 0x501u, 1);
  SetOrClrWF(1, (struct tagWND *)v52, 0x502u, 1);
  SetOrClrWF(1, (struct tagWND *)v52, 0x504u, 1);
  v130 = a15;
  if ( a15 <= *(_WORD *)(v128 + 676) )
    v130 = *(_DWORD *)(v128 + 676);
  *(_DWORD *)(v52 + 256) = v130;
  if ( (GetAppCompatFlags2(39168LL, v129) & 0x10000000) != 0 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xA80u, 1);
  if ( (unsigned int)IsInsideUserApiHook() )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(v19, (struct tagWND *)v52) )
  {
    v131 = *(_QWORD *)(v128 + 824);
    if ( v131
      && ((*(_BYTE *)(_HMPheFromObject(v131) + 25) & 1) != 0
       || (unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v128 + 824))) )
    {
      v261 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1508LL);
    }
    *(_DWORD *)(v52 + 380) |= 0x10000000u;
    ++*(_DWORD *)(v128 + 952);
  }
  if ( ((*(_BYTE *)(v128 + 720) | *(_BYTE *)(**(_QWORD **)(v128 + 504) + 16LL)) & 0x40) != 0 )
  {
    v291 = (__int64)v296;
    v292 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v52, (__int64)&v291, 5) )
    {
      v91 = 6;
      goto LABEL_466;
    }
    v126 = v302;
    v256 = v302;
    v257 = v301;
    v253 = v300;
    v259 = v299;
    v92 = v292;
    v275 = v292;
  }
  else
  {
    v275 = 0LL;
  }
  v132 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0;
  v254 = v132;
  if ( v132 == 64 && !v19 )
    goto LABEL_465;
  if ( (v132 == 64) != v286 )
  {
    v270 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v269);
    v132 = v254;
  }
  v133 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0;
  if ( v133 )
  {
    if ( v126 == 0x80000000 || v126 == 0x8000 )
    {
      v126 = 0;
      v256 = 0;
      v257 = 0;
    }
    v134 = v253;
    if ( v253 == 0x80000000 || v253 == 0x8000 )
    {
      v134 = 0;
      v253 = 0;
      v259 = 0;
    }
  }
  else
  {
    v134 = v253;
  }
  *(_QWORD *)&v330 = __PAIR64__(v257, v126);
  *((_QWORD *)&v330 + 1) = __PAIR64__(v259, v134);
  if ( v132 == 64 )
  {
    v285 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v52, v19) )
    {
      *(_DWORD *)(v52 + 224) = 0;
      *(_DWORD *)(v52 + 228) = 0;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v285, v52 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v52, &v285, v52 + 224);
      v126 = v256;
    }
    if ( v19 != (struct tagWND *)GetDesktopWindow(v52) )
    {
      LODWORD(v330) = v285 + v135;
      DWORD1(v330) = DWORD1(v285) + v136;
    }
    v275 = 1LL;
  }
  if ( !v133 )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0xF04u, 1);
    v272 = 192;
    SetOrClrWF(1, (struct tagWND *)v52, 0x901u, 1);
    SetOrClrWF(1, (struct tagWND *)v52, 0x10u, 1);
    if ( (v126 == 0x80000000 || v126 == 0x8000) && DWORD1(v330) != 0x80000000 )
    {
      v137 = v268;
      if ( DWORD1(v330) != 0x8000 )
        v137 = DWORD1(v330);
      v268 = v137;
    }
    if ( !v280 && (v126 == 0x80000000 || v126 == 0x8000 || v253 == 0x80000000 || v253 == 0x8000) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v128 + 464) + 688LL) )
      {
        v138 = (struct tagMONITOR *)((__int64 (*)(void))ValidateHmonitor)();
        goto LABEL_291;
      }
      if ( v19 )
      {
        v138 = _MonitorFromWindowInternal(v19, 2u, 0);
LABEL_291:
        v139 = (__int64)v138;
      }
      else
      {
        v139 = (__int64)Str1;
      }
      if ( !v139 )
      {
        v139 = *(_QWORD *)(GetDispInfo() + 104);
        goto LABEL_298;
      }
    }
    else
    {
      v139 = (__int64)Str1;
LABEL_298:
      if ( !v139 )
      {
        v139 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v52 + 40) + 256LL));
        if ( !v139 )
        {
          if ( v280 )
            v139 = GetInheritedMonitor((struct tagWND *)v52);
          else
            v139 = 0LL;
          if ( !v139 )
            v139 = MonitorFromRect((INT *)(*(_QWORD *)(v52 + 40) + 88LL), 2u, 0);
          UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, (struct tagMONITOR *)v139);
          UpdateTopLevelWindowDPITransform(v52, v139);
        }
      }
    }
    SetTiledRect(v52, &v331, v139);
    v140 = v256;
    if ( v256 == 0x80000000 || v256 == 0x8000 )
    {
      v147 = *(_QWORD *)(v128 + 464);
      if ( (*(_DWORD *)(v147 + 800) & 4) != 0 )
      {
        v267 = 1;
        v140 = *(_DWORD *)(v147 + 784);
        LODWORD(v330) = v140;
        v148 = *(_DWORD *)(*(_QWORD *)(v128 + 464) + 788LL);
      }
      else
      {
        v140 = v331;
        LODWORD(v330) = v331;
        v148 = DWORD1(v331);
      }
      DWORD1(v330) = v148;
      v257 = v148;
      v256 = v140;
      v142 = 1;
    }
    else
    {
      v141 = *(_WORD *)(v139 + 74);
      if ( v141 )
        *(_WORD *)(v139 + 74) = v141 - 1;
      v142 = v271;
    }
    if ( DWORD2(v330) == 0x80000000 || DWORD2(v330) == 0x8000 )
    {
      v149 = *(_QWORD *)(v128 + 464);
      if ( (*(_DWORD *)(v149 + 800) & 2) != 0 )
      {
        v267 = 1;
        DWORD2(v330) = *(_DWORD *)(v149 + 792);
        HIDWORD(v330) = *(_DWORD *)(*(_QWORD *)(v128 + 464) + 796LL);
      }
      else
      {
        DWORD2(v330) = DWORD2(v331) - v140;
        HIDWORD(v330) = HIDWORD(v331) - v257;
      }
    }
    else if ( v142 )
    {
      MonitorRect = GetMonitorRect((__int64)&v325, v139);
      v293 = *(_OWORD *)MonitorRect;
      v144 = *(_QWORD *)(MonitorRect + 8);
      v145 = v330 + DWORD2(v330) - v144;
      v146 = DWORD1(v330) + HIDWORD(v330) - HIDWORD(v144);
      if ( v145 > 0 )
      {
        v256 -= v145;
        LODWORD(v330) = v256;
        if ( v256 < (int)v293 )
        {
          v256 = v293;
          LODWORD(v330) = v293;
        }
      }
      if ( v146 > 0 )
      {
        v257 -= v146;
        DWORD1(v330) = v257;
        if ( v257 < SDWORD1(v293) )
        {
          v257 = DWORD1(v293);
          DWORD1(v330) = DWORD1(v293);
        }
      }
    }
  }
  if ( v267 )
    *(_DWORD *)(*(_QWORD *)(v128 + 464) + 800LL) &= 0xFFFFFFF9;
  if ( (((*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1, (struct tagWND *)v52, 0xF04u, 1);
  *(_WORD *)(*(_QWORD *)(v52 + 40) + 30LL) |= v272;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v269)
    && v254 != 64
    && *(_QWORD *)(*(_QWORD *)v258[0] + 96LL) )
  {
    v312 = 0LL;
    v151 = v52;
    if ( *(_QWORD *)(v52 + 104) )
      v151 = *(_QWORD *)(v52 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v151, 16LL);
    RtlInitUnicodeStringOrId(&v312, *(_QWORD *)(*(_QWORD *)v258[0] + 96LL));
    xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 64LL), &v312);
    v270 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v269);
    if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v52) )
    {
      v154 = v270;
      if ( !v270 )
        v154 = (struct _HEAD *)*v269[0];
      DestroyMenu(v154);
      v270 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v269);
      goto LABEL_465;
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v269) )
      v297 = 0LL;
    else
      v297 = **(struct _HEAD ***)v269[0];
  }
  v152 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v152 + 31) & 0xC0) == 0x40 )
  {
    v153 = v270;
    if ( !v270 )
      v153 = (struct _HEAD *)*v269[0];
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 320LL) = v153;
    *(_QWORD *)(*(_QWORD *)(v52 + 40) + 152LL) = 0LL;
    *(_QWORD *)(v52 + 168) = 0LL;
  }
  else
  {
    *(_QWORD *)(v152 + 320) = 0LL;
    LockWndMenuWorker(v52, 0LL, v269);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    v155 = a16;
    if ( (a16 & 4) != 0 )
    {
      LOBYTE(v150) = 1;
      CoreWindowProp::ChangeRole(v52, 1LL, v150);
    }
    v318 = *(_OWORD *)LockPointer(&v326, v52 + 200, v52);
    HMAssignmentLock(&v318, 0LL);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      *(_QWORD *)(*(_QWORD *)(v52 + 40) + 64LL) = 0LL;
      v313[0] = v52 + 120;
      v313[1] = 0LL;
      HMAssignmentLock(v313, 0LL);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor();
      if ( !(unsigned int)ValidateOwnerDepth(v52, NonChildAncestor) )
        goto LABEL_352;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 232LL) & 0x40, (struct tagWND *)v52, 0xD840u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v319 = *(_OWORD *)LockPointer(&v327, v52 + 120, NonChildAncestor);
      HMAssignmentLock(&v319, 1LL);
      v159 = *(_QWORD *)(v52 + 120);
      if ( v159
        && ((*(_BYTE *)(*(_QWORD *)(v159 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) != 1) )
      {
        SetOrClrWF(1, (struct tagWND *)v52, 0x808u, 1);
      }
      if ( Atom != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v158, v157) + 19928) + 898LL) )
      {
        v160 = *(_QWORD *)(v52 + 120);
        if ( v160 )
        {
          v161 = *(_QWORD *)(v160 + 16);
          if ( v161 != v128 )
            zzzAttachThreadInput(v128, v161, 1LL);
        }
      }
      v155 = a16;
    }
    IsEnabledDeviceUsageNoInline = Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline();
    if ( !*(_QWORD *)(v52 + 120) )
    {
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v52) )
          goto LABEL_381;
        v163 = *(_QWORD *)(v52 + 40);
        v164 = *(_DWORD *)(v163 + 236);
        if ( (unsigned int)(v164 - 8) <= 3 || v164 == 15 )
          goto LABEL_375;
        v165 = (*(_BYTE *)(v163 + 232) & 0x40) == 0;
      }
      else
      {
        if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v52) )
          goto LABEL_381;
        v166 = *(_QWORD *)(v52 + 40);
        v167 = *(_DWORD *)(v166 + 236);
        if ( v167 <= 0xF )
        {
          v168 = 44800;
          if ( _bittest(&v168, v167) )
            goto LABEL_375;
        }
        v165 = (*(_BYTE *)(v166 + 232) & 0x40) == 0;
      }
      if ( !v165 )
LABEL_375:
        WindowCloakStateComponentUIAware = 2;
    }
LABEL_381:
    if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      v19 = (struct tagWND *)GetThreadDesktopWindow(0LL);
      Win32HM_LockIntoThread<1>(v128, v19, BugCheckParameter3);
      v273 = 1;
    }
    if ( (v155 & 2) == 0 )
      goto LABEL_390;
    if ( !*(_QWORD *)(v128 + 1584) )
    {
      SetOrClrWF(1, (struct tagWND *)v52, 0xD880u, 1);
      *(_QWORD *)(v128 + 1360) |= 0x40000uLL;
      *(_DWORD *)(*(_QWORD *)(v128 + 472) + 436LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v128 + 1576) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(v128 + 1576) = KernelEvent;
        if ( !KernelEvent )
        {
          v91 = 7;
          goto LABEL_466;
        }
      }
      v315[0] = v128 + 1584;
      v315[1] = v52;
      HMAssignmentLock(v315, 0LL);
      goto LABEL_390;
    }
LABEL_352:
    UserSetLastError(87LL);
    goto LABEL_465;
  }
  if ( !v19 )
    goto LABEL_465;
  if ( (a16 & 2) != 0 )
    goto LABEL_352;
LABEL_390:
  if ( (*(_DWORD *)(v52 + 380) & 0x1000000) != 0 )
  {
    v282 = *(_QWORD *)(v52 + 104);
    UnlinkWindow((struct tagWND *)v52);
  }
  if ( !(unsigned int)IsTopLevelParent(v19) )
  {
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 232LL) & 0x40, (struct tagWND *)v52, 0xD840u, 1);
  }
  if ( v19 && !(unsigned int)ValidateNewParent(v52, v19, 1LL) )
  {
    v91 = 9;
    goto LABEL_466;
  }
  v288 = *(_OWORD *)LockPointer(&v328, v52 + 104);
  HMAssignmentLock(&v288, 0LL);
  if ( v19 )
    v170 = (unsigned int)-__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 10);
  else
    v170 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v52, v170);
  v171 = *(_QWORD *)(v52 + 40);
  if ( (*(_DWORD *)(v171 + 288) & 0xF) == 2 )
    *(_DWORD *)(v171 + 232) = *(_DWORD *)(v171 + 232) & 0xFFFFFBFF | ((unsigned __int8)ShouldUseLogPixelsForWindowMetrics((struct tagWND *)v52) << 10);
  v172 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_DWORD *)(v52 + 384) |= 4u;
  if ( v172 )
  {
    v173 = zzzSetWindowCompositionCloak(v52, v172);
    if ( v173 < 0 )
    {
      v174 = RtlNtStatusToDosError(v173);
      UserSetLastError(v174);
      v91 = 8;
      goto LABEL_466;
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v320);
  if ( v282 )
    zzzLockDisplayAreaAndInvalidateDCCache(v282, 16LL);
  if ( v19 )
    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v320);
  v176 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v176 + 31) & 0xC0) == 0x40 && !IsTopLevelWindow(v52) )
  {
    v177 = *(struct tagWND **)(v52 + 104);
    if ( v177 )
    {
      if ( v128 != *((_QWORD *)v177 + 2) )
      {
        if ( v19 != v177 )
        {
          v261 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2218LL);
        }
        zzzAttachThreadInput(v128, *(_QWORD *)(*(_QWORD *)(v52 + 104) + 16LL), 1LL);
        MessageWindow = GetMessageWindow(v52);
        if ( v179 != (struct tagWND *)MessageWindow )
        {
          v176 = *(unsigned int *)(*((_QWORD *)v179 + 5) + 288LL);
          if ( (((unsigned __int8)v176 ^ *(_BYTE *)(*(_QWORD *)(v52 + 40) + 288LL)) & 0xF) != 0
            && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v52, v179) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(
              (struct tagWND *)v52,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 104) + 40LL) + 288LL));
          }
        }
      }
    }
  }
  if ( a3 != *(unsigned __int16 *)(W32GetUserSessionState(v176, v175) + 41392)
    && a3 != 32769
    && !*(_DWORD *)(v128 + 944) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v276[0] + 488) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize((struct tagWND *)v52);
  ConstrainWindowSIZERECT(&v330);
  if ( *(_QWORD *)(v52 + 24) )
  {
    v180 = *(_QWORD *)(v52 + 40);
    if ( (*(_BYTE *)(v180 + 31) & 0x40) == 0 && *(char *)(v180 + 24) >= 0 )
      CheckFullScreen((struct tagWND *)v52, (struct tagSIZERECT *)&v330);
  }
  v181 = DWORD2(v330);
  if ( SDWORD2(v330) < 0 )
    v181 = 0;
  DWORD2(v330) = v181;
  v182 = HIDWORD(v330);
  if ( v330 < 0 )
    v182 = 0;
  HIDWORD(v330) = v182;
  RECTFromSIZERECT(*(_QWORD *)(v52 + 40) + 88LL, &v330);
  if ( v254 == 64 )
  {
    v183 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
LABEL_438:
    v184 = (struct tagMONITOR *)v183;
  }
  else
  {
    if ( InheritedMonitor )
    {
      v183 = GetInheritedMonitor((struct tagWND *)v52);
      goto LABEL_438;
    }
    v184 = 0LL;
  }
  if ( v184
    || (v184 = (struct tagMONITOR *)MonitorFromRect((INT *)(*(_QWORD *)(v52 + 40) + 88LL), 2u, 0), v185 = 0LL, v184) )
  {
    v185 = *(_QWORD *)v184;
  }
  if ( v185 != *(_QWORD *)(*(_QWORD *)(v52 + 40) + 256LL) )
  {
    UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v52, v184);
    if ( v254 != 64 )
      UpdateTopLevelWindowDPITransform(v52, v184);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v52) )
  {
    v188 = W32GetUserSessionState(v187, v186);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v188 + 57008) + 48LL));
    if ( (int)RecreateRedirectionBitmap((struct tagWND *)v52, 0, 0, 0, 0, 0LL) < 0 )
    {
      v191 = W32GetUserSessionState(v190, v189);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v191 + 57008) + 48LL));
      v91 = 3;
      goto LABEL_466;
    }
    v192 = W32GetUserSessionState(v190, v189);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v192 + 57008) + 48LL));
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v258[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v258[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v52, 2848);
    v196 = W32GetUserSessionState(v195, v194);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v196 + 57008) + 48LL));
    if ( !CreateCacheDC(v52, StyleWindow != 0 ? 49152 : 0x8000, 0LL) )
    {
      v199 = W32GetUserSessionState(v198, v197);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v199 + 57008) + 48LL));
      v91 = 10;
      goto LABEL_466;
    }
    v200 = W32GetUserSessionState(v198, v197);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v200 + 57008) + 48LL));
  }
  if ( (v251 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v52) < 0 )
  {
    v91 = 11;
    goto LABEL_466;
  }
  if ( (v251 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v52 + 104), 2818) )
  {
    SetOrClrWF(1, (struct tagWND *)v52, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v52) < 0 )
    {
      SetOrClrWF(0, (struct tagWND *)v52, 0xB02u, 1);
      v91 = 12;
      goto LABEL_466;
    }
  }
  v302 = v256;
  v301 = v257;
  v300 = v253;
  v299 = v259;
  if ( !xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v52,
          129LL,
          0LL,
          (struct tagDRAWITEMSTRUCT *)v296,
          0,
          0,
          0LL,
          1,
          1) )
    goto LABEL_465;
  v206 = *(_QWORD *)(*(_QWORD *)(v52 + 136) + 8LL);
  if ( (*(_BYTE *)(v206 + 9) & 2) != 0 )
  {
    xxxGetSystemMenu((struct tagWND *)v52);
    v270 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v269);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v269) )
    {
      Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(v321, v269);
      xxxRemoveDeleteMenuHelper(v269, 5LL, 1024LL, 1LL);
      xxxRemoveDeleteMenuHelper(v269, 5LL, 1024LL, 1LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v321, v207);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 18LL) & 2) != 0
    && (!*((_QWORD *)&v307 + 1) || (_DWORD)v307 || *(_QWORD *)(v52 + 184)) )
  {
    v322 = 0LL;
    v304 = *(_QWORD *)(v52 + 184);
    v307 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v52 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v322);
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v206, v92) + 19928) & 4) != 0 )
  {
    v208 = (struct tagTHREADINFO ***)(v276[0] + 824);
    if ( !*(_QWORD *)(v276[0] + 824) && (*(_DWORD *)(v52 + 380) & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v52, Atom, (__int64)v281[0]);
      v281[0] = v208;
      v281[1] = DefaultImeWindow;
      HMAssignmentLock(v281, 0LL);
      if ( *v208 )
      {
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v323, v276[0], (__int64)*v208);
        xxxSendTransformableMessageTimeout(*v208, 647LL, 0x21uLL, 0LL, 0, 0, 0LL, 1, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v323);
      }
      v210 = v276[0];
      v211 = (**(_DWORD **)(v276[0] + 520) >> 6) & 1;
      v309 = v211;
      v212 = *(_QWORD *)(v276[0] + 824);
      if ( v212 && v211 )
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v314, v212);
        xxxSendTransformableMessageTimeout(
          *(struct tagTHREADINFO ***)(v210 + 824),
          647LL,
          0x19uLL,
          *(struct tagDRAWITEMSTRUCT **)(*(_QWORD *)(v210 + 480) + 40LL),
          0,
          0,
          0LL,
          1,
          1);
        **(_QWORD **)(v210 + 520) &= ~0x40uLL;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v314, v213);
      }
    }
  }
  if ( v19 && ((*(_DWORD *)(v52 + 380) & 0x1000000) == 0 || *(struct tagWND **)(v52 + 104) == v19) )
  {
    v214 = PWInsertAfter(v275);
    CompositeAppFrameWindowOrSelf = v214;
    if ( (unsigned __int64)(v214 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v214 + 104) != *(_QWORD *)(v52 + 104) )
      CompositeAppFrameWindowOrSelf = v254 == 64;
    v216 = *(_QWORD *)(v52 + 120);
    if ( v216 )
    {
      *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(v216 + 40) + 236LL);
      SetOrClrWF(
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 120) + 40LL) + 232LL) & 0x40,
        (struct tagWND *)v52,
        0xD840u,
        1);
    }
    if ( !(unsigned int)ValidateNewParent(v52, v19, 1LL) )
    {
      v218 = 9;
      goto LABEL_528;
    }
    UnlinkWindow((struct tagWND *)v52);
    v219 = *(_QWORD *)(v52 + 40);
    if ( (*(_BYTE *)(v219 + 31) & 0xC0) != 0x40 && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      if ( (*(_BYTE *)(v219 + 24) & 8) != 0 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v219, v217) + 19136) )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v52);
          if ( TopMostInsertAfter )
            CompositeAppFrameWindowOrSelf = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !CompositeAppFrameWindowOrSelf )
          goto LABEL_515;
        v220 = 0;
        if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL || CompositeAppFrameWindowOrSelf == 1 )
          v220 = 1;
        if ( !v220 && (*(_BYTE *)(*(_QWORD *)(CompositeAppFrameWindowOrSelf + 40) + 24LL) & 8) != 0 )
        {
LABEL_515:
          v221 = (const struct tagWND *)CalcForegroundInsertAfter(v52);
          CompositeAppFrameWindowOrSelf = (unsigned __int64)v221;
          if ( !*(_QWORD *)(v52 + 120) )
            CompositeAppFrameWindowOrSelf = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v221);
        }
      }
    }
    if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v218 = 13;
      goto LABEL_528;
    }
    LinkWindow((struct tagWND *)v52);
    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
  }
  v223 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v223 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
  {
    v224 = *(_DWORD *)(v223 + 96);
    v225 = *(_DWORD *)(v223 + 88);
    *(_DWORD *)(v223 + 96) = DWORD2(v285) + v285 - v225;
    *(_DWORD *)(*(_QWORD *)(v52 + 40) + 88LL) = v225 + *(_DWORD *)(*(_QWORD *)(v52 + 40) + 96LL) - v224;
  }
  v331 = *(_OWORD *)(*(_QWORD *)(v52 + 40) + 88LL);
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)v52,
    131LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v331,
    0,
    0,
    0LL,
    1,
    0);
  *(_OWORD *)(*(_QWORD *)(v52 + 40) + 104LL) = v331;
  if ( xxxSendTransformableMessageTimeout(
         (struct tagTHREADINFO **)v52,
         1LL,
         0LL,
         (struct tagDRAWITEMSTRUCT *)v296,
         0,
         0,
         0LL,
         1,
         1) == -1LL )
  {
    v218 = 0;
LABEL_528:
    if ( v273 )
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v217);
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v294) )
      xxxDestroyWindow((struct tagWND *)v52);
    ClassUnlock(*(struct tagCLS **)v258[0]);
    if ( v218 )
    {
      v204 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v205 = v218;
LABEL_534:
      TraceLoggingCreateWindowFailed(v205, *((unsigned __int64 *)&v204 + 1));
    }
LABEL_535:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>((ULONG_PTR)v294);
    goto LABEL_33;
  }
  SetOrClrWF(1, (struct tagWND *)v52, 0x780u, 1);
  xxxConsiderPreferredDpiChange((struct tagWND *)v52);
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    v228 = *(_DWORD *)(*(_QWORD *)(v52 + 40) + 28LL);
    v229 = *(_QWORD *)v52;
    v230 = (void *)ReferenceDwmApiPort(v227, v226);
    DwmAsyncChildStyleChange(v230, v229, -16, v228);
    DwmChildRectChange((struct tagWND *)v52);
    DirtyVisRgnTrackers((struct tagWND *)v52, v231);
    v234 = (void *)ReferenceDwmApiPort(v233, v232);
    DwmAsyncOwnerChange(v234);
  }
  xxxWindowEvent(0x8000u, (struct tagWND *)v52, 0, 0, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 16LL) & 0x10) == 0 )
  {
    xxxSendSizeMessage((struct tagWND *)v52);
    if ( v19 && (struct tagWND *)GetDesktopWindow(v52) != v19 )
    {
      LODWORD(v331) = v331 - v285;
      DWORD1(v331) -= DWORD1(v285);
    }
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)v52,
      3LL,
      0LL,
      (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v331 | (WORD2(v331) << 16)),
      0,
      0,
      0LL,
      1,
      0);
  }
  v237 = *(_DWORD *)(W32GetUserSessionState(v236, v235) + 67056) & 0x10000 | 1;
  v238 = *(_BYTE *)(*(_QWORD *)(v52 + 40) + 31LL);
  if ( (v238 & 0x20) != 0 )
  {
    SetMinimize(v52, 0LL);
    v239 = 7LL;
    goto LABEL_547;
  }
  if ( (v238 & 1) != 0 )
  {
    SetOrClrWF(0, (struct tagWND *)v52, 0xF01u, 1);
    v237 |= 0x10u;
    v239 = 3LL;
LABEL_547:
    xxxMinMaximize(v52, v239, v237);
  }
  CalcWindowFullScreen((struct tagWND *)v52);
  v240 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v240 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v240 + 24) & 4) != 0 )
  {
    v241 = v276[0];
  }
  else
  {
    v241 = v276[0];
    if ( *(_QWORD *)(v52 + 104) )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v276, v276[0], v52 + 104);
      xxxSendTransformableMessageTimeout(
        *(struct tagTHREADINFO ***)(v52 + 104),
        528LL,
        (*(unsigned __int16 *)(*(_QWORD *)(v52 + 40) + 320LL) << 16) | 1,
        *(struct tagDRAWITEMSTRUCT **)v52,
        0,
        0,
        0LL,
        1,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v276);
    }
  }
  xxxInheritWindowMonitor((struct tagWND *)v52);
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v329, (struct tagWND *)v52);
  if ( (a5 & 0x10000000) != 0 )
  {
    v244 = W32GetUserSessionState(v243, v242);
    xxxShowWindowEx(
      v52,
      v268 | *(_DWORD *)(v244 + 67056) & 0x10000u,
      v268 & 0x10000 | *(_DWORD *)(v244 + 67056) & 0x10000u);
  }
  CDwmWindowNotifyBatch::~CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v329);
  v246 = *(_QWORD *)(v52 + 40);
  if ( (*(_BYTE *)(v246 + 31) & 0xC0) == 0 || (*(_BYTE *)(v246 + 26) & 4) != 0 )
  {
    v247 = *(_DWORD *)(*(_QWORD *)(v241 + 464) + 684LL);
    if ( v247 )
    {
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v52, 50LL, v247, 0LL, 0, 0, 0LL, 1, 1);
      *(_DWORD *)(*(_QWORD *)(v241 + 464) + 684LL) = 0;
    }
  }
  if ( v273 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v245);
  ClassUnlock(*(struct tagCLS **)v258[0]);
  v248 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v294);
  v249 = v248;
  if ( !v248 || (*(_BYTE *)(_HMPheFromObject(v248) + 25) & 1) != 0 )
    v249 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>((ULONG_PTR)v294);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v269);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v250);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v258);
  return v249;
}
