/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802026A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1802027A4 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, const struct D2DVector4 *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DVector4 *v8; // rdx
  float v10; // xmm6_4

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( (unsigned int)WithinEpsilon_0() )
  {
    if ( a1 != v8 )
      *(_OWORD *)a1 = *(_OWORD *)v8;
  }
  else if ( v7 > 1.1754944e-38 )
  {
    v10 = 1.0 / sqrtf_0(v7);
    *(float *)a1 = v3 * v10;
    *((float *)a1 + 1) = v4 * v10;
    *((float *)a1 + 2) = v5 * v10;
    *((float *)a1 + 3) = v6 * v10;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return a1;
}
