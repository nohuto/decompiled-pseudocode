/*
 * XREFs of ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1802B3538
 * Callers:
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1802B2E50 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

float *__fastcall CAffineTransform2DEffect::TransformBounds(__int64 a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm4_4
  float *result; // rax
  __int64 v6; // rcx
  float v7; // xmm9_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm10_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm9_4
  float v17; // xmm6_4
  float v18; // xmm12_4
  float v19; // xmm11_4
  float v20; // xmm1_4
  float v21; // xmm10_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // [rsp+8h] [rbp-90h]
  float v25[5]; // [rsp+Ch] [rbp-8Ch] BYREF

  v4 = a2[5];
  result = v25;
  v6 = 3LL;
  v7 = a2[2];
  v8 = *a2 * *a3;
  v9 = a2[3];
  v10 = *a2 * a3[2];
  v11 = a2[1];
  v12 = v11 * a3[2];
  v13 = v7 * a3[3];
  v14 = v9 * a3[3];
  v15 = v11 * *a3;
  v16 = v7 * a3[1];
  v17 = v9 * a3[1];
  v24 = (float)(v13 + v8) + a2[4];
  v18 = (float)(v8 + v16) + a2[4];
  v19 = (float)(v15 + v17) + v4;
  v25[0] = (float)(v14 + v15) + v4;
  v20 = (float)(v10 + v13) + a2[4];
  v21 = (float)(v10 + v16) + a2[4];
  v25[1] = v20;
  v22 = v19;
  v25[3] = v21;
  v25[4] = (float)(v12 + v17) + v4;
  v25[2] = (float)(v12 + v14) + v4;
  v23 = v18;
  do
  {
    v18 = fminf(v18, *(result - 1));
    v19 = fminf(v19, *result);
    v23 = fmaxf(v23, *(result - 1));
    v22 = fmaxf(v22, *result);
    result += 2;
    *a4 = v18;
    --v6;
  }
  while ( v6 );
  a4[1] = v19;
  a4[2] = v23;
  a4[3] = v22;
  return result;
}
