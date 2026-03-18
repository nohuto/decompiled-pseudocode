/*
 * XREFs of EncodeTBNFrameToQuaternion @ 0x18015FF90
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x18015F9BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180160230 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801604CC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall EncodeTBNFrameToQuaternion(struct D2DQuaternion *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm14_4
  float v5; // xmm15_4
  float v6; // xmm7_4
  float v7; // xmm13_4
  float v8; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  int v16; // xmm2_4
  int v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  int v23; // xmm2_4
  int v24; // xmm1_4
  _DWORD v26[11]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+54h] [rbp-B4h]
  int v28; // [rsp+64h] [rbp-A4h]

  v4 = *a2;
  v5 = *a4;
  v6 = a2[2];
  v7 = a4[2];
  v8 = a4[1];
  v10 = a2[1];
  v11 = a3[1];
  v12 = *a3;
  v13 = a3[2];
  if ( (float)((float)((float)((float)((float)(*a2 * v7) - (float)(*a4 * v6)) * v11)
                     + (float)((float)((float)(v8 * v6) - (float)(v7 * v10)) * *a3))
             + (float)((float)((float)(*a4 * v10) - (float)(*a2 * v8)) * v13)) < 0.0 )
    v14 = FLOAT_N1_0;
  else
    v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v26[3] = 0;
  v26[7] = 0;
  v28 = 1065353216;
  *(float *)&v26[4] = v12 * v14;
  *(float *)&v26[5] = v11 * v14;
  *(float *)&v26[6] = v13 * v14;
  *(float *)v26 = v4;
  *(float *)&v26[1] = v10;
  *(float *)&v26[2] = v6;
  *(float *)&v26[8] = v5;
  *(float *)&v26[9] = v8;
  *(float *)&v26[10] = v7;
  v27 = 0LL;
  D3DXQuaternionRotationMatrix(a1, (const struct D2DMatrix *)v26);
  D3DXQuaternionNormalize(a1, a1);
  v15 = *((float *)a1 + 3);
  if ( v15 < 0.0 )
  {
    LODWORD(v15) ^= _xmm;
    v16 = *((_DWORD *)a1 + 2);
    v17 = *((_DWORD *)a1 + 1) ^ _xmm;
    *(_DWORD *)a1 ^= _xmm;
    *((_DWORD *)a1 + 1) = v17;
    *((_DWORD *)a1 + 2) = v16 ^ _xmm;
    *((float *)a1 + 3) = v15;
  }
  v18 = FLOAT_0_000001;
  if ( v15 >= 0.000001 )
  {
    v18 = v15;
  }
  else
  {
    v19 = sqrtf_0(1.0);
    *((_DWORD *)a1 + 3) = 897988541;
    v20 = v19 * *(float *)a1;
    v21 = v19 * *((float *)a1 + 1);
    v22 = v19 * *((float *)a1 + 2);
    *(float *)a1 = v20;
    *((float *)a1 + 1) = v21;
    *((float *)a1 + 2) = v22;
  }
  if ( v14 < 0.0 )
  {
    v23 = *((_DWORD *)a1 + 2);
    v24 = *((_DWORD *)a1 + 1) ^ _xmm;
    *(_DWORD *)a1 ^= _xmm;
    *((_DWORD *)a1 + 1) = v24;
    *((_DWORD *)a1 + 2) = v23 ^ _xmm;
    *((_DWORD *)a1 + 3) = LODWORD(v18) ^ _xmm;
  }
  return a1;
}
