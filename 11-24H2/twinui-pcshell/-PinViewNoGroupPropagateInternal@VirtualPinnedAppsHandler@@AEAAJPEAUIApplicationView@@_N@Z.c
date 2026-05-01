/*
 * XREFs of ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF2BC
 * Callers:
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AF27C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180564960 (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 112LL))(*((_QWORD *)this + 8));
  if ( v4 < 0 )
  {
    v5 = 113LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 272LL))(
         *((_QWORD *)this + 6),
         a2);
  if ( v4 < 0 )
  {
    v5 = 114LL;
    goto LABEL_3;
  }
  return 0LL;
}
