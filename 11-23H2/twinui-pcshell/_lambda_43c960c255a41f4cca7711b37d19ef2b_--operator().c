/*
 * XREFs of _lambda_43c960c255a41f4cca7711b37d19ef2b_::operator() @ 0x18054A360
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::RunTask @ 0x18054A610 (CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_43c960c255a41f4cca7711b37d19ef2b_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 24))(
         a2,
         16LL,
         &GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
         &v8);
  v5 = v4;
  if ( v4 >= 0
    && (v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 48LL))(
               v8,
               *(_QWORD *)a1,
               *(unsigned int *)(a1 + 8)),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  return v5;
}
