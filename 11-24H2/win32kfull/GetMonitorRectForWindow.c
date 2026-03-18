/*
 * XREFs of GetMonitorRectForWindow @ 0x1400260CC
 * Callers:
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014C388 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401AAC5C (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1401E0894 (GetPrimaryMonitorRectForWindow.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140248C08 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A68DC (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetMonitorRectForWindow(__int64 a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
