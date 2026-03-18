/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0109880
 * Callers:
 *     xxxDefWindowProc @ 0x1C00DF700 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0109740 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxGetTitleBarInfoEx @ 0x1C000C37C (xxxGetTitleBarInfoEx.c)
 *     xxxSendMinRectMessages @ 0x1C000E178 (xxxSendMinRectMessages.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00115F4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0011774 (xxxSetCapture.c)
 *     DWP_SetHotKey @ 0x1C0012D64 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0012E00 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F68 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     _GetProcessWindowStation @ 0x1C0028180 (_GetProcessWindowStation.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00310B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0035844 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C003732C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C003B99C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     GreSetBkColor @ 0x1C0041A40 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0042038 (GreSetTextColor.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0045408 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00604D0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     DefSetText @ 0x1C00703F0 (DefSetText.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0070880 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00708E4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C007098C (TextCopy.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxClientShutdown @ 0x1C008224C (xxxClientShutdown.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0082D5C (xxxDWP_EraseBkgnd.c)
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     _SetMenuDefaultItem @ 0x1C008684C (_SetMenuDefaultItem.c)
 *     DWP_GetIcon @ 0x1C008B77C (DWP_GetIcon.c)
 *     FindNCHit @ 0x1C008C04C (FindNCHit.c)
 *     ConstrainWindowSize @ 0x1C008E4E8 (ConstrainWindowSize.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00AD604 (xxxDWP_UpdateUIState.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE7EC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00AFA30 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B2DB0 (PostIAMShellHookMessageEx.c)
 *     _IsDescendant @ 0x1C00B31F8 (_IsDescendant.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     xxxSendSizeMessage @ 0x1C00D85D4 (xxxSendSizeMessage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00DF860 (xxxLoadUserApiHook.c)
 *     xxxRedrawTitle @ 0x1C00E0970 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     _InitPwSB @ 0x1C00E1C98 (_InitPwSB.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSleepThread2 @ 0x1C0126570 (xxxSleepThread2.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139A64 (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A068 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessage @ 0x1C013C0E8 (xxxSendTransformableMessage.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0156B54 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 *     xxxSimulateShiftF10 @ 0x1C01C84F0 (xxxSimulateShiftF10.c)
 *     xxxMessageBeep @ 0x1C01F64D8 (xxxMessageBeep.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02056B0 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C021F9B0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxGetSysMenu @ 0x1C02218F0 (xxxGetSysMenu.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0221BD0 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0221C18 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0221CD0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222228 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDefPointerProc @ 0x1C0222404 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C022969C (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     MNClearCachedPopupSizes @ 0x1C0237C98 (MNClearCachedPopupSizes.c)
 *     xxxSendHelpMessage @ 0x1C02390E0 (xxxSendHelpMessage.c)
 *     WCSToMBEx @ 0x1C024B744 (WCSToMBEx.c)
 *     GetContextHelpId @ 0x1C024E5B8 (GetContextHelpId.c)
 */

unsigned __int64 __fastcall xxxRealDefWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _DEVICE_OBJECT *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  _DWORD *v19; // rax
  int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  int v23; // r15d
  int v24; // r10d
  int v25; // edx
  int v26; // esi
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // ebx
  int v36; // esi
  int v37; // r14d
  _DWORD *v38; // rax
  int v39; // edx
  int v40; // r8d
  int v41; // r12d
  int v42; // r9d
  int v43; // eax
  int v44; // r13d
  int v45; // esi
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  void *v50; // rax
  HDC DCEx; // rax
  HDC v52; // rbx
  __int16 v53; // r8
  __int64 v54; // rax
  int v55; // ebx
  int v56; // r15d
  _DWORD *v57; // rax
  int v58; // edx
  int v59; // r8d
  int v60; // r12d
  int v61; // r9d
  ULONG v62; // ecx
  int v63; // r13d
  int v64; // r15d
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rax
  HDC v70; // rbx
  unsigned __int64 v71; // rbx
  int v72; // eax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v74; // r8d
  int v75; // eax
  int v76; // eax
  int v77; // ebx
  struct _LARGE_UNICODE_STRING *v78; // rax
  _WORD *v79; // rcx
  ULONG v80; // ecx
  ULONG v81; // ebx
  __int64 v82; // rbx
  __int64 v83; // r8
  int v84; // eax
  int v85; // eax
  unsigned int v86; // ebx
  int NCHit; // r9d
  __int64 v88; // rdx
  int v89; // r9d
  int ContextHelpId; // eax
  ULONG_PTR v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  struct tagWND *v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  struct tagWND *v100; // rsi
  unsigned __int64 v101; // r9
  __int64 v102; // r8
  __int64 v103; // rdx
  struct tagWND *v104; // rcx
  __int64 ProcessWindowStation; // rax
  struct tagBWL *v106; // rax
  struct tagBWL *v107; // r14
  _QWORD *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rcx
  __int128 v116; // kr00_16
  int v117; // r9d
  int v118; // edx
  int v119; // edx
  int v120; // r9d
  __int64 v121; // rax
  unsigned __int64 v122; // rcx
  int v123; // edx
  __int64 DesktopWindow; // rax
  int v125; // edx
  int v126; // r8d
  __int64 v127; // r9
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rbx
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r14
  __int64 v136; // rdx
  char v137; // cl
  char v138; // cl
  struct tagWND **v139; // rsi
  int v140; // esi
  __int64 v141; // rbx
  __int64 Icon; // rbx
  HICON v143; // rbx
  __int64 v144; // rbx
  char v145; // bl
  struct tagWND *Host; // rax
  struct tagWND *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rdx
  struct tagWND *v150; // rsi
  __int64 v151; // r14
  __int64 v152; // r13
  int v153; // ebx
  void *const *WindowMessageFilter; // rax
  unsigned __int8 v155; // al
  int v156; // ebx
  unsigned __int64 v157; // r12
  __int64 v158; // rax
  int v159; // ecx
  int v160; // ecx
  ULONG_PTR NonChildAncestor; // r12
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // rcx
  __int64 *v166; // r8
  int v167; // r9d
  const struct tagWND *v168; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  struct tagWND *TopLevelWindow; // rbx
  __int64 v171; // r8
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  int v175; // eax
  __int64 v176; // rdx
  __int64 v177; // rbx
  __int64 v178; // rdi
  __int64 v179; // rbx
  __int64 v180; // rbx
  __int64 v181; // r13
  unsigned __int64 v182; // r14
  int v183; // esi
  int v184; // ebx
  int v185; // eax
  int v186; // eax
  __int64 ThreadWin32Thread; // rax
  int v188; // eax
  int v189; // eax
  __int64 v190; // rax
  int v191; // eax
  __int64 v192; // rbx
  unsigned int v193; // ebx
  __int64 updated; // rbx
  __int64 v195; // rsi
  ULONG_PTR v196; // rcx
  unsigned int v197; // ebx
  __int64 v198; // rbx
  __int64 SysMenu; // rax
  __int64 v200; // rcx
  __int64 v201; // rcx
  unsigned int v202; // ebx
  unsigned int v203; // ebx
  unsigned int v204; // ebx
  unsigned int v205; // ebx
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 TitleBarInfo; // rbx
  __int64 UserApiHook; // rbx
  __int64 v210; // rbx
  BOOL v211; // r8d
  unsigned int v212; // ecx
  int v213; // ebx
  BOOL v214; // eax
  bool v215; // zf
  int v216; // eax
  __int64 v217; // rdx
  __int64 v218; // rdx
  ULONG *v219; // r8
  __int64 v220; // rbx
  _QWORD v221[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v222; // [rsp+60h] [rbp-D8h]
  int v223; // [rsp+68h] [rbp-D0h]
  __int128 v224; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v225; // [rsp+80h] [rbp-B8h]
  __int128 v226; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v227; // [rsp+98h] [rbp-A0h]
  ULONG BytesInMultiByteString[6]; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v229; // [rsp+C0h] [rbp-78h] BYREF
  _OWORD v230[2]; // [rsp+D0h] [rbp-68h] BYREF

  *(_QWORD *)BytesInMultiByteString = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v221);
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0LL;
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
    goto LABEL_214;
  if ( a2 > 0x100 )
  {
    if ( a2 > 0x205 )
    {
      if ( a2 > 0x313 )
      {
        v202 = a2 - 791;
        if ( !v202 )
        {
          v220 = (int)xxxDWPPrint(a1, (HDC)a3, a4);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
          return v220;
        }
        v203 = v202 - 2;
        if ( v203 )
        {
          v204 = v203 - 2;
          if ( v204 )
          {
            v205 = v204 - 36;
            if ( !v205 )
            {
              TitleBarInfo = (int)xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
              return TitleBarInfo;
            }
            if ( v205 == 10 )
            {
              if ( a3 )
              {
                v206 = *((_QWORD *)a1 + 13);
                if ( v206 )
                {
                  v207 = *(_QWORD *)(v206 + 16);
                  if ( v207 )
                  {
                    if ( *(struct tagWND **)(v207 + 1440) == a1 )
                      xxxSetFocus(a1, v8, v9);
                  }
                }
              }
            }
          }
          else if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
          {
            UserApiHook = (int)xxxLoadUserApiHook(gptiCurrent, (__int64)v8, v9);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return UserApiHook;
          }
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v224);
            v149 = 793LL;
LABEL_408:
            v92 = xxxSendMessage(*((_QWORD *)a1 + 13), v149, a3, a4);
LABEL_409:
            v210 = v92;
            ThreadUnlock1(v94, v93, v95);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return v210;
          }
          if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
          {
            v211 = 0;
            if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
              v211 = xxxCallHook(12LL, a3, a4, 10LL) != 0;
            if ( !v211 )
            {
              if ( (unsigned int)Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage() )
              {
                PostShellHookMessagesEx(0xCu, a4, 0LL);
              }
              else
              {
                v212 = *(_DWORD *)(gptiCurrent + 1272LL);
                v213 = (v212 >> 11) & 1;
                *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(gptiCurrent + 1288LL);
                v214 = (v212 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1432LL) == a1;
                if ( v214 || (v215 = (unsigned int)CoreWindowProp::IsComponent(a1) == 0, v216 = 0, !v215) )
                  v216 = 1;
                if ( v216 )
                {
                  v217 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v217 )
                  {
                    v218 = *(_QWORD *)(v217 + 32);
                    if ( v218 )
                    {
                      if ( (*(_DWORD *)(v218 + 1272) & 0x800) != 0 )
                      {
                        v213 = 1;
                        *(_QWORD *)BytesInMultiByteString = *(_QWORD *)(v218 + 1288);
                      }
                    }
                  }
                }
                v219 = BytesInMultiByteString;
                if ( !v213 )
                  v219 = 0LL;
                PostShellHookMessagesEx(0xCu, a4, (struct tagINPUT_MESSAGE_SOURCE *)v219);
              }
            }
          }
        }
      }
      else if ( a2 == 787 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) == 0
          && (*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground
           || xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0)) )
        {
          v229 = 0LL;
          *(_QWORD *)&v230[0] = 0LL;
LABEL_378:
          v86 = 61728;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
            v86 = 61488;
LABEL_380:
          SysMenu = xxxGetSysMenu(a1, 1LL);
          v222 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v221, SysMenu);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v221) )
          {
            if ( gihmodUserApiHook >= 0 )
              MNClearCachedPopupSizes();
            v200 = v222;
            if ( !v222 )
              v200 = *(_QWORD *)v221[0];
            SetMenuDefaultItem(v200, v86, 0);
            PostShellHookMessagesEx(9u, *(_QWORD *)a1, 0LL);
            v201 = v222;
            if ( !v222 )
              v201 = *(_QWORD *)v221[0];
            ThreadLockAlways(v201, &v229);
            if ( a4 == 0xFFFFFFFF )
            {
              v98 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                *(_OWORD *)&BytesInMultiByteString[1] = 0LL;
                BytesInMultiByteString[0] = 20;
                if ( (unsigned int)xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&BytesInMultiByteString[1]) )
                  xxxTrackPopupMenuEx(
                    v221,
                    576LL,
                    BytesInMultiByteString[1],
                    BytesInMultiByteString[2],
                    a1,
                    BytesInMultiByteString);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v221, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
LABEL_156:
            ThreadUnlock1(v98, v97, v99);
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Au:
          case 0x20Eu:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              break;
LABEL_370:
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v224);
            v196 = *((_QWORD *)a1 + 13);
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v196, 0, 0, 0LL, 1, 1);
            goto LABEL_156;
          case 0x20Cu:
LABEL_362:
            if ( WORD1(a3) == 1 )
            {
              v195 = 2147549184LL;
            }
            else
            {
              if ( WORD1(a3) != 2 )
                break;
              v195 = 2147614720LL;
            }
            if ( a2 != 524 )
              LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
            xxxSendMessage(a1, 793LL, *(_QWORD *)a1, v195 | (unsigned __int16)a3);
            break;
          case 0x218u:
          case 0x219u:
            goto LABEL_26;
          case 0x22Au:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return 1162627398LL;
          case 0x22Bu:
            v197 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return (v197 >> 4) & 1;
          case 0x240u:
            if ( *(_QWORD *)(gptiCurrent + 1112LL) == a4 )
              *(_QWORD *)(gptiCurrent + 1112LL) = 0LL;
            FreeTouchInputInfo(a4, 1LL);
            break;
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x24Eu:
          case 0x24Fu:
            v198 = xxxDefPointerProc(0x1C0000000uLL, a2, a3, 0LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return v198;
          default:
            break;
        }
      }
LABEL_214:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return 0LL;
    }
    if ( a2 != 517 )
    {
      switch ( a2 )
      {
        case 0x101u:
        case 0x105u:
          if ( a3 == 18
            && (v160 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL), (v160 & 0x80u) == 0)
            && (v160 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x10) != 0 )
          {
            NonChildAncestor = GetNonChildAncestor((__int64)a1);
            *(_QWORD *)&v226 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v226;
            *((_QWORD *)&v226 + 1) = NonChildAncestor;
            if ( NonChildAncestor )
              HMLockObject(NonChildAncestor);
            if ( a3 == 121 )
              xxxDrawMenuBarUnderlines((__int64)a1, 1);
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(NonChildAncestor, 0, 0, 0LL, 1, 0);
            ThreadUnlock1(v163, v162, v164);
          }
          if ( a3 == 18 )
          {
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines((__int64)a1, 0);
          }
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFE3;
          goto LABEL_214;
        case 0x104u:
          v157 = a4 >> 16;
          if ( (v157 & 0x2000) != 0 )
          {
            if ( (v157 & 0x4000) == 0 )
            {
              v158 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( a3 != 18 || (v159 = *(_DWORD *)(v158 + 396), (v159 & 8) != 0) )
              {
                *(_DWORD *)(v158 + 396) &= 0xFFFFFFF3;
              }
              else
              {
                *(_DWORD *)(v158 + 396) = v159 | 8;
                xxxDrawMenuBarUnderlines((__int64)a1, 1);
              }
            }
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x10u;
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) && (_DWORD)a3 == 115 )
              xxxCloseApplication(gptiCurrent);
            goto LABEL_214;
          }
          if ( a3 != 121 )
            goto LABEL_214;
          v148 = *(_QWORD *)(gptiCurrent + 432LL);
          goto LABEL_261;
        case 0x106u:
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= 0xFFFFFFF3;
          if ( a3 == 13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
          {
            PostMessage(a1, 0x112u, 0xF120uLL, 0LL);
            goto LABEL_214;
          }
          if ( (a4 & 0x20000000) != 0 && a3 )
          {
            if ( a3 == 9 || a3 == 27 )
              goto LABEL_214;
            if ( a3 == 32 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
              {
                v165 = *((_QWORD *)a1 + 13);
                *(_QWORD *)&v224 = *(_QWORD *)(gptiCurrent + 416LL);
                *(_QWORD *)(gptiCurrent + 416LL) = &v224;
                *((_QWORD *)&v224 + 1) = v165;
                HMLockObject(v165);
                v101 = a4;
                v102 = 32LL;
                v103 = a2;
                v104 = (struct tagWND *)*((_QWORD *)a1 + 13);
LABEL_155:
                xxxSendMessage(v104, v103, v102, v101);
                goto LABEL_156;
              }
              v166 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
              if ( v166 )
              {
                v167 = 0;
                if ( *(_DWORD *)(v166[5] + 236) == 8
                  || *(_DWORD *)(v166[5] + 236) == 9
                  || *(_DWORD *)(v166[5] + 236) == 10
                  || *(_DWORD *)(v166[5] + 236) == 11
                  || *(_DWORD *)(v166[5] + 236) == 13 )
                {
                  v167 = 1;
                }
                if ( v167 )
                {
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x21u, *v166);
                  goto LABEL_214;
                }
              }
            }
            if ( a3 != 32 )
              goto LABEL_355;
            v168 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
            if ( !v168 || !(unsigned int)IsCompositionInputWindow(v168) )
              goto LABEL_355;
            CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
            if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                   + 128LL)) )
              CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL));
            if ( CompositionInputWindowUIOwner )
            {
              TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
              if ( TopLevelWindow )
              {
                memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
                ThreadLockAlways(TopLevelWindow, BytesInMultiByteString);
                xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 0LL, v171);
                if ( ThreadUnlock1(v173, v172, v174) )
                  PostMessage(TopLevelWindow, 0x112u, 0xF100uLL, 32LL);
              }
            }
          }
          else if ( a3 != 27 )
          {
            xxxMessageBeep(0LL);
          }
          goto LABEL_214;
        case 0x109u:
          if ( a3 != 0xFFFF )
            PostMessage(a1, 0x102u, a3, a4);
          goto LABEL_214;
        case 0x112u:
          xxxSysCommand(a1, a3, a4);
          goto LABEL_214;
        case 0x119u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_214;
          v150 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v151 = *(_QWORD *)(*((_QWORD *)v150 + 2) + 424LL);
          v152 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( v151 != v152 )
          {
            v153 = IsMessageAllowedByFilterEx(*(void *const **)(v151 + 872), 0x119u, 0LL, 0LL);
            if ( !v153 && v150 )
            {
              WindowMessageFilter = GetWindowMessageFilter(v150);
              v153 = IsMessageAllowedByFilterEx(WindowMessageFilter, 0x119u, 0LL, 0LL);
            }
            if ( !v153 && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(0x119u) )
            {
              if ( *(_QWORD *)v151 == gpepCSRSS )
              {
                *(_QWORD *)BytesInMultiByteString = 0x2000LL;
              }
              else
              {
                BytesInMultiByteString[0] = *(_DWORD *)(v151 + 896);
                BytesInMultiByteString[1] = *(_DWORD *)(v151 + 900);
              }
              v155 = CheckAccess(v152 + 896, BytesInMultiByteString);
              v156 = v155;
              if ( !v155 )
              {
                EtwTraceUIPIMsgError(v152, v151, 281LL, a3, a4);
                UserSetLastError(v156 + 5);
                if ( !v156 )
                  goto LABEL_214;
              }
            }
          }
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v224);
          v149 = 281LL;
          goto LABEL_408;
        case 0x11Au:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_214;
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v224);
          v149 = 282LL;
          goto LABEL_408;
        case 0x127u:
          LOWORD(v181) = a3;
          v182 = a3 >> 16;
          v183 = 0;
          v184 = 0;
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
            goto LABEL_214;
          v185 = *gpsi;
          if ( (_WORD)a3 == 3 )
          {
            LOWORD(v182) = 0;
            if ( (v185 & 0x80u) == 0 )
            {
              v186 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v186 & 0x20) == 0 && v186 < 0 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u )
                  v188 = *(_DWORD *)(ThreadWin32Thread + 648);
                else
                  LOBYTE(v188) = 0;
                if ( (v188 & 2) == 0 )
                {
                  v181 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                  LOWORD(v182) = 3;
                  a3 = v181 | 0x30000;
                }
              }
            }
          }
          else if ( (v185 & 0x80u) != 0
                 || (v189 = *(_DWORD *)(gpsi + 7004LL), (v189 & 0x20) != 0)
                 || v189 >= 0
                 || ((v190 = W32GetThreadWin32Thread(KeGetCurrentThread()), *(_DWORD *)(v190 + 632) <= 0x400u)
                   ? (v191 = *(_DWORD *)(v190 + 648))
                   : (LOBYTE(v191) = 0),
                     (v191 & 2) != 0) )
          {
            LOWORD(v182) = WORD1(a3) & 0xFFFC;
          }
          if ( !(_WORD)v182 )
            goto LABEL_214;
          if ( (v182 & 1) != 0 )
            v184 = ((_WORD)v181 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
          if ( (v182 & 2) != 0 )
            v184 |= ((_WORD)v181 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
          if ( (v182 & 4) != 0 )
          {
            LOBYTE(v183) = (_WORD)v181 == 1;
            v184 |= v183 ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
          }
          if ( !v184 )
            goto LABEL_214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            ThreadLockAlways(*((_QWORD *)a1 + 13), &v224);
            v149 = 295LL;
            goto LABEL_408;
          }
          v192 = xxxSendMessage(a1, 296LL, a3, 0LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
          result = v192;
          break;
        case 0x128u:
          updated = xxxDWP_UpdateUIState((__int64)a1, a3, a4);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
          return updated;
        case 0x129u:
          v193 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
          return v193 & 4 | ((v193 & 0x40 | ((unsigned __int64)v193 >> 2)) >> 5);
        case 0x132u:
        case 0x136u:
        case 0x138u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            goto LABEL_319;
          v176 = 4628LL;
          v178 = 4816LL;
          goto LABEL_320;
        case 0x133u:
        case 0x134u:
          goto LABEL_319;
        case 0x135u:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
          {
            v176 = 4628LL;
            v177 = 4640LL;
            v178 = 4816LL;
          }
          else
          {
LABEL_319:
            v176 = 4588LL;
            v178 = 4736LL;
LABEL_320:
            v177 = 4600LL;
          }
          goto LABEL_321;
        case 0x137u:
          if ( *(_WORD *)(gpsi + 6996LL) < 8u
            || (v175 = *(_DWORD *)(gpsi + 4648LL), v175 != *(_DWORD *)(gpsi + 4568LL))
            || v175 == *(_DWORD *)(gpsi + 4588LL) )
          {
            GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
            GreSetTextColor(a3, *(_DWORD *)(gpsi + 4628LL));
            v179 = *(_QWORD *)(gpsi + 4944LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return v179;
          }
          else
          {
            v176 = 4648LL;
            v177 = 4640LL;
            v178 = 4856LL;
LABEL_321:
            GreSetBkColor((HDC)a3, *(_DWORD *)(v176 + gpsi));
            GreSetTextColor(a3, *(_DWORD *)(v177 + gpsi));
            v180 = *(_QWORD *)(v178 + gpsi);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return v180;
          }
        default:
          goto LABEL_214;
      }
      return result;
    }
LABEL_355:
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
    goto LABEL_214;
  }
  if ( a2 == 256 )
  {
    if ( a3 == 27 )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      {
        Host = CoreWindowProp::GetHost(a1);
        if ( Host )
        {
          v147 = (struct tagWND *)GetTopLevelWindow((__int64)Host);
          if ( v147 )
            PostMessage(v147, 0x100u, 0x1BuLL, a4);
        }
      }
      goto LABEL_214;
    }
    if ( a3 != 121 )
      goto LABEL_214;
    v148 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_261:
    *(_DWORD *)(v148 + 396) |= 0x10u;
    if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
      goto LABEL_214;
    goto LABEL_355;
  }
  switch ( a2 )
  {
    case 6u:
      if ( a3 )
        xxxSetFocus(a1, v8, v9);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
        goto LABEL_214;
      v96 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1440LL);
      if ( !v96 )
        goto LABEL_214;
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      ThreadLock(v96, BytesInMultiByteString);
      xxxSendNotifyMessage(v96, 0x349u, a3, 0LL, 0);
      goto LABEL_156;
    case 0xBu:
      xxxDWP_SetRedraw(a1, a3 != 0);
      goto LABEL_214;
    case 0xCu:
      v72 = DefSetText((unsigned __int64)a1, (unsigned int *)a4);
      v10 = v72;
      if ( v72 )
      {
        xxxRedrawTitle((unsigned __int64 *)a1, 8u);
        xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
      }
      goto LABEL_7;
    case 0xDu:
      if ( !a3 )
        goto LABEL_214;
      if ( *((_QWORD *)a1 + 23) )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
      }
      v74 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      v75 = *(_DWORD *)(a4 + 4);
      if ( !v74 )
      {
        v79 = *(_WORD **)(a4 + 8);
        if ( v75 >= 0 )
          *v79 = 0;
        else
          *(_BYTE *)v79 = 0;
        goto LABEL_214;
      }
      if ( v75 >= 0 )
      {
        *(_OWORD *)BytesInMultiByteString = 0LL;
        v78 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (struct tagWND *)((char *)a1 + 184),
                (struct _LARGE_UNICODE_STRING *)BytesInMultiByteString);
        v77 = TextCopy((__int64)v78, *(char **)(a4 + 8), a3);
        v76 = 2 * v77;
      }
      else
      {
        v76 = WCSToMBEx(0LL, *((_QWORD *)a1 + 23), v74 >> 1, a4 + 8, (v75 & 0x7FFFFFFFu) - 1);
        v77 = v76;
        *(_BYTE *)(v76 + *(_QWORD *)(a4 + 8)) = 0;
      }
      *(_DWORD *)a4 = v76;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v77;
    case 0xEu:
      v80 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
      if ( !v80 )
        goto LABEL_214;
      BytesInMultiByteString[0] = 0;
      if ( a4 )
      {
        RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v80);
        v81 = BytesInMultiByteString[0];
      }
      else
      {
        BytesInMultiByteString[0] = v80 >> 1;
        v81 = v80 >> 1;
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v81;
    case 0xFu:
    case 0x26u:
      xxxDWP_Paint(a1);
      goto LABEL_214;
    case 0x10u:
      xxxDestroyWindow((__int64 *)a1);
      goto LABEL_214;
    case 0x11u:
    case 0x13u:
      goto LABEL_26;
    case 0x14u:
    case 0x27u:
      v82 = (int)xxxDWP_EraseBkgnd((__int64)a1, a2, a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v82;
    case 0x18u:
      if ( !(_WORD)a4 )
        goto LABEL_214;
      v136 = *((_QWORD *)a1 + 5);
      v137 = *(_BYTE *)(v136 + 31);
      if ( (((v137 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
        goto LABEL_214;
      v138 = v137 & 0x10;
      if ( a3 )
      {
        if ( v138 || (*(_BYTE *)(v136 + 17) & 0x40) == 0 )
          goto LABEL_214;
      }
      else if ( !v138 )
      {
        goto LABEL_214;
      }
      SetOrClrWF(0, (__int64 *)a1, 0x140u, 1);
      if ( !a3 )
        SetOrClrWF(1, (__int64 *)a1, 0x140u, 1);
      xxxShowWindowEx(a1, a3 != 0 ? 4 : 0, gdwPUDFlags & 0x10000);
      goto LABEL_214;
    case 0x19u:
      goto LABEL_319;
    case 0x1Fu:
      xxxDWP_DoCancelMode(a1);
      goto LABEL_214;
    case 0x20u:
      v130 = (int)xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v130;
    case 0x21u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v131 = *((_QWORD *)a1 + 13);
        if ( v131 )
        {
          ThreadLockAlways(*((_QWORD *)a1 + 13), &v226);
          v10 = xxxSendMessage(v131, 33LL, a3, a4);
          ThreadUnlock1(v133, v132, v134);
          if ( v10 )
            goto LABEL_7;
        }
      }
      if ( (_WORD)a4 != 2 || (v135 = 3LL, WORD1(a4) != 513) )
        v135 = 1LL;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v135;
    case 0x2Bu:
      DWP_DrawItem((struct tagDRAWITEMSTRUCT *)a4);
      goto LABEL_214;
    case 0x2Eu:
    case 0x2Fu:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return -1LL;
    case 0x32u:
      v141 = (int)DWP_SetHotKey(a1, a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v141;
    case 0x33u:
      v139 = *HotKeyHelper(a1);
      if ( !v139 )
        goto LABEL_214;
      v140 = *((_DWORD *)v139 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v140;
    case 0x35u:
      v71 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return (unsigned int)v71;
    case 0x3Bu:
      v10 = (int)xxxClientShutdown((__int64)a1, a3);
LABEL_7:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v10;
    case 0x46u:
      if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
      {
        v229 = 0LL;
        memset(v230, 0, 24);
        v115 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v115 + 31) & 0xC0) == 0 || (*(_BYTE *)(v115 + 30) & 4) != 0 )
        {
          xxxInitSendValidateMinMaxInfoEx(a1, (__int64)&v229, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
            v116 = v229;
          else
            v116 = *(_OWORD *)((char *)v230 + 8);
          v117 = *(_DWORD *)(a4 + 24);
          v118 = v117;
          if ( v117 >= SDWORD2(v116) )
            v118 = DWORD2(v116);
          if ( (int)v116 <= v118 )
          {
            v119 = DWORD2(v116);
            if ( v117 < SDWORD2(v116) )
              v119 = *(_DWORD *)(a4 + 24);
          }
          else
          {
            v119 = v116;
          }
          *(_DWORD *)(a4 + 24) = v119;
          v120 = *(_DWORD *)(a4 + 28);
          v121 = HIDWORD(*((_QWORD *)&v116 + 1));
          v122 = DWORD1(v116);
          v123 = v120;
          if ( v120 >= SHIDWORD(v116) )
            v123 = HIDWORD(v116);
          if ( SDWORD1(v116) <= v123 )
          {
            if ( v120 < SHIDWORD(v116) )
              LODWORD(v121) = *(_DWORD *)(a4 + 28);
            LODWORD(v122) = v121;
          }
          *(_DWORD *)(a4 + 28) = v122;
          ConstrainWindowSize((int *)(a4 + 24), (int *)(a4 + 28));
        }
      }
      goto LABEL_214;
    case 0x47u:
      if ( (*(_DWORD *)(a4 + 32) & 0x1000) == 0 )
      {
        DesktopWindow = GetDesktopWindow((__int64)a1);
        if ( v127 != DesktopWindow )
        {
          v128 = *(_QWORD *)(v127 + 40);
          v125 -= *(_DWORD *)(v128 + 108);
          v126 -= *(_DWORD *)(v128 + 104);
        }
        xxxSendTransformableMessage((_DWORD)a1, 3, 0, (v125 << 16) ^ (unsigned __int16)v126, 0);
      }
      v129 = *(_DWORD *)(a4 + 32);
      if ( (v129 & 0x8000) != 0 || (v129 & 0x800) == 0 )
        xxxSendSizeMessage((ULONG_PTR)a1);
      goto LABEL_214;
    case 0x49u:
      v144 = SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v144;
    case 0x4Du:
      ContextHelpId = GetContextHelpId(a1);
      xxxSendHelpMessage((ULONG_PTR)a1, ContextHelpId);
      goto LABEL_214;
    case 0x4Fu:
      if ( !ValidateHwnd(a3) )
        goto LABEL_214;
      goto LABEL_26;
    case 0x50u:
      v100 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      if ( v100 && v100 != a1 && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 904LL) )
      {
        ThreadLockAlways(v100, &v226);
        v101 = a4;
        v102 = a3;
        v103 = a2;
        v104 = v100;
        goto LABEL_155;
      }
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457);
      goto LABEL_214;
    case 0x51u:
      memset(BytesInMultiByteString, 0, sizeof(BytesInMultiByteString));
      v106 = BuildHwndList(*((ShellWindowManagement **)a1 + 14), (const struct tagWND *)2, 0LL, 1LL);
      v107 = v106;
      if ( v106 )
      {
        v108 = (_QWORD *)((char *)v106 + 32);
        v109 = *((_QWORD *)v106 + 4);
        if ( v109 != 1 )
        {
          do
          {
            v110 = HMValidateHandleNoSecure(v109, 1);
            v111 = v110;
            if ( v110 )
            {
              ThreadLockAlways(v110, BytesInMultiByteString);
              xxxSendMessage(v111, a2, a3, a4);
              ThreadUnlock1(v113, v112, v114);
            }
            v109 = *++v108;
          }
          while ( *v108 != 1LL );
        }
        FreeHwndList(v107);
      }
      goto LABEL_214;
    case 0x53u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        v91 = *((_QWORD *)a1 + 13);
      else
        v91 = *((_QWORD *)a1 + 15);
      if ( !v91 || v91 == GetThreadDesktopWindow(0LL) )
        goto LABEL_214;
      ThreadLockAlways(v91, &v226);
      _InterlockedIncrement(&glSendMessage);
      v92 = xxxSendTransformableMessageTimeout(v91, 0, 0, 0LL, 1, 1);
      goto LABEL_409;
    case 0x55u:
      if ( a4 != 3 )
        goto LABEL_214;
      v145 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return 2LL - ((v145 & 0x20) != 0);
    case 0x7Bu:
      NCHit = FindNCHit((__int64)a1, a4);
      if ( (unsigned int)(NCHit - 6) <= 1 )
      {
        if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          xxxDoScrollMenu(a1, 0LL, v89 - 6);
      }
      else
      {
        v88 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v88 + 31) & 0xC0) == 0x40 )
          goto LABEL_370;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
        {
          if ( NCHit == 2 )
            goto LABEL_378;
          if ( NCHit == 3 )
          {
            v86 = 61536;
            goto LABEL_380;
          }
          if ( a4 == -1LL && (*(_BYTE *)(v88 + 21) & 2) == 0 )
            xxxSimulateShiftF10();
        }
      }
      goto LABEL_214;
    case 0x7Fu:
      Icon = DWP_GetIcon((__int64)a1, (unsigned int)a3);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return Icon;
    case 0x80u:
      v143 = xxxDWP_SetIcon(a1, a3, (HICON)a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return (unsigned __int64)v143;
    case 0x81u:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB((__int64)a1) )
        goto LABEL_214;
      if ( !a4 )
        goto LABEL_29;
      v13 = (_DWORD *)(a4 + 80);
      if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v14 = *(_WORD **)(a4 + 88)) == 0LL )
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
        return 1LL;
      }
      if ( *(int *)(a4 + 84) >= 0 )
      {
        if ( *v13 < 2u || *v14 != 0xFFFF )
        {
LABEL_29:
          v15 = *((_QWORD *)a1 + 5);
          v16 = *(_DWORD *)(v15 + 28);
          v17 = *(_DWORD *)(v15 + 24);
          v18 = *(_DWORD *)(v15 + 232);
          *(_BYTE *)(v15 + 18) |= 2u;
          if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            goto LABEL_45;
          v19 = (_DWORD *)*((_QWORD *)a1 + 5);
          v20 = v19[7];
          v21 = v16 ^ v20;
          BytesInMultiByteString[0] = v16 ^ v20;
          v22 = v19[6];
          v23 = v17 ^ v22;
          v24 = v19[58];
          v25 = v18 ^ v24;
          if ( v16 == v20 && !v23 && !v25 )
          {
LABEL_45:
            v33 = (int)DefSetText((unsigned __int64)a1, (unsigned int *)(a4 + 80));
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
            return v33;
          }
          v26 = 0;
          v27 = 0;
          v28 = 0;
          if ( (v21 & 0xB1CF0000) != 0 )
          {
            v26 = -16;
            v27 = v20;
          }
          else if ( (v23 & 0x4E27A9) != 0 )
          {
            v26 = -20;
            v27 = v22;
          }
          else
          {
            if ( (v25 & 0x12C0) == 0 )
            {
LABEL_40:
              if ( v28 )
              {
                DirtyVisRgnTrackers((__int64)a1);
                v29 = *(_QWORD *)a1;
                v32 = (void *)ReferenceDwmApiPort(v31, v30);
                DwmAsyncChildStyleChange(v32, v29, v26, v27);
                v21 = BytesInMultiByteString[0];
              }
              if ( (v21 & 0xC40000) != 0 || (v23 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(a1, 1);
              goto LABEL_45;
            }
            v26 = -268435456;
            v27 = v24;
          }
          v28 = 1;
          goto LABEL_40;
        }
      }
      else if ( !*v13 || *(_BYTE *)v14 != 0xFF )
      {
        goto LABEL_29;
      }
LABEL_26:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      result = 1LL;
      break;
    case 0x83u:
      xxxCalcClientRect(a1, a4, 0LL);
      goto LABEL_214;
    case 0x84u:
      v12 = (int)FindNCHit((__int64)a1, a4);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v221);
      return v12;
    case 0x85u:
      v34 = *((_QWORD *)a1 + 5);
      v35 = *(_DWORD *)(v34 + 28);
      v36 = *(_DWORD *)(v34 + 24);
      v37 = *(_DWORD *)(v34 + 232);
      *(_BYTE *)(v34 + 17) |= 0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1)
        || (v38 = (_DWORD *)*((_QWORD *)a1 + 5),
            v39 = v38[7],
            v40 = v38[6],
            v41 = v36 ^ v40,
            v42 = v38[58],
            v43 = v37 ^ v42,
            (v44 = v35 ^ v39) == 0)
        && !v41
        && !v43 )
      {
        v45 = 0;
        goto LABEL_63;
      }
      v45 = 0;
      BytesInMultiByteString[0] = 0;
      v223 = 0;
      v46 = 0;
      if ( (v44 & 0xB1CF0000) != 0 )
      {
        BytesInMultiByteString[0] = -16;
        v223 = v39;
      }
      else if ( (v41 & 0x4E27A9) != 0 )
      {
        BytesInMultiByteString[0] = -20;
        v223 = v40;
      }
      else
      {
        if ( (v43 & 0x12C0) == 0 )
          goto LABEL_57;
        BytesInMultiByteString[0] = -268435456;
        v223 = v42;
      }
      v46 = 1;
LABEL_57:
      if ( v46 )
      {
        DirtyVisRgnTrackers((__int64)a1);
        v47 = *(_QWORD *)a1;
        v50 = (void *)ReferenceDwmApiPort(v49, v48);
        DwmAsyncChildStyleChange(v50, v47, BytesInMultiByteString[0], v223);
      }
      if ( (v44 & 0xC40000) != 0 || (v41 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1);
LABEL_63:
      DCEx = (HDC)_GetDCEx(a1, a3, 328833LL);
      v52 = DCEx;
      if ( DCEx )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
          || (v53 = 1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
        {
          v53 = 0;
        }
        xxxDrawWindowFrame(a1, DCEx, v53);
        _ReleaseDC(v52);
      }
      v54 = *((_QWORD *)a1 + 5);
      v55 = *(_DWORD *)(v54 + 28);
      v56 = *(_DWORD *)(v54 + 24);
      BytesInMultiByteString[0] = *(_DWORD *)(v54 + 232);
      *(_BYTE *)(v54 + 17) &= ~0x80u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_214;
      v57 = (_DWORD *)*((_QWORD *)a1 + 5);
      v58 = v57[7];
      v59 = v57[6];
      v60 = v56 ^ v59;
      v61 = v57[58];
      v62 = BytesInMultiByteString[0] ^ v61;
      v63 = v55 ^ v58;
      if ( v55 == v58 && !v60 && !v62 )
        goto LABEL_214;
      v64 = 0;
      v65 = 0;
      if ( (v63 & 0xB1CF0000) != 0 )
      {
        v45 = -16;
        v64 = v58;
      }
      else if ( (v60 & 0x4E27A9) != 0 )
      {
        v45 = -20;
        v64 = v59;
      }
      else
      {
        if ( (v62 & 0x12C0) == 0 )
          goto LABEL_79;
        v45 = -268435456;
        v64 = v61;
      }
      v65 = 1;
LABEL_79:
      if ( v65 )
      {
        DirtyVisRgnTrackers((__int64)a1);
        v66 = *(_QWORD *)a1;
        v69 = (void *)ReferenceDwmApiPort(v68, v67);
        DwmAsyncChildStyleChange(v69, v66, v45, v64);
      }
      if ( (v63 & 0xC40000) != 0 || (v60 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges(a1, 1);
      goto LABEL_214;
    case 0x86u:
      xxxDWP_DoNCActivate((__int64 *)a1, (_WORD)a3 != 0, a4);
      goto LABEL_26;
    case 0x88u:
      SetOrClrWF(0, (__int64 *)a1, 0x280u, 1);
      xxxInternalDoSyncPaint((__int64 *)a1, (unsigned int)a3, v83);
      goto LABEL_214;
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
      xxxDWP_NCMouse((ULONG_PTR)a1, a2, a3, a4);
      goto LABEL_214;
    case 0xA4u:
      v229 = 0LL;
      memset(v230, 0, sizeof(v230));
      v84 = FindNCHit((__int64)a1, a4);
      if ( (unsigned int)(v84 - 6) <= 1 )
      {
        if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL), (__int64)a1) )
          goto LABEL_214;
      }
      else if ( (unsigned int)(v84 - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
      {
        goto LABEL_214;
      }
      xxxSetCapture((__int64)a1);
      while ( !(unsigned int)xxxInternalGetMessage(&v229, 0LL, 512, 526, 1, 0) || DWORD2(v229) != 517 )
      {
        if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL)
          || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
        {
          goto LABEL_214;
        }
      }
      xxxReleaseCapture();
      v85 = FindNCHit((__int64)a1, WORD2(v230[1]) | (WORD4(v230[1]) << 16));
      if ( ((v85 - 2) & 0xFFFFFFFA) != 0 )
        goto LABEL_214;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
      {
        if ( v85 == 2 )
          goto LABEL_378;
        if ( v85 == 3 )
        {
          v86 = 61536;
          goto LABEL_380;
        }
      }
      goto LABEL_355;
    case 0xACu:
      goto LABEL_362;
    case 0xAEu:
      v70 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      xxxDrawCaptionBar(a1, v70, a3);
      _ReleaseDC(v70);
      goto LABEL_214;
    case 0xAFu:
      xxxDrawWindowFrame(a1, (HDC)a3, a4);
      goto LABEL_214;
    default:
      goto LABEL_214;
  }
  return result;
}
