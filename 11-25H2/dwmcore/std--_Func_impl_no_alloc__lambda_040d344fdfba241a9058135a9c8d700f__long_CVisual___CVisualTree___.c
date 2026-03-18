/*
 * XREFs of std::_Func_impl_no_alloc__lambda_040d344fdfba241a9058135a9c8d700f__long_CVisual___CVisualTree___::_Move @ 0x18028E070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_040d344fdfba241a9058135a9c8d700f__long_CVisual___CVisualTree___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180312D70;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
