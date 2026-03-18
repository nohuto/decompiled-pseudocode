/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x140162150
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140161950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??DPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1401621C4 (--DPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  char v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  *(_QWORD *)a1 = 0LL;
  v6 = a3 - a2;
  v7 = 3LL;
  do
  {
    v8 = v3 + *(_QWORD *)Prediction::operator*(&v11, v4, v6 + v4);
    if ( a1 != &v10 )
    {
      *(_QWORD *)a1 = v8;
      v3 = v8;
    }
    v4 += 8LL;
    --v7;
  }
  while ( v7 );
  return a1;
}
