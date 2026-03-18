/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1401620E0
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140161950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??DPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1401621C4 (--DPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x14016254C (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator*<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 a3)
{
  Prediction::CFixPred *v6; // rbx
  __int64 v7; // rbp
  Prediction::CFixPred *v8; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(a1);
  v6 = a1;
  v7 = 3LL;
  do
  {
    v8 = (Prediction::CFixPred *)Prediction::operator*(&v10, a2, a3);
    if ( v6 != v8 )
      *(_QWORD *)v6 = *(_QWORD *)v8;
    a2 += 8LL;
    v6 = (Prediction::CFixPred *)((char *)v6 + 8);
    --v7;
  }
  while ( v7 );
  return a1;
}
