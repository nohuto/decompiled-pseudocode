/*
 * XREFs of ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806ACDF8
 * Callers:
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x1806AD0C0 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x1802C50DC (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x1806A9968 (--0VirtualDesktopSwitcherHook@@QEAA@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil.c)
 *     ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x1806A9F44 (--1-$unique_ptr@VVirtualDesktopSwitcherHook@@U-$default_delete@VVirtualDesktopSwitcherHook@@@std.c)
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x1806AA9F8 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook(VirtualDesktopSwitcherHost *this)
{
  __int64 *v2; // rbx
  void *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  VirtualDesktopSwitcherHook *v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  void *v12; // [rsp+40h] [rbp+18h]

  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  v2 = wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(&v11, &v10);
  v3 = operator new(1uLL);
  v12 = v3;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2;
  *v2 = 0LL;
  v10 = v4;
  v7 = VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHook((__int64)v3, (__int64 *)&v10, v5, v6);
  v10 = 0LL;
  v9 = (VirtualDesktopSwitcherHook *)*((_QWORD *)this + 65);
  *((_QWORD *)this + 65) = v7;
  if ( v9 )
    std::default_delete<VirtualDesktopSwitcherHook>::operator()(v8, v9);
  std::unique_ptr<VirtualDesktopSwitcherHook>::~unique_ptr<VirtualDesktopSwitcherHook>(&v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
}
