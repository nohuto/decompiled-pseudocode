/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void___lambda_3dd2d7830cd09cc431be7fc98dcac29c__0_ @ 0x180067DD0
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7C04 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_::_Move @ 0x1800F8F00 (std--_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void___lambda_3dd2d7830cd09cc431be7fc98dcac29c__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = off_1801787D8;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
