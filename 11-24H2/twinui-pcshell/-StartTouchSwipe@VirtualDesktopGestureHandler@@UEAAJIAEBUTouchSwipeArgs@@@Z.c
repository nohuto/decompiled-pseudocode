/*
 * XREFs of ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1805631F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180152128 (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Start@$$V@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA?AV012@XZ @ 0x18055BE98 (--$Start@$$V@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA-AV012@XZ.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18055CD70 (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18056105C (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 *     ?TransferToMember@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA?AV123@XZ @ 0x1805637A8 (-TransferToMember@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA-AV1.c)
 *     ?UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z @ 0x180563838 (-UpdateScale@VirtualDesktopGestureContext@@QEAAXM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::StartTouchSwipe(
        VirtualDesktopGestureContext **this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  _BYTE v9[336]; // [rsp+20h] [rbp-2B8h] BYREF
  _BYTE v10[336]; // [rsp+170h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+0h]

  if ( !*((_BYTE *)this + 416) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Start<>((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v9);
    v5 = VirtualDesktopGestureHandler::InitializeContext((VirtualDesktopGestureHandler *)(this - 1), a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A2,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v5);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v9);
      return v6;
    }
    VirtualDesktopGestureContext::UpdateScale(this[9], 0.69999999);
    *((_BYTE *)this + 416) = 1;
    v8 = VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::TransferToMember(v9, v10);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::operator=(this + 10, v8);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v10);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v9);
  }
  return 0LL;
}
