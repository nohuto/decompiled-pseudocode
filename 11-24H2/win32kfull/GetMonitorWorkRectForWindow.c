/*
 * XREFs of GetMonitorWorkRectForWindow @ 0x140025C9C
 * Callers:
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140248C08 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x140269330 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     NtUserSetWindowShowState @ 0x14029F460 (NtUserSetWindowShowState.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1402A5164 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402A6054 (-IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     UpdateSizeTrackingInfo @ 0x1402AAA4C (UpdateSizeTrackingInfo.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetMonitorWorkRectForWindow(__int64 a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorWorkRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
