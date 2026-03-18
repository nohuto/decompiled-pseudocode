/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18011DDA8
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18011D484 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 a1, __int64 a2, float a3, float *a4)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // eax
  float v7; // xmm6_4
  float v8; // xmm12_4
  float v9; // xmm14_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm9_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v20[4]; // [rsp+28h] [rbp-89h]
  float v21[4]; // [rsp+38h] [rbp-79h]
  float v22[4]; // [rsp+48h] [rbp-69h]
  __int64 v23; // [rsp+58h] [rbp-59h]
  float v24; // [rsp+120h] [rbp+6Fh]

  v4 = *(float *)(a1 + 8);
  *(_QWORD *)v20 = *(_QWORD *)a1;
  v5 = v4 - *(float *)(a2 + 8);
  *(_QWORD *)v21 = *(_QWORD *)(a1 + 12);
  *(_QWORD *)v22 = *(_QWORD *)a2;
  v23 = *(_QWORD *)(a2 + 12);
  v6 = *(float *)(a2 + 20);
  v7 = *(float *)(a1 + 20);
  v8 = (float)(v7 * *(float *)&v23) - (float)(v6 * v21[0]);
  v24 = (float)(v6 * v21[1]) - (float)(v7 * *((float *)&v23 + 1));
  v9 = (float)(v21[0] * *((float *)&v23 + 1)) - (float)(v21[1] * *(float *)&v23);
  v10 = (float)((float)(v8 * v8) + (float)(v24 * v24)) + (float)(v9 * v9);
  v11 = (float)((float)((float)((float)((float)(v5 * *((float *)&v23 + 1)) - (float)((float)(v20[1] - v22[1]) * v6))
                              * v24)
                      + (float)((float)((float)((float)(v20[0] - v22[0]) * v6) - (float)(v5 * *(float *)&v23)) * v8))
              + (float)((float)((float)((float)(v20[1] - v22[1]) * *(float *)&v23)
                              - (float)((float)(v20[0] - v22[0]) * *((float *)&v23 + 1)))
                      * v9))
      / v10;
  v12 = (float)(v21[1] * v11) + COERCE_FLOAT(HIDWORD(*(_QWORD *)a1));
  v13 = (float)(v7 * v11) + v4;
  v14 = (float)(v21[0] * v11) + COERCE_FLOAT(*(_QWORD *)a1);
  v15 = (float)((float)((float)((float)((float)((float)(v20[0] - v22[0]) * *(float *)(a1 + 20)) - (float)(v5 * v21[0]))
                              * v8)
                      + (float)((float)((float)(v5 * v21[1]) - (float)((float)(v20[1] - v22[1]) * *(float *)(a1 + 20)))
                              * v24))
              + (float)((float)((float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1))
                                              - COERCE_FLOAT(HIDWORD(*(_QWORD *)a2)))
                                      * v21[0])
                              - (float)((float)(COERCE_FLOAT(*(_QWORD *)a1) - COERCE_FLOAT(*(_QWORD *)a2)) * v21[1]))
                      * v9))
      / v10;
  v16 = (float)(*(float *)&v23 * v15) + COERCE_FLOAT(*(_QWORD *)a2);
  v17 = (float)(*((float *)&v23 + 1) * v15) + COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v18 = (float)(v6 * v15) + *(float *)(a2 + 8);
  *a4 = (float)(v16 + v14) * 0.5;
  a4[1] = (float)(v12 + v17) * 0.5;
  a4[2] = (float)(v13 + v18) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v12 - v17) * (float)(v12 - v17))
                      + (float)((float)(v14 - v16) * (float)(v14 - v16)))
              + (float)((float)(v13 - v18) * (float)(v13 - v18)));
}
