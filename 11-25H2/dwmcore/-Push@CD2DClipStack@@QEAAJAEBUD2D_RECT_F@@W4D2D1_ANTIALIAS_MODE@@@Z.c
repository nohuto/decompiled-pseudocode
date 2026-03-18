/*
 * XREFs of ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180118820
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CD2DClipStack::Push(const void **this, __m128 *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  int v5; // esi
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  __m128 v9; // xmm8
  int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm7_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm9_4
  float v16; // xmm4_4
  __int64 v17; // rdx
  __m128 v18; // xmm6
  float v19; // xmm3_4
  float v20; // xmm1_4
  __m128 v21; // xmm6
  float v22; // xmm2_4
  __m128 v23; // xmm6
  float v24; // xmm0_4
  __m128 v25; // xmm6
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v29; // edi
  __int64 v30; // rdx
  unsigned int v31; // ebx
  unsigned int v32; // esi
  void *v33; // rax
  const void *v34; // rbp
  __m128 v35; // [rsp+30h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
  {
    v5 = 0x7FFFFFFF;
    v6 = a2->m128_f32[0] - 0.5;
    if ( v6 < -2147483600.0 )
    {
      v7 = 0x80000000;
    }
    else if ( v6 >= 2147483600.0 )
    {
      v7 = 0x7FFFFFFF;
    }
    else
    {
      v7 = (int)ceilf_0(v6);
    }
    v8 = a2->m128_f32[1] - 0.5;
    v9.m128_f32[0] = (float)v7;
    if ( v8 < -2147483600.0 )
    {
      v10 = 0x80000000;
    }
    else if ( v8 >= 2147483600.0 )
    {
      v10 = 0x7FFFFFFF;
    }
    else
    {
      v10 = (int)ceilf_0(v8);
    }
    v11 = a2->m128_f32[2] - 0.5;
    v12 = (float)v10;
    if ( v11 < -2147483600.0 )
    {
      v13 = 0x80000000;
    }
    else if ( v11 >= 2147483600.0 )
    {
      v13 = 0x7FFFFFFF;
    }
    else
    {
      v13 = (int)ceilf_0(v11);
    }
    v14 = a2->m128_f32[3] - 0.5;
    v15 = (float)v13;
    if ( v14 < -2147483600.0 )
    {
      v5 = 0x80000000;
    }
    else if ( v14 < 2147483600.0 )
    {
      v5 = (int)ceilf_0(v14);
    }
    v16 = (float)v5;
  }
  else
  {
    v9 = *a2;
    LODWORD(v12) = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
    LODWORD(v15) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(v16) = _mm_shuffle_ps(*a2, *a2, 255).m128_u32[0];
  }
  v17 = *((unsigned int *)this + 2);
  if ( (_DWORD)v17 )
    v18 = *((__m128 *)*this + (unsigned int)(v17 - 1));
  else
    v18 = (__m128)_xmm;
  v35 = v18;
  v19 = v18.m128_f32[0];
  if ( v9.m128_f32[0] > v18.m128_f32[0] )
  {
    v19 = v9.m128_f32[0];
    v18.m128_f32[0] = v9.m128_f32[0];
    v35 = v18;
  }
  v20 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  if ( v12 > v20 )
  {
    v20 = v12;
    v21 = _mm_shuffle_ps(v35, v35, 225);
    v21.m128_f32[0] = v12;
    v18 = _mm_shuffle_ps(v21, v21, 225);
    v35 = v18;
  }
  v22 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
  if ( v22 > v15 )
  {
    v22 = v15;
    v23 = _mm_shuffle_ps(v35, v35, 210);
    v23.m128_f32[0] = v15;
    v18 = _mm_shuffle_ps(v23, v23, 201);
    v35 = v18;
  }
  v24 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
  if ( v24 > v16 )
  {
    v24 = v16;
    v25 = _mm_shuffle_ps(v35, v35, 147);
    v25.m128_f32[0] = v16;
    v18 = _mm_shuffle_ps(v25, v25, 57);
  }
  if ( v22 <= v19 || v24 <= v20 )
    v18 = 0uLL;
  v26 = *((unsigned int *)this + 3);
  if ( (_DWORD)v17 != (_DWORD)v26 )
    goto LABEL_28;
  v29 = 2 * v26;
  if ( (unsigned __int64)(2 * v26) > 0xFFFFFFFF )
  {
    v30 = 98LL;
LABEL_34:
    v31 = -2147024362;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v31);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v31);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x31u, 0LL);
    return v31;
  }
  if ( v29 <= 8 )
    v29 = 8;
  v32 = 16 * v17;
  if ( (unsigned __int64)(16 * v17) > 0xFFFFFFFF )
  {
    v30 = 101LL;
    goto LABEL_34;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v29 <= 0x10 )
  {
    v31 = -2147024809;
    goto LABEL_43;
  }
  v33 = MIDL_user_allocate(16LL * v29);
  v34 = v33;
  if ( !v33 )
  {
    v31 = -2147024882;
LABEL_43:
    v30 = 104LL;
    goto LABEL_35;
  }
  memcpy_0(v33, *this, v32);
  operator delete((void *)*this);
  *this = v34;
  *((_DWORD *)this + 3) = v29;
LABEL_28:
  *((__m128 *)*this + (unsigned int)(*((_DWORD *)this + 2))++) = v18;
  v27 = *((_DWORD *)this + 5);
  if ( v27 <= *((_DWORD *)this + 2) )
    v27 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = v27;
  return 0LL;
}
