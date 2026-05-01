/*
 * XREFs of ?ToggleTabTip@KeyboardHosting@@YAJXZ @ 0x180483BBC
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180467E10 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180467E10.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B4C08 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?KeyboardButtonInvoked_@KeyboardButtonTelemetry@@QEBAX_N00@Z @ 0x180483AFC (-KeyboardButtonInvoked_@KeyboardButtonTelemetry@@QEBAX_N00@Z.c)
 *     ?get@?$static_lazy@VKeyboardButtonTelemetry@@@details@wil@@QEAAPEAVKeyboardButtonTelemetry@@P6AXXZ@Z @ 0x180483D58 (-get@-$static_lazy@VKeyboardButtonTelemetry@@@details@wil@@QEAAPEAVKeyboardButtonTelemetry@@P6AX.c)
 *     ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x1806841DC (-StartAndDisplayUserIhmProcess@@YA_N_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::ToggleTabTip(KeyboardHosting *this)
{
  bool v1; // bl
  KeyboardHosting *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edx
  _DWORD *v5; // rcx
  KeyboardButtonTelemetry *v6; // rcx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, HWND); // rdi
  HWND DesktopWindow; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v1 = CoCreateInstance(
         &GUID_4ce576fa_83dc_4f88_951c_9d0782b4e376,
         0LL,
         6u,
         &GUID_37c994e7_432b_4834_a2f7_dce1f13b834b,
         &v16) >= 0;
  KeyboardHosting::IsRunningOnServerSku(v2);
  v5 = *(_DWORD **)(wil::details::static_lazy<KeyboardButtonTelemetry>::get(
                      v3,
                      _lambda_c1ca75c4d9a0fc028c30e2199b43bdb4_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v5 && *v5 )
  {
    wil::details::static_lazy<KeyboardButtonTelemetry>::get(
      v5,
      _lambda_c1ca75c4d9a0fc028c30e2199b43bdb4_::_lambda_invoker_cdecl_);
    KeyboardButtonTelemetry::KeyboardButtonInvoked_(v6);
  }
  if ( !v1 )
  {
    if ( !StartAndDisplayUserIhmProcess(0, v4) )
    {
      v11 = -2147467259;
      v12 = 2147500037LL;
      v13 = 70LL;
      goto LABEL_9;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v7 = v16;
  v8 = *(__int64 (__fastcall **)(LPVOID, HWND))(*(_QWORD *)v16 + 24LL);
  DesktopWindow = GetDesktopWindow();
  v10 = v8(v7, DesktopWindow);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_10;
  v12 = (unsigned int)v10;
  v13 = 65LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardhostingutil.cpp",
    (const char *)v12);
LABEL_11:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  return v11;
}
