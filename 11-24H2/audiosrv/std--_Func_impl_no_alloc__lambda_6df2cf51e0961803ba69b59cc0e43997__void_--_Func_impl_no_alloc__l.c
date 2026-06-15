/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void___lambda_6df2cf51e0961803ba69b59cc0e43997__0_ @ 0x1800A2894
 * Callers:
 *     ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180065FD4 (-OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Move @ 0x1800C0010 (std--_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void___lambda_6df2cf51e0961803ba69b59cc0e43997__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = off_18017AC78;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
