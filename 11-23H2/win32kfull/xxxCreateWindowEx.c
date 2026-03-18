/*
 * XREFs of xxxCreateWindowEx @ 0x1C0051ED0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C002BE34 (xxxCreateWindowStation.c)
 *     NtUserCreateWindowEx @ 0x1C006D320 (NtUserCreateWindowEx.c)
 *     xxxCsDdeInitialize @ 0x1C008AA7C (xxxCsDdeInitialize.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x1C0220DA4 (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C000F68C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     UserGetLastError @ 0x1C00164E8 (UserGetLastError.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     zzzAttachThreadInput @ 0x1C0038BD8 (zzzAttachThreadInput.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C004533C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C004DDBC (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     SetMinimize @ 0x1C005F990 (SetMinimize.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0070880 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C007622C (xxxClientAllocWindowClassExtraBytes.c)
 *     RECTFromSIZERECT @ 0x1C0078D8C (RECTFromSIZERECT.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0082950 (GetAppCompatFlags.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00850B0 (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     IsValidBand @ 0x1C0086484 (IsValidBand.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C008CDD8 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     DereferenceClass @ 0x1C0097DA0 (DereferenceClass.c)
 *     RtlInitLargeAnsiString @ 0x1C009EFA4 (RtlInitLargeAnsiString.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00A43F4 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ValidateOwnerDepth @ 0x1C00A537C (ValidateOwnerDepth.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00A70B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     RegisterIconTitleClass @ 0x1C00A711C (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00A9B8C (RegisterDefaultClass.c)
 *     _InnerGetClassPtr @ 0x1C00AA33C (_InnerGetClassPtr.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00AAA84 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     CalcWindowFullScreen @ 0x1C00ABAD4 (CalcWindowFullScreen.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     IsTopLevelParent @ 0x1C00AD370 (IsTopLevelParent.c)
 *     ValidateNewParent @ 0x1C00AD3C4 (ValidateNewParent.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     PWInsertAfter @ 0x1C00AF788 (PWInsertAfter.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00B13F4 (UpdateTopLevelWindowDPITransform.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00B5154 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00B5F60 (LinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     xxxSendSizeMessage @ 0x1C00D85D4 (xxxSendSizeMessage.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     xxxCreateClassSmIcon @ 0x1C00DE29C (xxxCreateClassSmIcon.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00DFB00 (RtlInitUnicodeStringOrId.c)
 *     ReferenceClass @ 0x1C00E05B0 (ReferenceClass.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00E3E3C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C00E5D0C (MNLookUpItem.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     SetTiledRect @ 0x1C00EA538 (SetTiledRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00F4CA8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     UnlinkWindow @ 0x1C010C350 (UnlinkWindow.c)
 *     GetInheritedMonitor @ 0x1C010F5F0 (GetInheritedMonitor.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C011E440 (GetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C012AEB0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01389E0 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ClrWF @ 0x1C0138A1C (ClrWF.c)
 *     ConstrainWindowSIZERECT @ 0x1C0138A7C (ConstrainWindowSIZERECT.c)
 *     SetWF @ 0x1C0138AFC (SetWF.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C013A090 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A370 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A390 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ClassUnlock @ 0x1C013A3C8 (ClassUnlock.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C013B75C (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSendTransformableMessage @ 0x1C013C0E8 (xxxSendTransformableMessage.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage @ 0x1C013C2F8 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013C34C (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage.c)
 *     xxxAdjustSize @ 0x1C013C3A0 (xxxAdjustSize.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C013C8D8 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     xxxDeleteMenu @ 0x1C013D338 (xxxDeleteMenu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$RedirectedFieldbottom@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A54D8 (--4-$RedirectedFieldbottom@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldleft@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A550C (--4-$RedirectedFieldleft@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldright@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A5524 (--4-$RedirectedFieldright@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     ??4?$RedirectedFieldtop@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z @ 0x1C01A553C (--4-$RedirectedFieldtop@J@RedirectedRecttagWNDrcClient@tagWND@@QEAAAEBJAEBJ@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01A5B3C (GetTopMostInsertAfter.c)
 *     HasMessageRootWindow @ 0x1C01F2458 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C0201114 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F054 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C021F838 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     _W32ExceptionHandler @ 0x1C024AEB4 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int32 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v19; // r12d
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  PERESOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagPROCESSINFO **v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // r13
  char v39; // al
  int v40; // ecx
  int v41; // r14d
  int v42; // eax
  struct tagWND *v43; // r8
  struct tagWND *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // ecx
  struct tagPROCESSINFO *v51; // rdi
  BOOL v52; // eax
  struct tagWND *v53; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v56; // eax
  struct tagWND *v57; // rax
  unsigned int v58; // r9d
  struct tagWND *v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  _WORD *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  _WORD *v69; // rax
  int v70; // r11d
  __int64 v71; // r9
  __int16 v72; // r10
  unsigned __int16 Atom; // di
  __int64 v74; // rax
  struct tagPROCESSINFO *v75; // rsi
  unsigned __int64 *ClassPtr; // r9
  unsigned __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rbx
  unsigned __int64 v80; // rbx
  int v81; // edx
  int v82; // eax
  unsigned int v83; // ecx
  unsigned int v84; // ecx
  __int64 v85; // rax
  ULONG_PTR v86; // rsi
  tagObjLock *v87; // rax
  ULONG_PTR v88; // r13
  int CurrentThreadDpiHostingBehavior; // eax
  __int64 v90; // rcx
  struct tagWND *v91; // rbx
  struct tagTHREADINFO *v92; // rax
  __int64 v93; // rax
  struct tagWND *v94; // rbx
  __int64 v95; // rcx
  int v96; // ebx
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rdx
  wchar_t *v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rbx
  int v103; // edx
  int v104; // eax
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v109; // rdx
  __int64 v110; // r9
  __int64 *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r8
  struct tagWND *v114; // r14
  __int16 v115; // bx
  _QWORD *v116; // rax
  __int32 v117; // eax
  int v118; // ecx
  int v119; // edx
  int v120; // eax
  __int64 *InheritedMonitor; // r9
  __int64 v122; // rcx
  _DWORD *v123; // rax
  _DWORD *v124; // rax
  __int64 v125; // rdx
  _QWORD *v126; // r12
  __int64 v127; // rdx
  struct tagWND *v128; // rdi
  struct tagTHREADINFO *v129; // rax
  __int64 v130; // rax
  __int64 Prop; // rbx
  int v132; // eax
  __int64 v133; // r8
  __int64 v134; // rcx
  __int64 v135; // rdx
  int v137; // ecx
  unsigned int v138; // ebx
  struct tagTHREADINFO *v139; // rax
  struct _KPROCESS *v140; // rbx
  __int64 v141; // rdx
  int v142; // ebx
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rax
  int v147; // r12d
  int v148; // r13d
  __int64 v149; // rbx
  __int64 v150; // r14
  void *v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rax
  int v157; // r13d
  int v158; // r12d
  int v159; // ebx
  _DWORD *v160; // rax
  int v161; // edx
  int v162; // r8d
  int v163; // r12d
  int v164; // r9d
  int v165; // eax
  int v166; // r13d
  int v167; // edi
  int v168; // r14d
  int v169; // ecx
  __int64 v170; // rbx
  __int64 v171; // rdx
  __int64 v172; // rcx
  void *v173; // rax
  int IsEnabledDeviceUsage; // eax
  __int64 v175; // rdx
  __int64 v176; // r8
  _BOOL8 v177; // rcx
  __int64 v178; // rax
  char v179; // bl
  __int64 v180; // rax
  __int64 v181; // rax
  struct tagWND *v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  SIZE_T v185; // rcx
  __int64 v186; // rdi
  int v187; // ecx
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // rdx
  int v192; // ebx
  int v193; // edi
  int v194; // r14d
  char v195; // dl
  int v196; // edx
  int v197; // r8d
  int v198; // r12d
  int v199; // r9d
  int v200; // ecx
  int v201; // r13d
  int v202; // edi
  int v203; // r14d
  int v204; // eax
  __int64 v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rcx
  void *v208; // rax
  int AppCompatFlags; // eax
  char v210; // bl
  int v211; // ebx
  int v212; // edi
  int v213; // r14d
  int v214; // edx
  int v215; // r8d
  int v216; // r12d
  int v217; // r9d
  int v218; // ecx
  int v219; // r13d
  int v220; // edi
  int v221; // r14d
  int v222; // eax
  __int64 v223; // rbx
  __int64 v224; // rdx
  __int64 v225; // rcx
  void *v226; // rax
  int v227; // ebx
  int v228; // r12d
  int v229; // edi
  int v230; // edx
  int v231; // r8d
  int v232; // r12d
  int v233; // r9d
  int v234; // ecx
  int v235; // r13d
  int v236; // edi
  int v237; // r14d
  int v238; // eax
  __int64 v239; // rbx
  __int64 v240; // rdx
  __int64 v241; // rcx
  void *v242; // rax
  int v243; // ebx
  int v244; // r12d
  int v245; // edi
  int v246; // edx
  int v247; // r8d
  int v248; // r12d
  int v249; // r9d
  int v250; // ecx
  int v251; // r13d
  int v252; // edi
  int v253; // r14d
  int v254; // eax
  __int64 v255; // rbx
  __int64 v256; // rdx
  __int64 v257; // rcx
  void *v258; // rax
  __int64 v259; // r12
  int v260; // eax
  __int64 v261; // rbx
  __int64 *v262; // rax
  __int64 v263; // rdx
  __int64 v264; // r8
  int v265; // eax
  __int64 CurrentProcess; // rax
  __int64 v267; // rcx
  struct tagWND *v268; // r14
  __int64 v269; // rcx
  int v270; // r12d
  char v271; // di
  __int64 v272; // rdx
  int v273; // r9d
  __int64 v274; // rcx
  int v275; // r12d
  int v276; // r13d
  int v277; // ebx
  _DWORD *v278; // rax
  int v279; // edx
  int v280; // r8d
  int v281; // r13d
  int v282; // r9d
  int v283; // ecx
  int v284; // r12d
  int v285; // edi
  int v286; // r14d
  int v287; // eax
  __int64 v288; // rbx
  __int64 v289; // rdx
  __int64 v290; // rcx
  void *v291; // rax
  __int64 v292; // rcx
  int v293; // r13d
  int v294; // r12d
  int v295; // ebx
  _DWORD *v296; // rax
  int v297; // edx
  int v298; // r8d
  int v299; // r12d
  int v300; // r9d
  int v301; // ecx
  int v302; // r13d
  int v303; // edi
  int v304; // r14d
  int v305; // eax
  __int64 v306; // rbx
  __int64 v307; // rdx
  __int64 v308; // rcx
  void *v309; // rax
  __int64 v310; // rax
  int v311; // r13d
  int v312; // r12d
  int v313; // ebx
  _DWORD *v314; // rax
  int v315; // edx
  int v316; // r8d
  int v317; // r12d
  int v318; // r9d
  int v319; // ecx
  int v320; // r13d
  int v321; // edi
  int v322; // r14d
  int v323; // eax
  __int64 v324; // rbx
  __int64 v325; // rdx
  __int64 v326; // rcx
  void *v327; // rax
  int v328; // r12d
  int v329; // ecx
  BOOL v330; // edi
  __int64 v331; // rcx
  struct tagMONITOR *v332; // rbx
  __int64 v333; // rcx
  _DWORD *v334; // rax
  _DWORD *v335; // rcx
  _DWORD *v336; // rax
  __int16 v337; // ax
  struct tagPROCESSINFO **v338; // rdx
  int v339; // eax
  int v340; // edi
  unsigned __int64 v341; // xmm0_8
  int v342; // edx
  int v343; // ecx
  struct tagPROCESSINFO *v344; // rcx
  int v345; // eax
  struct tagPROCESSINFO *v346; // rcx
  int v347; // eax
  __int64 v348; // rcx
  char v349; // dl
  int v350; // r13d
  int v351; // r12d
  int v352; // ebx
  _DWORD *v353; // rax
  int v354; // edx
  int v355; // r8d
  int v356; // r12d
  int v357; // r9d
  int v358; // ecx
  int v359; // r13d
  int v360; // edi
  int v361; // r14d
  int v362; // eax
  __int64 v363; // rbx
  __int64 v364; // rdx
  __int64 v365; // rcx
  void *v366; // rax
  __int64 v367; // rcx
  __int64 v368; // rax
  _QWORD *v369; // rbx
  __int64 v370; // rax
  _QWORD *v371; // rcx
  _QWORD *v372; // rdx
  struct tagWND *v373; // rdi
  _DWORD *v374; // r12
  __int64 v375; // rdx
  __int64 v376; // r8
  __int64 v377; // rax
  int v378; // eax
  struct tagWND *NonChildAncestor; // rdi
  __int64 *v380; // rbx
  __int64 v381; // rdx
  __int64 v382; // rdx
  int v383; // edi
  unsigned int v384; // eax
  int v385; // edx
  struct tagTHREADINFO *v386; // rax
  __int64 v387; // rax
  __int64 v388; // rbx
  _QWORD *v389; // rbx
  __int64 v390; // rcx
  __int64 KernelEvent; // rax
  __int64 v392; // rax
  int v393; // eax
  __int64 v394; // rbx
  __int64 v395; // r11
  _QWORD *v396; // rax
  struct tagWND *v397; // r10
  __int64 v398; // r8
  __int64 v399; // r9
  __int64 v400; // rax
  int v401; // eax
  struct tagWND *v403; // rax
  __int64 v404; // rax
  int v405; // eax
  __int64 v406; // rdx
  __int64 v407; // r8
  __int64 v408; // r9
  unsigned int v409; // edi
  __int64 v410; // rcx
  _QWORD *v411; // rbx
  char v412; // r14
  _QWORD *v413; // rax
  __int64 v414; // r11
  int v415; // ecx
  ULONG_PTR v416; // rax
  int v417; // ecx
  __int64 v418; // r10
  int v419; // ecx
  struct tagWND *v420; // rbx
  unsigned int v421; // eax
  NTSTATUS v422; // eax
  ULONG v423; // eax
  __int64 v424; // rdx
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // r9
  PERESOURCE *v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rcx
  __int64 v431; // r8
  __int64 v432; // rax
  __int64 v433; // rdx
  __int64 v434; // rcx
  __int64 v435; // r8
  __int64 v436; // rax
  struct tagWND *v437; // rax
  struct tagWND *v438; // rax
  __int64 v439; // rcx
  struct tagWND *v440; // rdx
  bool v441; // zf
  int v442; // eax
  int v443; // eax
  __int64 v444; // rax
  __int64 *v445; // rbx
  __int64 v446; // rcx
  _DWORD *v447; // rax
  _DWORD *v448; // rcx
  _DWORD *v449; // rax
  int v450; // eax
  __int64 v451; // rcx
  __int64 StyleWindow; // rbx
  __int64 v453; // rdx
  __int64 CacheDC; // rax
  __int64 v455; // rcx
  __int64 *v456; // r15
  int v457; // ebx
  __int64 v458; // r9
  __int64 v459; // rdx
  __int64 SystemMenu; // rax
  __int64 v461; // rax
  __int64 v462; // rdx
  __int64 v463; // rcx
  __int64 v464; // r8
  _QWORD *v465; // rbx
  struct tagWND *DefaultImeWindow; // rax
  __int64 v467; // rcx
  __int64 v468; // rdx
  __int64 v469; // rcx
  __int64 v470; // r8
  int v471; // r8d
  __int64 v472; // rcx
  __int64 v473; // rdx
  __int64 v474; // rcx
  __int64 v475; // r8
  struct tagWND *v476; // rcx
  __int64 v477; // rax
  unsigned __int64 v478; // rbx
  __int64 v479; // rax
  struct tagWND *v480; // rdx
  __int64 v481; // rcx
  __int64 v482; // r8
  unsigned int v483; // ebx
  int v484; // eax
  __int64 TopMostInsertAfter; // rax
  __int64 v486; // r9
  int v487; // edx
  int v488; // r8d
  int v489; // r12d
  __int64 v490; // rdx
  __int64 v491; // rcx
  int v492; // ebx
  __int64 v493; // rdi
  void *v494; // rax
  __int64 v495; // rdx
  __int64 v496; // rcx
  void *v497; // rax
  __int64 DesktopWindow; // rax
  __int64 v499; // rdx
  char v500; // cl
  __int64 v501; // rdx
  __int64 v502; // rcx
  __int64 v503; // rdx
  __int64 v504; // rcx
  __int64 v505; // r8
  __int64 v506; // rdx
  __int64 v507; // r8
  __int64 v508; // rcx
  struct tagPROCESSINFO **v509; // rbx
  __int64 v510; // rdx
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // rax
  __int64 v514; // rbx
  char v515[8]; // [rsp+50h] [rbp-518h] BYREF
  int v516; // [rsp+58h] [rbp-510h]
  __int64 v517; // [rsp+60h] [rbp-508h]
  unsigned int v518; // [rsp+68h] [rbp-500h]
  struct tagWND *v519; // [rsp+70h] [rbp-4F8h]
  int v520; // [rsp+78h] [rbp-4F0h]
  __int16 v521; // [rsp+7Ch] [rbp-4ECh]
  unsigned int v522; // [rsp+80h] [rbp-4E8h]
  unsigned __int16 v523; // [rsp+84h] [rbp-4E4h]
  _QWORD v524[2]; // [rsp+88h] [rbp-4E0h] BYREF
  char v525; // [rsp+98h] [rbp-4D0h]
  __int32 v526; // [rsp+9Ch] [rbp-4CCh]
  int v527; // [rsp+A0h] [rbp-4C8h]
  int v528; // [rsp+A4h] [rbp-4C4h]
  unsigned __int64 v529; // [rsp+A8h] [rbp-4C0h]
  struct tagPROCESSINFO **v530; // [rsp+B0h] [rbp-4B8h]
  int v531; // [rsp+B8h] [rbp-4B0h]
  __int128 v532; // [rsp+C0h] [rbp-4A8h] BYREF
  _QWORD v533[2]; // [rsp+D0h] [rbp-498h] BYREF
  _QWORD *v534; // [rsp+E0h] [rbp-488h]
  int v535; // [rsp+E8h] [rbp-480h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+ECh] [rbp-47Ch]
  int v537; // [rsp+F0h] [rbp-478h]
  int v538; // [rsp+F4h] [rbp-474h]
  BOOL v539; // [rsp+F8h] [rbp-470h]
  int v540; // [rsp+FCh] [rbp-46Ch]
  int v541; // [rsp+100h] [rbp-468h]
  int v542; // [rsp+104h] [rbp-464h]
  int v543; // [rsp+108h] [rbp-460h]
  __int64 v544; // [rsp+110h] [rbp-458h]
  __int64 v545; // [rsp+118h] [rbp-450h] BYREF
  __int64 v546; // [rsp+120h] [rbp-448h]
  __int128 v547; // [rsp+128h] [rbp-440h] BYREF
  void *v548[3]; // [rsp+140h] [rbp-428h] BYREF
  int v549; // [rsp+158h] [rbp-410h]
  BOOL v550; // [rsp+15Ch] [rbp-40Ch]
  int v551; // [rsp+160h] [rbp-408h]
  int v552; // [rsp+164h] [rbp-404h]
  __int64 v553; // [rsp+168h] [rbp-400h]
  struct tagWND *v554; // [rsp+170h] [rbp-3F8h]
  wchar_t *Str1; // [rsp+178h] [rbp-3F0h]
  __int64 ProcessSequenceNumber; // [rsp+180h] [rbp-3E8h]
  __int64 v557; // [rsp+188h] [rbp-3E0h]
  HANDLE ProcessId; // [rsp+190h] [rbp-3D8h]
  __int64 v559; // [rsp+198h] [rbp-3D0h]
  __int128 v560; // [rsp+1A0h] [rbp-3C8h] BYREF
  __int128 v561; // [rsp+1B0h] [rbp-3B8h]
  __int128 v562; // [rsp+1C0h] [rbp-3A8h]
  __int128 v563; // [rsp+1D0h] [rbp-398h]
  __int128 v564; // [rsp+1E0h] [rbp-388h]
  __int128 v565; // [rsp+1F0h] [rbp-378h]
  __int128 v566; // [rsp+200h] [rbp-368h] BYREF
  __int64 v567; // [rsp+210h] [rbp-358h] BYREF
  __int64 v568; // [rsp+218h] [rbp-350h]
  __int64 v569; // [rsp+220h] [rbp-348h]
  _QWORD *v570; // [rsp+228h] [rbp-340h]
  __int64 *v571; // [rsp+230h] [rbp-338h]
  __int64 v572; // [rsp+238h] [rbp-330h]
  __int64 v573; // [rsp+240h] [rbp-328h]
  _WORD *v574; // [rsp+248h] [rbp-320h]
  __int128 v575; // [rsp+250h] [rbp-318h] BYREF
  struct tagCLS *(__fastcall *v576)(struct tagCLS *); // [rsp+260h] [rbp-308h]
  __m128i v577; // [rsp+268h] [rbp-300h]
  _WORD *v578; // [rsp+278h] [rbp-2F0h]
  __int64 v579; // [rsp+280h] [rbp-2E8h]
  __int64 v580; // [rsp+288h] [rbp-2E0h]
  ULONG_PTR v581; // [rsp+290h] [rbp-2D8h]
  __int128 v582; // [rsp+298h] [rbp-2D0h] BYREF
  __int64 v583; // [rsp+2A8h] [rbp-2C0h]
  int v584; // [rsp+2B0h] [rbp-2B8h]
  __int128 v585; // [rsp+2B8h] [rbp-2B0h] BYREF
  __int64 v586; // [rsp+2C8h] [rbp-2A0h]
  __int128 v587; // [rsp+2D0h] [rbp-298h] BYREF
  __int64 v588; // [rsp+2E0h] [rbp-288h]
  _QWORD v589[2]; // [rsp+2F0h] [rbp-278h] BYREF
  _QWORD v590[2]; // [rsp+300h] [rbp-268h] BYREF
  _QWORD v591[2]; // [rsp+310h] [rbp-258h] BYREF
  _QWORD v592[2]; // [rsp+320h] [rbp-248h] BYREF
  _QWORD v593[2]; // [rsp+330h] [rbp-238h] BYREF
  _QWORD v594[2]; // [rsp+340h] [rbp-228h] BYREF
  _QWORD v595[2]; // [rsp+350h] [rbp-218h] BYREF
  __int128 v596; // [rsp+360h] [rbp-208h] BYREF
  __int128 v597; // [rsp+370h] [rbp-1F8h] BYREF
  __int128 v598; // [rsp+388h] [rbp-1E0h] BYREF
  __int128 v599; // [rsp+398h] [rbp-1D0h] BYREF
  __int64 v600; // [rsp+3A8h] [rbp-1C0h]
  __int128 v601; // [rsp+3B0h] [rbp-1B8h] BYREF
  __int64 v602; // [rsp+3C0h] [rbp-1A8h]
  __int128 v603; // [rsp+3C8h] [rbp-1A0h] BYREF
  __int64 v604; // [rsp+3D8h] [rbp-190h]
  char v605[16]; // [rsp+3E0h] [rbp-188h] BYREF
  char v606[16]; // [rsp+3F0h] [rbp-178h] BYREF
  __int128 v607; // [rsp+400h] [rbp-168h]
  int v608; // [rsp+410h] [rbp-158h] BYREF
  __int16 v609; // [rsp+414h] [rbp-154h]
  __int128 v610; // [rsp+416h] [rbp-152h]
  __int128 v611; // [rsp+426h] [rbp-142h]
  __int16 v612; // [rsp+436h] [rbp-132h]
  int v613; // [rsp+438h] [rbp-130h]
  __int64 v614; // [rsp+43Ch] [rbp-12Ch]
  __int64 v615; // [rsp+444h] [rbp-124h]
  int v616; // [rsp+44Ch] [rbp-11Ch]
  int v617; // [rsp+450h] [rbp-118h]
  __int128 v618; // [rsp+454h] [rbp-114h]
  int v619; // [rsp+464h] [rbp-104h]
  __m256i v620; // [rsp+468h] [rbp-100h]
  __m256i v621; // [rsp+488h] [rbp-E0h]
  __int64 v622; // [rsp+4A8h] [rbp-C0h]
  int v623; // [rsp+4B0h] [rbp-B8h]
  int v624; // [rsp+4B4h] [rbp-B4h]
  __int64 v625; // [rsp+4B8h] [rbp-B0h]
  __int128 v626; // [rsp+4C0h] [rbp-A8h] BYREF
  _OWORD v627[3]; // [rsp+4D0h] [rbp-98h] BYREF
  __m256i v628; // [rsp+500h] [rbp-68h] BYREF

  v570 = a4;
  v546 = a3;
  Str1 = (wchar_t *)a2;
  v527 = a1;
  LODWORD(v544) = a1;
  v19 = a14;
  v549 = a1;
  v528 = a1;
  ProcessSequenceNumber = a2;
  ProcessId = a4;
  v519 = a10;
  v567 = (__int64)a10;
  v548[0] = a12;
  v559 = a13;
  v541 = 0;
  v539 = 0;
  v543 = 0;
  v535 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v524);
  v626 = 0LL;
  v532 = 0LL;
  v537 = 5;
  v526 = 5;
  v553 = 0LL;
  v560 = 0LL;
  v561 = 0LL;
  v562 = 0LL;
  v563 = 0LL;
  v564 = 0LL;
  v565 = 0LL;
  v566 = 0LL;
  v517 = gptiCurrent;
  v545 = gptiCurrent;
  v582 = 0LL;
  v583 = 0LL;
  v585 = 0LL;
  v586 = 0LL;
  v587 = 0LL;
  v588 = 0LL;
  v575 = 0LL;
  v576 = 0LL;
  v538 = 0;
  v530 = (struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  v557 = gptiCurrent + 424LL;
  v540 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v547 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v533, a11);
  v522 = 0;
  if ( !*(_QWORD *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v22, v21, v23, v24)
    || (v29 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v26, v25, v27, v28),
        !ExIsResourceAcquiredSharedLite(*v29)) )
  {
    v531 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      goto LABEL_960;
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v31, v30, v32);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v515[0] = 1;
  v36 = v530;
  if ( (*((_DWORD *)*v530 + 3) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_38;
    v36 = v530;
  }
  v37 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v37 = a1;
  v38 = *(_QWORD *)(v517 + 456);
  v572 = v38;
  v569 = v38;
  if ( a10 && *((_QWORD *)a10 + 3) != v38 )
    goto LABEL_38;
  v39 = a16;
  v531 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*v36, v36) )
    {
LABEL_62:
      v48 = 5LL;
      goto LABEL_63;
    }
    v20 = 1;
    v39 = v531;
  }
  v551 = v39 & 2;
  v552 = v551;
  if ( (v39 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*v530) )
    goto LABEL_62;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14, v36, v34, v35)
      || a14 == 15
      || (v40 = *((_DWORD *)*v530 + 206), (v40 & 0x30) == 0x10)
      && (v40 & 0x200) == 0
      && a14 == 1
      && !v20
      && !(unsigned int)HasMessageRootWindow(a10) )
    {
LABEL_38:
      v48 = 87LL;
LABEL_63:
      UserSetLastError(v48);
      goto LABEL_64;
    }
  }
  v41 = HIWORD(a5) & 0xC000;
  v520 = v41;
  v521 = HIWORD(a5) & 0xC000;
  v550 = (_WORD)v41 == 0x4000;
  if ( (_WORD)v41 == 0x4000 )
  {
    v43 = v519;
  }
  else
  {
    v42 = ShouldSetNoOwner(*v530, v519);
    v43 = v519;
    if ( v42 )
      v43 = 0LL;
    v519 = v43;
    v567 = (__int64)v43;
  }
  if ( !v43 )
    goto LABEL_39;
  v44 = 0LL;
  v45 = *((_QWORD *)v43 + 3);
  if ( v45 )
  {
    v46 = *(_QWORD *)(v45 + 8);
    if ( v46 )
      v44 = *(struct tagWND **)(v46 + 24);
  }
  if ( v43 == v44 )
  {
LABEL_39:
    if ( !a14 )
    {
      v49 = *((_DWORD *)*v530 + 206);
      if ( (v49 & 0x30) == 0x10 && (v49 & 0x200) == 0 )
      {
        v20 = 1;
        v19 = 15;
      }
      else if ( (v49 & 2) != 0 && (v37 & 8) != 0 )
      {
        v19 = 2;
      }
      else
      {
        v19 = 1;
      }
    }
    goto LABEL_50;
  }
  v47 = *((_QWORD *)v43 + 5);
  v20 = *(_BYTE *)(v47 + 232) & 0x40;
  if ( a14 )
  {
    if ( a14 == *(_DWORD *)(v47 + 236) )
      goto LABEL_50;
    goto LABEL_38;
  }
  v19 = *(_DWORD *)(v47 + 236);
LABEL_50:
  v542 = v20;
  v51 = *v530;
  if ( (unsigned int)IsImmersiveBroker(*v530) )
    goto LABEL_51;
  if ( (*((_BYTE *)v51 + 824) & 0x30) == 0x10 )
  {
    switch ( v19 )
    {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 11:
      case 13:
      case 15:
      case 17:
      case 18:
        goto LABEL_51;
      default:
        v52 = 0;
        v53 = v519;
        break;
    }
    goto LABEL_61;
  }
  if ( v19 == 1 )
  {
LABEL_51:
    v52 = 1;
    v53 = v519;
  }
  else
  {
    v53 = v519;
    v52 = ((*((_DWORD *)v51 + 206) & 2) != 0 || v519 && *(_DWORD *)(*((_QWORD *)v519 + 5) + 236LL) == 2) && v19 == 2;
  }
LABEL_61:
  if ( !v52 )
    goto LABEL_62;
  v518 = v37;
  v516 = v37;
  if ( (v37 & 0x400000) != 0 )
    goto LABEL_78;
  if ( !v53 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v53 = (struct tagWND *)v37, v518 = v37, v516 = v37, (_WORD)a2 != 0x8002) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v53);
      if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      v53 = (struct tagWND *)v37;
      v518 = v37;
      v516 = v37;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 848) & 1) != 0 )
      {
        LODWORD(v53) = v37 | 0x400000;
        v518 = v37 | 0x400000;
        v516 = v37 | 0x400000;
      }
    }
    goto LABEL_79;
  }
  v518 = v37;
  v516 = v37;
  if ( (_WORD)v41 == 0x4000 && (v518 = v37, v516 = v37, (*(_BYTE *)(*((_QWORD *)v53 + 5) + 26LL) & 0x50) == 0x40) )
  {
    v53 = (struct tagWND *)v37;
    LODWORD(v53) = v37 | 0x400000;
    v518 = v37 | 0x400000;
    v516 = v37 | 0x400000;
  }
  else
  {
LABEL_78:
    v53 = (struct tagWND *)v518;
  }
LABEL_79:
  if ( ((unsigned int)v53 & 0x2200000) == 0x2200000 )
    goto LABEL_38;
  if ( *(_QWORD *)(v517 + 592) )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(v517 + 896), 2u) )
    {
      v56 = 1;
    }
    else
    {
      UserSetLastError(5LL);
      v56 = 0;
    }
    if ( !v56 )
    {
LABEL_64:
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v515);
      goto LABEL_65;
    }
  }
  if ( (_WORD)v41 != 0x4000 )
    goto LABEL_95;
  v57 = v519;
  if ( !v519 )
  {
    v48 = 1406LL;
    goto LABEL_63;
  }
  v58 = 1;
  do
  {
    v59 = 0LL;
    v53 = (struct tagWND *)*((_QWORD *)v57 + 3);
    if ( v53 )
    {
      v60 = *((_QWORD *)v53 + 1);
      if ( v60 )
        v59 = *(struct tagWND **)(v60 + 24);
    }
    if ( v57 == v59 )
      break;
    v57 = (struct tagWND *)*((_QWORD *)v57 + 13);
    ++v58;
  }
  while ( v57 );
  if ( v58 > gNestedWindowLimit )
    goto LABEL_38;
  while ( 1 )
  {
LABEL_95:
    v61 = v546;
    if ( (v546 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::EnforceConsistency(v53);
      v65 = PsGetCurrentThreadWin32Thread(v63, v62, v64);
      ++*(_DWORD *)(v65 + 48);
      v525 = 1;
      v66 = *(_WORD **)(v61 + 8);
      v67 = 2147483646LL;
      v580 = 2147483646LL;
      v578 = v66;
      v68 = 256LL;
      v579 = 256LL;
      v69 = &gawchAtomScratch;
      v574 = &gawchAtomScratch;
      v70 = 0;
      v71 = 0LL;
      v573 = 0LL;
      while ( v68 )
      {
        if ( !v67 )
          goto LABEL_103;
        v72 = *v66;
        if ( !*v66 )
          goto LABEL_103;
        v578 = ++v66;
        *v69++ = v72;
        v574 = v69;
        v579 = --v68;
        v580 = --v67;
        v573 = ++v71;
      }
      v574 = --v69;
      v573 = v71 - 1;
      v70 = -2147483643;
LABEL_103:
      *v69 = 0;
      if ( v70 < 0 )
      {
        Atom = 0;
        v523 = 0;
        v540 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
        v523 = Atom;
      }
      v74 = PsGetCurrentThreadWin32Thread(v68, v67, v66);
      --*(_DWORD *)(v74 + 48);
      v525 = 0;
    }
    else
    {
      Atom = v546;
      v523 = v546;
    }
    if ( Atom )
    {
      v75 = *v530;
      ClassPtr = (unsigned __int64 *)((char *)*v530 + 352);
      v77 = *ClassPtr;
      if ( *ClassPtr )
      {
        while ( 1 )
        {
          v78 = *(_QWORD *)(v77 + 8);
          if ( *(_WORD *)v78 == Atom
            && (!v548[0] || WORD1(*(_QWORD *)(v78 + 64)) == WORD1(v548[0]))
            && (*(_WORD *)(v78 + 6) & 4) == 0 )
          {
            break;
          }
          ClassPtr = (unsigned __int64 *)v77;
          v77 = *(_QWORD *)v77;
          if ( !v77 )
            goto LABEL_115;
        }
      }
      else
      {
LABEL_115:
        ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v75 + 360, 0LL, ClassPtr);
        if ( !ClassPtr )
        {
          v79 = hModClient;
          ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v75 + 352, hModClient, 0LL);
          if ( !ClassPtr )
            ClassPtr = (unsigned __int64 *)InnerGetClassPtr(Atom, (char *)v75 + 360, v79, 0LL);
        }
      }
      if ( ClassPtr )
        break;
    }
LABEL_173:
    if ( v540
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v100 = Str1)
        : (v100 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v100)) )
    {
      v48 = 1407LL;
      goto LABEL_63;
    }
    v540 = 1;
    v38 = v572;
  }
  v80 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v524[0] )
  {
    if ( v524[0] != gSmartObjNullRef && !--*(_DWORD *)(v524[0] + 8LL) )
    {
      if ( *(_BYTE *)(v524[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v524[0]);
    }
    if ( v80 )
    {
      v524[0] = *(_QWORD *)(v80 + 128);
      ++*(_DWORD *)(v524[0] + 8LL);
    }
    else
    {
      v524[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_64;
  v81 = 0;
  v82 = 0;
  v83 = v518;
  if ( (v518 & 1) != 0 )
    goto LABEL_136;
  if ( (v518 & 0x20000) != 0 )
    goto LABEL_137;
  v77 = a5;
  if ( (a5 & 0x40000) != 0 )
    goto LABEL_136;
  if ( (a5 & 0xC00000) == 0x400000 )
  {
    v83 = v518;
LABEL_136:
    v82 = 1;
    goto LABEL_137;
  }
  v83 = v518;
  if ( (a5 & 0xC00000) == 0xC00000 )
  {
    LOBYTE(v81) = a15 >= 0x400u;
    v82 = v81;
  }
LABEL_137:
  if ( v82 )
    v84 = v83 | 0x100;
  else
    v84 = v83 & 0xFFFFFEFF;
  v516 = v84;
  v518 = v84;
  if ( (*(_DWORD *)(v517 + 488) & 1) != 0 )
  {
    HIDWORD(v529) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 812LL);
  }
  LOBYTE(v77) = 1;
  v85 = HMAllocObject(v517, v38, v77);
  v86 = v85;
  v554 = (struct tagWND *)v85;
  if ( !v85 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_64;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v85 + 56));
  v87 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v86 + 144) = v87;
  if ( !v87 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v86 + 56));
    HMFreeObject(v86);
    goto LABEL_64;
  }
  tagObjLock::LockInitialize(v87);
  v571 = (__int64 *)(v86 + 16);
  v581 = v86 + 16;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 16) + 424LL) + 824LL) & 0x1000000) != 0 )
    *(_DWORD *)(v86 + 324) |= 1u;
  v88 = v86 + 40;
  v577.m128i_i64[0] = v86 + 40;
  *(_QWORD *)(*(_QWORD *)(v86 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v86 + 280) = 0LL;
  *(_QWORD *)(*(_QWORD *)(v86 + 40) + 168LL) = 0LL;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v90 = *(_QWORD *)(v86 + 40);
  *(_DWORD *)(v90 + 292) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v520 != 0x4000 || !v519 || v519 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_160;
  v91 = 0LL;
  v92 = PtiCurrentShared();
  if ( v92 )
  {
    v93 = *((_QWORD *)v92 + 57);
    if ( v93 )
      v91 = *(struct tagWND **)(v93 + 104);
  }
  if ( v519 == v91
    || (v94 = v519, v90 = *(_QWORD *)(*((_QWORD *)v519 + 2) + 424LL), *v530 != (struct tagPROCESSINFO *)v90)
    || IsChildWindowDpiIsolationEnabled(0LL, v519) )
  {
LABEL_160:
    *(_DWORD *)(*(_QWORD *)v88 + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v90);
    if ( (*(_DWORD *)(*(_QWORD *)v88 + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v88 + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v95 = *(unsigned int *)(*((_QWORD *)v519 + 5) + 288LL);
    *(_DWORD *)(*(_QWORD *)v88 + 288LL) = v95;
    v96 = *(_DWORD *)(*((_QWORD *)v94 + 5) + 288LL);
    if ( (((unsigned __int8)v96 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v95)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v86, (__int64)v519, 0);
  }
  v97 = *(_QWORD *)v88;
  v98 = *(_DWORD *)(*(_QWORD *)v88 + 288LL);
  if ( (v98 & 0xF) == 2 && (v98 & 0xF0) == 0x20 )
    *(_DWORD *)(v86 + 320) |= 0x180000u;
  if ( (*(_BYTE *)(v97 + 288) & 0xF) == 3 )
    *(_DWORD *)(v86 + 320) |= 0x80000u;
  v99 = *(_QWORD *)v524[0];
  if ( *(_QWORD *)v524[0] )
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 128LL) = *(_QWORD *)(v99 + 16);
  else
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 128LL) = 0LL;
  *(_QWORD *)(v86 + 136) = v99;
  *(_DWORD *)(*(_QWORD *)v88 + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)v88 + 24LL) = v518 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)v88 + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)v88 + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v524[0], v86) )
    goto LABEL_172;
  v101 = *(_QWORD *)(v86 + 136);
  if ( v101 != *(_QWORD *)v524[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v524);
    if ( v101 )
    {
      v524[0] = *(_QWORD *)(v101 + 128);
      ++*(_DWORD *)(v524[0] + 8LL);
    }
    else
    {
      v524[0] = gSmartObjNullRef;
    }
  }
  v102 = *(_QWORD *)v524[0];
  v103 = *(_DWORD *)(*(_QWORD *)v524[0] + 72LL);
  if ( v103 >= 131068 )
  {
    v104 = 0;
    goto LABEL_190;
  }
  *(_DWORD *)(v102 + 72) = v103 + 1;
  v105 = *(_QWORD *)(v102 + 56);
  if ( v102 != v105 )
  {
    v106 = *(_DWORD *)(v105 + 72);
    if ( v106 >= 131068 )
    {
      *(_DWORD *)(v102 + 72) = v103;
      v104 = 0;
      goto LABEL_190;
    }
    *(_DWORD *)(v105 + 72) = v106 + 1;
  }
  v107 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v107 = *ThreadWin32Thread;
  *(_QWORD *)&v575 = *(_QWORD *)(v107 + 16);
  *(_QWORD *)(v107 + 16) = &v575;
  *((_QWORD *)&v575 + 1) = v102;
  v576 = ClassUnlockWorker;
  v104 = 1;
LABEL_190:
  if ( !v104 )
  {
    DereferenceClass(*v530);
LABEL_172:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v86 + 144));
    Win32FreePool(*(void **)(v86 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v86 + 56));
    HMFreeObject(v86);
    goto LABEL_173;
  }
  *(_QWORD *)(*(_QWORD *)v88 + 224LL) = a17;
  v109 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 2LL);
  v110 = v517;
  if ( (_WORD)v109 == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)v88 + 208LL) = 0LL;
  }
  else
  {
    v111 = *(__int64 **)(v517 + 792);
    v112 = 0LL;
    if ( v111 )
      v112 = *v111;
    *(_QWORD *)(*(_QWORD *)v88 + 208LL) = v112;
  }
  *(_DWORD *)(*(_QWORD *)v88 + 236LL) = v19;
  v113 = *(_QWORD *)v88;
  v114 = v519;
  if ( *(_DWORD *)(*(_QWORD *)v88 + 236LL) != 1 && (unsigned int)IsTopLevelParent(v519, v109, v113, v110) )
  {
    *(_DWORD *)(v113 + 24) |= 8u;
    v113 = *(_QWORD *)v88;
  }
  if ( v542 )
    *(_BYTE *)(v113 + 232) |= 0x40u;
  ++*(_DWORD *)(v110 + 904);
  *(_QWORD *)&v560 = 0LL;
  v561 = 0LL;
  v562 = 0LL;
  v563 = 0LL;
  v564 = 0LL;
  v565 = 0LL;
  v566 = 0LL;
  DWORD2(v564) = v518;
  *((void **)&v560 + 1) = v548[0];
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v527 >= 0 )
    {
      *(_QWORD *)&v564 = *((_QWORD *)Str1 + 1);
      v566 = *(_OWORD *)Str1;
    }
    else
    {
      *(_QWORD *)&v564 = *(_QWORD *)(*(_QWORD *)v524[0] + 104LL);
      if ( (v564 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitLargeAnsiString(&v566);
        v110 = v517;
      }
    }
  }
  else
  {
    *(_QWORD *)&v564 = Str1;
  }
  if ( v570 )
  {
    *((_QWORD *)&v563 + 1) = v570[1];
    v565 = *(_OWORD *)v570;
  }
  LODWORD(v563) = a5;
  v526 = a6;
  v516 = a7;
  *((_QWORD *)&v562 + 1) = __PAIR64__(a6, a7);
  v529 = __PAIR64__(a9, a8);
  *(_QWORD *)&v562 = __PAIR64__(a8, a9);
  if ( v114 )
    *((_QWORD *)&v561 + 1) = *(_QWORD *)v114;
  else
    *((_QWORD *)&v561 + 1) = 0LL;
  v115 = v520;
  v116 = v534;
  if ( (_WORD)v520 != 0x4000 )
  {
    if ( !v534 )
    {
      if ( !*(_QWORD *)v533[0] )
      {
        *(_QWORD *)&v561 = 0LL;
        goto LABEL_222;
      }
      v116 = *(_QWORD **)v533[0];
    }
    *(_QWORD *)&v561 = *v116;
    goto LABEL_222;
  }
  if ( !v534 )
    v116 = *(_QWORD **)v533[0];
  *(_QWORD *)&v561 = v116;
  *(_DWORD *)(*(_QWORD *)v88 + 24LL) |= *(_DWORD *)(*((_QWORD *)v114 + 5) + 24LL) & 0xC4000000;
LABEL_222:
  *(_QWORD *)&v560 = v559;
  *(_QWORD *)&v582 = *(_QWORD *)(v110 + 416);
  *(_QWORD *)(v110 + 416) = &v582;
  *((_QWORD *)&v582 + 1) = v86;
  HMLockObject(v86);
  *(_QWORD *)&v627[0] = 0LL;
  if ( a6 == 0x80000000 || (v117 = a6, a6 == 0x8000) )
    v117 = 0;
  LODWORD(v627[0]) = v117;
  v118 = v516;
  if ( v516 == 0x80000000 || v516 == 0x8000 )
    v118 = 0;
  DWORD1(v627[0]) = v118;
  v119 = v529;
  if ( (_DWORD)v529 == 0x80000000 || (_DWORD)v529 == 0x8000 )
    v119 = 0;
  DWORD2(v627[0]) = v119 + v117;
  v120 = HIDWORD(v529);
  if ( HIDWORD(v529) == 0x80000000 || HIDWORD(v529) == 0x8000 )
    v120 = 0;
  HIDWORD(v627[0]) = v118 + v120;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v86);
  v539 = InheritedMonitor != 0LL;
  if ( !InheritedMonitor && v114 )
    InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v114 + 5) + 256LL));
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(v627, 2LL), v122 = 0LL, InheritedMonitor) )
    v122 = *InheritedMonitor;
  *(_QWORD *)(*(_QWORD *)v88 + 256LL) = v122;
  *(_DWORD *)(*(_QWORD *)v88 + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 60);
  v123 = (_DWORD *)InheritedMonitor[16];
  *(_QWORD *)(v86 + 288) = v123;
  ++*v123;
  *(_QWORD *)(v86 + 296) = 0LL;
  if ( v115 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v86, v114) )
    UpdateTopLevelWindowDPITransform(v86, InheritedMonitor);
  if ( v115 == 0x4000 )
  {
    if ( v114 )
    {
      *(_WORD *)(*(_QWORD *)v88 + 286LL) = *(_WORD *)(*((_QWORD *)v114 + 5) + 286LL);
      v124 = (_DWORD *)*((_QWORD *)v114 + 37);
      if ( v124 )
      {
        *(_QWORD *)(v86 + 296) = v124;
        ++*v124;
      }
    }
  }
  v125 = *(_QWORD *)(v86 + 24);
  v126 = (_QWORD *)(v86 + 104);
  if ( v125 )
  {
    v127 = *(_QWORD *)(v125 + 104);
    if ( v127 )
      *(_QWORD *)(*(_QWORD *)(v86 + 40) + 48LL) = *(_QWORD *)(v127 + 48);
    else
      *(_QWORD *)(*(_QWORD *)(v86 + 40) + 48LL) = 0LL;
    v595[0] = v86 + 104;
    v595[1] = v127;
    HMAssignmentLock(v595, 0LL);
  }
  v557 = v86 + 104;
  if ( (unsigned int)IsWindowDesktopComposed(v86) )
  {
    v128 = v114;
    if ( v115 != 0x4000 && (!v114 || v114 != *(struct tagWND **)(*((_QWORD *)v114 + 3) + 104LL)) )
    {
      v128 = 0LL;
      v129 = PtiCurrentShared();
      if ( v129 )
      {
        v130 = *((_QWORD *)v129 + 58);
        if ( v130 )
          v128 = *(struct tagWND **)(v130 + 24);
      }
    }
    memset(&v627[1], 0, 32);
    memset(&v628, 0, sizeof(v628));
    Prop = 0LL;
    v132 = 0;
    if ( *v126 )
    {
      v133 = 0LL;
      v134 = *(_QWORD *)(v86 + 24);
      if ( v134 )
      {
        v135 = *(_QWORD *)(v134 + 8);
        if ( v135 )
          v133 = *(_QWORD *)(v135 + 24);
      }
      if ( *v126 == v133 )
        v132 = 1;
    }
    if ( v132 || (*(_BYTE *)(*(_QWORD *)v88 + 26LL) & 8) != 0 && GetTopLevelWindow(v86) )
      Prop = GetProp(v86, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1LL);
    if ( Prop )
    {
      *(__m256i *)&v627[1] = *(__m256i *)Prop;
      v628 = *(__m256i *)(Prop + 32);
      v137 = v627[1];
    }
    else
    {
      v138 = v627[1] & 0xFFFF0000;
      v607 = 0LL;
      *(_OWORD *)((char *)&v627[1] + 8) = 0LL;
      v628.m256i_i64[0] = 0LL;
      v139 = *(struct tagTHREADINFO **)(v86 + 16);
      if ( !v139 )
        v139 = PtiCurrentShared();
      v137 = v138 & 0xFFF9FFFF | (*((_QWORD *)v139 + 81) >> 3) & 0x40000;
      v628.m256i_i32[2] = g_defaultFrameStyle;
      *(__int64 *)((char *)&v628.m256i_i64[1] + 4) = 0LL;
      *(__int64 *)((char *)&v628.m256i_i64[2] + 4) = 0LL;
    }
    LODWORD(v627[1]) = v137 & 0x7FFFF;
    v140 = *(struct _KPROCESS **)(**(_QWORD **)(v86 + 16) + 544LL);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v140);
    ProcessId = PsGetProcessId(v140);
    v559 = ***(_QWORD ***)(*(_QWORD *)(v86 + 24) + 8LL);
    v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 136) + 8LL) + 8LL);
    v520 = v142;
    v143 = *(_QWORD *)(v86 + 160);
    if ( v143 )
    {
      v144 = MNLookUpItem(v143, 61536LL, 0LL, 0LL);
      if ( !v144
        && (v144 = MNLookUpItem(*(_QWORD *)(v86 + 160), 32864LL, 0LL, 0LL)) == 0
        && (v144 = MNLookUpItem(*(_QWORD *)(v86 + 160), 49264LL, 0LL, 0LL)) == 0
        || (v143 = *(unsigned int *)(*(_QWORD *)v144 + 4LL), v145 = 0, (v143 & 3) != 0) )
      {
        v145 = 512;
      }
      v520 = v145 | v142;
    }
    v146 = *(_QWORD *)v88;
    v147 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
    v148 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
    v542 = *(_DWORD *)(v146 + 28);
    v149 = 0LL;
    if ( v128 )
      v149 = *(_QWORD *)v128;
    v150 = *(_QWORD *)v86;
    v151 = (void *)ReferenceDwmApiPort(v143, v141);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v152) + 32) + 13248LL));
    if ( v151 )
    {
      v610 = 0LL;
      v611 = 0LL;
      v612 = 0;
      v608 = 11534472;
      v609 = 0x8000;
      v613 = 1073741841;
      v614 = v150;
      v615 = v149;
      v616 = v542;
      v617 = v148;
      v623 = v147;
      v619 = v520;
      v620 = *(__m256i *)&v627[1];
      v621 = v628;
      v622 = v559;
      v618 = v627[0];
      v624 = (int)ProcessId;
      v625 = ProcessSequenceNumber;
      EtwUpdateEvent(v149, 1073741841LL);
      LpcRequestPort(v151, &v608);
      ObfDereferenceObject(v151);
    }
    v88 = v86 + 40;
  }
  *(void **)(*(_QWORD *)v88 + 32LL) = v548[0];
  v153 = *(_QWORD *)(*(_QWORD *)v524[0] + 8LL);
  v154 = *(_QWORD *)(v153 + 32);
  v155 = *(unsigned __int16 *)(v153 + 4);
  if ( (unsigned __int16)(v155 - 673) <= 9u )
  {
    if ( v527 < 0 )
    {
      if ( *(_QWORD *)(gpsi + 8 * v155 - 4744) == v154 )
        v154 = *(_QWORD *)(gpsi + 8 * v155 - 4936);
    }
    else if ( *(_QWORD *)(gpsi + 8 * v155 - 4936) == v154 )
    {
      v154 = *(_QWORD *)(gpsi + 8 * v155 - 4744);
    }
  }
  *(_QWORD *)(*(_QWORD *)v88 + 120LL) = v154;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 6LL) & 1) == 0 )
  {
    v156 = *(_QWORD *)v88;
    v157 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
    v158 = *(_DWORD *)(v156 + 24);
    v159 = *(_DWORD *)(v156 + 232);
    *(_BYTE *)(v156 + 18) &= ~4u;
    if ( !(unsigned int)IsWindowDesktopComposed(v86)
      || (v160 = *(_DWORD **)(v86 + 40),
          v161 = v160[7],
          v162 = v160[6],
          v163 = v162 ^ v158,
          v164 = v160[58],
          v165 = v159 ^ v164,
          (v166 = v161 ^ v157) == 0)
      && !v163
      && !v165 )
    {
LABEL_314:
      v88 = v86 + 40;
      goto LABEL_315;
    }
    v167 = 0;
    v168 = 0;
    v169 = 0;
    if ( (v166 & 0xB1CF0000) != 0 )
    {
      v167 = -16;
      v168 = v161;
    }
    else if ( (v163 & 0x4E27A9) != 0 )
    {
      v167 = -20;
      v168 = v162;
    }
    else
    {
      if ( (v165 & 0x12C0) == 0 )
      {
LABEL_309:
        if ( v169 )
        {
          DirtyVisRgnTrackers(v86);
          v170 = *(_QWORD *)v86;
          v173 = (void *)ReferenceDwmApiPort(v172, v171);
          DwmAsyncChildStyleChange(v173, v170, v167, v168);
        }
        if ( (v166 & 0xC40000) != 0 || (v163 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v86, 1LL);
        goto LABEL_314;
      }
      v167 = -268435456;
      v168 = v164;
    }
    v169 = 1;
    goto LABEL_309;
  }
  SetOrClrWF(1LL, v86, 516LL, 1LL);
  if ( (unsigned int)Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage() )
    SetOrClrWF(1LL, v86, 55584LL, 0LL);
LABEL_315:
  IsEnabledDeviceUsage = Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledDeviceUsage();
  v177 = IsEnabledDeviceUsage != 0;
  if ( IsEnabledDeviceUsage )
  {
    v175 = *(_QWORD *)v88;
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 30LL) & 0x30) != 0 && (*(_BYTE *)(v175 + 233) & 0x20) != 0 )
    {
      v520 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1183LL);
    }
  }
  if ( v515[0] )
  {
    v178 = PsGetCurrentThreadWin32Thread(v177, v175, v176);
    --*(_DWORD *)(v178 + 48);
  }
  v179 = *(_BYTE *)(*(_QWORD *)v88 + 18LL) & 4;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 84LL) )
  {
    v180 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v86 + 280) = v180;
    if ( !v180 )
    {
      v522 = 5;
      goto LABEL_324;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v179 )
  {
    *(_DWORD *)(*(_QWORD *)v88 + 200LL) = (*(_DWORD *)(*(_QWORD *)v88 + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*(_QWORD *)v88 + 200LL) += 32;
  }
  v185 = *(unsigned int *)(*(_QWORD *)v88 + 200LL);
  if ( (_DWORD)v185 )
  {
    v186 = xxxClientAllocWindowClassExtraBytes(v185);
    v181 = *(_QWORD *)v88;
    if ( !v186 )
    {
      v522 = 2;
      goto LABEL_325;
    }
    v187 = 0;
    if ( *(char *)(v181 + 19) < 0
      || *(char *)(v181 + 20) < 0
      || *(__int16 *)(v181 + 42) < 0
      || (v188 = *(_QWORD *)(v86 + 16)) != 0 && (*(_DWORD *)(v188 + 488) & 1) != 0 )
    {
      v187 = 1;
    }
    if ( !v187 && (*(_BYTE *)(_HMPheFromObject(v86) + 25) & 1) == 0 && !*(_QWORD *)(*(_QWORD *)v88 + 296LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v88 + 232LL) & 0x10) != 0 )
      {
        v520 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1282LL);
      }
      *(_QWORD *)(*(_QWORD *)v88 + 296LL) = v186;
      goto LABEL_345;
    }
    UserSetLastError(87LL);
LABEL_324:
    v181 = *(_QWORD *)v88;
LABEL_325:
    *(_QWORD *)(v181 + 120) = 0LL;
    SetOrClrWF(1LL, v86, 516LL, 1LL);
    goto LABEL_858;
  }
LABEL_345:
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v179 )
  {
    v189 = *(_QWORD *)(*(_QWORD *)v88 + 296LL);
    v190 = *(int *)(*(_QWORD *)v88 + 200LL);
    v569 = *(_QWORD *)(*(_QWORD *)v88 + 120LL);
    *(_QWORD *)(v190 + v189 - 32) = v569;
    if ( v527 >= 0 )
      v191 = *(_QWORD *)(gpsi + 768LL);
    else
      v191 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*(_QWORD *)v88 + 120LL) = v191;
  }
  if ( *(_QWORD *)(*(_QWORD *)v524[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v524[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v524);
  }
  v192 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
  v193 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
  v194 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
  v195 = 32;
  if ( v528 >= 0 )
    v195 = 0;
  *(_BYTE *)((((int)v544 >> 31) & 3) + *(_QWORD *)v88 + 16LL) |= v195;
  if ( (unsigned int)IsWindowDesktopComposed(v86) )
  {
    v196 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
    v197 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
    v198 = v193 ^ v197;
    v199 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
    v200 = v194 ^ v199;
    v201 = v192 ^ v196;
    if ( v192 == v196 && !v198 && !v200 )
      goto LABEL_374;
    v202 = 0;
    v203 = 0;
    v204 = 0;
    if ( (v201 & 0xB1CF0000) != 0 )
    {
      v202 = -16;
      v203 = v196;
      goto LABEL_368;
    }
    if ( (v198 & 0x4E27A9) != 0 )
    {
      v202 = -20;
      v203 = v197;
      goto LABEL_368;
    }
    if ( (v200 & 0x12C0) != 0 )
    {
      v202 = -268435456;
      v203 = v199;
LABEL_368:
      v204 = 1;
    }
    if ( v204 )
    {
      DirtyVisRgnTrackers(v86);
      v205 = *(_QWORD *)v86;
      v208 = (void *)ReferenceDwmApiPort(v207, v206);
      DwmAsyncChildStyleChange(v208, v205, v202, v203);
    }
    if ( (v201 & 0xC40000) != 0 || (v198 & 0x200A0381) != 0 )
    {
      WindowMargins::CheckForChanges(v86, 1LL);
      v88 = v86 + 40;
    }
    else
    {
LABEL_374:
      v88 = v86 + 40;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 6LL) & 2) != 0
    || v527 < 0
    && (v523 == *(_WORD *)(gpsi + 868LL)
     || v523 == *(_WORD *)(gpsi + 878LL)
     || v523 == *(_WORD *)(gpsi + 882LL)
     || v523 == *(_WORD *)(gpsi + 904LL)
     || v523 == *(_WORD *)(gpsi + 870LL)
     || v523 == *(_WORD *)(gpsi + 874LL)
     || v523 == *(_WORD *)(gpsi + 880LL)
     || v523 == *(_WORD *)(gpsi + 898LL)
     || v523 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1LL, v86, 520LL, 1LL);
  }
  AppCompatFlags = GetAppCompatFlags(v517);
  v210 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v86, 1032LL, 1LL);
    v518 &= 0x3Fu;
    DWORD2(v564) = BYTE8(v564) & 0x3F;
  }
  if ( a15 < 0x30Au )
  {
    if ( (v210 & 0x40) != 0 )
      SetOrClrWF(1LL, v86, 1600LL, 1LL);
  }
  else
  {
    v211 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
    v212 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
    v213 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
    *(_BYTE *)(*(_QWORD *)v88 + 21LL) |= 1u;
    if ( (unsigned int)IsWindowDesktopComposed(v86) )
    {
      v214 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
      v215 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
      v216 = v212 ^ v215;
      v217 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
      v218 = v213 ^ v217;
      v219 = v211 ^ v214;
      if ( v211 != v214 || v216 || v218 )
      {
        v220 = 0;
        v221 = 0;
        v222 = 0;
        if ( (v219 & 0xB1CF0000) != 0 )
        {
          v220 = -16;
          v221 = v214;
          goto LABEL_400;
        }
        if ( (v216 & 0x4E27A9) != 0 )
        {
          v220 = -20;
          v221 = v215;
          goto LABEL_400;
        }
        if ( (v218 & 0x12C0) != 0 )
        {
          v220 = -268435456;
          v221 = v217;
LABEL_400:
          v222 = 1;
        }
        if ( v222 )
        {
          DirtyVisRgnTrackers(v86);
          v223 = *(_QWORD *)v86;
          v226 = (void *)ReferenceDwmApiPort(v225, v224);
          DwmAsyncChildStyleChange(v226, v223, v220, v221);
        }
        if ( (v219 & 0xC40000) != 0 || (v216 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v86, 1LL);
      }
      v88 = v86 + 40;
    }
    if ( a15 >= 0x400u )
    {
      v227 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
      v228 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
      v229 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
      *(_BYTE *)(*(_QWORD *)v88 + 21LL) |= 2u;
      if ( (unsigned int)IsWindowDesktopComposed(v86) )
      {
        v230 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
        v231 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
        v232 = v231 ^ v228;
        v233 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
        v234 = v229 ^ v233;
        v235 = v227 ^ v230;
        if ( v227 != v230 || v232 || v234 )
        {
          v236 = 0;
          v237 = 0;
          v238 = 0;
          if ( (v235 & 0xB1CF0000) != 0 )
          {
            v236 = -16;
            v237 = v230;
            goto LABEL_418;
          }
          if ( (v232 & 0x4E27A9) != 0 )
          {
            v236 = -20;
            v237 = v231;
            goto LABEL_418;
          }
          if ( (v234 & 0x12C0) != 0 )
          {
            v236 = -268435456;
            v237 = v233;
LABEL_418:
            v238 = 1;
          }
          if ( v238 )
          {
            DirtyVisRgnTrackers(v86);
            v239 = *(_QWORD *)v86;
            v242 = (void *)ReferenceDwmApiPort(v241, v240);
            DwmAsyncChildStyleChange(v242, v239, v236, v237);
          }
          if ( (v235 & 0xC40000) != 0 || (v232 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v86, 1LL);
        }
        v88 = v86 + 40;
      }
      if ( a15 >= 0x500u )
      {
        v243 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
        v244 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
        v245 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
        *(_BYTE *)(*(_QWORD *)v88 + 21LL) |= 4u;
        if ( (unsigned int)IsWindowDesktopComposed(v86) )
        {
          v246 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
          v247 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
          v248 = v247 ^ v244;
          v249 = *(_DWORD *)(*(_QWORD *)v88 + 232LL);
          v250 = v245 ^ v249;
          v251 = v243 ^ v246;
          if ( v243 != v246 || v248 || v250 )
          {
            v252 = 0;
            v253 = 0;
            v254 = 0;
            if ( (v251 & 0xB1CF0000) != 0 )
            {
              v252 = -16;
              v253 = v246;
              goto LABEL_436;
            }
            if ( (v248 & 0x4E27A9) != 0 )
            {
              v252 = -20;
              v253 = v247;
              goto LABEL_436;
            }
            if ( (v250 & 0x12C0) != 0 )
            {
              v252 = -268435456;
              v253 = v249;
LABEL_436:
              v254 = 1;
            }
            if ( v254 )
            {
              DirtyVisRgnTrackers(v86);
              v255 = *(_QWORD *)v86;
              v258 = (void *)ReferenceDwmApiPort(v257, v256);
              DwmAsyncChildStyleChange(v258, v255, v252, v253);
            }
            if ( (v251 & 0xC40000) != 0 || (v248 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(v86, 1LL);
          }
        }
      }
    }
  }
  v259 = v517;
  v260 = a15;
  if ( a15 <= *(_WORD *)(v517 + 636) )
    v260 = *(_DWORD *)(v517 + 636);
  *(_DWORD *)(v86 + 256) = v260;
  v261 = 0LL;
  v262 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v262 )
    v261 = *v262;
  v265 = 0;
  if ( *(_DWORD *)(v261 + 632) <= 0x9900u )
    v265 = *(_DWORD *)(v261 + 648);
  if ( (v265 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v86, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess((unsigned int)gihmodUserApiHook, v263, v264);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess)
      && (unsigned int)PsGetWin32KFilterSet() != 5
      && (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) == 0 )
    {
      v267 = (unsigned int)gihmodUserApiHookWOW;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) == 0 )
        v267 = (unsigned int)gihmodUserApiHook;
      xxxLoadHmodIndex(v267);
    }
  }
  v268 = v519;
  if ( (unsigned int)WantImeWindow(v519, (struct tagWND *)v86) )
  {
    if ( (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage() )
    {
      v269 = *(_QWORD *)(v259 + 784);
      if ( v269 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v269) + 25) & 1) != 0
          || (unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v259 + 784)) )
        {
          v528 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1427LL);
        }
      }
    }
    *(_DWORD *)(v86 + 320) |= 0x10000000u;
    ++*(_DWORD *)(v259 + 912);
  }
  if ( ((*(_BYTE *)(v259 + 680) | *(_BYTE *)(**(_QWORD **)(v259 + 464) + 16LL)) & 0x40) != 0 )
  {
    v567 = (__int64)&v560;
    v568 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v86, (__int64)&v567, 5) )
    {
      v522 = 6;
      v88 = v86 + 40;
      goto LABEL_859;
    }
    v270 = HIDWORD(v562);
    v526 = HIDWORD(v562);
    v516 = DWORD2(v562);
    v529 = __PAIR64__(v562, DWORD1(v562));
    v544 = v568;
  }
  else
  {
    v544 = 0LL;
    v270 = v526;
  }
  v88 = v86 + 40;
  v183 = *(unsigned __int8 *)(*(_QWORD *)(v86 + 40) + 31LL);
  LOBYTE(v183) = v183 & 0xC0;
  LOBYTE(v521) = v183;
  if ( (_BYTE)v183 == 64 && !v268 )
    goto LABEL_858;
  if ( ((_BYTE)v183 == 64) != v550 )
  {
    v534 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v533, 0LL);
    LOBYTE(v183) = v521;
  }
  v271 = *(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0;
  if ( v271 )
  {
    if ( v270 == 0x80000000 || v270 == 0x8000 )
    {
      v270 = 0;
      v526 = 0;
      v516 = 0;
    }
    if ( (_DWORD)v529 == 0x80000000 || (_DWORD)v529 == 0x8000 )
      v529 = 0LL;
  }
  v520 = v270;
  *(_QWORD *)&v532 = __PAIR64__(v516, v270);
  v527 = v516;
  *((_QWORD *)&v532 + 1) = v529;
  if ( (_BYTE)v183 == 64 )
  {
    v547 = *(_OWORD *)(*((_QWORD *)v268 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v86, v268) )
    {
      *(_QWORD *)(v86 + 224) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel(v268, &v547, v86 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v86, &v547, v86 + 224);
    }
    if ( v268 != (struct tagWND *)GetDesktopWindow(v86, v272) )
    {
      v520 = v270 + v547;
      LODWORD(v532) = v270 + v547;
      v527 = v273 + DWORD1(v547);
      DWORD1(v532) = v273 + DWORD1(v547);
    }
    v544 = 1LL;
  }
  if ( !v271 )
  {
    v274 = *(_QWORD *)v88;
    v275 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
    v276 = *(_DWORD *)(*(_QWORD *)v88 + 24LL);
    v277 = *(_DWORD *)(v274 + 232);
    *(_BYTE *)(v274 + 31) = HIBYTE(v275) | 4;
    if ( (unsigned int)IsWindowDesktopComposed(v86) )
    {
      v278 = *(_DWORD **)(v86 + 40);
      v279 = v278[7];
      v280 = v278[6];
      v281 = v280 ^ v276;
      v282 = v278[58];
      v283 = v277 ^ v282;
      v284 = v279 ^ v275;
      if ( v284 || v281 || v283 )
      {
        v285 = 0;
        v286 = 0;
        v287 = 0;
        if ( (v284 & 0xB1CF0000) != 0 )
        {
          v285 = -16;
          v286 = v279;
          goto LABEL_499;
        }
        if ( (v281 & 0x4E27A9) != 0 )
        {
          v285 = -20;
          v286 = v280;
          goto LABEL_499;
        }
        if ( (v283 & 0x12C0) != 0 )
        {
          v285 = -268435456;
          v286 = v282;
LABEL_499:
          v287 = 1;
        }
        if ( v287 )
        {
          DirtyVisRgnTrackers(v86);
          v288 = *(_QWORD *)v86;
          v291 = (void *)ReferenceDwmApiPort(v290, v289);
          DwmAsyncChildStyleChange(v291, v288, v285, v286);
        }
        if ( (v284 & 0xC40000) != 0 || (v281 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v86, 1LL);
      }
    }
    v541 = 192;
    v292 = *(_QWORD *)(v86 + 40);
    if ( (*(_BYTE *)(v292 + 21) & 2) != 0 )
    {
      v293 = *(_DWORD *)(v292 + 28);
      v294 = *(_DWORD *)(v292 + 24);
      v295 = *(_DWORD *)(v292 + 232);
      *(_BYTE *)(v292 + 25) = BYTE1(v294) | 1;
      if ( (unsigned int)IsWindowDesktopComposed(v86) )
      {
        v296 = *(_DWORD **)(v86 + 40);
        v297 = v296[7];
        v298 = v296[6];
        v299 = v298 ^ v294;
        v300 = v296[58];
        v301 = v295 ^ v300;
        v302 = v297 ^ v293;
        if ( v302 || v299 || v301 )
        {
          v303 = 0;
          v304 = 0;
          v305 = 0;
          if ( (v302 & 0xB1CF0000) != 0 )
          {
            v303 = -16;
            v304 = v297;
            goto LABEL_516;
          }
          if ( (v299 & 0x4E27A9) != 0 )
          {
            v303 = -20;
            v304 = v298;
            goto LABEL_516;
          }
          if ( (v301 & 0x12C0) != 0 )
          {
            v303 = -268435456;
            v304 = v300;
LABEL_516:
            v305 = 1;
          }
          if ( v305 )
          {
            DirtyVisRgnTrackers(v86);
            v306 = *(_QWORD *)v86;
            v309 = (void *)ReferenceDwmApiPort(v308, v307);
            DwmAsyncChildStyleChange(v309, v306, v303, v304);
          }
          if ( (v302 & 0xC40000) != 0 || (v299 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v86, 1LL);
        }
      }
    }
    v310 = *(_QWORD *)(v86 + 40);
    v311 = *(_DWORD *)(v310 + 28);
    v312 = *(_DWORD *)(v310 + 24);
    v313 = *(_DWORD *)(v310 + 232);
    *(_BYTE *)(v310 + 16) |= 0x10u;
    if ( (unsigned int)IsWindowDesktopComposed(v86) )
    {
      v314 = *(_DWORD **)(v86 + 40);
      v315 = v314[7];
      v316 = v314[6];
      v317 = v316 ^ v312;
      v318 = v314[58];
      v319 = v313 ^ v318;
      v320 = v315 ^ v311;
      if ( v320 || v317 || v319 )
      {
        v321 = 0;
        v322 = 0;
        v323 = 0;
        if ( (v320 & 0xB1CF0000) != 0 )
        {
          v321 = -16;
          v322 = v315;
          goto LABEL_532;
        }
        if ( (v317 & 0x4E27A9) != 0 )
        {
          v321 = -20;
          v322 = v316;
          goto LABEL_532;
        }
        if ( (v319 & 0x12C0) != 0 )
        {
          v321 = -268435456;
          v322 = v318;
LABEL_532:
          v323 = 1;
        }
        if ( v323 )
        {
          DirtyVisRgnTrackers(v86);
          v324 = *(_QWORD *)v86;
          v327 = (void *)ReferenceDwmApiPort(v326, v325);
          DwmAsyncChildStyleChange(v327, v324, v321, v322);
        }
        if ( (v320 & 0xC40000) != 0 || (v317 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v86, 1LL);
      }
    }
    v328 = v526;
    if ( (v526 == 0x80000000 || v526 == 0x8000) && v527 != 0x80000000 )
    {
      v329 = v537;
      if ( v527 != 0x8000 )
        v329 = v527;
      v537 = v329;
    }
    v330 = v539;
    if ( !v539 && (v526 == 0x80000000 || v526 == 0x8000 || (_DWORD)v529 == 0x80000000 || (_DWORD)v529 == 0x8000) )
    {
      v331 = *((_QWORD *)*v530 + 87);
      if ( v331 )
      {
        v332 = (struct tagMONITOR *)ValidateHmonitor(v331);
      }
      else if ( v519 )
      {
        v332 = _MonitorFromWindowInternal(v519, 2u, 0);
      }
      else
      {
        v332 = 0LL;
      }
      if ( !v332 )
      {
        v332 = *(struct tagMONITOR **)(GetDispInfo() + 96);
        goto LABEL_557;
      }
      goto LABEL_569;
    }
    v332 = 0LL;
LABEL_557:
    if ( v332 )
    {
LABEL_569:
      v88 = v86 + 40;
    }
    else
    {
      v88 = v86 + 40;
      v332 = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v86 + 40) + 256LL));
      if ( !v332 )
      {
        if ( !v330 || (v332 = (struct tagMONITOR *)GetInheritedMonitor((struct tagWND *)v86)) == 0LL )
          v332 = (struct tagMONITOR *)MonitorFromRect(*(_QWORD *)v88 + 88LL, 2LL);
        v333 = 0LL;
        if ( v332 )
          v333 = *(_QWORD *)v332;
        *(_QWORD *)(*(_QWORD *)v88 + 256LL) = v333;
        *(_WORD *)(*(_QWORD *)v88 + 284LL) = *(_WORD *)(*((_QWORD *)v332 + 5) + 60LL);
        v334 = *(_DWORD **)(v86 + 288);
        if ( v334 )
        {
          --*v334;
          v335 = *(_DWORD **)(v86 + 288);
          if ( !*v335 )
            Win32FreePool(v335);
          *(_QWORD *)(v86 + 288) = 0LL;
        }
        v336 = (_DWORD *)*((_QWORD *)v332 + 16);
        *(_QWORD *)(v86 + 288) = v336;
        ++*v336;
        UpdateTopLevelWindowDPITransform(v86, v332);
      }
    }
    SetTiledRect(v86, &v626, v332);
    if ( v328 == 0x80000000 || v328 == 0x8000 )
    {
      v338 = v530;
      v344 = *v530;
      if ( (*((_DWORD *)*v530 + 202) & 4) != 0 )
      {
        v535 = 1;
        v328 = *((_DWORD *)v344 + 198);
        v520 = v328;
        LODWORD(v532) = v328;
        v516 = *((_DWORD *)v344 + 199);
        v345 = v516;
      }
      else
      {
        v328 = v626;
        v520 = v626;
        LODWORD(v532) = v626;
        v345 = DWORD1(v626);
        v516 = DWORD1(v626);
      }
      DWORD1(v532) = v345;
      v527 = v345;
      v526 = v328;
      v339 = 1;
    }
    else
    {
      v337 = *((_WORD *)v332 + 37);
      v338 = v530;
      if ( v337 )
        *((_WORD *)v332 + 37) = v337 - 1;
      v339 = v543;
    }
    v340 = v529;
    if ( (_DWORD)v529 == 0x80000000 || (_DWORD)v529 == 0x8000 )
    {
      v346 = *v338;
      if ( (*((_DWORD *)*v338 + 202) & 2) != 0 )
      {
        v535 = 1;
        DWORD2(v532) = *((_DWORD *)v346 + 200);
        v347 = *((_DWORD *)v346 + 201);
      }
      else
      {
        DWORD2(v532) = DWORD2(v626) - v328;
        v347 = HIDWORD(v626) - v516;
      }
      HIDWORD(v532) = v347;
    }
    else if ( v339 )
    {
      v577 = *(__m128i *)GetMonitorRect(v605, v332);
      v341 = _mm_srli_si128(v577, 8).m128i_u64[0];
      v342 = v340 + v520 - v341;
      v343 = HIDWORD(v529) + v527 - HIDWORD(v341);
      if ( v342 > 0 )
      {
        v526 = v328 - v342;
        LODWORD(v532) = v328 - v342;
        if ( v328 - v342 < v577.m128i_i32[0] )
        {
          v526 = v577.m128i_i32[0];
          LODWORD(v532) = v577.m128i_i32[0];
        }
      }
      if ( v343 > 0 )
      {
        v516 -= v343;
        DWORD1(v532) = v516;
        if ( v516 < v577.m128i_i32[1] )
        {
          v516 = v577.m128i_i32[1];
          DWORD1(v532) = v577.m128i_i32[1];
        }
      }
    }
  }
  if ( v535 )
    *((_DWORD *)*v530 + 202) &= 0xFFFFFFF9;
  v348 = *(_QWORD *)v88;
  v349 = *(_BYTE *)(*(_QWORD *)v88 + 31LL);
  if ( (((v349 & 0xC0) + 0x80) & 0xBF) == 0 )
  {
    v350 = *(_DWORD *)(v348 + 28);
    v351 = *(_DWORD *)(v348 + 24);
    v352 = *(_DWORD *)(v348 + 232);
    *(_BYTE *)(v348 + 31) = v349 | 4;
    if ( !(unsigned int)IsWindowDesktopComposed(v86) )
      goto LABEL_611;
    v353 = *(_DWORD **)(v86 + 40);
    v354 = v353[7];
    v355 = v353[6];
    v356 = v355 ^ v351;
    v357 = v353[58];
    v358 = v352 ^ v357;
    v359 = v354 ^ v350;
    if ( !v359 && !v356 && !v358 )
      goto LABEL_611;
    v360 = 0;
    v361 = 0;
    v362 = 0;
    if ( (v359 & 0xB1CF0000) != 0 )
    {
      v360 = -16;
      v361 = v354;
      goto LABEL_605;
    }
    if ( (v356 & 0x4E27A9) != 0 )
    {
      v360 = -20;
      v361 = v355;
      goto LABEL_605;
    }
    if ( (v358 & 0x12C0) != 0 )
    {
      v360 = -268435456;
      v361 = v357;
LABEL_605:
      v362 = 1;
    }
    if ( v362 )
    {
      DirtyVisRgnTrackers(v86);
      v363 = *(_QWORD *)v86;
      v366 = (void *)ReferenceDwmApiPort(v365, v364);
      DwmAsyncChildStyleChange(v366, v363, v360, v361);
    }
    if ( (v359 & 0xC40000) != 0 || (v356 & 0x200A0381) != 0 )
    {
      WindowMargins::CheckForChanges(v86, 1LL);
      v88 = v86 + 40;
    }
    else
    {
LABEL_611:
      v88 = v86 + 40;
    }
  }
  *(_WORD *)(*(_QWORD *)v88 + 30LL) |= v541;
  if ( !v534 && !*(_QWORD *)v533[0] && (_BYTE)v521 != 64 && *(_QWORD *)(*(_QWORD *)v524[0] + 96LL) )
  {
    v596 = 0LL;
    v367 = v86;
    if ( *(_QWORD *)(v86 + 104) )
      v367 = *(_QWORD *)(v86 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v367, 16, 0LL);
    RtlInitUnicodeStringOrId(&v596, *(_QWORD *)(*(_QWORD *)v524[0] + 96LL));
    v368 = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 64LL), &v596);
    v534 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v533, v368);
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v86) )
    {
      v370 = SmartObjStackRef<tagMENU>::operator tagMENU *(v533);
      DestroyMenu(v370);
      v534 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v533, 0LL);
      goto LABEL_858;
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v533) )
      *(_QWORD *)&v561 = 0LL;
    else
      *(_QWORD *)&v561 = *(_QWORD *)SmartObjStackRef<tagMENU>::operator tagMENU *(v533);
  }
  v369 = (_QWORD *)(v86 + 168);
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 )
  {
    *(_QWORD *)(*(_QWORD *)v88 + 320LL) = SmartObjStackRef<tagMENU>::operator tagMENU *(v533);
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 152LL) = 0LL;
    *v369 = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v88 + 320LL) = 0LL;
    if ( *v369 )
    {
      v371 = (_QWORD *)(*v369 + 80LL);
      if ( *v371 == v86 )
        HMAssignmentUnlock(v371);
    }
    if ( (v534 || *(_QWORD *)v533[0]) && !*(_QWORD *)(*(_QWORD *)v533[0] + 80LL) )
    {
      v589[0] = *(_QWORD *)v533[0] + 80LL;
      v589[1] = v86;
      HMAssignmentLock(v589, 0LL);
    }
    v372 = v534;
    if ( v534 || (v372 = *(_QWORD **)v533[0]) != 0LL )
      *(_QWORD *)(*(_QWORD *)(v86 + 40) + 152LL) = v372[6];
    else
      *(_QWORD *)(*(_QWORD *)(v86 + 40) + 152LL) = 0LL;
    v594[0] = v86 + 168;
    v594[1] = v372;
    HMAssignmentLock(v594, 0LL);
  }
  v183 = *(unsigned __int8 *)(*(_QWORD *)v88 + 31LL);
  LOBYTE(v183) = v183 & 0xC0;
  if ( (_BYTE)v183 != 64 )
  {
    if ( (v531 & 4) != 0 )
    {
      LOBYTE(v184) = 1;
      CoreWindowProp::ChangeRole(v86, 1LL, v184);
    }
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 176LL) = *(_QWORD *)(v86 + 48);
    v590[0] = v86 + 200;
    v590[1] = v86;
    HMAssignmentLock(v590, 0LL);
    if ( !v519
      || (v377 = *((_QWORD *)v519 + 3), v519 == *(struct tagWND **)(v377 + 104))
      || (v441 = v519 == *(struct tagWND **)(*(_QWORD *)(v377 + 8) + 24LL), v378 = 0, v441) )
    {
      v378 = 1;
    }
    if ( v378 )
    {
      v380 = (__int64 *)(v86 + 120);
      *(_QWORD *)(*(_QWORD *)(v86 + 40) + 64LL) = 0LL;
      v591[0] = v86 + 120;
      v591[1] = 0LL;
      HMAssignmentLock(v591, 0LL);
    }
    else
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v519, v375, v376);
      if ( !(unsigned int)ValidateOwnerDepth(v86, NonChildAncestor) )
        goto LABEL_683;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)v88 + 236LL) = *(_DWORD *)(*((_QWORD *)NonChildAncestor + 5) + 236LL);
        SetOrClrWF(*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 232LL) & 0x40, v86, 55360LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v380 = (__int64 *)(v86 + 120);
      v597 = *(_OWORD *)LockPointer(v606, v86 + 120, NonChildAncestor);
      HMAssignmentLock(&v597, 1LL);
      v381 = *(_QWORD *)(v86 + 120);
      if ( v381 && ((*(_BYTE *)(*(_QWORD *)(v381 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*(_QWORD *)v88 + 236LL) != 1) )
      {
        SetOrClrWF(1LL, v86, 2056LL, 1LL);
        v381 = *v380;
      }
      if ( v523 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v381 )
        {
          v382 = *(_QWORD *)(v381 + 16);
          if ( v382 != v517 )
            zzzAttachThreadInput(v517, v382, 1);
        }
      }
    }
    if ( !*v380 )
    {
      v383 = 0;
      if ( (*(_DWORD *)(v86 + 320) & 0x1000) != 0 )
      {
        v545 = 0LL;
        if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(v86, &v545) )
          v383 = *(_DWORD *)(v545 + 28);
      }
      v374 = (_DWORD *)(v86 + 320);
      if ( v383
        || ((v384 = *(_DWORD *)(*(_QWORD *)v88 + 236LL), v384 > 0xF) || (v385 = 44800, !_bittest(&v385, v384)))
        && (v374 = (_DWORD *)(v86 + 320), (*(_BYTE *)(*(_QWORD *)v88 + 232LL) & 0x40) == 0) )
      {
LABEL_672:
        v373 = v519;
        if ( v519 && v519 == *(struct tagWND **)(*((_QWORD *)v519 + 3) + 104LL) )
        {
          v388 = v517;
        }
        else
        {
          v373 = 0LL;
          v519 = 0LL;
          v386 = PtiCurrentShared();
          if ( v386 )
          {
            v387 = *((_QWORD *)v386 + 58);
            if ( v387 )
            {
              v373 = *(struct tagWND **)(v387 + 24);
              v519 = v373;
            }
          }
          v388 = v517;
          *(_QWORD *)&v585 = *(_QWORD *)(v517 + 416);
          *(_QWORD *)(v517 + 416) = &v585;
          *((_QWORD *)&v585 + 1) = v373;
          if ( v373 )
            HMLockObject(v373);
          v538 = 1;
        }
        if ( !v552 )
          goto LABEL_688;
        v389 = (_QWORD *)(v388 + 1432);
        if ( *v389 )
          goto LABEL_683;
        SetOrClrWF(1LL, v86, 55424LL, 1LL);
        v390 = v517;
        *(_DWORD *)(v517 + 1272) |= 0x40000u;
        *(_DWORD *)(*(_QWORD *)(v390 + 432) + 396LL) |= 0x2000000u;
        if ( *(_QWORD *)(v390 + 1424)
          || (KernelEvent = CreateKernelEvent(1LL, 0LL), v183 = v517, (*(_QWORD *)(v517 + 1424) = KernelEvent) != 0LL) )
        {
          v592[0] = v389;
          v592[1] = v86;
          HMAssignmentLock(v592, 0LL);
          goto LABEL_688;
        }
        v522 = 7;
        v259 = v183;
LABEL_859:
        v456 = (__int64 *)(v86 + 104);
        v457 = *(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0x10;
        if ( v538 )
          ThreadUnlock1(v183, v182, v184);
        SetWF(v86, 1152LL);
        SetWF(v86, 896LL);
        if ( v457 )
          SetVisible((struct tagWND *)v86);
        if ( *v456 )
        {
          if ( v457 )
            zzzLockDisplayAreaAndInvalidateDCCache(*v456, 16, 0LL);
          if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v86) )
          {
            v459 = *(_QWORD *)(v458 + 16);
            if ( v259 != v459 )
              zzzAttachThreadInput(*v571, v459, 0);
          }
          UnlinkWindow(v86, *v456);
        }
        ClassUnlock(*(struct tagCLS **)v524[0]);
        xxxFreeWindow((struct tagWND *)v86);
        if ( v522 )
          TraceLoggingCreateWindowFailed(
            v522,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        goto LABEL_65;
      }
      WindowCloakStateComponentUIAware = 2;
    }
    v374 = (_DWORD *)(v86 + 320);
    goto LABEL_672;
  }
  v373 = v519;
  if ( !v519 )
    goto LABEL_858;
  if ( v551 )
  {
LABEL_683:
    UserSetLastError(87LL);
    goto LABEL_858;
  }
  v374 = (_DWORD *)(v86 + 320);
LABEL_688:
  if ( (*v374 & 0x1000000) != 0 )
  {
    v553 = *(_QWORD *)(v86 + 104);
    UnlinkWindow(v86, v553);
  }
  if ( !v373
    || (v392 = *((_QWORD *)v373 + 3), v373 == *(struct tagWND **)(v392 + 104))
    || (v441 = v373 == *(struct tagWND **)(*(_QWORD *)(v392 + 8) + 24LL), v393 = 0, v441) )
  {
    v393 = 1;
  }
  if ( !v393 )
  {
    *(_DWORD *)(*(_QWORD *)v88 + 236LL) = *(_DWORD *)(*((_QWORD *)v373 + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)v373 + 5) + 232LL) & 0x40, v86, 55360LL, 1LL);
  }
  if ( v373 )
  {
    v394 = *(_QWORD *)v88;
    if ( *(char *)(*(_QWORD *)v88 + 19LL) >= 0 )
    {
      v395 = *((_QWORD *)v373 + 5);
      if ( *(char *)(v395 + 19) >= 0 )
      {
        v182 = v373;
        v396 = (_QWORD *)v86;
        v183 = 1LL;
        do
        {
          v397 = 0LL;
          v398 = *((_QWORD *)v182 + 3);
          if ( v398 )
          {
            v399 = *(_QWORD *)(v398 + 8);
            if ( v399 )
              v397 = *(struct tagWND **)(v399 + 24);
          }
          if ( v182 == v397 )
            break;
          v182 = (struct tagWND *)*((_QWORD *)v182 + 13);
          v183 = (unsigned int)(v183 + 1);
        }
        while ( v182 );
        v184 = (unsigned int)v183;
        if ( *(_QWORD *)(v86 + 112) )
        {
          while ( 1 )
          {
LABEL_706:
            while ( v396[14] )
            {
              v396 = (_QWORD *)v396[14];
              LODWORD(v183) = v183 + 1;
            }
            v182 = (struct tagWND *)v396[11];
            if ( !v182 )
              break;
            v396 = (_QWORD *)v396[11];
          }
          if ( (unsigned int)v183 > (unsigned int)v184 )
            v184 = (unsigned int)v183;
          while ( 1 )
          {
            v396 = (_QWORD *)v396[13];
            v183 = (unsigned int)(v183 - 1);
            if ( v396 == (_QWORD *)v86 )
              break;
            v182 = (struct tagWND *)v396[11];
            if ( v182 )
            {
              v396 = (_QWORD *)v396[11];
              goto LABEL_706;
            }
          }
        }
        if ( (unsigned int)v184 <= gNestedWindowLimit )
        {
          v400 = *((_QWORD *)v373 + 3);
          if ( v400 == *(_QWORD *)(v86 + 24) )
          {
            if ( v373 == *(struct tagWND **)(v400 + 104)
              || (v441 = v373 == *(struct tagWND **)(*(_QWORD *)(v400 + 8) + 24LL), v401 = 0, v441) )
            {
              v401 = 1;
            }
            if ( v401
              || (*(_BYTE *)(v395 + 233) & 8) != 0
              || *(_DWORD *)(v395 + 236) == *(_DWORD *)(v394 + 236)
              && (v183 = *(unsigned __int8 *)(v394 + 232),
                  LOBYTE(v183) = *(_BYTE *)(v395 + 232) ^ v183,
                  (v183 & 0x40) == 0) )
            {
              v403 = v373;
              while ( (struct tagWND *)v86 != v403 )
              {
                v403 = (struct tagWND *)*((_QWORD *)v403 + 13);
                if ( !v403 )
                {
                  v404 = *((_QWORD *)v373 + 15);
                  if ( !v404 )
                  {
LABEL_733:
                    v405 = 1;
                    goto LABEL_735;
                  }
                  while ( v86 != v404 )
                  {
                    v404 = *(_QWORD *)(v404 + 120);
                    if ( !v404 )
                      goto LABEL_733;
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
    UserSetLastError(87LL);
    v405 = 0;
LABEL_735:
    if ( !v405 )
    {
      v522 = 9;
      goto LABEL_858;
    }
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 48LL) = *((_QWORD *)v373 + 6);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v86 + 40) + 48LL) = 0LL;
  }
  v593[0] = v86 + 104;
  v593[1] = v373;
  HMAssignmentLock(v593, 0LL);
  if ( v373 )
    v409 = (int)(*(_DWORD *)(*((_QWORD *)v373 + 5) + 232LL) << 22) >> 31;
  else
    v409 = 0;
  v410 = (*(_DWORD *)(*(_QWORD *)v88 + 232LL) & 0x200u) >> 9;
  if ( (_DWORD)v410 != (v409 != 0) && ((*v374 & 0x1000) == 0 || v409) )
  {
    SetOrClrWF(v409, v86, 55554LL, 1LL);
    v411 = *(_QWORD **)(v86 + 112);
    if ( v411 )
    {
LABEL_746:
      while ( v411 != (_QWORD *)v86 )
      {
        if ( (*v374 & 0x1000) == 0 || v409 )
        {
          v412 = 0;
          SetOrClrWF(v409, v411, 55554LL, 1LL);
        }
        else
        {
          v412 = 1;
        }
        v413 = (_QWORD *)v411[14];
        if ( !v413 || v412 )
        {
          v413 = (_QWORD *)v411[11];
          if ( !v413 )
          {
            while ( 1 )
            {
              v411 = (_QWORD *)v411[13];
              if ( !v411 )
                goto LABEL_760;
              v413 = (_QWORD *)v411[11];
              if ( v413 )
                break;
              if ( v411 == (_QWORD *)v86 )
                goto LABEL_746;
            }
          }
        }
        v411 = v413;
      }
    }
  }
LABEL_760:
  if ( (*(_DWORD *)(*(_QWORD *)v88 + 288LL) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(v86) )
    {
      v415 = *v374 >> 19;
      goto LABEL_774;
    }
    v416 = v86;
    do
    {
      v417 = 0;
      v406 = *(_QWORD *)(v416 + 104);
      if ( v406 )
      {
        v418 = 0LL;
        v407 = *(_QWORD *)(v416 + 24);
        if ( v407 )
        {
          v408 = *(_QWORD *)(v407 + 8);
          if ( v408 )
            v418 = *(_QWORD *)(v408 + 24);
        }
        if ( v406 == v418 )
          v417 = 1;
      }
      if ( v417 )
        break;
      v416 = *(_QWORD *)(v416 + 104);
    }
    while ( v406 );
    v419 = 0;
    if ( v416 )
    {
      v415 = *(_DWORD *)(v416 + 320) >> 20;
LABEL_774:
      v419 = v415 & 1;
    }
    v410 = *(_DWORD *)(v414 + 232) & 0xFFFFFBFF | (v419 << 10);
    *(_DWORD *)(v414 + 232) = v410;
  }
  v420 = v519;
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 21LL) & 1) == 0 )
  {
    v410 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 8LL);
    if ( (v410 & 0x80u) != 0LL && (*(_BYTE *)(*((_QWORD *)v519 + 5) + 31LL) & 2) == 0 )
      SetOrClrWF(0LL, v86, 3846LL, 1LL);
  }
  v421 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *v374 |= 0x800u;
  if ( v421 )
  {
    v422 = zzzSetWindowCompositionCloak((struct tagWND *)v86, 0LL, v421);
    if ( v422 < 0 )
    {
      v423 = RtlNtStatusToDosError(v422);
      UserSetLastError(v423);
      v522 = 8;
      goto LABEL_858;
    }
  }
  if ( !*(_QWORD *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v410, v406, v407, v408)
    || (v428 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v425, v424, v426, v427),
        !ExIsResourceAcquiredSharedLite(*v428)) )
  {
    v528 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) == 0 )
    {
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      goto LABEL_789;
    }
LABEL_960:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
LABEL_789:
  v432 = PsGetCurrentThreadWin32Thread(v430, v429, v431);
  ++*(_DWORD *)(v432 + 48);
  if ( v553 )
    zzzLockDisplayAreaAndInvalidateDCCache(v553, 16, 0LL);
  if ( v420 )
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v420, 16, 0LL);
  v436 = PsGetCurrentThreadWin32Thread(v434, v433, v435);
  --*(_DWORD *)(v436 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v86) )
  {
    v437 = *(struct tagWND **)(v86 + 104);
    if ( v437 )
    {
      if ( v517 != *((_QWORD *)v437 + 2) )
      {
        if ( v420 != v437 )
        {
          v528 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2153LL);
        }
        zzzAttachThreadInput(v517, *(_QWORD *)(*(_QWORD *)(v86 + 104) + 16LL), 1);
        v438 = 0LL;
        v439 = *(_QWORD *)(v86 + 24);
        if ( v439 )
          v438 = *(struct tagWND **)(v439 + 104);
        v440 = *(struct tagWND **)(v86 + 104);
        if ( v440 != v438
          && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v440 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)v88 + 288LL)) & 0xF) != 0
          && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v86, v440) )
        {
          xxxForceUpdateProcessDpiAwarenessContext(
            (struct tagWND *)v86,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 104) + 40LL) + 288LL));
        }
      }
    }
  }
  if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
  {
    if ( v546 != (unsigned __int16)gatomMessage )
    {
      v441 = v546 == 32769;
      goto LABEL_808;
    }
  }
  else if ( v546 != (unsigned __int16)gatomMessage && v546 != 32769 )
  {
    v441 = v546 == 32774;
LABEL_808:
    if ( !v441 && !*(_DWORD *)(v517 + 904) )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v517 + 448) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      xxxUpdateInputHangInfo(0LL, 1LL);
    }
  }
  xxxAdjustSize((struct tagWND *)v86);
  ConstrainWindowSIZERECT(&v532);
  if ( *(_QWORD *)(v86 + 24) && (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0x40) == 0 && *(char *)(*(_QWORD *)v88 + 24LL) >= 0 )
    xxxCheckFullScreen((struct tagWND *)v86, (struct tagSIZERECT *)&v532);
  v442 = DWORD2(v532);
  if ( SDWORD2(v532) < 0 )
    v442 = 0;
  DWORD2(v532) = v442;
  v443 = HIDWORD(v532);
  if ( v532 < 0 )
    v443 = 0;
  HIDWORD(v532) = v443;
  RECTFromSIZERECT(*(_QWORD *)v88 + 88LL, &v532);
  if ( (_BYTE)v521 != 64 )
  {
    if ( v539 )
    {
      v444 = GetInheritedMonitor((struct tagWND *)v86);
      goto LABEL_826;
    }
    goto LABEL_827;
  }
  v444 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v420 + 5) + 256LL));
LABEL_826:
  v445 = (__int64 *)v444;
  if ( v444 )
  {
LABEL_828:
    v446 = *v445;
  }
  else
  {
LABEL_827:
    v445 = (__int64 *)MonitorFromRect(*(_QWORD *)v88 + 88LL, 2LL);
    v446 = 0LL;
    if ( v445 )
      goto LABEL_828;
  }
  if ( v446 != *(_QWORD *)(*(_QWORD *)v88 + 256LL) )
  {
    *(_QWORD *)(*(_QWORD *)v88 + 256LL) = v446;
    *(_WORD *)(*(_QWORD *)v88 + 284LL) = *(_WORD *)(v445[5] + 60);
    v447 = *(_DWORD **)(v86 + 288);
    if ( v447 )
    {
      --*v447;
      v448 = *(_DWORD **)(v86 + 288);
      if ( !*v448 )
        Win32FreePool(v448);
      *(_QWORD *)(v86 + 288) = 0LL;
    }
    v449 = (_DWORD *)v445[16];
    *(_QWORD *)(v86 + 288) = v449;
    ++*v449;
    if ( (_BYTE)v521 != 64 )
      UpdateTopLevelWindowDPITransform(v86, v445);
  }
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v86) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v450 = RecreateRedirectionBitmap((struct tagWND *)v86, 0, 0, 0, 0, 0LL);
    v451 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( v450 < 0 )
    {
      GreUnlockVisRgn(v451);
      v522 = 3;
      goto LABEL_858;
    }
    GreUnlockVisRgn(v451);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v524[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v524[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v86, 2848LL);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v453 = 49152LL;
    if ( !StyleWindow )
      v453 = 0x8000LL;
    CacheDC = CreateCacheDC(v86, v453, 0LL);
    v455 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( !CacheDC )
    {
      GreUnlockVisRgn(v455);
      v522 = 10;
      goto LABEL_858;
    }
    GreUnlockVisRgn(v455);
  }
  if ( (v518 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)v88 + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v86) < 0 )
  {
    v522 = 11;
    goto LABEL_858;
  }
  if ( (v518 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v86 + 104), 2818LL) )
  {
    SetWF(v86, 2818LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v86) < 0 )
    {
      ClrWF(v86, 2818LL);
      v522 = 12;
      goto LABEL_858;
    }
  }
  *((_QWORD *)&v562 + 1) = __PAIR64__(v526, v516);
  *(_QWORD *)&v562 = __PAIR64__(v529, HIDWORD(v529));
  if ( !xxxSendMessage(v86, 129LL, 0LL, &v560) )
  {
LABEL_858:
    v259 = v517;
    goto LABEL_859;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v86 + 136) + 8LL) + 9LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v86);
    SmartObjStackRef<tagMENU>::operator=(v533, SystemMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v533) )
    {
      v599 = 0LL;
      v600 = 0LL;
      v461 = SmartObjStackRef<tagMENU>::operator tagMENU *(v533);
      ThreadLock(v461, &v599);
      xxxDeleteMenu(v533, 5LL, 1024LL);
      xxxDeleteMenu(v533, 5LL, 1024LL);
      ThreadUnlock1(v463, v462, v464);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 18LL) & 2) != 0
    && (!*((_QWORD *)&v565 + 1) || (_DWORD)v565 || *(_QWORD *)(v86 + 184)) )
  {
    v598 = 0LL;
    *((_QWORD *)&v563 + 1) = *(_QWORD *)(v86 + 184);
    v565 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v86 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v598);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v465 = (_QWORD *)(v517 + 784);
    if ( !*(_QWORD *)(v517 + 784) && (*v374 & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v86, v523, v548[0]);
      v548[0] = (void *)(v517 + 784);
      v548[1] = DefaultImeWindow;
      HMAssignmentLock(v548, 0LL);
      v467 = *v465;
      if ( *v465 )
      {
        v601 = 0LL;
        v602 = 0LL;
        ThreadLockAlways(v467, &v601);
        xxxSendMessage(*v465, 647LL, 33LL, 0LL);
        ThreadUnlock1(v469, v468, v470);
      }
      v471 = (**(_DWORD **)(v517 + 480) >> 6) & 1;
      v584 = v471;
      v472 = *v465;
      if ( *v465 && v471 )
      {
        v603 = 0LL;
        v604 = 0LL;
        ThreadLock(v472, &v603);
        xxxSendMessage(*v465, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(v517 + 440) + 40LL));
        **(_QWORD **)(v517 + 480) &= ~0x40uLL;
        ThreadUnlock1(v474, v473, v475);
      }
    }
  }
  v476 = v519;
  if ( v519 && ((*v374 & 0x1000000) == 0 || *(struct tagWND **)(v86 + 104) == v519) )
  {
    v477 = PWInsertAfter(v544);
    v478 = v477;
    if ( (unsigned __int64)(v477 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v477 + 104) != *(_QWORD *)(v86 + 104) )
      v478 = (_BYTE)v521 == 64;
    v479 = *(_QWORD *)(v86 + 120);
    if ( v479 )
    {
      *(_DWORD *)(*(_QWORD *)v88 + 236LL) = *(_DWORD *)(*(_QWORD *)(v479 + 40) + 236LL);
      SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v86 + 120) + 40LL) + 232LL) & 0x40, v86, 55360LL, 1LL);
    }
    if ( !(unsigned int)ValidateNewParent(v86, v519, 1LL) )
    {
      v483 = 9;
      goto LABEL_922;
    }
    UnlinkWindow(v86, *(_QWORD *)(v86 + 104));
    v481 = *(_QWORD *)v88;
    v480 = v519;
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) != 0x40
      && v519 != *(struct tagWND **)(*((_QWORD *)v519 + 3) + 104LL) )
    {
      if ( (*(_BYTE *)(v481 + 24) & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v86, v519);
          if ( TopMostInsertAfter )
            v478 = TopMostInsertAfter;
LABEL_912:
          v480 = v519;
        }
      }
      else
      {
        if ( !v478 )
          goto LABEL_908;
        v484 = 0;
        if ( v478 >= 0xFFFFFFFFFFFFFFFEuLL || v478 == 1 )
          v484 = 1;
        if ( !v484 && (*(_BYTE *)(*(_QWORD *)(v478 + 40) + 24LL) & 8) != 0 )
        {
LABEL_908:
          v478 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware((struct tagWND *)v86);
          goto LABEL_912;
        }
      }
    }
    if ( v478 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v483 = 13;
      goto LABEL_922;
    }
    LinkWindow((struct tagWND *)v86);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v519, 16, 0LL);
    v476 = v519;
  }
  v486 = *(_QWORD *)v88;
  if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v476 + 5) + 26LL) & 0x40) != 0 )
  {
    v487 = *(_DWORD *)(v486 + 96);
    v488 = *(_DWORD *)(v486 + 88);
    v489 = v547;
    *(_DWORD *)(v486 + 96) = DWORD2(v547) + v547 - v488;
    *(_DWORD *)(*(_QWORD *)v88 + 88LL) = v488 + *(_DWORD *)(*(_QWORD *)v88 + 96LL) - v487;
  }
  else
  {
    v489 = v547;
  }
  v626 = *(_OWORD *)(*(_QWORD *)v88 + 88LL);
  xxxSendTransformableMessage(v86, 131, 0, (unsigned int)&v626, 0);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldleft<long>::operator=(v86 + 132, &v626);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldtop<long>::operator=(v86 + 133, (char *)&v626 + 4);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldright<long>::operator=(v86 + 134, (char *)&v626 + 8);
  tagWND::RedirectedRecttagWNDrcClient::RedirectedFieldbottom<long>::operator=(v86 + 135, (char *)&v626 + 12);
  if ( xxxSendMessage(v86, 1LL, 0LL, &v560) != -1 )
  {
    SetWF(v86, 1920LL);
    xxxConsiderPreferredDpiChange((struct tagWND *)v86);
    if ( (unsigned int)IsWindowDesktopComposed(v86) )
    {
      v492 = *(_DWORD *)(*(_QWORD *)v88 + 28LL);
      v493 = *(_QWORD *)v86;
      v494 = (void *)ReferenceDwmApiPort(v491, v490);
      DwmAsyncChildStyleChange(v494, v493, -16, v492);
      DwmChildRectChange((struct tagWND *)v86);
      DirtyVisRgnTrackers(v86);
      v497 = (void *)ReferenceDwmApiPort(v496, v495);
      DwmAsyncOwnerChange(v497);
    }
    xxxWindowEvent(0x8000u, 0);
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 16LL) & 0x10) == 0 )
    {
      xxxSendSizeMessage(v86);
      if ( v519 )
      {
        DesktopWindow = GetDesktopWindow(v86, v519);
        if ( DesktopWindow != v499 )
        {
          LODWORD(v626) = v626 - v489;
          DWORD1(v626) -= DWORD1(v547);
        }
      }
      xxxSendTransformableMessage(v86, 3, 0, (unsigned __int16)v626 | (WORD2(v626) << 16), 0);
    }
    v500 = *(_BYTE *)(*(_QWORD *)v88 + 31LL);
    if ( (v500 & 0x20) != 0 )
    {
      SetMinimize((struct tagWND *)v86);
      v501 = 7LL;
    }
    else
    {
      if ( (v500 & 1) == 0 )
        goto LABEL_940;
      ClrWF(v86, 3841LL);
      v501 = 3LL;
    }
    xxxMinMaximize(v86, v501);
LABEL_940:
    CalcWindowFullScreen((struct tagWND *)v86);
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)v88 + 24LL) & 4) == 0 )
    {
      v502 = *(_QWORD *)(v86 + 104);
      if ( v502 )
      {
        *(_QWORD *)&v587 = *(_QWORD *)(v517 + 416);
        *(_QWORD *)(v517 + 416) = &v587;
        *((_QWORD *)&v587 + 1) = v502;
        HMLockObject(v502);
        xxxSendTransformableMessage(
          *(_QWORD *)(v86 + 104),
          528,
          (*(unsigned __int16 *)(*(_QWORD *)v88 + 320LL) << 16) | 1,
          *(_QWORD *)v86,
          0);
        ThreadUnlock1(v504, v503, v505);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v86);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow((struct tagWND *)v86, v537 | gdwPUDFlags & 0x10000);
    v508 = *(_QWORD *)v88;
    if ( (*(_BYTE *)(*(_QWORD *)v88 + 31LL) & 0xC0) == 0 || (*(_BYTE *)(v508 + 26) & 4) != 0 )
    {
      v509 = v530;
      v508 = *((unsigned int *)*v530 + 173);
      if ( (_DWORD)v508 )
      {
        xxxSendMessage(v86, 50LL, (unsigned int)v508, 0LL);
        *((_DWORD *)*v509 + 173) = 0;
      }
    }
    if ( v538 )
      ThreadUnlock1(v508, v506, v507);
    ClassUnlock(*(struct tagCLS **)v524[0]);
    v513 = ThreadUnlock1(v511, v510, v512);
    v514 = v513;
    if ( !v513 || (*(_BYTE *)(_HMPheFromObject(v513) + 25) & 1) != 0 )
      v514 = 0LL;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v533);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v524);
    return v514;
  }
  v483 = v522;
LABEL_922:
  if ( v538 )
    ThreadUnlock1(v481, v480, v482);
  if ( ThreadUnlock1(v481, v480, v482) )
    xxxDestroyWindow(v86);
  ClassUnlock(*(struct tagCLS **)v524[0]);
  if ( v483 )
    TraceLoggingCreateWindowFailed(
      v483,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_65:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v533);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v524);
  return 0LL;
}
