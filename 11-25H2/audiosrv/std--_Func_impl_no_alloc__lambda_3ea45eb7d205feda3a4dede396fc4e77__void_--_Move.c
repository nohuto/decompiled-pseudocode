/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Move @ 0x1800F8470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  *a2 = off_1801731F0;
  v2 = a1[1];
  a1[1] = 0LL;
  a2[1] = v2;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
