/*
 * XREFs of _anonymous_namespace_::VirtualDesktopNotificationRegistration::Register_1 @ 0x18076D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18013AA84 (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::VirtualDesktopNotificationRegistration::Register_1(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, a1, a1 + 24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=((__int64 *)(a1 + 32), a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\VirtualDesktopEvents.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
