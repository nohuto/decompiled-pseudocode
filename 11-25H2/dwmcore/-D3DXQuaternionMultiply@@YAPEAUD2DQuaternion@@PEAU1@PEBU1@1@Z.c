/*
 * XREFs of ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802BEC6C
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1801BAF70 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1801DC5C0 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct D2DQuaternion *__fastcall D3DXQuaternionMultiply(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm5_4
  struct D2DQuaternion *result; // rax
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm0_4

  v3 = *(float *)a2;
  result = a1;
  v5 = *((float *)a3 + 3);
  v6 = *((float *)a3 + 1);
  v7 = *(float *)a3;
  v8 = *((float *)a2 + 1);
  v9 = *((float *)a3 + 2);
  v10 = *((float *)a2 + 2);
  v11 = *((float *)a2 + 3);
  v12 = v10 * *(float *)a3;
  *(float *)a1 = (float)((float)((float)(*(float *)a3 * v11) + (float)(*(float *)a2 * v5)) + (float)(v6 * v10))
               - (float)(v9 * v8);
  *((float *)a1 + 1) = (float)((float)((float)(v8 * v5) - v12) + (float)(v6 * v11)) + (float)(v9 * v3);
  *((float *)a1 + 2) = (float)((float)((float)(v8 * v7) + (float)(v10 * v5)) - (float)(v6 * v3)) + (float)(v9 * v11);
  *((float *)a1 + 3) = (float)((float)((float)(v11 * v5) - (float)(v7 * v3)) - (float)(v8 * v6)) - (float)(v9 * v10);
  return result;
}
