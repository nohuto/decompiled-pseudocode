/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1401618C4
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x140160DD8 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     ??DPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1401621C4 (--DPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 */

_QWORD *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char *v3; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  char v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = (char *)(a1 + 1);
  v11 = 0x100000000LL - *a1;
  v7 = (_QWORD *)Prediction::operator*(&v12, a1 + 1, &v11);
  v8 = (_QWORD *)Prediction::operator*(&v11, a3, a1);
  if ( v3 != &v10 )
    *(_QWORD *)v3 = *v8 + *v7;
  *a2 = *(_QWORD *)v3;
  return a2;
}
