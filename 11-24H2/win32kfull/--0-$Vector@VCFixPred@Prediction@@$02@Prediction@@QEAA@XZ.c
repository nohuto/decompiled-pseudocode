/*
 * XREFs of ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x14016254C
 * Callers:
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x140162078 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1401620E0 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x140162284 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 * Callees:
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(
        Prediction::CFixPred *this)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  Prediction::CFixPred *v4; // rdi
  Prediction::CFixPred *v5; // rax
  char v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = 3LL;
  v3 = 3LL;
  v4 = this;
  do
  {
    Prediction::CFixPred::CFixPred(v4);
    v4 = (Prediction::CFixPred *)((char *)v4 + 8);
    --v3;
  }
  while ( v3 );
  v5 = this;
  do
  {
    if ( v5 != (Prediction::CFixPred *)&v7 )
      *(_QWORD *)v5 = 0LL;
    v5 = (Prediction::CFixPred *)((char *)v5 + 8);
    --v1;
  }
  while ( v1 );
  return this;
}
