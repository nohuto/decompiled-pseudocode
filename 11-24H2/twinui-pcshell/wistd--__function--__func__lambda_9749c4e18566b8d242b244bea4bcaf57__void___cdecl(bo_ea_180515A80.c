/*
 * XREFs of wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::__clone @ 0x180515A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl_bool_const____::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_18074E820;
  a2[1] = *(_QWORD *)(a1 + 8);
  return wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
           a2 + 2,
           (__int64 *)(a1 + 16));
}
