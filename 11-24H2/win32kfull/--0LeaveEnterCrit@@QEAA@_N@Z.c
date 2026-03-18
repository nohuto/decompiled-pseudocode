/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140064D40 (xxxMsgWaitForMultipleObjectsEx.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400A4F9C (-xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxGetTitleBarInfoEx @ 0x14010AFD8 (xxxGetTitleBarInfoEx.c)
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ClientLoadLocalT1Fonts @ 0x14019A154 (ClientLoadLocalT1Fonts.c)
 *     ClientDeliverUserApc @ 0x14019A1F4 (ClientDeliverUserApc.c)
 *     xxxClientThreadSetup @ 0x14019A2A0 (xxxClientThreadSetup.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401B703C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401C30E4 (RequestInputSinkInfoFromPoint.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     WaitForRitToCompleteLastCommand @ 0x1401E1228 (WaitForRitToCompleteLastCommand.c)
 *     xxxSwitchDesktopWithFade @ 0x1401F6760 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 *     xxxInitInput @ 0x14020BF30 (xxxInitInput.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     PaintScreenBackground @ 0x140213220 (PaintScreenBackground.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x14021A598 (xxxSynchronizeDWMWindowChanges.c)
 *     MagGetLensContextInformation @ 0x14022A370 (MagGetLensContextInformation.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14023F770 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     xxxActivateDebugger @ 0x140256810 (xxxActivateDebugger.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     xxxGetDeviceChangeInfo @ 0x140279D9C (xxxGetDeviceChangeInfo.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 *     xxxOldMessageBeep @ 0x1402ADF78 (xxxOldMessageBeep.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ClientNoMemoryPopup @ 0x1402B87DC (ClientNoMemoryPopup.c)
 *     xxxUserModeCallback @ 0x1402BCAD8 (xxxUserModeCallback.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBED8 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EE738 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  *(_BYTE *)this = 0;
  if ( (_BYTE)a2 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      *(_BYTE *)this = 1;
      LeaveMitRitHazardCrit();
    }
  }
  UserSessionSwitchLeaveCrit(this);
  return this;
}
