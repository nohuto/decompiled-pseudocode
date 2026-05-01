/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___::RunTask @ 0x18054A630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___::RunTask(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v2 = *a2;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v2 + 40))(
         a2,
         16LL,
         &GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
         &v5) >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, 0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
        (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
}
