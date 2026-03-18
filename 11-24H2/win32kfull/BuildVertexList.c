/*
 * XREFs of BuildVertexList @ 0x140159D28
 * Callers:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140159B58 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildVertexList(__int64 a1, __int64 a2, float *a3)
{
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 result; // rax
  float *v7; // rcx
  float v8; // xmm15_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm12_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  float v20; // xmm2_4
  float v21; // [rsp+B0h] [rbp+8h]

  *(float *)a1 = (float)*(int *)a2;
  *(float *)(a1 + 4) = (float)*(int *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)(a1 + 32) = (float)*(int *)(a2 + 8);
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
  *(_QWORD *)(a1 + 56) = 1065353216LL;
  *(_DWORD *)(a1 + 36) = _mm_cvtepi32_ps(v3).m128_u32[0];
  *(float *)(a1 + 64) = (float)*(int *)a2;
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(_DWORD *)(a1 + 68) = _mm_cvtepi32_ps(v4).m128_u32[0];
  *(float *)(a1 + 96) = (float)*(int *)(a2 + 8);
  *(float *)v3.m128i_i32 = (float)*(int *)(a2 + 12);
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_DWORD *)(a1 + 124) = 1065353216;
  *(_DWORD *)(a1 + 100) = v3.m128i_i32[0];
  *(float *)(a1 + 128) = (float)*(int *)a2;
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  *(_DWORD *)(a1 + 152) = 0;
  result = 6LL;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 132) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)(a1 + 160) = (float)*(int *)(a2 + 8);
  *(float *)v5.m128i_i32 = (float)*(int *)(a2 + 4);
  *(_QWORD *)(a1 + 184) = 1065353216LL;
  *(_DWORD *)(a1 + 164) = v5.m128i_i32[0];
  v7 = (float *)(a1 + 8);
  do
  {
    *v7 = 1.0;
    v7[1] = 1.0;
    v8 = *(v7 - 1);
    v9 = a3[5];
    v10 = a3[9];
    v11 = a3[13];
    v12 = a3[6];
    v13 = a3[2];
    v14 = a3[10];
    v15 = a3[14];
    v16 = a3[7];
    v17 = a3[3];
    v18 = a3[11];
    v19 = a3[15];
    v21 = *(v7 - 2);
    v20 = v21 * a3[1];
    *(v7 - 2) = (float)((float)((float)(v8 * a3[4]) + (float)(v21 * *a3)) + a3[8]) + a3[12];
    *(v7 - 1) = (float)((float)(v20 + (float)(v8 * v9)) + v10) + v11;
    *v7 = (float)((float)((float)(v21 * v13) + (float)(v8 * v12)) + v14) + v15;
    v7[1] = (float)((float)((float)(v21 * v17) + (float)(v8 * v16)) + v18) + v19;
    v7 += 8;
    --result;
  }
  while ( result );
  return result;
}
