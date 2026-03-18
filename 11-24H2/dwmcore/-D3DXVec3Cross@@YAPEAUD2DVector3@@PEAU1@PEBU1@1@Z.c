/*
 * XREFs of ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18022C1C8
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB430 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Cross(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  struct D2DVector3 *result; // rax
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm0_4

  result = a1;
  v4 = *((float *)a3 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *(float *)a3;
  v7 = *(float *)a2;
  v8 = *((float *)a2 + 1);
  v9 = *(float *)a2 * *((float *)a3 + 2);
  *(float *)a1 = (float)(*((float *)a3 + 2) * v8) - (float)(v4 * v5);
  *((float *)a1 + 1) = (float)(v6 * v5) - v9;
  *((float *)a1 + 2) = (float)(v7 * v4) - (float)(v6 * v8);
  return result;
}
