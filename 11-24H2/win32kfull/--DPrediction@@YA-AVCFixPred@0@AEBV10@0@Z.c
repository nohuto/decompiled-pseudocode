/*
 * XREFs of ??DPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1401621C4
 * Callers:
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1401618C4 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140161950 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1401620E0 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x140162150 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall Prediction::operator*(unsigned __int64 *a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v3 = *a2;
  v5 = -*a2;
  v6 = (__int64)(*a3 ^ v3) >> 63;
  if ( v3 >= 0 )
    v5 = v3;
  v7 = -(__int64)*a3;
  if ( (*a3 & 0x8000000000000000uLL) == 0LL )
    v7 = *a3;
  v8 = (unsigned int)v7 * (unsigned __int64)(unsigned int)v5;
  v9 = HIDWORD(v7);
  v10 = HIDWORD(v8) + (unsigned int)v7 * HIDWORD(v5);
  v11 = v6 ^ ((unsigned int)(v10 + v5 * v9) | ((unsigned __int64)(unsigned int)((((unsigned int)v10
                                                                                + (unsigned int)v5 * v9) >> 32)
                                                                              + HIDWORD(v5) * v9
                                                                              + HIDWORD(v10)) << 32));
  v12 = v11 - v6;
  if ( (_DWORD)v8 )
    v12 = v11;
  *a1 = v12;
  return a1;
}
