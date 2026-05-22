/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat3x2@012@AEBU3012@0@Z @ 0x180107654
 * Callers:
 *     ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x180107BDC (-GetTransfromToOutputSpace@InputConfiguration@@YA-AUfloat3x2@Numerics@Foundation@Windows@@UINPUT.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  float *result; // rax
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm2_4

  v3 = a2[3];
  result = a1;
  v5 = a2[2];
  v6 = a2[5];
  v7 = a3[3] * a2[1];
  *a1 = (float)(*a3 * *a2) + (float)(a3[2] * a2[1]);
  v8 = (float)(a3[1] * *a2) + v7;
  v9 = v3;
  v10 = v3 * a3[3];
  v11 = v9 * a3[2];
  a1[1] = v8;
  v12 = (float)(v5 * *a3) + v11;
  v13 = v6 * a3[2];
  v14 = v6 * a3[3];
  v15 = (float)(v5 * a3[1]) + v10;
  v16 = a2[4];
  a1[2] = v12;
  v17 = v16 * *a3;
  v18 = v16 * a3[1];
  a1[3] = v15;
  v19 = (float)(v18 + v14) + a3[5];
  a1[4] = (float)(v17 + v13) + a3[4];
  a1[5] = v19;
  return result;
}
