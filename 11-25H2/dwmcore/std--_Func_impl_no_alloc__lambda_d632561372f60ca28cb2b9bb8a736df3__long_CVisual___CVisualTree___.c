/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d632561372f60ca28cb2b9bb8a736df3__long_CVisual___CVisualTree___::_Move @ 0x18028E140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_d632561372f60ca28cb2b9bb8a736df3__long_CVisual___CVisualTree___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180312DA0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
