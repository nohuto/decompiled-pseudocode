/*
 * XREFs of _lambda_a6d0d909e7d7253cd78b9137e9e20418_::operator() @ 0x1801F8148
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6d0d909e7d7253cd78b9137e9e20418___::Run @ 0x1801F9C40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a6d0d909e7d7253cd78b9137e9e20418___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x1801AC23C (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a6d0d909e7d7253cd78b9137e9e20418_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING *v3; // rax
  int ActivationFactory; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v12 = 0LL;
  v3 = Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v12);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v9);
  v11 = 0LL;
  v5 = *v12;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v5 + 48))(
         v12,
         dwProcessId,
         WindowThreadProcessId,
         &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAEA,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 48LL))(v11, v13);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAED,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return 0LL;
}
