/*
 * XREFs of std::_Func_impl_no_alloc__lambda_066034ca56f98fe9ea8b5be84f75c5f7__void_::_Move @ 0x1800FC8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_066034ca56f98fe9ea8b5be84f75c5f7__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = off_18017D460;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  return result;
}
