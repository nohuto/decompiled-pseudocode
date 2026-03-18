/*
 * XREFs of ApiSetDoPrediction @ 0x1400F306C
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1400F2FA0 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     DoPrediction @ 0x140126954 (DoPrediction.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall ApiSetDoPrediction(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6, _QWORD *a7)
{
  int v10; // ebp
  int (*v11)(void); // rax
  _QWORD *result; // rax

  v10 = a1;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4448LL);
  if ( v11 && v11() >= 0 )
    return (_QWORD *)DoPrediction(v10, a2, a3, a4, a5, (__int64)a6, (__int64)a7);
  *a6 = a2;
  result = a7;
  *a7 = a3;
  return result;
}
