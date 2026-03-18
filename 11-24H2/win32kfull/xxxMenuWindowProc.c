/*
 * XREFs of xxxMenuWindowProc @ 0x14017E730
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14017E500 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     xxxValidateRect @ 0x14003F0D8 (xxxValidateRect.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     _SetTimer @ 0x14005F768 (_SetTimer.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNIsFlatMenu @ 0x14006B254 (MNIsFlatMenu.c)
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1400987D8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x140098F94 (FindBestPos.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14009A560 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     LockPopupMenu @ 0x14009AD54 (LockPopupMenu.c)
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     xxxMNButtonUp @ 0x14009D560 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A7418 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     IsPointerParentNotify @ 0x1400A9600 (IsPointerParentNotify.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400F697C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsPointerInputMessageWithState @ 0x1401507E0 (IsPointerInputMessageWithState.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     GreSetWindowOrg @ 0x1401C555C (GreSetWindowOrg.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D109C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1401D8418 (xxxSendUAHMenuMessage.c)
 *     zzzStartFade @ 0x1401E29B8 (zzzStartFade.c)
 *     zzzShowFade @ 0x1401E2AC0 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1401FB1A0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1401FEAF8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNAllocPopup @ 0x140201FE0 (MNAllocPopup.c)
 *     MNDrawEdge @ 0x14020BC9C (MNDrawEdge.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 *     xxxValidateClassAndSize @ 0x14023A978 (xxxValidateClassAndSize.c)
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140264910 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     xxxMNSetCapture @ 0x14026533C (xxxMNSetCapture.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     MNCreateAnimationBitmap @ 0x1402B3F8C (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1402BCAD8 (xxxUserModeCallback.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BD38C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNCheckButtonDownState @ 0x1402BD878 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1402BD8D4 (MNGetpItem.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     MNEraseBackground @ 0x1402E93D4 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1402EAE90 (MNFindNextValidItem.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall xxxMenuWindowProc(
        const struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagMONITOR *a4)
{
  unsigned int v4; // ebx
  int v6; // edi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  BOOL v15; // r8d
  unsigned __int64 v16; // rdi
  struct tagTHREADINFO *v17; // rax
  const struct tagWND *v18; // r12
  __int64 v19; // rdx
  struct tagMENUSTATE *i; // rdi
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r12
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  struct tagDRAWITEMSTRUCT *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rdx
  struct tagMENUWND *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  struct tagWND *v37; // rcx
  __int64 DCEx; // rbx
  __int64 v39; // rdx
  __int64 v40; // rdi
  int v41; // ebx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rbx
  const struct tagWND *v45; // rcx
  struct tagMONITOR *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rdx
  int v51; // eax
  __int64 *v52; // rcx
  __int64 ValidItem; // rbx
  __int64 v54; // rdx
  __int64 v55; // rdx
  struct tagITEM *v56; // rax
  __int64 v57; // rbx
  int v58; // edi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 *v61; // rax
  HFONT v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rdx
  struct tagMONITOR *v65; // rax
  int v66; // ebx
  struct tagMONITOR *v67; // rdi
  int v68; // edi
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // r14d
  struct tagMONITOR *v72; // r12
  const struct tagWND *v73; // rax
  int v74; // edx
  int BestPos; // eax
  __int64 v76; // rdx
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct tagTHREADINFO *v83; // rax
  __int64 v84; // rbx
  struct tagTHREADINFO *v85; // rax
  __int64 v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rdx
  char *v89; // r13
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  int v106; // ecx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 UserSessionState; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  struct tagTHREADINFO *v116; // rbx
  const struct tagWND *v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  int v120; // edi
  unsigned int v121; // ebx
  const struct tagWND **TopWindow; // rax
  unsigned int v123; // eax
  __int64 v124; // r14
  __int64 *v125; // rax
  struct tagWND **v126; // rbx
  __int64 v127; // rdi
  __int64 v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // rdx
  ULONG_PTR *v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  int v143; // eax
  int v144; // edx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rdx
  char v154; // [rsp+28h] [rbp-99h]
  struct tagMONITOR *v155; // [rsp+58h] [rbp-69h] BYREF
  __int64 v156[2]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v157; // [rsp+70h] [rbp-51h] BYREF
  struct tagMENUWND *v158; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v159; // [rsp+80h] [rbp-41h] BYREF
  struct _POINTL v160; // [rsp+88h] [rbp-39h] BYREF
  ULONG_PTR v161; // [rsp+90h] [rbp-31h] BYREF
  __int64 v162; // [rsp+98h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int v164; // [rsp+B8h] [rbp-9h]
  ULONG_PTR v165[2]; // [rsp+C0h] [rbp-1h] BYREF
  struct tagMENU **v166[3]; // [rsp+D0h] [rbp+Fh] BYREF

  v4 = a2;
  v164 = a2;
  v155 = a4;
  v6 = (int)a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v156, 0LL);
  v161 = -1LL;
  v8 = 0LL;
  v162 = 0LL;
  v160 = 0LL;
  v157 = 0LL;
  v11 = PtiCurrent(v10, v9);
  v159 = 2;
  if ( a1[2] != v11 )
  {
    LODWORD(v158) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4336LL);
  }
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, v4, a3, v6, 668, 129, (__int64)&v157) )
  {
    v8 = v157;
LABEL_265:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v12);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v132);
    return v8;
  }
  if ( a1[2] != PtiCurrent(v13, v12) )
  {
    v15 = IsPointerInputMessageWithState(v4);
    if ( !v15 && !IsPointerParentNotify(v14, a3) )
      goto LABEL_14;
    LOWORD(v16) = 0;
    if ( v15 )
    {
      LOWORD(v16) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(v4, a3) )
      {
LABEL_13:
        v17 = PtiCurrent(v14, v12);
        if ( !GetThreadPointerData((struct _LIST_ENTRY *)((char *)v17 + 1208), v16, 0LL, 0LL) )
          goto LABEL_265;
LABEL_14:
        v8 = xxxSendMessage((struct tagWND *)a1, v4);
        goto LABEL_265;
      }
      v16 = a3 >> 16;
    }
    if ( (_WORD)v16 == 1 )
      goto LABEL_265;
    goto LABEL_13;
  }
  v18 = a1[35];
  v158 = v18;
  v19 = *((_QWORD *)v18 + 1);
  *(_QWORD *)v18 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v156, v19);
  if ( *(_QWORD *)v156[0] )
  {
    for ( i = *(struct tagMENUSTATE **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 648LL);
          i;
          i = (struct tagMENUSTATE *)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*((_QWORD *)v18 + 1) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157, i);
  if ( *(_QWORD *)v156[0] )
  {
    v21 = *(_QWORD *)v156[0];
    v23 = *(_QWORD *)(*(_QWORD *)v156[0] + 40LL);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = 256LL;
  v25 = 1LL;
  if ( !i || !v23 )
  {
    switch ( v4 )
    {
      case 0x1E0u:
        if ( !*(_QWORD *)v156[0] || *(char *)(*(_QWORD *)(*(_QWORD *)v158 + 40LL) + 19LL) < 0 )
          goto LABEL_76;
LABEL_193:
        if ( !a3 )
          goto LABEL_301;
        v95 = ValidateHmenu(a3, 1LL);
        if ( !v95 )
          goto LABEL_301;
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v166, v95);
        LockPopupMenu((__int64)v156, (__int64 *)(*(_QWORD *)v156[0] + 40LL), (__int64)v166);
        goto LABEL_210;
      case 0x81u:
        v32 = v158;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)v158 + 40LL) + 19LL) < 0 )
          goto LABEL_76;
        goto LABEL_45;
      case 0x70u:
LABEL_200:
        if ( v4 <= 0x18 )
        {
          if ( v4 == 24 )
          {
            if ( !a3 )
              xxxMNCancel((__int64)i, 0, 0, 0LL);
            goto LABEL_35;
          }
          if ( v4 == 3 || v4 == 5 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)v156[0] + 24LL) )
              goto LABEL_301;
            v124 = MNGetpItem(v156, *(unsigned int *)(*(_QWORD *)v156[0] + 84LL));
            v125 = (__int64 *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v156[0] + 24LL));
            v126 = (struct tagWND **)v125;
            if ( !v124 )
              goto LABEL_301;
            if ( !v125 )
              goto LABEL_301;
            v127 = v125[1];
            if ( !v127 )
              goto LABEL_301;
            v128 = *v125;
            if ( !*v125 )
              goto LABEL_301;
            v129 = *(_QWORD *)(v127 + 40);
            v159 = 0;
            LODWORD(v158) = 0;
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v128);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v165, v129);
            if ( !*(_DWORD *)(v129 + 64) )
              xxxSendMessage(*v126, 0x1E2u);
            if ( *(_QWORD *)(*(_QWORD *)v156[0] + 40LL) && MNIspItemValid(*(_QWORD *)(*(_QWORD *)v156[0] + 40LL), v124) )
              xxxMNPositionHierarchy(
                (__int64 **)v156,
                v124,
                *(_DWORD *)(v129 + 64) + 6,
                *(_DWORD *)(v129 + 68) + 6,
                (LONG *)&v159,
                (int *)&v158,
                0LL);
            xxxSetWindowPos(*v126, 0LL, v159, (unsigned int)v158, 0, 0, 1029);
            Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v165, v130);
            v131 = BugCheckParameter3;
            goto LABEL_300;
          }
          if ( v4 != 6 )
          {
            if ( v4 != 15 )
            {
              if ( v4 == 20 && *(_QWORD *)(*(_QWORD *)(v23 + 40) + 24LL) )
              {
                MNEraseBackground(
                  (HDC)a3,
                  *((_DWORD *)a1[5] + 28) - *((_DWORD *)a1[5] + 26),
                  *((_DWORD *)a1[5] + 29) - *((_DWORD *)a1[5] + 27));
                goto LABEL_49;
              }
              goto LABEL_35;
            }
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v166, v23);
            xxxHandleMenuPainting((struct tagWND *)a1);
LABEL_210:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v166, v96);
            goto LABEL_301;
          }
          v97 = *((_DWORD *)i + 2);
          if ( (v97 & 0x100) != 0 )
          {
            if ( (_WORD)a3 || (v97 & 0x200) != 0 || (**(_DWORD **)i & 0x80000) != 0 )
              goto LABEL_35;
            LOBYTE(v24) = 1;
            v155 = (struct tagMONITOR *)HMValidateHandleNoSecure((__int64)v155, v24);
            v98 = safe_cast_fnid_to_PMENUWND(v155);
            v28 = v155;
            if ( !v155 )
              goto LABEL_36;
            if ( v98 )
            {
              v101 = *(_QWORD *)(v98 + 8);
              if ( v101 )
              {
                if ( *(_QWORD *)i == *(_QWORD *)(v101 + 64) )
                  goto LABEL_36;
              }
            }
            if ( (*((_DWORD *)i + 2) & 0x10000) != 0 )
            {
              v102 = *(_QWORD *)(W32GetUserSessionState(v100, v99) + 18944);
              if ( v102 == *((_QWORD *)PtiCurrent(v104, v103) + 59) )
              {
                *((_DWORD *)i + 2) &= ~0x10000u;
                PostMessage((int)a1, 498, 0, 0);
                v4 = v164;
                goto LABEL_36;
              }
            }
LABEL_224:
            v106 = (int)a1;
LABEL_225:
            PostMessage(v106, 499, 0, 0);
            goto LABEL_301;
          }
          if ( !(_WORD)a3 )
            goto LABEL_301;
          if ( *((_WORD *)PtiCurrent(v21, 256LL) + 336) >= 0x500u )
            goto LABEL_224;
          if ( !*(_QWORD *)(W32GetUserSessionState(1280LL, v105) + 18952)
            || (UserSessionState = W32GetUserSessionState(v108, v107),
                !IsWindowActivateable(*(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18952) + 136LL)))
            || (v113 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v111, v110) + 18952) + 136LL) + 40LL),
                (*(_WORD *)(v113 + 42) & 0x2FFF) == 0x29C) )
          {
            v120 = (int)a1;
            v121 = 0;
            do
            {
              TopWindow = (const struct tagWND **)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
              a1 = TopWindow;
              if ( !TopWindow )
                break;
              if ( IsWindowActivateable(TopWindow[25]) )
              {
                v114 = (__int64)a1[25];
                v115 = *(_WORD *)(*(_QWORD *)(v114 + 40) + 42LL) & 0x2FFF;
                if ( (_DWORD)v115 != 668 )
                {
                  a1 = (const struct tagWND **)a1[25];
                  goto LABEL_230;
                }
              }
              v123 = v121++;
            }
            while ( v123 < 0xFF );
            if ( !v121 )
              goto LABEL_230;
            v106 = v120;
            goto LABEL_225;
          }
          v115 = *(_QWORD *)(W32GetUserSessionState(v113, v112) + 18952);
          a1 = *(const struct tagWND ***)(v115 + 136);
LABEL_230:
          if ( !a1 )
            goto LABEL_301;
          v116 = PtiCurrent(v115, v114);
          Win32HM_LockIntoThread<0>((__int64)v116, (__int64)a1, v165);
          v117 = a1[2];
          v118 = *((_QWORD *)v116 + 59);
          if ( *((_QWORD *)v117 + 59) == v118 )
          {
            xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL, 0);
          }
          else if ( *(_QWORD *)(W32GetUserSessionState(v118, v117) + 18944) == *((_QWORD *)v116 + 59) )
          {
            xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 0LL);
          }
LABEL_299:
          v131 = v165;
LABEL_300:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v131, v119);
          goto LABEL_301;
        }
        if ( v4 == 28 )
        {
          if ( (*((_DWORD *)i + 2) & 0x100) == 0 || a1 != *(const struct tagWND ***)(*(_QWORD *)i + 56LL) )
            goto LABEL_301;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            v149 = *(_QWORD *)(W32GetUserSessionState(v148, v147) + 18944);
            *((_DWORD *)i + 2) = *((_DWORD *)i + 2) & 0xFFFEFFFF | (*((_QWORD *)PtiCurrent(v151, v150) + 59) != v149
                                                                  ? 0x10000
                                                                  : 0);
          }
          if ( !*(_QWORD *)(*(_QWORD *)v156[0] + 8LL) )
            goto LABEL_301;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            v165,
            *(_QWORD *)(*(_QWORD *)v156[0] + 8LL));
          if ( a3 && (*((_DWORD *)i + 2) & 0x10000) == 0 )
            v159 = 1;
          xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v156[0] + 8LL), v159, 1LL);
          goto LABEL_299;
        }
        if ( v4 != 70 )
        {
          if ( v4 != 71 )
          {
            if ( v4 != 112 )
              goto LABEL_35;
            if ( i && (*((_DWORD *)i + 2) & 0x400) != 0 )
            {
              v155 = *a1;
              xxxUserModeCallback(101, (unsigned int)&v155, 8, v22, v154);
            }
            xxxMNDestroyHandler(v158);
LABEL_264:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
            goto LABEL_265;
          }
          if ( (*((_DWORD *)v155 + 8) & 0x40) == 0 || (**(_DWORD **)v156[0] & 0x8000000) == 0 )
            goto LABEL_35;
          if ( (*(_DWORD *)(W32GetUserSessionState(*(_QWORD *)v156[0], 256LL) + 43072) & 0x10) != 0 )
          {
            zzzStartFade();
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((__int64)a1, 65531, 10, 0, 0);
          }
LABEL_271:
          **(_DWORD **)v156[0] &= ~0x8000000u;
          goto LABEL_35;
        }
        if ( (*((_DWORD *)v155 + 8) & 0x40) == 0 )
          goto LABEL_35;
        if ( (*(_DWORD *)(W32GetUserSessionState(v21, 256LL) + 67060) & 0x80000002) != 0x80000002 )
          goto LABEL_271;
        if ( (**(_DWORD **)v156[0] & 0x8000000) == 0 )
          goto LABEL_271;
        v134 = W32GetUserSessionState(*(_QWORD *)v156[0], v133);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v134 + 3064)) == 1 )
          goto LABEL_271;
        v137 = W32GetUserSessionState(v136, v135);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v137 + 3064)) == 4
          || (GetAppCompatFlags2(1024LL, v138) & 1) != 0 )
        {
          goto LABEL_271;
        }
        *((_DWORD *)i + 29) = *((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22);
        v140 = (unsigned int)(*((_DWORD *)a1[5] + 25) - *((_DWORD *)a1[5] + 23));
        *((_DWORD *)i + 30) = v140;
        if ( *(_DWORD *)(W32GetUserSessionState(v140, v139) + 43304)
          || (*(_DWORD *)(W32GetUserSessionState(v142, v141) + 67060) & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29), *((unsigned int *)i + 30)) )
            goto LABEL_271;
          *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
          v143 = 0;
          v144 = *((_DWORD *)i + 2) ^ ((**(_DWORD **)v156[0] >> 4) ^ *((_DWORD *)i + 2)) & 0xF80000;
          *((_DWORD *)i + 2) = v144;
          if ( (v144 & 0x180000) == 0 )
            v143 = *((_DWORD *)i + 29);
          *((_DWORD *)i + 27) = v143;
          if ( (v144 & 0x600000) == 0 )
            LODWORD(v8) = *((_DWORD *)i + 30);
          *((_DWORD *)i + 28) = v8;
        }
        else if ( !CreateFadeInternal((struct tagWND *)a1, 0LL, 0xAFu, 0x11u, 0) )
        {
          goto LABEL_271;
        }
        *(_DWORD *)(*(_QWORD *)(v23 + 40) + 40LL) |= 8u;
        xxxSendMessage((struct tagWND *)a1, 0x317u);
        *(_DWORD *)(*(_QWORD *)(v23 + 40) + 40LL) &= ~8u;
        if ( (*(_DWORD *)(W32GetUserSessionState(v146, v145) + 43072) & 0x10) != 0 )
          zzzShowFade();
        goto LABEL_35;
    }
    goto LABEL_35;
  }
  v26 = PtiCurrent(v21, 256LL);
  Win32HM_LockIntoThread<0>((__int64)v26, v23, &v161);
  if ( !*(_QWORD *)(*(_QWORD *)v156[0] + 64LL)
    || (v27 = 1, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v158 + 16LL) + 648LL) == *(_QWORD *)(*(_QWORD *)v156[0] + 64LL)) )
  {
    v27 = 0;
  }
  v21 = *((unsigned int *)i + 2);
  v24 = 256LL;
  if ( (v21 & 0x100) != 0 && (v21 & 0x200) == 0 )
  {
    if ( v27 )
    {
      if ( v4 - 512 <= 0xE || v4 - 256 <= 9 || v4 - 160 <= 0xD )
        goto LABEL_35;
    }
    else
    {
      if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)a1, v4, a3, (__int64)v155) )
        goto LABEL_76;
      v24 = 256LL;
    }
  }
  if ( v4 <= 0x1E1 )
  {
    if ( v4 == 481 )
    {
      if ( !v162 || (v23 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)&v161)) != 0 )
        v8 = *(_QWORD *)v23;
      goto LABEL_264;
    }
    if ( v4 <= 0x81 )
    {
      if ( v4 == 129 )
      {
        v32 = v158;
LABEL_45:
        if ( !*((_QWORD *)v32 + 1) && !*((_QWORD *)v32 + 2) )
        {
          v33 = MNAllocPopup(1LL);
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v156, v33);
          if ( *(_QWORD *)v156[0] )
          {
            *((_QWORD *)v32 + 1) = *(_QWORD *)v156[0];
            **(_DWORD **)v156[0] |= 0x40000000u;
            *(_DWORD *)(*(_QWORD *)v156[0] + 80LL) = -1;
            BugCheckParameter3[1] = (ULONG_PTR)a1;
            BugCheckParameter3[0] = *(_QWORD *)v156[0] + 16LL;
            HMAssignmentLock(BugCheckParameter3, 0LL);
LABEL_49:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
            v8 = 1LL;
            goto LABEL_265;
          }
        }
LABEL_76:
        v25 = 0LL;
        goto LABEL_37;
      }
      goto LABEL_200;
    }
    if ( v4 == 131 )
    {
      v46 = v155;
      xxxDefWindowProc(a1, 131LL, (HWND)a3, v155);
      if ( (*(_DWORD *)(v23 + 124) & 3) != 0 )
      {
        v49 = *(_DWORD *)(GetDpiMetricsForCurrentThread(v48, v47) + 36);
        *((_DWORD *)v155 + 1) += v49;
        *((_DWORD *)v46 + 3) -= v49;
      }
      goto LABEL_301;
    }
    if ( v4 != 132 )
    {
      if ( v4 == 133 )
      {
        if ( (**(_DWORD **)v156[0] & 0x8000000) != 0 )
        {
          xxxValidateRect((struct tagWND *)a1);
        }
        else
        {
          if ( (*(_DWORD *)(v23 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, 256LL) )
            {
              v35 = 0LL;
              v36 = 65537LL;
              v37 = *(struct tagWND **)(*(_QWORD *)v156[0] + 16LL);
            }
            else
            {
              v36 = 328833LL;
              v35 = a3;
              v37 = (struct tagWND *)a1;
            }
            DCEx = _GetDCEx(v37, v35, v36);
            xxxMNDrawFullNC(a1, DCEx, v156);
          }
          else
          {
            if ( !MNIsFlatMenu(*(_QWORD *)v156[0], 256LL) )
            {
              v42 = xxxDefWindowProc(a1, v4, (HWND)a3, v155);
              if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v43) && *(_QWORD *)(*(_QWORD *)v156[0] + 16LL) )
              {
                v44 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 0LL, 65537LL);
                xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 149LL, v23, v44);
                _ReleaseDC(v44);
              }
              MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
              v8 = v42;
              goto LABEL_265;
            }
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v39) )
            {
              v40 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 0LL, 65537LL);
              v41 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 149LL, v23, v40);
              _ReleaseDC(v40);
              if ( v41 )
                goto LABEL_301;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v23, DCEx, (char *)a1[5] + 88, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_301:
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
        Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v152);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v153);
        return 0LL;
      }
      if ( v4 != 256 )
      {
        if ( v4 == 258 )
          goto LABEL_77;
        if ( v4 != 260 )
        {
          if ( v4 != 262 )
          {
            if ( v4 != 275 )
            {
              if ( v4 != 480 )
                goto LABEL_35;
              goto LABEL_193;
            }
            if ( a3 != 65529 )
            {
              if ( a3 == 65531 )
              {
                if ( *((_QWORD *)i + 12) )
                  MNAnimate((__int64 *)i, 1LL);
                goto LABEL_301;
              }
              if ( a3 == 65534 )
              {
                **(_DWORD **)v156[0] &= ~0x80u;
                xxxMNOpenHierarchy((__int64 **)v156, (__int64)i);
                goto LABEL_301;
              }
              if ( a3 != 0xFFFF )
              {
                if ( a3 - 4294967292u <= 1 )
                {
                  if ( (*((_DWORD *)i + 2) & 8) != 0 )
                    xxxMNDoScroll(v156, (unsigned int)a3, 0LL);
                  else
                    FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
                goto LABEL_301;
              }
              **(_DWORD **)v156[0] &= ~0x80u;
              goto LABEL_69;
            }
            FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
            if ( (*((_DWORD *)i + 2) & 0x1000) == 0 )
              goto LABEL_301;
            goto LABEL_74;
          }
LABEL_77:
          xxxMNChar(v156, i, (unsigned int)a3);
          goto LABEL_301;
        }
      }
      xxxMNKeyDown(v156, i, (unsigned int)a3);
      goto LABEL_301;
    }
    if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
    {
      v160.x = (__int16)v155;
      v45 = a1[5];
      v160.y = SWORD1(v155);
      if ( PtInRect((_DWORD *)v45 + 22, *(_QWORD *)&v160) )
        goto LABEL_37;
      goto LABEL_76;
    }
LABEL_35:
    v28 = v155;
LABEL_36:
    v25 = xxxDefWindowProc(a1, v4, (HWND)a3, v28);
LABEL_37:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v29);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v30);
    return v25;
  }
  if ( v4 > 0x2A3 )
  {
    if ( v4 != 791 )
    {
      if ( v4 != 792 )
        goto LABEL_35;
      xxxMenuDraw((HDC)a3, (struct tagMENU *)v23, (__int64)a1);
      goto LABEL_301;
    }
    if ( ((unsigned __int8)v155 & 2) != 0 && (*(_DWORD *)(v23 + 124) & 3) != 0 )
    {
      if ( a3 && (v89 = (char *)(a1 + 5), (*((_BYTE *)a1[5] + 26) & 0x40) != 0) && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        LODWORD(v158) = GreSetLayout(
                          a3,
                          (unsigned int)(*(_DWORD *)(*(_QWORD *)v89 + 96LL) - *(_DWORD *)(*(_QWORD *)v89 + 88LL)),
                          1LL);
      }
      else
      {
        LODWORD(v25) = 0;
        LODWORD(v158) = 0;
        v89 = (char *)(a1 + 5);
      }
      xxxMNDrawFullNC(a1, a3, v156);
      if ( (_DWORD)v25 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v89 + 96LL) - *(_DWORD *)(*(_QWORD *)v89 + 88LL)),
          (unsigned int)v158);
      GreGetDCPoint((HDC)a3, 8u, &v160);
      GetDpiMetricsForCurrentThread(v91, v90);
      GreSetWindowOrg((HDC)a3);
      xxxDefWindowProc(
        a1,
        791LL,
        (HWND)a3,
        (struct tagDRAWITEMSTRUCT *)((unsigned __int64)v155 & 0xFFFFFFFFFFFFFFFDuLL));
      GreSetWindowOrg((HDC)a3);
      goto LABEL_301;
    }
    ValidItem = xxxDefWindowProc(a1, 791LL, (HWND)a3, v155);
    if ( !(unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v92)
      || (v94 = v156[0], v93 = *(_QWORD *)v156[0], !*(_QWORD *)(*(_QWORD *)v156[0] + 16LL))
      || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 149LL, v23, a3) )
    {
      if ( MNIsFlatMenu(v94, v93) )
        MNDrawEdge(v23, a3, (char *)a1[5] + 88, 0LL);
    }
    goto LABEL_120;
  }
  if ( v4 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    **(_DWORD **)v156[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss(i, (struct tagWND *)a1);
    if ( *(_QWORD *)(*(_QWORD *)v156[0] + 16LL) == *(_QWORD *)(*(_QWORD *)i + 56LL) )
      xxxMNSelectItem((__int64 **)v156, (__int64)i, -1);
    goto LABEL_301;
  }
  if ( v4 > 0x1ED )
  {
    switch ( v4 )
    {
      case 0x1EEu:
        xxxMNMouseMove((__int64)v156, (__int64)i, (unsigned int)v155);
        goto LABEL_301;
      case 0x1EFu:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
          xxxMNButtonUp((__int64 **)v156, (__int64)i, a3, (__int64)v155);
        goto LABEL_301;
      case 0x1F0u:
        v25 = (unsigned __int16)MNSetTimerToOpenHierarchy(v156);
        goto LABEL_37;
      case 0x1F1u:
        xxxMNDoubleClick(i, v156, (unsigned int)a3);
        goto LABEL_301;
      case 0x1F2u:
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v156[0] + 16LL), 0LL, 0LL, 1LL, 0);
        goto LABEL_301;
    }
    if ( v4 != 499 )
    {
      if ( v4 != 500 )
        goto LABEL_35;
      if ( v162 )
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)&v161);
      if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
        goto LABEL_76;
      if ( !*(_QWORD *)(*(_QWORD *)v156[0] + 8LL) )
        goto LABEL_76;
      LOBYTE(v78) = IsMFMWFPWindow(*((_QWORD *)i + 8));
      if ( !v78 )
        goto LABEL_76;
      v80 = safe_cast_fnid_to_PMENUWND(v79);
      if ( !v80 || !*(_QWORD *)(v80 + 8) )
        goto LABEL_76;
      if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
      {
        v83 = PtiCurrent(v82, v81);
        *(_DWORD *)(*((_QWORD *)v83 + 59) + 436LL) &= ~0x100000u;
      }
      ++*((_DWORD *)i + 10);
      v84 = *(_QWORD *)(*(_QWORD *)v156[0] + 8LL);
      v85 = PtiCurrent(*(_QWORD *)v156[0], v81);
      Win32HM_LockIntoThread<0>((__int64)v85, v84, BugCheckParameter3);
      *((_DWORD *)i + 2) |= 0x8000u;
      v86 = xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v156[0] + 8LL), 0x123u);
      v87 = *((_DWORD *)i + 2) & 0xFFFF7FFF;
      *((_DWORD *)i + 2) = v87;
      if ( v86 == 1 )
      {
        if ( !(unsigned int)xxxUnlockMenuStateInternal(i, 1) )
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v88);
          goto LABEL_74;
        }
      }
      else
      {
        *((_DWORD *)i + 2) = v87 | 0x2000;
        MNCheckButtonDownState(i);
        if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
          xxxMNSetCapture(v156, i);
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
        xxxUnlockMenuStateInternal(i, 1);
      }
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v88);
      goto LABEL_76;
    }
LABEL_74:
    xxxEndMenuLoop(i, *(_QWORD *)i);
    if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
      xxxMNEndMenuState((__int64)i, v34);
    goto LABEL_76;
  }
  if ( v4 == 493 )
  {
    if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
      xxxMNButtonDown((__int64)v156, (__int64)i, (unsigned int)a3, 1);
    goto LABEL_301;
  }
  if ( v4 != 482 )
  {
    switch ( v4 )
    {
      case 0x1E3u:
        v61 = (__int64 *)xxxMNOpenHierarchy((__int64 **)v156, (__int64)i);
        if ( v61 == (__int64 *)-1LL )
          goto LABEL_76;
        if ( v61 )
          v8 = *v61;
        goto LABEL_264;
      case 0x1E4u:
LABEL_69:
        xxxMNCloseHierarchy(*(_QWORD *)v156[0], (__int64)i);
        goto LABEL_301;
      case 0x1E5u:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
        {
          v56 = xxxMNSelectItem((__int64 **)v156, (__int64)i, a3);
          if ( v56 )
          {
            v57 = *((_QWORD *)v56 + 2);
            v58 = *(_DWORD *)(*(_QWORD *)v56 + 4LL);
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
            Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v59);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v60);
            return (unsigned __int16)v58 | (unsigned __int64)(v57 != 0 ? 0x10 : 0);
          }
        }
        goto LABEL_301;
      case 0x1E6u:
        xxxMNCancel((__int64)i, a3, (unsigned __int16)v155, 0LL);
        goto LABEL_301;
    }
    if ( v4 != 487 )
    {
      if ( v4 == 491 )
      {
        v25 = xxxMNFindWindowFromPoint((__int64 **)v156, (unsigned int *)a3, (int)v155);
        LOBYTE(v51) = IsMFMWFPWindow(v25);
        if ( !v51 )
          goto LABEL_37;
        if ( v52 )
        {
          v25 = *v52;
          goto LABEL_37;
        }
        goto LABEL_76;
      }
      if ( v4 == 492 )
      {
        xxxPlayEventSound(5LL, 256LL);
        v50 = *((_DWORD *)i + 2) >> 8;
        LOBYTE(v50) = BYTE1(*((_DWORD *)i + 2)) & 1 | 4;
        xxxShowWindowEx((const struct tagWND *)a1, v50, 0);
        goto LABEL_301;
      }
      goto LABEL_35;
    }
    ValidItem = (int)MNFindNextValidItem(v23, 0xFFFFFFFFLL, 1LL, 1LL);
    xxxSendMessage((struct tagWND *)a1, 0x1E5u);
LABEL_120:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v54);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v55);
    return ValidItem;
  }
  if ( *(_QWORD *)(*(_QWORD *)v156[0] + 8LL) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
      BugCheckParameter3,
      *(_QWORD *)(*(_QWORD *)v156[0] + 8LL));
    v62 = *(HFONT *)(*(_QWORD *)v156[0] + 8LL);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v166, v23);
    xxxMNCompute(v166, v62, (__int64)a1, 0, 0, 0, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v166, v63);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v64);
  }
  v65 = _MonitorFromWindowInternal((struct tagWND *)a1, 1u, 0);
  v66 = *(_DWORD *)(v23 + 64);
  v155 = v65;
  v67 = v65;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v166, v23);
  v68 = MNCheckScroll(v156, v166, v67);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v166, v69);
  if ( a3 )
  {
    v70 = 0LL;
    v71 = (8 * (_BYTE)a3) & 0x20 | 0x214;
    if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 )
    {
      *(_OWORD *)BugCheckParameter3 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v165, *(_QWORD *)v156[0]);
      v72 = v155;
      MNGetPopupBoundsRect((__int64)v165, (__int64)v155, (struct tagRECT *)BugCheckParameter3, 1);
      v73 = a1[5];
      v74 = *((_DWORD *)v73 + 23);
      LODWORD(v155) = *((_DWORD *)v73 + 22);
      HIDWORD(v155) = v74;
      BestPos = FindBestPos(
                  (int)v155,
                  v74,
                  v66,
                  v68,
                  (struct tagRECT *)BugCheckParameter3,
                  0,
                  (unsigned int ***)v156,
                  v72,
                  (__int64)v155);
      LODWORD(v8) = (__int16)BestPos;
      v70 = (unsigned int)SHIWORD(BestPos);
    }
    else
    {
      v71 |= 2u;
    }
    xxxSetWindowPos((struct tagWND *)a1, 0LL, (unsigned int)v8, v70, v66 + 6, v68 + 6, v71);
  }
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v157);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v161, v76);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v156, v77);
  return ((unsigned __int16)v68 << 16) | (unsigned __int16)v66;
}
