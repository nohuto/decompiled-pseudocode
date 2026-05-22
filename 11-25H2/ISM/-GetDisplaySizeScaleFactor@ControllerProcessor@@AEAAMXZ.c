/*
 * XREFs of ?GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ @ 0x180179268
 * Callers:
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180178CD8 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017A944 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

float __fastcall ControllerProcessor::GetDisplaySizeScaleFactor(ControllerProcessor *this)
{
  HMONITOR v1; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+24h] [rbp-34h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 7521) )
  {
    v5 = 0LL;
    v6 = 0LL;
    GetPointerDeviceRects(-1LL, &v6, &v5);
    if ( HIDWORD(v5) - DWORD1(v5) > 1080 )
      return (float)(HIDWORD(v5) - DWORD1(v5)) / 1080.0;
  }
  else
  {
    v1 = MonitorFromPoint(*(POINT *)((char *)this + 360), 2u);
    v3 = 0;
    v4 = 0;
    if ( (int)GetDpiForMonitor(v1, 0LL, &v3, &v4) >= 0 )
      return (float)v3 / 96.0;
  }
  return FLOAT_1_0;
}
