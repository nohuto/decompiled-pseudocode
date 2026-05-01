/*
 * XREFs of _lambda_6853a53403c5e70a089bec5311ff3126_::operator() @ 0x180687D0C
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___::RunTask @ 0x180688350 (CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180669964 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     ?OnAppSnapped@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x1806882DC (-OnAppSnapped@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnap.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_6853a53403c5e70a089bec5311ff3126_::operator()(HWND *a1, __int64 *a2)
{
  __int64 v3; // rax
  int (*v4)(void); // rax
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall ***v8)(_QWORD, void *, _QWORD *); // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  float v11[4]; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT pvAttribute; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v8 = 0LL;
  v4 = *(int (**)(void))(v3 + 40);
  try
  {
    if ( v4() >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *), int *))(*v8)[4])(v8, &v9);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x87,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
          (const char *)(unsigned int)v5,
          v7);
      if ( v9 )
      {
        wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(&v10, v8);
        pvAttribute = 0LL;
        if ( DwmGetWindowAttribute(*a1, 9u, &pvAttribute, 0x10u) < 0 )
          GetWindowRect(*a1, &pvAttribute);
        v11[0] = (float)pvAttribute.left;
        v11[1] = (float)pvAttribute.top;
        v11[2] = (float)(pvAttribute.right - pvAttribute.left);
        v11[3] = (float)(pvAttribute.bottom - pvAttribute.top);
        winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::OnAppSnapped(
          &v10,
          *a1,
          v11);
        if ( v10 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x99,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v6);
  }
}
