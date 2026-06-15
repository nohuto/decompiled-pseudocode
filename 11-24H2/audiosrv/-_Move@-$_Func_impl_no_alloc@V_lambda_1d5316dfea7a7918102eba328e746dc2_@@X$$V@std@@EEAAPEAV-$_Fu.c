/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D9360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<_lambda_1d5316dfea7a7918102eba328e746dc2_,void,>::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_1d5316dfea7a7918102eba328e746dc2_,void,>::`vftable';
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
