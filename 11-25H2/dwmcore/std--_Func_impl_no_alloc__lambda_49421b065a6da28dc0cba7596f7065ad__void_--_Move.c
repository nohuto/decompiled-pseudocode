/*
 * XREFs of std::_Func_impl_no_alloc__lambda_49421b065a6da28dc0cba7596f7065ad__void_::_Move @ 0x1802C8F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_49421b065a6da28dc0cba7596f7065ad__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1803158C0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
