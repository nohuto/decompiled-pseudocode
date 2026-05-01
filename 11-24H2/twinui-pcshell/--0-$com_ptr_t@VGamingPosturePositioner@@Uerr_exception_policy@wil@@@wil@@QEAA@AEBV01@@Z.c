/*
 * XREFs of ??0?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1804F8324
 * Callers:
 *     _lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_ @ 0x1804F3980 (_lambda_fe44875c696bc544c1b0599fc0c72566_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1804F9E70 (wistd--__function--__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(
        _QWORD *a1)
{
  *a1 = GamingPosturePositioner::s_instance;
  if ( GamingPosturePositioner::s_instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)GamingPosturePositioner::s_instance + 8LL))(GamingPosturePositioner::s_instance);
  return a1;
}
