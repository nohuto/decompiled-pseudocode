/*
 * XREFs of TransformVector @ 0x140159628
 * Callers:
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x140159374 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1401593B4 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1401594E0 (TransformVectorWithInputTargetPrecedence.c)
 * Callees:
 *     FixedPointSubPixel @ 0x14015A1C8 (FixedPointSubPixel.c)
 */

__int64 __fastcall TransformVector(float *a1, int *a2, int *a3, int *a4, int a5)
{
  float *v5; // r10
  float v6; // xmm1_4
  float v7; // xmm2_4
  double v8; // xmm0_8
  float v9; // xmm0_4
  __int64 result; // rax
  double v11; // xmm0_8

  v5 = a1;
  if ( a5 )
  {
    v6 = 0.0;
    if ( a4 )
    {
      v11 = FixedPointSubPixel(*a4);
      v7 = *(float *)&v11;
    }
    else
    {
      v7 = 0.0;
    }
    *a2 = (int)(float)((float)((float)((float)*a2 + v7) - v5[12]) / *v5);
    if ( a4 )
    {
      v8 = FixedPointSubPixel(a4[1]);
      v6 = *(float *)&v8;
    }
    v9 = (float)((float)((float)*a3 + v6) - v5[13]) / v5[5];
  }
  else
  {
    *a2 = (int)(float)((float)((float)*a2 * *a1) + a1[12]);
    v9 = (float)((float)*a3 * a1[5]) + a1[13];
  }
  result = (unsigned int)(int)v9;
  *a3 = result;
  return result;
}
