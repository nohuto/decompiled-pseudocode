/*
 * XREFs of xxxProcessEventMessage @ 0x14023DDAC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessAsyncSendMessage @ 0x140041D5C (xxxProcessAsyncSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _PostTransformableMessage @ 0x1400664C4 (_PostTransformableMessage.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     xxxCancelMouseMoveTracking @ 0x140067698 (xxxCancelMouseMoveTracking.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400850E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxProcessTSFEvent @ 0x140085E5C (xxxProcessTSFEvent.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x14008796C (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x14009B200 (PostMousePointerLeaveAndCleanup.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1400F48B0 (xxxProcessSetWindowPosEvent.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14012BB24 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x14014F09C (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     _PostThreadMessage @ 0x1401A0460 (_PostThreadMessage.c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1401CBE08 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1401E9BA8 (xxxClientBroadcastThemeChange.c)
 *     xxxClientUpdateDpi @ 0x14022003C (xxxClientUpdateDpi.c)
 *     xxxDoDeferredPointerActivate @ 0x140224E28 (xxxDoDeferredPointerActivate.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x140269B94 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x140269C14 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402A9390 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CC99C (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D7B40 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagTHREADINFO *__fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagQMSG *v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  struct tagWND *v18; // rax
  struct tagWND *v19; // rbx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // r15
  struct tagQ **v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 UserSessionState; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  struct tagWND *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  MoveSizeApi *v60; // rbx
  unsigned __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  _OWORD *v65; // rcx
  __int64 v66; // rdx
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int64 v72; // rax
  struct tagWND *v73; // rbx
  __int64 v74; // rdx
  struct tagTHREADINFO *result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v77[4]; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v78[6]; // [rsp+80h] [rbp-39h] BYREF

  v4 = PtiCurrent(a1, a2);
  v77[0] = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = v77;
  v7 = *(_DWORD *)(a2 + 96);
  v8 = *(_QWORD *)(a1 + 472);
  v77[2] = CleanEventMessage;
  v77[1] = a2;
  if ( v7 > 16 )
  {
    if ( v7 <= 24 )
    {
      if ( v7 == 24 )
      {
        xxxClientUpdateDpi(*(_DWORD *)(a2 + 32));
        goto LABEL_116;
      }
      v43 = v7 - 17;
      if ( !v43 )
      {
        v52 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v53 = v52;
        if ( !v52 )
          goto LABEL_116;
        Win32HM_LockIntoThread<0>(a1, v52, BugCheckParameter3);
        xxxArrangeWindow(v53, *(unsigned int *)(a2 + 32));
        goto LABEL_23;
      }
      v10 = (unsigned int)(v43 - 1);
      if ( !(_DWORD)v10 )
      {
        if ( v8
          && *(_QWORD *)(v8 + 120)
          && (v8 == *(_QWORD *)(W32GetUserSessionState(v10, v5) + 18944)
           || (unsigned __int8)IsKeyboardDelegationTarget(a1)) )
        {
          v10 = *(unsigned int *)(W32GetUserSessionState(v10, v5) + 67064);
          if ( (v10 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
        goto LABEL_116;
      }
      v44 = v10 - 1;
      if ( !v44 )
      {
        if ( *(_DWORD *)(a2 + 24) == 809 )
          PostThreadMessage((struct tagTHREADINFO *)a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        else
          xxxSendShutdownData(*(HWND *)(a2 + 40), *(_QWORD *)(a2 + 32));
        goto LABEL_116;
      }
      v45 = v44 - 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( !v46 )
        {
          LOBYTE(v5) = 1;
          v48 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v5);
          LOBYTE(v49) = 1;
          v50 = v48;
          v51 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v49);
          PostMousePointerLeaveAndCleanup(v50, v51);
          goto LABEL_116;
        }
        v10 = (unsigned int)(v46 - 1);
        if ( !(_DWORD)v10 )
        {
          CRecalcProp::s_xxxProcessRecalcSignal(*(unsigned int *)(a2 + 32), *(HWND *)(a2 + 16));
          goto LABEL_116;
        }
        if ( (_DWORD)v10 != 1 )
          goto LABEL_116;
        v47 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v39 = v47;
        if ( !v47 )
          goto LABEL_116;
        Win32HM_LockIntoThread<0>(a1, v47, BugCheckParameter3);
        v40 = *(unsigned int *)(a2 + 40);
        v41 = *(unsigned int *)(a2 + 32);
        goto LABEL_64;
      }
      xxxDoDeferredPointerActivate(a2);
LABEL_83:
      CleanEventMessage((struct tagQMSG *)a2);
      goto LABEL_116;
    }
    v54 = v7 - 25;
    if ( !v54 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_116;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      if ( *(_DWORD *)(a2 + 40) )
        xxxTooltipCallback(0LL, 0LL, 0LL);
      else
        xxxTooltipCreateCallback(*(HWND *)(a2 + 16), *(_DWORD *)(a2 + 32));
      goto LABEL_116;
    }
    v56 = v55 - 1;
    if ( !v56 )
    {
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v5);
      goto LABEL_116;
    }
    v57 = v56 - 1;
    if ( !v57 )
    {
      AdvancedWindowPos::xxxProcessAsyncWindowAction(*(AdvancedWindowPos **)(a2 + 16), *(HWND *)(a2 + 40), v6);
      goto LABEL_83;
    }
    v58 = v57 - 1;
    if ( !v58 )
    {
      v72 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v73 = (struct tagWND *)v72;
      if ( !v72 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, v72, BugCheckParameter3);
      xxxDeliverRestoreFocusMessage(v73, v74);
      goto LABEL_23;
    }
    v10 = (unsigned int)(v58 - 2);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 1 )
        goto LABEL_116;
      v59 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v60 = (MoveSizeApi *)v59;
      if ( !v59 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v59, BugCheckParameter3);
      MoveSizeApi::xxxProcessEnterMoveSizeRequest(v60, *(struct tagWND **)(a2 + 32), v61);
    }
    else
    {
      v63 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v64 = v63;
      if ( !v63 )
        goto LABEL_83;
      Win32HM_LockIntoThread<0>(a1, v63, BugCheckParameter3);
      v65 = *(_OWORD **)(a2 + 40);
      v66 = *(_QWORD *)(a2 + 32);
      v67 = v65[1];
      v78[0] = *v65;
      v68 = v65[2];
      v78[1] = v67;
      v69 = v65[3];
      v78[2] = v68;
      v70 = v65[4];
      v78[3] = v69;
      v71 = v65[5];
      v78[4] = v70;
      v78[5] = v71;
      WindowActions::xxxApplyActionAsync(v64, v66, v78);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v62);
    goto LABEL_83;
  }
  if ( v7 == 16 )
  {
    LOBYTE(v5) = 1;
    v42 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
    v39 = v42;
    if ( !v42 )
      goto LABEL_116;
    v10 = *(_QWORD *)(v42 + 40);
    if ( (*(_BYTE *)(v10 + 31) & 1) == 0 )
      goto LABEL_116;
    Win32HM_LockIntoThread<0>(a1, v42, BugCheckParameter3);
    v41 = 3LL;
    v40 = 19LL;
    goto LABEL_64;
  }
  if ( v7 > 8 )
  {
    v21 = v7 - 9;
    if ( !v21 )
    {
      xxxProcessAsyncSendMessage(
        *(_QWORD *)(a2 + 16),
        *(unsigned int *)(a2 + 24),
        *(_QWORD *)(a2 + 32),
        (__int128 **)(a2 + 40));
      goto LABEL_116;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        v35 = *(_QWORD *)(a1 + 496);
        v36 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v37 = v36;
        if ( (*(_DWORD *)(v35 + 48) & 0x3C0) == 0
          || (v5 = *(struct tagQMSG **)(v35 + 192), v10 = *(_QWORD *)(a2 + 16), *(_QWORD *)v5 != v10)
          || (v10 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v35 + 200) != (_DWORD)v10) )
        {
          if ( v36 )
          {
            Win32HM_LockIntoThread<0>(a1, v36, BugCheckParameter3);
            xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v37, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
            goto LABEL_23;
          }
        }
        goto LABEL_116;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>((__int64)v78);
        v34 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v34 + 24) )
          xxxProcessTSFEvent((struct tagNOTIFY *)v34, v32);
        else
          xxxProcessNotifyWinEvent(v34, v32, v33);
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v78);
        goto LABEL_116;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x800) != 0 )
          xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
        PostShellHookMessagesEx((LastWokenThread *)*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_116;
      }
      v10 = (unsigned int)(v25 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          goto LABEL_116;
        v26 = *(_QWORD *)(v8 + 120);
        if ( !v26 )
        {
          v26 = *(_QWORD *)(v8 + 128);
          if ( !v26 )
            goto LABEL_116;
        }
        v27 = *(struct tagQ ***)(v26 + 16);
        if ( (struct tagQ **)a1 != v27 )
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v27,
            v27[59],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
          goto LABEL_116;
        }
        v28 = *(_DWORD *)(a2 + 40) - 165;
        *(_QWORD *)(a2 + 40) = ((unsigned __int64)(unsigned __int16)v28 << 16) | (unsigned __int16)GetMouseKeyFlags(v27[59]);
        tagTHREADINFO::UpdateInputSource((tagTHREADINFO *)a1, (const struct tagINPUT_MESSAGE_SOURCE *)(a2 + 124));
        Win32HM_LockIntoThread<0>(a1, v26, BugCheckParameter3);
        xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v26,
          793LL,
          *(_QWORD *)v26,
          *(struct tagDRAWITEMSTRUCT **)(a2 + 40),
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_23;
      }
      v29 = 5LL;
      if ( *(_DWORD *)(a2 + 24) == 5 )
      {
        v30 = *(_DWORD *)(a2 + 40);
        if ( v30 > 5 )
          v30 = 5;
        if ( !v30 )
          goto LABEL_47;
      }
      else
      {
        v30 = 1;
      }
      do
      {
        UserSessionState = W32GetUserSessionState(v29, v5);
        CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70800));
        --v30;
      }
      while ( v30 );
LABEL_47:
      xxxSoundSentry(v29, (__int64)v5);
      goto LABEL_116;
    }
    LOBYTE(v5) = 1;
    v38 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
    v39 = v38;
    if ( !v38 )
      goto LABEL_116;
    Win32HM_LockIntoThread<0>(a1, v38, BugCheckParameter3);
    if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 0x10) != 0 )
      goto LABEL_23;
    SetVisible(v39, 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 0x20) != 0 )
      goto LABEL_23;
    v40 = 1LL;
    v41 = 7LL;
LABEL_64:
    xxxMinMaximize(v39, v41, v40);
    goto LABEL_23;
  }
  if ( v7 != 8 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v10 = (unsigned int)(v13 - 1);
              if ( (_DWORD)v10 )
              {
                if ( (_DWORD)v10 == 1 )
                {
                  LOBYTE(v5) = 1;
                  v14 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v5);
                  if ( v14 )
                    PostTransformableMessage(v14, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
                }
              }
              else
              {
                xxxProcessActivationEvent((const struct tagQMSG *)a2, (__int64)v5);
              }
            }
            else
            {
              xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(_DWORD *)(a2 + 72));
            }
          }
          else
          {
            ProcessUpdateKeyStateEvent(v8, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          }
        }
        else
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
        }
        goto LABEL_116;
      }
      v5 = *(struct tagQMSG **)(v8 + 112);
      if ( !v5 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, (__int64)v5, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(*(struct tagTHREADINFO ***)(v8 + 112), 31LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      SetWakeBit(a1, 2LL);
    }
    else
    {
      v16 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v17 = v16;
      if ( !v16 )
        goto LABEL_116;
      v10 = *(_QWORD *)(v16 + 40);
      if ( *(char *)(v10 + 20) < 0 )
        goto LABEL_116;
      Win32HM_LockIntoThread<0>(a1, v16, BugCheckParameter3);
      xxxProcessShowWindowEvent(v17, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
    }
LABEL_23:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v15);
    goto LABEL_116;
  }
  v18 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1LL);
  v19 = v18;
  if ( v18 )
  {
    if ( *(char *)(*((_QWORD *)v18 + 5) + 19LL) < 0 )
    {
      Win32HM_LockIntoThread<0>(a1, (__int64)v18, BugCheckParameter3);
      xxxFreeWindow((struct tagTHREADINFO *)a1, v19, (ULONG_PTR)BugCheckParameter3);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v20);
    }
    else
    {
      xxxDestroyWindow(v18, (__int64)v5);
    }
  }
LABEL_116:
  result = PtiCurrent(v10, (__int64)v5);
  *((_QWORD *)result + 48) = v77[0];
  return result;
}
