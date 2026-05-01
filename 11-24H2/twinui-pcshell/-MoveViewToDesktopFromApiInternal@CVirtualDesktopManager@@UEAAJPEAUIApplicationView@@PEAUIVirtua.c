/*
 * XREFs of ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180554220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1801799A8 (-Stop@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Start@$$V@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA?AV012@XZ @ 0x180550D58 (--$Start@$$V@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA-AV012@XZ.c)
 *     ??1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180552844 (--1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180558B78 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktopFromApiInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[336]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Start<>((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9);
  v6 = CVirtualDesktopManager::_MoveViewToDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9,
      a2,
      a3);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::~VirtualDesktopViewMovedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *)v9);
  return v7;
}
