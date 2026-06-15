/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Move @ 0x1400637E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_14009C5C8;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a1[1] = 0LL;
  a1[2] = 0LL;
  v2 = a1[3];
  a1[3] = 0LL;
  a2[3] = v2;
  return a2;
}
