/*
 * XREFs of ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18015AEA8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802A00E4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     _lambda_c2661e01401ae061a9dc9ee442c48f39_::operator() @ 0x1802AFA90 (_lambda_c2661e01401ae061a9dc9ee442c48f39_--operator().c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformNormal(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm7_4
  struct D2DVector3 *result; // rax
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm10_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm11_4
  float v12; // xmm1_4

  v3 = *((float *)a3 + 1);
  v4 = *((float *)a3 + 2);
  result = a1;
  v6 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = v7 * *((float *)a3 + 6);
  v9 = v7 * *((float *)a3 + 5);
  v10 = *((float *)a2 + 2);
  v11 = v10 * *((float *)a3 + 10);
  v12 = v10 * *((float *)a3 + 9);
  *(float *)a1 = (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
               + (float)(*((float *)a2 + 2) * *((float *)a3 + 8));
  *((float *)a1 + 1) = (float)((float)(v6 * v3) + v9) + v12;
  *((float *)a1 + 2) = (float)((float)(v6 * v4) + v8) + v11;
  return result;
}
