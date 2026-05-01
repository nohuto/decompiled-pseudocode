/*
 * XREFs of wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl(unsigned_long_const_&)_::__clone @ 0x180606790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl_unsigned_long_const____::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_1807589A0;
  a2[1] = *(_QWORD *)(a1 + 8);
  return wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
           a2 + 2,
           (__int64 *)(a1 + 16));
}
