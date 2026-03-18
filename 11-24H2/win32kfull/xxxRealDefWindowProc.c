/*
 * XREFs of xxxRealDefWindowProc @ 0x140252B3C
 * Callers:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140165890 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140032E88 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x140036DD8 (xxxDWP_EraseBkgnd.c)
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     xxxInternalDoSyncPaint @ 0x140047490 (xxxInternalDoSyncPaint.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     IsImmersiveApplicationBandId @ 0x1400680D4 (IsImmersiveApplicationBandId.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     FindNCHit @ 0x14006C5C4 (FindNCHit.c)
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     _SetMenuDefaultItem @ 0x14006FBFC (_SetMenuDefaultItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     DefSetText @ 0x140073730 (DefSetText.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x140073AE8 (DesktopVerifyHeapLargeUnicodeString.c)
 *     xxxAdjustSize @ 0x140074BF8 (xxxAdjustSize.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140089F18 (xxxSetCapture.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14009A4C4 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxDefPointerProc @ 0x14009AE2C (xxxDefPointerProc.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxMessageBeep @ 0x140103034 (xxxMessageBeep.c)
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     xxxGetTitleBarInfoEx @ 0x14010AFD8 (xxxGetTitleBarInfoEx.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     WCSToMBEx @ 0x14011C884 (WCSToMBEx.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140171C64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     _IsDescendant @ 0x14017B3BC (_IsDescendant.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x140185654 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x14018D23C (TextCopy.c)
 *     DWP_SetHotKey @ 0x14019DDF4 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x14019DF5C (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 *     DWP_GetIcon @ 0x1401BFAEC (DWP_GetIcon.c)
 *     xxxDWP_UpdateUIState @ 0x1401C43F4 (xxxDWP_UpdateUIState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x1401CFBA0 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     xxxLoadUserApiHook @ 0x1401D111C (xxxLoadUserApiHook.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxClientShutdown @ 0x1401D608C (xxxClientShutdown.c)
 *     xxxHandleWindowPosChanged @ 0x1401F2194 (xxxHandleWindowPosChanged.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401F7FA4 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagM.c)
 *     MNClearCachedPopupSizes @ 0x1401F815C (MNClearCachedPopupSizes.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x140207DC4 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x140214388 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AE.c)
 *     xxxSendHelpMessage @ 0x14021E310 (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x14021F008 (GetContextHelpId.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x140232970 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140252758 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x140280898 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB060 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     xxxClientDoScrollMenu @ 0x1402BBC8C (xxxClientDoScrollMenu.c)
 *     xxxClientInitPSBInfo @ 0x1402BC5D8 (xxxClientInitPSBInfo.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402C8D14 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDll @ 0x1402C8DBC (WPP_RECORDER_AND_TRACE_SF_qDll.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 *     _InitPwSB @ 0x1402E8494 (_InitPwSB.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, __int64 a3, struct tagDRAWITEMSTRUCT *a4)
{
  unsigned int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  ULONG v16; // ecx
  ULONG v17; // ecx
  __int64 v18; // r12
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v20; // r8d
  char **v21; // rdi
  int v22; // eax
  signed int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  struct _LARGE_UNICODE_STRING *v26; // rax
  char *v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  struct tagWND *v32; // rbx
  __int64 v33; // rdx
  ULONG_PTR *v34; // rcx
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  struct tagTHREADINFO **v40; // rbx
  __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  unsigned int v47; // edi
  struct tagWND ***v48; // rax
  __int64 v49; // rdx
  int v50; // r14d
  int TitleBarInfo; // eax
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned int v54; // edi
  unsigned int v55; // edi
  unsigned int ContextHelpId; // r9d
  __int64 v57; // r14
  int v58; // r14d
  HICON updated; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct tagWND *v62; // r12
  __int64 v63; // rbx
  unsigned int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct tagTHREADINFO *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int NCHit; // edi
  char *v77; // rsi
  struct tagTHREADINFO *v78; // rax
  Scrollbar::NonClient *v79; // rcx
  __int64 v80; // rdx
  char v81; // bl
  struct tagTHREADINFO **v82; // rbx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  ULONG_PTR *v85; // rcx
  struct tagBWL *v86; // rax
  struct tagBWL *v87; // r15
  __int64 *v88; // rbx
  __int64 v89; // rcx
  ULONG_PTR v90; // rax
  __int64 v91; // rdx
  unsigned int v92; // edi
  unsigned int v93; // edi
  unsigned int v94; // edi
  unsigned int v95; // edi
  __int64 v96; // rdx
  __int64 v97; // rcx
  HDC v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  Scrollbar::NonClient *v103; // rcx
  int inited; // eax
  __int64 v105; // r8
  __int64 v106; // r9
  struct tagTHREADINFO *v107; // rdi
  int v108; // ecx
  __int64 v109; // rcx
  int v110; // edi
  unsigned int v111; // eax
  unsigned int v112; // ebx
  __int64 v113; // r9
  __int16 v114; // r13
  struct tagTHREADINFO *v115; // rax
  __int64 v116; // rcx
  struct tagTHREADINFO *v117; // rbx
  unsigned __int64 v118; // r13
  int v119; // eax
  struct tagTHREADINFO *v120; // rcx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  struct tagDRAWITEMSTRUCT *v123; // r9
  unsigned __int64 v124; // r8
  unsigned int v125; // edx
  struct tagWND *v126; // rcx
  struct tagTHREADINFO *v127; // rax
  HDC DCEx; // rbx
  struct tagTHREADINFO *v129; // rax
  __int64 v130; // rbx
  int v131; // ecx
  struct tagTHREADINFO **NonChildAncestor; // rdi
  __int64 v133; // rdx
  __int64 v134; // rcx
  struct tagWND *v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rdx
  int v138; // edi
  __int64 v139; // rcx
  const struct tagUIPI_INFO *v140; // r8
  ULONG_PTR *v141; // rdx
  bool v142; // al
  BOOL v143; // edi
  struct tagTHREADINFO *v144; // r12
  __int64 v145; // r8
  __int64 *v146; // r8
  const struct tagWND *v147; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v149; // rdx
  __int64 v150; // rax
  struct tagWND *v151; // rbx
  __int64 v152; // rdx
  __int64 v153; // rdx
  unsigned int v154; // edi
  unsigned int v155; // edi
  unsigned int v156; // edi
  unsigned int v157; // edi
  __int64 v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // r14
  unsigned int v161; // ebx
  ULONG_PTR v162; // r12
  __int16 v163; // di
  _DWORD *v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // r8
  _DWORD *v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // rdx
  unsigned int v171; // edi
  unsigned int v172; // edi
  unsigned int v173; // edi
  __int64 v174; // rcx
  int v175; // ebx
  __int64 v176; // rdx
  __int64 v177; // rcx
  int v178; // ebx
  __int64 v179; // rdx
  __int64 UserSessionState; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rcx
  unsigned __int16 v193; // dx
  __int64 v194; // rdx
  unsigned __int16 v195; // r13
  struct tagTHREADINFO *v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  unsigned int v199; // ebx
  __int64 SysMenu; // rax
  __int64 v201; // rcx
  _QWORD *v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  unsigned int v206; // edi
  unsigned int v207; // edi
  unsigned int v208; // edi
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rcx
  struct tagTHREADINFO *v212; // rcx
  __int64 v213; // rcx
  int v214; // edi
  struct tagTHREADINFO *v215; // rbx
  __int64 v216; // rdx
  __int64 v217; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v218; // [rsp+20h] [rbp-138h]
  ULONG v219; // [rsp+28h] [rbp-130h]
  int v220; // [rsp+40h] [rbp-118h]
  char v221; // [rsp+60h] [rbp-F8h]
  bool v222; // [rsp+61h] [rbp-F7h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-F0h] BYREF
  ULONG BytesInMultiByteString[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v225[2]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD *v226; // [rsp+90h] [rbp-C8h]
  ULONG_PTR v227[2]; // [rsp+98h] [rbp-C0h] BYREF
  _OWORD v228[2]; // [rsp+A8h] [rbp-B0h] BYREF
  __int128 v229; // [rsp+C8h] [rbp-90h]
  ULONG_PTR v230[2]; // [rsp+E0h] [rbp-78h] BYREF
  ULONG_PTR v231; // [rsp+F0h] [rbp-68h] BYREF
  int v232; // [rsp+F8h] [rbp-60h]
  _QWORD v233[3]; // [rsp+100h] [rbp-58h] BYREF

  v6 = a2;
  BugCheckParameter3[0] = (ULONG_PTR)a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v225, a2);
  if ( a1 == (struct tagWND *)-1LL || v6 > 0x400 )
    goto LABEL_463;
  if ( v6 > 0xAC )
  {
    if ( v6 > 0x205 )
    {
      if ( v6 > 0x245 )
      {
        if ( v6 > 0x317 )
        {
          v206 = v6 - 793;
          if ( v206 )
          {
            v207 = v206 - 2;
            if ( v207 )
            {
              v208 = v207 - 36;
              if ( v208 )
              {
                if ( v208 == 10 && a3 )
                {
                  v209 = *((_QWORD *)a1 + 13);
                  v210 = v209 ? *(_QWORD *)(v209 + 16) : 0LL;
                  if ( v210 && *(struct tagWND **)(v210 + 1592) == a1 )
                    xxxSetFocus(a1, v8);
                }
                goto LABEL_463;
              }
              TitleBarInfo = xxxGetTitleBarInfoEx(a1, a4);
            }
            else
            {
              if ( !IsInsideUserApiHook(v9, v8) )
                goto LABEL_463;
              v212 = PtiCurrent(v211, v8);
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)v212 + 132, 0, 0) & 1) != 0 )
                goto LABEL_463;
              TitleBarInfo = xxxLoadUserApiHook((__int64)v212, v8);
            }
            goto LABEL_453;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
          {
            if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
            {
              v214 = 0;
              v215 = PtiCurrent(v213, v8);
              v8 = **((_QWORD **)PtiCurrent(v217, v216) + 63);
              if ( ((*((_DWORD *)v215 + 180) | *(_DWORD *)(v8 + 16)) & 0x800) != 0 )
                LOBYTE(v214) = (unsigned int)xxxCallHook(12LL, a3, (__int64)a4, 10) != 0;
              if ( !v214 )
                PostShellHookMessagesEx((LastWokenThread *)0xC, (__int64)a4);
            }
            goto LABEL_463;
          }
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v233, (__int64 *)a1 + 13);
          v83 = xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), 793LL, a3, a4, 0, 0, 0LL, 1, 1);
          v85 = v233;
          goto LABEL_457;
        }
        if ( v6 == 791 )
        {
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, (__int64)a4);
          goto LABEL_453;
        }
        if ( v6 != 582 && v6 != 583 && v6 != 590 && v6 != 591 )
        {
          if ( v6 != 787 )
            goto LABEL_463;
          v77 = (char *)a1 + 40;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
            || *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18944)
            && !(unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 0LL) )
          {
            goto LABEL_463;
          }
          goto LABEL_423;
        }
      }
      else if ( v6 != 581 )
      {
        if ( v6 <= 0x22A )
        {
          if ( v6 == 554 )
          {
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
            return 1162627398LL;
          }
          if ( v6 != 522 )
          {
            if ( v6 == 524 )
            {
LABEL_230:
              v114 = 0;
              if ( WORD1(a3) == 1 )
              {
                v114 = 1;
              }
              else if ( WORD1(a3) == 2 )
              {
                v114 = 2;
LABEL_396:
                v195 = v114 | 0x8000;
                if ( v6 != 524 )
                {
                  v196 = PtiCurrent((unsigned int)WORD1(a3) - 1, v8);
                  LOWORD(a3) = GetMouseKeyFlags(*((_QWORD *)v196 + 59));
                }
                v113 = (unsigned __int16)a3 | ((unsigned __int64)v195 << 16);
                v220 = 1;
                v194 = 793LL;
                goto LABEL_384;
              }
              if ( !v114 )
                goto LABEL_463;
              goto LABEL_396;
            }
            if ( v6 != 526 )
            {
              if ( v6 - 536 > 1 )
                goto LABEL_463;
              goto LABEL_165;
            }
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_463;
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v227, (__int64 *)a1 + 13);
LABEL_401:
          xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), v6, a3, a4, 0, 0, 0LL, 1, 1);
          v34 = v227;
          goto LABEL_402;
        }
        if ( v6 == 555 )
        {
          v199 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
          return ((unsigned __int64)v199 >> 4) & 1;
        }
        if ( v6 == 576 )
        {
          if ( *((struct tagDRAWITEMSTRUCT **)PtiCurrent(v9, v8) + 149) == a4 )
            *((_QWORD *)PtiCurrent(v198, v197) + 149) = 0LL;
          FreeTouchInputInfo((__int64)a4);
          goto LABEL_463;
        }
        if ( v6 != 577 && v6 - 578 > 1 )
          goto LABEL_463;
      }
      updated = (HICON)xxxDefPointerProc(v9, v6, a3, 0LL);
      goto LABEL_156;
    }
    if ( v6 == 517 )
    {
      v192 = *((_QWORD *)a1 + 5);
      v193 = *(_WORD *)(v192 + 108) + WORD1(a4);
      if ( (*(_BYTE *)(v192 + 26) & 0x40) != 0 )
        v113 = ((unsigned __int64)v193 << 16) | (unsigned __int16)(*(_WORD *)(v192 + 112) - (_WORD)a4);
      else
        v113 = (v193 << 16) | (unsigned __int16)(*(_WORD *)(v192 + 104) + (_WORD)a4);
LABEL_382:
      v220 = 0;
LABEL_383:
      v194 = 123LL;
LABEL_384:
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)a1,
        v194,
        *(_QWORD *)a1,
        (struct tagDRAWITEMSTRUCT *)v113,
        0,
        0,
        0LL,
        1,
        v220);
      goto LABEL_463;
    }
    if ( v6 <= 0x11C )
    {
      if ( v6 == 284 )
        goto LABEL_463;
      if ( v6 <= 0x105 )
      {
        switch ( v6 )
        {
          case 0x105u:
            goto LABEL_266;
          case 0xAEu:
            DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            xxxDrawCaptionBar(a1, DCEx, a3);
            _ReleaseDC(DCEx);
            goto LABEL_463;
          case 0xAFu:
            xxxDrawWindowFrame(a1, (HDC)a3);
            goto LABEL_463;
        }
        if ( v6 != 256 )
        {
          v9 = v6 - 257;
          if ( v6 != 257 )
          {
            if ( v6 != 260 )
              goto LABEL_463;
            v115 = PtiCurrent(v9, v8);
            v117 = v115;
            v118 = (unsigned __int64)a4 >> 16;
            if ( (v118 & 0x2000) != 0 )
            {
              if ( (v118 & 0x4000) == 0 )
              {
                if ( a3 != 18 || (v116 = *((_QWORD *)v115 + 59), v119 = *(_DWORD *)(v116 + 436), (v119 & 8) != 0) )
                {
                  *(_DWORD *)(*((_QWORD *)v117 + 59) + 436LL) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v116 + 436) = v119 | 8;
                  xxxDrawMenuBarUnderlines((__int64)a1, 1LL);
                }
              }
              *(_DWORD *)(*((_QWORD *)v117 + 59) + 436LL) &= ~0x10u;
              v120 = PtiCurrent(v116, v8);
              if ( *(_QWORD *)(*((_QWORD *)v120 + 59) + 128LL) && (_DWORD)a3 == 115 )
                xxxCloseApplication(v120);
              goto LABEL_463;
            }
            if ( a3 != 121 )
              goto LABEL_463;
            *(_DWORD *)(*((_QWORD *)v115 + 59) + 436LL) |= 0x10u;
            goto LABEL_262;
          }
LABEL_266:
          v129 = PtiCurrent(v9, v8);
          v130 = (__int64)v129;
          if ( a3 == 18
            && (v131 = *(_DWORD *)(*((_QWORD *)v129 + 59) + 436LL), (v131 & 0x80u) == 0)
            && (v131 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*((_QWORD *)v129 + 59) + 436LL) & 0x10) != 0 )
          {
            NonChildAncestor = (struct tagTHREADINFO **)GetNonChildAncestor((__int64)a1);
            Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
              BugCheckParameter3,
              v130,
              (__int64)NonChildAncestor);
            if ( a3 == 121 )
              xxxDrawMenuBarUnderlines((__int64)a1, 1LL);
            xxxSendTransformableMessageTimeout(NonChildAncestor, 274LL, 0xF100uLL, 0LL, 0, 0, 0LL, 1, 0);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v133);
          }
          if ( a3 == 18 )
          {
            *(_DWORD *)(*(_QWORD *)(v130 + 472) + 436LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines((__int64)a1, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v130 + 472) + 436LL) &= 0xFFFFFFE3;
          goto LABEL_463;
        }
        if ( a3 != 27 )
        {
          if ( a3 != 121 )
            goto LABEL_463;
          v127 = PtiCurrent(v6 - 256, v8);
          *(_DWORD *)(*((_QWORD *)v127 + 59) + 436LL) |= 0x10u;
LABEL_262:
          if ( (_GetKeyState(16LL) & 0x8000u) == 0LL )
            goto LABEL_463;
          v113 = -1LL;
          goto LABEL_382;
        }
        if ( !(unsigned int)CoreWindowProp::IsComponent(a1, v8) )
          goto LABEL_463;
        Host = CoreWindowProp::GetHost(a1);
        if ( !Host )
          goto LABEL_463;
        TopLevelWindow = GetTopLevelWindow((__int64)Host);
        if ( !TopLevelWindow )
          goto LABEL_463;
        v123 = a4;
        v124 = 27LL;
        v125 = v6;
        v126 = (struct tagWND *)TopLevelWindow;
LABEL_305:
        _PostTransformableMessageExtended(v126, v125, v124, (__int64)v123, 0LL, 1);
        goto LABEL_463;
      }
      if ( v6 != 262 )
      {
        if ( v6 != 265 )
        {
          if ( v6 == 274 )
          {
            xxxSysCommand(a1);
            goto LABEL_463;
          }
          v134 = v6 - 281;
          if ( v6 == 281 )
          {
            LODWORD(v134) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
            if ( (_BYTE)v134 != 64 )
              goto LABEL_463;
            v135 = (struct tagWND *)*((_QWORD *)a1 + 13);
            v136 = *(_QWORD *)(*((_QWORD *)v135 + 2) + 464LL);
            BugCheckParameter3[0] = *((_QWORD *)PtiCurrent(v134, v8) + 58);
            if ( v136 != BugCheckParameter3[0] )
            {
              v138 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v136, v135, 0x119u);
              if ( !v138 )
                v138 = IsMessageAlwaysAllowedAcrossIL(0x119u, v137);
              if ( !v138 )
              {
                if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
                {
                  v141 = (ULONG_PTR *)(v136 + 872);
                }
                else
                {
                  if ( *(_QWORD *)v136 == *(_QWORD *)(W32GetUserGdiSessionState(v139) + 40) )
                  {
                    v231 = 0x2000LL;
                    v232 = 0;
                  }
                  else
                  {
                    v231 = *(_QWORD *)(v136 + 872);
                    v232 = *(_DWORD *)(v136 + 880);
                  }
                  v141 = &v231;
                }
                v142 = UIPrivilegeIsolation::CheckAccess(
                         (UIPrivilegeIsolation *)(BugCheckParameter3[0] + 872),
                         (const struct tagUIPI_INFO *)v141,
                         v140);
                v143 = v142;
                if ( !v142 )
                {
                  EtwTraceUIPIMsgError(BugCheckParameter3[0], v136, 281LL, a3, a4);
                  UserSetLastError(v143 + 5);
                  if ( !v143 )
                    goto LABEL_463;
                }
              }
            }
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v227, (__int64 *)a1 + 13);
            v83 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    281LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1,
                    1);
            v85 = v227;
          }
          else
          {
            if ( v6 != 282 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_463;
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v230, (__int64 *)a1 + 13);
            v83 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    282LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1,
                    1);
            v85 = v230;
          }
          goto LABEL_457;
        }
        if ( a3 == 0xFFFF )
          goto LABEL_463;
        v123 = a4;
        v124 = a3;
        v125 = 258;
        goto LABEL_304;
      }
      v144 = PtiCurrent(0LL, v8);
      *(_DWORD *)(*((_QWORD *)v144 + 59) + 436LL) &= 0xFFFFFFF3;
      if ( a3 == 13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        v123 = 0LL;
        v125 = 274;
        v124 = 61728LL;
LABEL_304:
        v126 = a1;
        goto LABEL_305;
      }
      if ( (WORD1(a4) & 0x2000) == 0 || !a3 )
      {
        if ( a3 != 27 )
          xxxMessageBeep(0LL, v8);
        goto LABEL_463;
      }
      if ( a3 == 9 || a3 == 27 )
        goto LABEL_463;
      if ( a3 == 32 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v227, (__int64)v144, (__int64 *)a1 + 13);
          goto LABEL_401;
        }
        v145 = *(_QWORD *)(*((_QWORD *)v144 + 59) + 128LL);
        if ( v145 && (unsigned int)IsImmersiveApplicationBandId(*(_DWORD *)(*(_QWORD *)(v145 + 40) + 236LL)) )
        {
          PostIAMShellHookMessage(33LL, *v146);
          goto LABEL_463;
        }
        v147 = *(const struct tagWND **)(*((_QWORD *)v144 + 59) + 128LL);
        if ( v147 && (*((_DWORD *)v147 + 95) & 0x40000000) != 0 )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v147);
          if ( (unsigned int)CoreWindowProp::IsComponent(
                               *(const struct tagWND **)(*((_QWORD *)v144 + 59) + 128LL),
                               v149) )
            CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(
                                              *(const struct tagWND **)(*((_QWORD *)v144 + 59) + 128LL),
                                              v8);
          if ( CompositionInputWindowUIOwner )
          {
            v150 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
            v151 = (struct tagWND *)v150;
            if ( v150 )
            {
              Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
                BugCheckParameter3,
                (__int64)v144,
                v150);
              xxxForceForegroundWindowNoRestoreFocus((__int64)v151, 0LL);
              if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3, v152) )
                _PostTransformableMessageExtended(v151, 0x112u, 0xF100uLL, 32LL, 0LL, 1);
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                BugCheckParameter3,
                v153);
            }
          }
          goto LABEL_463;
        }
      }
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)a1,
        274LL,
        0xF100uLL,
        (struct tagDRAWITEMSTRUCT *)(unsigned int)a3,
        0,
        0,
        0LL,
        1,
        0);
      goto LABEL_463;
    }
    if ( v6 > 0x134 )
    {
      v171 = v6 - 309;
      if ( v171 )
      {
        v172 = v171 - 1;
        if ( !v172 )
          goto LABEL_370;
        v173 = v172 - 1;
        if ( v173 )
        {
          if ( v173 != 1 )
            goto LABEL_463;
          goto LABEL_370;
        }
        v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928);
        if ( *(_WORD *)(v9 + 6996) < 8u
          || (v174 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928),
              v175 = *(_DWORD *)(v174 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v174, v176) + 19928),
              v175 != *(_DWORD *)(v9 + 4568))
          || (v177 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928),
              v178 = *(_DWORD *)(v177 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v177, v179) + 19928),
              v178 == *(_DWORD *)(v9 + 4588)) )
        {
          UserSessionState = W32GetUserSessionState(v9, v8);
          GreSetBkColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4648LL));
          v183 = W32GetUserSessionState(v182, v181);
          GreSetTextColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(v183 + 19928) + 4628LL));
          v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v185, v184) + 19928) + 4944LL);
          goto LABEL_204;
        }
        v158 = 4648LL;
        v160 = 4856LL;
      }
      else
      {
        v158 = 4628LL;
        v160 = 4816LL;
      }
      v159 = 4640LL;
      goto LABEL_378;
    }
    if ( v6 == 308 )
    {
LABEL_335:
      v158 = 4588LL;
      v159 = 4600LL;
      v160 = 4736LL;
LABEL_378:
      v186 = W32GetUserSessionState(v9, v8);
      GreSetBkColor((HDC)a3, *(_DWORD *)(v158 + *(_QWORD *)(v186 + 19928)));
      v189 = W32GetUserSessionState(v188, v187);
      GreSetTextColor((HDC)a3, *(_DWORD *)(v159 + *(_QWORD *)(v189 + 19928)));
      v18 = *(_QWORD *)(v160 + *(_QWORD *)(W32GetUserSessionState(v191, v190) + 19928));
      goto LABEL_204;
    }
    v154 = v6 - 295;
    if ( v154 )
    {
      v155 = v154 - 1;
      if ( !v155 )
      {
        updated = (HICON)xxxDWP_UpdateUIState((struct tagWND **)a1, a3, (__int64)a4);
        goto LABEL_156;
      }
      v156 = v155 - 1;
      if ( !v156 )
      {
        v161 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
        return ((((unsigned __int64)v161 >> 2) | v161 & 0x40) >> 5) | v161 & 4;
      }
      v157 = v156 - 9;
      if ( v157 )
      {
        if ( v157 != 1 )
          goto LABEL_463;
        goto LABEL_335;
      }
LABEL_370:
      v158 = 4628LL;
      v159 = 4600LL;
      v160 = 4816LL;
      goto LABEL_378;
    }
    BugCheckParameter3[0] = (unsigned __int16)a3;
    v162 = (unsigned __int64)a3 >> 16;
    v231 = (unsigned __int64)a3 >> 16;
    if ( (a3 & 0xFFF80000LL) != 0 )
      goto LABEL_463;
    v163 = 3;
    if ( (unsigned __int16)a3 > 3u || a4 )
      goto LABEL_463;
    if ( (_WORD)a3 == 3 )
    {
      LOWORD(v231) = 0;
      v164 = *(_DWORD **)(W32GetUserSessionState(3LL, v8) + 19928);
      if ( (*v164 & 0x80u) == 0 )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v164, v8) + 19928);
        if ( (*(_DWORD *)(v8 + 7004) & 0x20) == 0 )
        {
          v8 = *(_QWORD *)(W32GetUserSessionState(v165, v8) + 19928);
          if ( *(int *)(v8 + 7004) < 0 && (GetAppCompatFlags2(1024LL, v8) & 2) == 0 )
          {
            v167 = (unsigned __int16)(((**(_DWORD **)(W32GetUserSessionState(v166, v8) + 19928) & 0x40) != 0) + 1);
            a3 = v167 | 0x30000;
            goto LABEL_354;
          }
        }
      }
    }
    else
    {
      v168 = *(_DWORD **)(W32GetUserSessionState((unsigned __int16)a3, v8) + 19928);
      if ( (*v168 & 0x80u) != 0
        || (v169 = *(_QWORD *)(W32GetUserSessionState(v168, v8) + 19928), (*(_DWORD *)(v169 + 7004) & 0x20) != 0)
        || *(int *)(*(_QWORD *)(W32GetUserSessionState(v169, v8) + 19928) + 7004LL) >= 0
        || (GetAppCompatFlags2(1024LL, v8) & 2) != 0 )
      {
        LOWORD(v162) = WORD1(a3) & 0xFFFC;
        v231 = v162;
      }
    }
    LOWORD(v167) = BugCheckParameter3[0];
    v163 = v231;
LABEL_354:
    if ( !v163 )
      goto LABEL_463;
    if ( (v163 & 1) != 0 )
      v8 = ((_WORD)v167 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
    else
      v8 = 0LL;
    if ( (v163 & 2) != 0 )
      v8 = ((_WORD)v167 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1 | (unsigned int)v8;
    if ( (v163 & 4) != 0 )
      v8 = ((_WORD)v167 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1 | (unsigned int)v8;
    if ( !(_DWORD)v8 )
      goto LABEL_463;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v227, (__int64 *)a1 + 13);
      v30 = xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), 295LL, a3, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v227, v170);
      goto LABEL_454;
    }
    updated = (HICON)xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 296LL, a3, 0LL, 0, 0, 0LL, 1, 1);
    goto LABEL_156;
  }
  if ( v6 == 172 )
    goto LABEL_230;
  if ( v6 > 0x3B )
  {
    if ( v6 <= 0x80 )
    {
      if ( v6 == 128 )
      {
        updated = xxxDWP_SetIcon(a1, a3, (HICON)a4);
        goto LABEL_156;
      }
      if ( v6 <= 0x50 )
      {
        if ( v6 == 80 )
        {
          v61 = *((_QWORD *)PtiCurrent(v9, v8) + 59);
          v62 = *(struct tagWND **)(v61 + 120);
          BugCheckParameter3[0] = (ULONG_PTR)v62;
          if ( !v62
            || v62 == a1
            || (v63 = *((_QWORD *)a1 + 17),
                **(_WORD **)(v63 + 8) == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v61, v60) + 19928) + 904LL)) )
          {
            v64 = 256;
            if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
            {
              v67 = PtiCurrent(v66, v65);
              if ( v67 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v69, v68) + 18960)
                || (v72 = PtiCurrent(v71, v70), (unsigned __int8)IsKeyboardDelegationTarget(v72)) )
              {
                v64 = 0;
              }
            }
            ProcessWindowStation = GetProcessWindowStation(0LL);
            if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, v64, a1) )
              UserSetLastError(1457);
            goto LABEL_463;
          }
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v231, (__int64)v62);
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)BugCheckParameter3[0],
            80LL,
            a3,
            a4,
            0,
            0,
            0LL,
            1,
            1);
          v34 = &v231;
          goto LABEL_402;
        }
        v52 = v6 - 70;
        if ( !v52 )
        {
          if ( (*((_DWORD *)a4 + 8) & 1) == 0 )
            xxxAdjustSize(a1, (int *)a4 + 6, (int *)a4 + 7);
          goto LABEL_463;
        }
        v53 = v52 - 1;
        if ( !v53 )
        {
          xxxHandleWindowPosChanged(a1, (__int64)a4);
          goto LABEL_463;
        }
        v54 = v53 - 2;
        if ( v54 )
        {
          v55 = v54 - 4;
          if ( !v55 )
          {
            ContextHelpId = GetContextHelpId(a1);
            v57 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v57 + 31) & 0xC0) == 0x40 )
              v58 = *(_DWORD *)(v57 + 320);
            else
              v58 = 0;
            xxxSendHelpMessage((struct tagTHREADINFO **)a1, 1LL, v58, *(_QWORD *)a1, ContextHelpId);
            goto LABEL_463;
          }
          if ( v55 != 2 || !ValidateHwnd(a3) )
            goto LABEL_463;
LABEL_165:
          v18 = 1LL;
          goto LABEL_204;
        }
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4);
LABEL_156:
        v30 = (unsigned __int64)updated;
        goto LABEL_454;
      }
      if ( v6 == 81 )
      {
        v86 = BuildHwndList(*((struct tagWND **)a1 + 14), 2LL, 0LL, 1);
        v87 = v86;
        if ( v86 )
        {
          v88 = (__int64 *)((char *)v86 + 32);
          v89 = *((_QWORD *)v86 + 4);
          if ( v89 != 1 )
          {
            do
            {
              LOBYTE(v8) = 1;
              v90 = HMValidateHandleNoSecure(v89, v8);
              BugCheckParameter3[0] = v90;
              if ( v90 )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v231, v90);
                xxxSendTransformableMessageTimeout(
                  (struct tagTHREADINFO **)BugCheckParameter3[0],
                  81LL,
                  a3,
                  a4,
                  0,
                  0,
                  0LL,
                  1,
                  1);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&v231, v91);
              }
              v89 = *++v88;
            }
            while ( *v88 != 1 );
          }
          FreeHwndList(v87, v8);
        }
        goto LABEL_463;
      }
      if ( v6 != 83 )
      {
        if ( v6 == 85 )
        {
          if ( a4 == (struct tagDRAWITEMSTRUCT *)3 )
          {
            v81 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
            return 2LL - ((v81 & 0x20) != 0);
          }
          goto LABEL_463;
        }
        if ( v6 != 123 )
        {
          if ( v6 != 127 )
            goto LABEL_463;
          updated = (HICON)DWP_GetIcon((__int64)a1, (unsigned int)a3);
          goto LABEL_156;
        }
        NCHit = FindNCHit((__int64)a1, (int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          v78 = PtiCurrent(v75, v74);
          if ( (unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v78 + 59) + 128LL), (__int64)a1) )
          {
            if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
              && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v79) )
            {
              xxxClientDoScrollMenu(*(_QWORD *)a1, v80, (unsigned int)(NCHit - 6), a4);
            }
            else
            {
              xxxDoScrollMenu(a1);
            }
          }
          goto LABEL_463;
        }
        v77 = (char *)a1 + 40;
        LOBYTE(v75) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
        if ( (_BYTE)v75 == 64 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(BugCheckParameter3, (__int64 *)a1 + 13);
          xxxSendTransformableMessageTimeout(
            *((struct tagTHREADINFO ***)a1 + 13),
            123LL,
            *(_QWORD *)a1,
            a4,
            0,
            0,
            0LL,
            1,
            1);
LABEL_40:
          v34 = BugCheckParameter3;
LABEL_402:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v34, v33);
          goto LABEL_463;
        }
        if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v75, v74) + 59) + 128LL) )
          goto LABEL_463;
        if ( NCHit != 2 )
        {
          if ( NCHit != 3 )
            goto LABEL_463;
          goto LABEL_226;
        }
LABEL_423:
        v112 = (*(_BYTE *)(*(_QWORD *)v77 + 31LL) & 0x21) != 0 ? 61728 : 61488;
LABEL_424:
        SysMenu = xxxGetSysMenu(a1, 1LL);
        v226 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v225, SysMenu);
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v225) )
        {
          if ( IsInsideUserApiHook(v201, v8) )
          {
            v202 = v226;
            if ( !v226 )
              v202 = *(_QWORD **)v225[0];
            MNClearCachedPopupSizes(v202);
          }
          v203 = (__int64)v226;
          if ( !v226 )
            v203 = *(_QWORD *)v225[0];
          SetMenuDefaultItem(v203, v112, 0);
          PostShellHookMessagesEx((LastWokenThread *)9, *(_QWORD *)a1);
          Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v227, (__int64)v225);
          if ( a4 == (struct tagDRAWITEMSTRUCT *)0xFFFFFFFFLL )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v205, v204) + 19928) + 2120LL) & 8) != 0 )
            {
              *(_OWORD *)((char *)v233 + 4) = 0LL;
              LODWORD(v233[0]) = 20;
              if ( (unsigned int)xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)v233 + 4) )
                xxxTrackPopupMenuEx((__int64)v225, 576LL, SHIDWORD(v233[0]), v233[1], (__int64)a1, (__int64)v233);
            }
          }
          else
          {
            xxxTrackPopupMenuEx((__int64)v225, 514LL, (__int16)a4, SWORD1(a4), (__int64)a1, 0LL);
          }
          Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v227);
        }
        goto LABEL_463;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        v82 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
      else
        v82 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 15);
      if ( !v82 || v82 == (struct tagTHREADINFO **)GetThreadDesktopWindow(0LL, v8) )
        goto LABEL_463;
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v231, (__int64)v82);
      v83 = xxxSendTransformableMessageTimeout(v82, 83LL, a3, a4, 0, 0, 0LL, 1, 1);
      v85 = &v231;
LABEL_457:
      v18 = v83;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v85, v84);
      goto LABEL_204;
    }
    if ( v6 <= 0x88 )
    {
      if ( v6 == 136 )
      {
        SetOrClrWF(0, a1, 0x280u, 1);
        xxxInternalDoSyncPaint(a1, a3);
        goto LABEL_463;
      }
      v92 = v6 - 129;
      if ( v92 )
      {
        v93 = v92 - 2;
        if ( !v93 )
        {
          xxxCalcClientRect(a1, a4, 0);
          goto LABEL_463;
        }
        v94 = v93 - 1;
        if ( !v94 )
        {
          v39 = FindNCHit((__int64)a1, (int)a4);
          goto LABEL_172;
        }
        v95 = v94 - 1;
        if ( !v95 )
        {
          SetOrClrWF(1, a1, 0x180u, 1);
          v98 = (HDC)_GetDCEx(a1, a3, 328833LL);
          if ( v98 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
              W32GetUserSessionState(v97, v96);
            xxxDrawWindowFrame(a1, v98);
            _ReleaseDC(v98);
          }
          SetOrClrWF(0, a1, 0x180u, 1);
          goto LABEL_463;
        }
        if ( v95 == 1 )
        {
          xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, (__int64)a4);
          goto LABEL_165;
        }
LABEL_463:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
        return 0LL;
      }
      v8 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v8 & 0x30) != 0 )
      {
        v99 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 8u)
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          LOBYTE(v99) = 0;
          v18 = 1LL;
        }
        else
        {
          v18 = 1LL;
          LOBYTE(v99) = 1;
        }
        v221 = v99;
        v222 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v99 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v100 = W32GetUserSessionState(v99, v8);
          LOBYTE(v101) = v222;
          LOBYTE(v102) = v221;
          WPP_RECORDER_AND_TRACE_SF_qDll(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v102,
            v101,
            *(_QWORD *)(v100 + 69416));
        }
        if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v103) )
        {
          inited = xxxClientInitPSBInfo(*(_QWORD *)a1);
          goto LABEL_188;
        }
        if ( !InitPwSB(a1) )
        {
          inited = 0;
LABEL_188:
          if ( !inited )
            goto LABEL_463;
        }
      }
      else
      {
        v18 = 1LL;
      }
      if ( a4 )
      {
        *(_QWORD *)BytesInMultiByteString = (char *)a4 + 80;
        if ( !*((_QWORD *)a1 + 3)
          || !*(_QWORD *)BytesInMultiByteString
          || !*(_QWORD *)(*(_QWORD *)BytesInMultiByteString + 8LL) )
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
          goto LABEL_204;
        }
        if ( *(int *)(*(_QWORD *)BytesInMultiByteString + 4LL) < 0
          && **(_DWORD **)BytesInMultiByteString
          && **(_BYTE **)(*(_QWORD *)BytesInMultiByteString + 8LL) == 0xFF
          || *(int *)(*(_QWORD *)BytesInMultiByteString + 4LL) >= 0
          && **(_DWORD **)BytesInMultiByteString >= 2u
          && **(_WORD **)(*(_QWORD *)BytesInMultiByteString + 8LL) == 0xFFFF )
        {
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
          return 1LL;
        }
      }
      SetOrClrWF(1, a1, 0x202u, 1);
      TitleBarInfo = DefSetText((__int64)a1, (unsigned int *)a4 + 20, v105, v106);
LABEL_453:
      v30 = TitleBarInfo;
      goto LABEL_454;
    }
    if ( v6 == 161 || v6 == 162 || v6 == 163 )
    {
      xxxDWP_NCMouse(a1, v6, a3, a4);
      goto LABEL_463;
    }
    if ( v6 != 164 )
      goto LABEL_463;
    memset(v228, 0, sizeof(v228));
    v229 = 0LL;
    v107 = PtiCurrent(v9, v8);
    v108 = FindNCHit((__int64)a1, (int)a4);
    if ( (unsigned int)(v108 - 6) <= 1 )
    {
      if ( !(unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v107 + 59) + 128LL), (__int64)a1) )
        goto LABEL_463;
    }
    else if ( (unsigned int)(v108 - 2) > 1 || a1 != *(struct tagWND **)(*((_QWORD *)v107 + 59) + 128LL) )
    {
      goto LABEL_463;
    }
    xxxSetCapture(a1, v8);
    while ( 1 )
    {
      LODWORD(v218) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v228, 0LL, 512, 526, (unsigned __int64)v218, 0) )
      {
        if ( DWORD2(v228[0]) == 517 )
          break;
      }
      if ( a1 != *(struct tagWND **)(*((_QWORD *)v107 + 59) + 112LL)
        || !(unsigned int)xxxSleepThread2(6LL, 0LL, 1, 0, 0LL) )
      {
        goto LABEL_463;
      }
    }
    xxxReleaseCapture(v109, v8);
    v110 = WORD2(v229) | (WORD4(v229) << 16);
    v111 = FindNCHit((__int64)a1, v110);
    v8 = v111;
    if ( ((v111 - 2) & 0xFFFFFFFA) != 0 )
      goto LABEL_463;
    v77 = (char *)a1 + 40;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
    {
      if ( v111 == 2 )
        goto LABEL_423;
      if ( v111 == 3 )
      {
LABEL_226:
        v112 = 61536;
        goto LABEL_424;
      }
    }
    v113 = v110;
    v220 = 0;
    goto LABEL_383;
  }
  if ( v6 == 59 )
  {
    v39 = xxxClientShutdown((__int64)a1, a3);
    goto LABEL_172;
  }
  if ( v6 <= 0x19 )
  {
    if ( v6 != 25 )
    {
      if ( v6 <= 0xF )
      {
        if ( v6 != 15 )
        {
          v12 = v6 - 6;
          if ( v12 )
          {
            v13 = v12 - 5;
            if ( !v13 )
            {
              xxxDWP_SetRedraw(a1, a3 != 0);
              goto LABEL_463;
            }
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 )
                {
                  v16 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                  if ( v16 )
                  {
                    BytesInMultiByteString[0] = 0;
                    if ( a4 )
                    {
                      RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v16);
                      v17 = BytesInMultiByteString[0];
                    }
                    else
                    {
                      v17 = v16 >> 1;
                      BytesInMultiByteString[0] = v17;
                    }
                    v18 = v17;
                    goto LABEL_204;
                  }
                }
                goto LABEL_463;
              }
              if ( a3 )
              {
                if ( *((_QWORD *)a1 + 23) )
                {
                  *(_OWORD *)BugCheckParameter3 = 0LL;
                  StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (struct tagWND *)((char *)a1 + 184),
                              (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                  DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
                }
                v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                v21 = (char **)((char *)a4 + 8);
                v22 = *((_DWORD *)a4 + 1);
                if ( v20 )
                {
                  if ( v22 >= 0 )
                  {
                    *(_OWORD *)BugCheckParameter3 = 0LL;
                    v26 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                            (struct tagWND *)((char *)a1 + 184),
                            (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                    v25 = TextCopy((__int64)v26, *v21, a3);
                    v23 = 2 * v25;
                  }
                  else
                  {
                    v23 = WCSToMBEx(0, *((WCHAR **)a1 + 23), v20 >> 1, (PCHAR *)a4 + 1, (v22 & 0x7FFFFFFF) - 1, v219);
                    v25 = v23;
                    (*v21)[v23] = 0;
                  }
                  *(_DWORD *)a4 = v23;
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v24);
                  return v25;
                }
                v28 = *v21;
                if ( v22 >= 0 )
                  *(_WORD *)v28 = 0;
                else
                  *v28 = 0;
              }
              goto LABEL_463;
            }
            v29 = DefSetText((__int64)a1, (unsigned int *)a4, v10, v11);
            v30 = v29;
            if ( v29 )
            {
              xxxRedrawTitle(a1, 8LL);
              xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
            }
LABEL_454:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
            return v30;
          }
          if ( a3 )
            xxxSetFocus(a1, v8);
          if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
            goto LABEL_463;
          v31 = *((_QWORD *)a1 + 2);
          v32 = *(struct tagWND **)(v31 + 1592);
          if ( !v32 )
            goto LABEL_463;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            BugCheckParameter3,
            *(_QWORD *)(v31 + 1592));
          xxxSendNotifyMessage(v32, 0x349u, a3, 0LL, 0);
          goto LABEL_40;
        }
LABEL_66:
        xxxDWP_Paint(a1);
        goto LABEL_463;
      }
      if ( v6 == 16 )
      {
        xxxDestroyWindow(a1, v8);
        goto LABEL_463;
      }
      if ( v6 != 17 && v6 != 19 )
      {
        if ( v6 != 20 )
        {
          if ( v6 != 24 )
            goto LABEL_463;
          if ( !(_WORD)a4 )
            goto LABEL_463;
          v8 = *((_QWORD *)a1 + 5);
          v35 = *(_BYTE *)(v8 + 31);
          if ( (((v35 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
            goto LABEL_463;
          if ( a3 )
          {
            if ( (v35 & 0x10) != 0 || (*(_BYTE *)(v8 + 17) & 0x40) == 0 )
              goto LABEL_463;
          }
          else if ( (v35 & 0x10) == 0 )
          {
            goto LABEL_463;
          }
          SetOrClrWF(0, a1, 0x140u, 1);
          if ( !a3 )
            SetOrClrWF(1, a1, 0x140u, 1);
          v38 = W32GetUserSessionState(v37, v36);
          xxxShowWindowEx(
            a1,
            (a3 != 0 ? 4 : 0) | *(_DWORD *)(v38 + 67056) & 0x10000u,
            *(_DWORD *)(v38 + 67056) & 0x10000);
          goto LABEL_463;
        }
LABEL_65:
        v39 = xxxDWP_EraseBkgnd((__int64)a1, v6, a3);
LABEL_172:
        v18 = v39;
        goto LABEL_204;
      }
      goto LABEL_165;
    }
    goto LABEL_335;
  }
  if ( v6 <= 0x2B )
  {
    switch ( v6 )
    {
      case 0x2Bu:
        DWP_DrawItem(a4, v8);
        goto LABEL_463;
      case 0x1Fu:
        xxxDWP_DoCancelMode(a1, v8);
        goto LABEL_463;
      case 0x20u:
        v39 = xxxDWP_SetCursor(a1, a3, (__int16)a4, WORD1(a4));
        goto LABEL_172;
    }
    if ( v6 != 33 )
    {
      if ( v6 == 38 )
        goto LABEL_66;
      if ( v6 != 39 )
        goto LABEL_463;
      goto LABEL_65;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      v40 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
    else
      v40 = 0LL;
    if ( v40 )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v40);
      v42 = xxxSendTransformableMessageTimeout(v40, 33LL, a3, a4, 0, 0, 0LL, 1, 1);
      if ( v42 )
      {
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v41);
        v18 = v42;
LABEL_204:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v8);
        return v18;
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v41);
    }
    if ( (_WORD)a4 != 2 || (v43 = 3LL, WORD1(a4) != 513) )
      v43 = 1LL;
    v18 = v43;
    goto LABEL_204;
  }
  v44 = v6 - 46;
  if ( !v44 || (v45 = v44 - 1) == 0 )
  {
    v18 = -1LL;
    goto LABEL_204;
  }
  v46 = v45 - 3;
  if ( !v46 )
  {
    TitleBarInfo = DWP_SetHotKey(a1, a3);
    goto LABEL_453;
  }
  v47 = v46 - 1;
  if ( v47 )
  {
    if ( v47 != 2 )
      goto LABEL_463;
    v30 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
    goto LABEL_454;
  }
  v48 = HotKeyHelper(a1, v8);
  v50 = 0;
  if ( *v48 )
    v50 = *((_DWORD *)*v48 + 2);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v225, v49);
  return v50;
}
