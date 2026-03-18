/*
 * XREFs of ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801FA044
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9568 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801F9E48 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4TransformArray(
        struct D2DVector4 *a1,
        __int64 a2,
        const struct D2DVector4 *a3,
        __int64 a4,
        const struct D2DMatrix *a5)
{
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm15_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float v17; // xmm14_4
  struct D2DVector4 *result; // rax
  float v19; // xmm1_4
  float v20; // [rsp+B8h] [rbp+10h]
  float v21; // [rsp+C8h] [rbp+20h]

  v5 = *((float *)a5 + 5);
  v6 = *((float *)a5 + 1);
  v7 = *((float *)a5 + 9);
  v8 = *((float *)a5 + 13);
  v9 = *((float *)a5 + 6);
  v10 = *((float *)a5 + 10);
  v11 = *((float *)a5 + 14);
  v12 = *((float *)a5 + 3);
  v13 = *((float *)a5 + 2);
  v14 = *((float *)a3 + 1);
  v15 = *((float *)a5 + 7);
  v16 = *((float *)a5 + 11);
  v17 = *((float *)a5 + 15);
  v21 = *(float *)a3;
  v20 = *((float *)a3 + 3);
  result = a1;
  v19 = *((float *)a3 + 2);
  *(float *)a1 = (float)((float)((float)(v14 * *((float *)a5 + 4)) + (float)(*(float *)a3 * *(float *)a5))
                       + (float)(v19 * *((float *)a5 + 8)))
               + (float)(v20 * *((float *)a5 + 12));
  *((float *)a1 + 1) = (float)((float)((float)(v6 * v21) + (float)(v5 * v14)) + (float)(v7 * v19)) + (float)(v8 * v20);
  *((float *)a1 + 2) = (float)((float)((float)(v13 * v21) + (float)(v9 * v14)) + (float)(v10 * v19))
                     + (float)(v20 * v11);
  *((float *)a1 + 3) = (float)((float)((float)(v21 * v12) + (float)(v14 * v15)) + (float)(v19 * v16))
                     + (float)(v20 * v17);
  return result;
}
