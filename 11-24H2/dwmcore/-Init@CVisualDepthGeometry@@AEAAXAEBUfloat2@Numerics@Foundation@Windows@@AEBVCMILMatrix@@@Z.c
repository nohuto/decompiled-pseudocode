/*
 * XREFs of ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180166FC0
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1801655C4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x1801657A0 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1801674F8 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180167744 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CVisualDepthGeometry::Init(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  int v3; // xmm2_4
  int v5; // xmm1_4
  float *v6; // rax
  __int64 v7; // rdx
  FLOAT *p_y; // rcx
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  int v12; // r9d
  __int64 v13; // r11
  _OWORD *v14; // r10
  float *v15; // r8
  float v16; // xmm2_4
  int v17; // edx
  float v18; // xmm1_4
  const __m128i *v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm2
  float v22; // xmm8_4
  float v23; // xmm9_4
  float *v24; // rax
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  struct D2D_VECTOR_4F *v31[2]; // [rsp+28h] [rbp-89h] BYREF
  __int128 v32; // [rsp+38h] [rbp-79h] BYREF
  int v33; // [rsp+48h] [rbp-69h]
  int v34; // [rsp+4Ch] [rbp-65h]
  int v35; // [rsp+50h] [rbp-61h]
  int v36; // [rsp+54h] [rbp-5Dh]
  int v37; // [rsp+58h] [rbp-59h]
  int v38; // [rsp+5Ch] [rbp-55h]
  int v39; // [rsp+60h] [rbp-51h]
  int v40; // [rsp+64h] [rbp-4Dh]
  int v41; // [rsp+68h] [rbp-49h]
  int v42; // [rsp+6Ch] [rbp-45h]
  int v43; // [rsp+70h] [rbp-41h]
  int v44; // [rsp+74h] [rbp-3Dh]
  struct D2D_VECTOR_4F v45; // [rsp+78h] [rbp-39h] BYREF
  struct D2D_VECTOR_4F v46; // [rsp+88h] [rbp-29h] BYREF
  struct D2D_VECTOR_4F v47; // [rsp+98h] [rbp-19h] BYREF

  v3 = *(_DWORD *)a2;
  if ( COERCE_FLOAT(*(_DWORD *)a2 & _xmm) < 0.0000011920929 )
    v3 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v5 = *((_DWORD *)a2 + 1);
  if ( COERCE_FLOAT(v5 & _xmm) < 0.0000011920929 )
    v5 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v33 = v3;
  v37 = v3;
  v38 = v5;
  v42 = v5;
  v32 = *(__int128 *)&_xmm.r;
  v36 = 1065353216;
  v40 = 1065353216;
  v44 = 1065353216;
  CMILMatrix::Transform(a3, (const struct D2D_POINT_4F *)&v32, (struct D2D_POINT_4F *)&v45, 4u);
  v6 = (float *)((char *)this + 44);
  v7 = 4LL;
  p_y = &v45.y;
  do
  {
    v9 = *p_y;
    v10 = p_y[1];
    v11 = 1.0 / p_y[2];
    p_y += 4;
    *(v6 - 2) = v11 * *(p_y - 5);
    *(v6 - 1) = v11 * v9;
    *v6 = v11 * v10;
    v6 += 3;
    --v7;
  }
  while ( v7 );
  v12 = 1;
  v13 = 4LL;
  v14 = (_OWORD *)((char *)this + 84);
  v15 = (float *)((char *)this + 40);
  do
  {
    v16 = *v15;
    v17 = v12 % 4;
    *(float *)v31 = *(v15 - 1);
    ++v12;
    v15 += 3;
    *((float *)v31 + 1) = v16;
    v18 = *((float *)this + 3 * v17 + 10) - v16;
    *(float *)&v31[1] = *((float *)this + 3 * v17 + 9) - *(float *)v31;
    *((float *)&v31[1] + 1) = v18;
    *v14++ = *(_OWORD *)v31;
    --v13;
  }
  while ( v13 );
  v19 = (const __m128i *)D2DVectorHelper::CalculatePlane((D2DVectorHelper *)v31, &v45, &v46, &v47, v31[0]);
  v20 = 3LL;
  v21 = (__m128)_mm_loadu_si128(v19);
  *((_DWORD *)this + 40) = v21.m128_i32[0];
  *((_DWORD *)this + 41) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
  *((_DWORD *)this + 42) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
  *((_DWORD *)this + 43) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
  v22 = *((float *)this + 13);
  v23 = *((float *)this + 14);
  *((float *)this + 37) = (float)((float)((float)(*((float *)this + 12) + *((float *)this + 9)) + *((float *)this + 15))
                                + *((float *)this + 18))
                        * 0.25;
  *((float *)this + 38) = (float)((float)((float)(v22 + *((float *)this + 10)) + *((float *)this + 16))
                                + *((float *)this + 19))
                        * 0.25;
  *((float *)this + 39) = (float)((float)((float)(v23 + *((float *)this + 11)) + *((float *)this + 17))
                                + *((float *)this + 20))
                        * 0.25;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 4) = *((_DWORD *)this + 11);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 7) = *((_DWORD *)this + 11);
  v24 = (float *)((char *)this + 52);
  do
  {
    v25 = fminf(*((float *)this + 3), *v24);
    v26 = fminf(*((float *)this + 4), v24[1]);
    *((float *)this + 2) = fminf(*((float *)this + 2), *(v24 - 1));
    *((float *)this + 3) = v25;
    *((float *)this + 4) = v26;
    v27 = *v24;
    v28 = v24[1];
    v24 += 3;
    v29 = fmaxf(*((float *)this + 6), v27);
    v30 = fmaxf(*((float *)this + 7), v28);
    *((float *)this + 5) = fmaxf(*((float *)this + 5), *(v24 - 4));
    *((float *)this + 6) = v29;
    *((float *)this + 7) = v30;
    --v20;
  }
  while ( v20 );
  *((_DWORD *)this + 8) = -1;
}
