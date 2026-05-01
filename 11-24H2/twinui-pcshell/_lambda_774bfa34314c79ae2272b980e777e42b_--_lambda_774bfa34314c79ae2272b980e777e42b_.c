/*
 * XREFs of _lambda_774bfa34314c79ae2272b980e777e42b_::_lambda_774bfa34314c79ae2272b980e777e42b_ @ 0x180448A10
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call @ 0x18018D700 (std--_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_--_Do_call.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_774bfa34314c79ae2272b980e777e42b_::_lambda_774bfa34314c79ae2272b980e777e42b_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _BYTE *a4)
{
  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_BYTE *)(a1 + 16) = *a4;
  return a1;
}
