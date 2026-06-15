/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_::_Move @ 0x18011AA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18016F738;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
