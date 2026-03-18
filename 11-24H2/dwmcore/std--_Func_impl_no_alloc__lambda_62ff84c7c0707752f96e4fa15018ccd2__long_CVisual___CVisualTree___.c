/*
 * XREFs of std::_Func_impl_no_alloc__lambda_62ff84c7c0707752f96e4fa15018ccd2__long_CVisual___CVisualTree___::_Move @ 0x180282BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_62ff84c7c0707752f96e4fa15018ccd2__long_CVisual___CVisualTree___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180307F20;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
