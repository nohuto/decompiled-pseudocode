/*
 * XREFs of ?TryHideTabTip@KeyboardHosting@@YAJXZ @ 0x180483CD0
 * Callers:
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x18046841C (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TryHideTabTip(KeyboardHosting *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = 0LL;
  if ( CoCreateInstance(
         &GUID_4ce576fa_83dc_4f88_951c_9d0782b4e376,
         0LL,
         6u,
         &GUID_37c994e7_432b_4834_a2f7_dce1f13b834b,
         &ppv) < 0
    || (v1 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 40LL))(ppv), v2 = v1, v1 >= 0) )
  {
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardhostingutil.cpp",
      (const char *)(unsigned int)v1);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v2;
}
