/*
 * XREFs of ApiSetDoPrediction @ 0x1C0205A5C
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C01AB290 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *result; // rax

  if ( qword_1C0296238 && (int)qword_1C0296238() >= 0 )
  {
    result = qword_1C0296240;
    if ( qword_1C0296240 )
      return (_QWORD *)qword_1C0296240(a1, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    *a6 = a2;
    result = a7;
    *a7 = a3;
  }
  return result;
}
