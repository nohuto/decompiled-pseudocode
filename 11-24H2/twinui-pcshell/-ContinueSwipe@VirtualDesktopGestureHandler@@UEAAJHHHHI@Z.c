/*
 * XREFs of ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180239090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x18026BCE0 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::ContinueSwipe(
        VirtualDesktopGestureHandler *this,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdx
  VirtualDesktopGestureContext *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 5) )
  {
    v4 = 1651LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v6 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
  if ( !v6 )
  {
    v4 = 1652LL;
    goto LABEL_3;
  }
  VirtualDesktopGestureContext::UpdateOffset(v6, a2, a4);
  return 0LL;
}
