/*
 * XREFs of ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18015AFA8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     cosf_0 @ 0x1802DF5D8 (cosf_0.c)
 *     sinf_0 @ 0x1802DF680 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationYawPitchRoll(
        struct D2DQuaternion *a1,
        float a2,
        float a3,
        float a4)
{
  float v5; // xmm12_4
  float v6; // xmm11_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  struct D2DQuaternion *result; // rax
  float v13; // xmm3_4

  v5 = sinf_0(a4 * 0.5);
  v6 = cosf_0(a4 * 0.5);
  v7 = sinf_0(a3 * 0.5);
  v8 = cosf_0(a3 * 0.5);
  v9 = sinf_0(a2 * 0.5);
  v10 = cosf_0(a2 * 0.5);
  v11 = v9 * v7;
  result = a1;
  v13 = v9 * v8;
  *(float *)a1 = (float)(v13 * v5) + (float)((float)(v10 * v7) * v6);
  *((float *)a1 + 1) = (float)(v13 * v6) - (float)((float)(v10 * v7) * v5);
  *((float *)a1 + 3) = (float)(v11 * v5) + (float)((float)(v10 * v8) * v6);
  *((float *)a1 + 2) = (float)((float)(v10 * v8) * v5) - (float)(v11 * v6);
  return result;
}
