/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Move @ 0x180108930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  _QWORD *result; // rax

  *a2 = off_1801736B8;
  v2 = a1[1];
  v3 = a1[3];
  v4 = a1[2];
  a1[3] = 0LL;
  a1[2] = 0LL;
  a1[1] = 0LL;
  a2[1] = v2;
  result = a2;
  a2[2] = v4;
  a2[3] = v3;
  return result;
}
