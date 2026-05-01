/*
 * XREFs of wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::operator() @ 0x180512010
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x180511244 (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl_bool_const____::operator()(
        __int64 a1,
        char *a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v5 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v5 + 568);
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    &v6,
    (__int64 *)(a1 + 16));
  v7 = v2;
  return CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___(v3, (volatile int *)&v5);
}
