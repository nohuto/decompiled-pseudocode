/*
 * XREFs of ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18024B2AC
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB430 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015B40C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x1802DF5D8 (cosf_0.c)
 *     sinf_0 @ 0x1802DF680 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationAxis(
        struct D2DQuaternion *a1,
        const struct D2DVector3 *a2,
        float a3)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  struct D2DQuaternion *result; // rax
  float v8; // xmm1_4
  float v9; // xmm6_4
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  float v11; // [rsp+28h] [rbp-30h]

  v10 = 0LL;
  v11 = 0.0;
  D3DXVec3Normalize((struct D2DVector3 *)&v10, a2);
  v4 = sinf_0(a3 * 0.5);
  v5 = cosf_0(a3 * 0.5);
  v6 = v4 * *((float *)&v10 + 1);
  result = a1;
  v8 = *(float *)&v10 * v4;
  v9 = v4 * v11;
  *((float *)a1 + 3) = v5;
  *(float *)a1 = v8;
  *((float *)a1 + 2) = v9;
  *((float *)a1 + 1) = v6;
  return result;
}
