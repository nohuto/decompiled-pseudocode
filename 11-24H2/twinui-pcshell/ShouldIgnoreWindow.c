/*
 * XREFs of ShouldIgnoreWindow @ 0x18014F4B4
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014F430 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall ShouldIgnoreWindow(HWND hWnd)
{
  LONG WindowLongW; // edi
  HMONITOR v3; // rax
  char v4; // bl
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-18h] BYREF

  mi.cbSize = 40;
  WindowLongW = GetWindowLongW(hWnd, -16);
  memset(&mi.rcMonitor, 0, 36);
  v3 = MonitorFromWindow(hWnd, 1u);
  Rect = 0LL;
  v4 = 0;
  if ( GetMonitorInfoW(v3, &mi) )
  {
    if ( GetClientRect(hWnd, &Rect) )
    {
      rcDst = 0LL;
      if ( !SubtractRect(&rcDst, &mi.rcMonitor, &Rect)
        && (!EqualRect(&mi.rcWork, &mi.rcMonitor) || (WindowLongW & 0x800000) == 0) )
      {
        return 1;
      }
    }
  }
  if ( (WindowLongW & 0x80040000) != 0x40000 )
    return 1;
  return v4;
}
