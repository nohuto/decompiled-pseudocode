/*
 * XREFs of _GetProp @ 0x1400639A0
 * Callers:
 *     GetOldRedirectionBitmap @ 0x14002D5AC (GetOldRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x14002D6C0 (SetOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x14003C870 (NtUserGetWindowMinimizeRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     xxxTouchTargetWindow @ 0x140068F84 (xxxTouchTargetWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     CreateSprite @ 0x1400911EC (CreateSprite.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x14009B380 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14012BB24 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x14014E8D8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x140156C00 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x140156CBC (InvalidateWEFCOMPOSITEDDCEs.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x14015EC74 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x140169598 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x140169698 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140169A24 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14018F1E8 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401AC7C0 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401AC828 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1401B45C0 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401B6258 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1401B6764 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     FeedbackSetWindowSetting @ 0x1401BD3B8 (FeedbackSetWindowSetting.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     GetDisplayAffinity @ 0x1401C1650 (GetDisplayAffinity.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1401C1DF0 (NtUserShutdownBlockReasonQuery.c)
 *     FeedbackGetWindowSetting @ 0x1401C7590 (FeedbackGetWindowSetting.c)
 *     _anonymous_namespace_::GetStore @ 0x1401CFC1C (_anonymous_namespace_--GetStore.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401D3948 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     NtUserfnDDEINIT @ 0x1401D9EC0 (NtUserfnDDEINIT.c)
 *     ParkIcon @ 0x1401E31D8 (ParkIcon.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x1401FB400 (-DDEImpDecRefInitWorker@@YAXPEAX@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     NtUserIsTouchWindow @ 0x140218B80 (NtUserIsTouchWindow.c)
 *     NtUserSetBrokeredForeground @ 0x140219E00 (NtUserSetBrokeredForeground.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x140228264 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserGetProp @ 0x140242BA0 (NtUserGetProp.c)
 *     NtUserGetProp2 @ 0x140242C80 (NtUserGetProp2.c)
 *     NtUserSetWindowBand @ 0x140246BB0 (NtUserSetWindowBand.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x140248FAC (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140282294 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     UserGetHwnd @ 0x140285ACC (UserGetHwnd.c)
 *     NtUserGetAppImeLevel @ 0x140295680 (NtUserGetAppImeLevel.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A50C0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402A9F8C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402AF780 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402AFE6C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402B03D8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C52E0 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C5D00 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8F48 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402CEA84 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402D1A2C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D22E0 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     GetSharedPropForFilteredProcesses @ 0x1402BF1AC (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  int v10; // ebx
  __int64 v11; // rcx
  tagObjLock **v12; // rdi
  __int64 Prop; // rbx
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-88h] BYREF
  char v17; // [rsp+40h] [rbp-78h]
  char v18; // [rsp+48h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 144);
  v17 = 0;
  W32GetUserSessionState(a1, a2);
  v16 = 0LL;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    UserSessionState = W32GetUserSessionState(v8, v7);
    v10 = 0;
    v11 = 0LL;
    if ( v3 != UserSessionState + 42520 )
      v11 = v3;
    *(_QWORD *)&v16 = v11;
    v12 = (tagObjLock **)&v16;
    do
    {
      if ( *v12 )
        tagObjLock::LockExclusive(*v12);
      ++v10;
      ++v12;
    }
    while ( !v10 );
    v17 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( !Prop && !a3 && (*(_BYTE *)(a1 + 384) & 1) != 0 )
  {
    if ( (_WORD)a2 == 0xA914 )
    {
      if ( v17 && v18 && (_QWORD)v16 )
        tagObjLock::UnLockExclusive((tagObjLock *)v16);
      return 0LL;
    }
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    v15 = *(_QWORD *)(a1 + 16);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v15 + 464), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( v17 && v18 )
  {
    if ( (_QWORD)v16 )
      tagObjLock::UnLockExclusive((tagObjLock *)v16);
  }
  return Prop;
}
