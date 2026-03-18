/*
 * XREFs of ?FastMul64by64@@YA_J_J0@Z @ 0x140161FD4
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x140160DD8 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x140161F50 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FastMul64by64(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax

  v2 = (a2 ^ a1) >> 63;
  v3 = -a1;
  if ( a1 > 0 )
    v3 = a1;
  v4 = -a2;
  if ( a2 > 0 )
    v4 = a2;
  v5 = (unsigned int)v4 * (unsigned __int64)(unsigned int)v3;
  result = (v2 ^ ((unsigned int)(HIDWORD(v5) + v4 * HIDWORD(v3) + v3 * HIDWORD(v4)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v5) + v4 * HIDWORD(v3)) + (unsigned int)v3 * HIDWORD(v4)) >> 32) + HIDWORD(v3) * HIDWORD(v4) + ((HIDWORD(v5) + (unsigned int)v4 * HIDWORD(v3)) >> 32)) << 32)))
         - v2;
  if ( (_DWORD)v5 )
    return v2 ^ ((unsigned int)(HIDWORD(v5) + v4 * HIDWORD(v3) + v3 * HIDWORD(v4)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v5) + v4 * HIDWORD(v3)) + (unsigned int)v3 * HIDWORD(v4)) >> 32) + HIDWORD(v3) * HIDWORD(v4) + ((HIDWORD(v5) + (unsigned int)v4 * HIDWORD(v3)) >> 32)) << 32));
  return result;
}
