/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x140042064
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140042000 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxTranslateAccelerator @ 0x14009CDF0 (xxxTranslateAccelerator.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x14010429C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140118208 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSendMessageEx @ 0x14017D970 (xxxSendMessageEx.c)
 *     xxxSendSizeMessage @ 0x14019DCF0 (xxxSendSizeMessage.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1401B45C0 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401B703C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401D6118 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401EF67C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxHandleWindowPosChanged @ 0x1401F2194 (xxxHandleWindowPosChanged.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14020B418 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     xxxSendHelpMessage @ 0x14021E310 (xxxSendHelpMessage.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x14022C46C (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402803B0 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140287C28 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     xxxSendMessageFF @ 0x1402B1910 (xxxSendMessageFF.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B2BE8 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CCB4C (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402CD388 (-xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD6E0 (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CD9E0 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402CE934 (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402CF198 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402CF4B8 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402CF85C (-xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D0024 (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D02C4 (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D0620 (-xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     xxxCsEvent @ 0x1402DBB18 (xxxCsEvent.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402DF7A8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E1AD0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1400636A0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 *     IsMiPPointerMessage @ 0x1400A7680 (IsMiPPointerMessage.c)
 *     xxxBroadcastMessage @ 0x140117780 (xxxBroadcastMessage.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     FreeDelayedHooks @ 0x14011B7C0 (FreeDelayedHooks.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14011B890 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxDesktopWndProc @ 0x14017FEE0 (xxxDesktopWndProc.c)
 *     ??1xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401CE790 (--1xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     ValidateDDEConvPair @ 0x1401D3900 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x14024EC24 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x140271D8C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1402B14C4 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     xxxEventWndProc @ 0x1402DBD80 (xxxEventWndProc.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagTHREADINFO **a1,
        __int64 a2,
        unsigned __int64 a3,
        struct tagDRAWITEMSTRUCT *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        int a8,
        int a9)
{
  unsigned int v10; // r14d
  unsigned __int64 *v12; // r15
  __int64 *v13; // rdi
  unsigned int v14; // r12d
  ULONG_PTR v16; // r12
  struct tagTHREADINFO *v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 *v26; // rax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  struct tagHIDDATA *v30; // rax
  unsigned __int64 v31; // rsi
  char v32[8]; // [rsp+50h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v33; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-E8h]
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-D8h]
  __int64 v37[2]; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-C0h]
  __int128 v39; // [rsp+98h] [rbp-B0h]
  unsigned __int64 HighLimit; // [rsp+A8h] [rbp-A0h] BYREF
  int v41; // [rsp+B0h] [rbp-98h]
  _QWORD v42[2]; // [rsp+B8h] [rbp-90h] BYREF
  _BYTE v43[56]; // [rsp+C8h] [rbp-80h] BYREF

  v34 = a3;
  v10 = a2;
  v12 = a7;
  v42[1] = a1;
  v13 = 0LL;
  LowLimit = 0LL;
  v42[0] = 0LL;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 != (struct tagTHREADINFO **)-1LL )
  {
    v16 = 0LL;
    v36 = 0LL;
    v17 = 0LL;
    if ( a1 )
      v17 = *a1;
    HIDWORD(v33) = HIDWORD(v17);
    v18 = (unsigned __int16)v17;
    LODWORD(v33) = (unsigned __int16)v17;
    v41 = (unsigned __int16)v17;
    v20 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
    v36 = v18;
    if ( v18 >= *(_QWORD *)(v20 + 8)
      || (UserSessionState = W32GetUserSessionState(v20, v19),
          v16 = *(_QWORD *)(UserSessionState + 19944)
              + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v23, v22) + 19952) * (_DWORD)v33),
          *(struct tagTHREADINFO ***)(*(_QWORD *)(W32GetUserSessionState(v25, v24) + 19888) + 40 * v36) != a1)
      || *(_BYTE *)(v16 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v16, 1uLL);
    }
    if ( v10 - 992 > 8 )
    {
      if ( (unsigned int)IsMiPPointerMessage(v10, v34) && !(unsigned int)IsMiPEnabledForWindow(a1) )
      {
        LODWORD(v33) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1600LL);
        return 0LL;
      }
    }
    else
    {
      if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)a1) )
        return 0LL;
      if ( v10 == 992 && *(&WPP_MAIN_CB.ActiveThreadCount + 1) )
      {
        a5 |= 2u;
        a6 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
        v26 = v42;
        if ( a7 )
          v26 = a7;
        v12 = v26;
      }
      v27 = ValidateDDEConvPair(v34, a1);
      v28 = 1;
      if ( !v27 )
        v28 = a8;
      a8 = v28;
    }
    v33 = PtiCurrent();
    if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() && v10 == 255 )
    {
      LOBYTE(v29) = 18;
      v30 = (struct tagHIDDATA *)HMValidateHandleNoSecure(a4, v29);
      if ( v30 )
        Old_TrySmuggleHidData(a1[2], v30, 0);
    }
    if ( v33 == a1[2] )
    {
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v43);
      if ( ShouldCallWndProcHook(v33, 0x20u, v10, (struct tagWND *)a1) )
      {
        *((_QWORD *)&v38 + 1) = *a1;
        LODWORD(v38) = v10;
        v37[1] = v34;
        v37[0] = (__int64)a4;
        *(_QWORD *)&v39 = 0LL;
        xxxCallHook(0, 0LL, (__int64)v37, 4);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v43);
      FreeDelayedHooks();
      if ( (*((_BYTE *)a1[5] + 18) & 4) != 0 )
      {
        HighLimit = 0LL;
        LowLimit = 0LL;
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
          return 0LL;
        v36 = *((_QWORD *)a1[5] + 15);
        if ( v36 >= 4 )
          return 0LL;
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v32);
        v31 = ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, unsigned __int64, struct tagDRAWITEMSTRUCT *))(&gServerHandlers)[v36])(
                a1,
                v10,
                v34,
                a4);
        LowLimit = v31;
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::~xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v32);
        if ( !v12 )
          return v31;
      }
      else
      {
        xxxSendMessageToClient((struct tagWND *)a1, v10, v34, (__int64)a4, 0LL, 0, (__int64 *)&LowLimit);
        SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v43);
        if ( ShouldCallWndProcHook(v33, 0x2000u, v10, (struct tagWND *)a1) )
        {
          v39 = (unsigned __int64)*a1;
          DWORD2(v38) = v10;
          *(_QWORD *)&v38 = v34;
          v37[1] = (__int64)a4;
          v37[0] = LowLimit;
          xxxCallHook(0, 0LL, (__int64)v37, 12);
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v43);
        FreeDelayedHooks();
        if ( v10 == 576 )
        {
          FreeTouchInputInfo(a4, 1LL);
        }
        else if ( v10 == 281 )
        {
          FreeGestureInfo(a4, 1LL);
        }
        if ( !v12 )
          return LowLimit;
      }
      *v12 = LowLimit;
      return 1LL;
    }
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return xxxDefWindowProc((struct tagWND *)a1, v10, (HWND)v34, a4);
    if ( !v12 )
      return xxxInterSendMsgEx(a1, v10, v34, a4, 1, a1[2], v13, a8, a9);
    if ( (a5 & 2) == 0 || !IsThreadHung(a1[2]) )
    {
      LODWORD(v37[0]) = 2;
      *(_QWORD *)&v39 = __PAIR64__(a6, a5);
      *((_QWORD *)&v39 + 1) = v12;
      v13 = v37;
      return xxxInterSendMsgEx(a1, v10, v34, a4, 1, a1[2], v13, a8, a9);
    }
    return 0LL;
  }
  v14 = 0;
  if ( a7 )
  {
    v14 = 4;
    v37[0] = __PAIR64__(a6, a5);
    v37[1] = (__int64)a7;
    v13 = v37;
  }
  return (int)xxxBroadcastMessage(-1, a2, a3, (_DWORD)a4, v14, (union tagBROADCASTMSG *)v13, a8);
}
