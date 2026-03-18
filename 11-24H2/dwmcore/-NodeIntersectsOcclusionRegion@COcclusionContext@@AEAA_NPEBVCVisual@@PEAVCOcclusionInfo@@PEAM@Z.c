/*
 * XREFs of ?NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z @ 0x18001E870
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800201A0 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

bool __fastcall COcclusionContext::NodeIntersectsOcclusionRegion(
        COcclusionContext *this,
        const struct CVisual *a2,
        struct COcclusionInfo *a3,
        float *a4)
{
  __int64 v4; // r10
  __m128 *v8; // rcx
  unsigned int v9; // eax
  __m128 v10; // xmm2
  int v11; // eax
  void *v12; // rcx
  __m128i v13; // xmm9
  __m128i v14; // xmm6
  __m128i v15; // xmm8
  __m128i v16; // xmm7
  int v17; // eax
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  __m128i v23; // xmm6
  unsigned int v24; // eax
  float v25; // xmm1_4
  int v26; // ebx
  int v27; // esi
  __m128 v28; // xmm2
  __m128 v29; // xmm2
  int v30; // edi
  __m128 v31; // xmm2
  __m128 v32; // xmm2
  int v33; // edx
  const struct FastRegion::Internal::CRgnData *v34; // rdx
  int v35; // esp
  __m128 v37; // rt1
  __m128 v38; // rt1
  int v39; // eax
  float v40; // [rsp+30h] [rbp-D0h]
  float v41; // [rsp+30h] [rbp-D0h]
  float v42; // [rsp+30h] [rbp-D0h]
  float v43; // [rsp+30h] [rbp-D0h]
  __m128i X; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h]
  _DWORD *v46; // [rsp+50h] [rbp-B0h]
  _DWORD v47[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v48[2]; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD v49[13]; // [rsp+6Ch] [rbp-94h] BYREF
  __m128 v50; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v4 = *((_QWORD *)this + 1);
  v8 = (__m128 *)(v4 + 80);
  if ( a2 != *(const struct CVisual **)(v4 + 72) )
    v8 = (__m128 *)((char *)a2 + 152);
  v50 = *v8;
  v51 = v8[1].m128_u64[0];
  v9 = _mm_shuffle_ps((__m128)v51, (__m128)v51, 85).m128_f32[0] <= *(float *)&v51;
  if ( _mm_shuffle_ps(v50, v50, 170).m128_f32[0] <= v50.m128_f32[0] )
    ++v9;
  v10 = _mm_shuffle_ps(v50, v50, 85);
  if ( _mm_shuffle_ps(v50, v50, 255).m128_f32[0] <= v10.m128_f32[0] )
    ++v9;
  if ( v9 > 1 )
    goto LABEL_62;
  v11 = *((_DWORD *)this + 10);
  v45 = 0LL;
  X = 0LL;
  v12 = v11 ? (void *)(*((_QWORD *)this + 4) + 68LL * (unsigned int)(v11 - 1)) : &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v12, &v50, &X);
  v13 = (__m128i)X.m128i_u32[2];
  v14 = (__m128i)X.m128i_u32[0];
  if ( *(float *)&X.m128i_i32[2] <= *(float *)X.m128i_i32 )
    goto LABEL_62;
  v15 = (__m128i)X.m128i_u32[3];
  v16 = (__m128i)X.m128i_u32[1];
  if ( *(float *)&X.m128i_i32[3] <= *(float *)&X.m128i_i32[1] )
    goto LABEL_62;
  v17 = *((_DWORD *)this + 34);
  if ( v17 )
  {
    X = *(__m128i *)(*((_QWORD *)this + 16) + 16LL * (unsigned int)(v17 - 1));
    v18 = X;
    if ( *(float *)v14.m128i_i32 > *(float *)X.m128i_i32 )
      v18 = v14;
    v19 = (__m128i)X.m128i_u32[1];
    v20 = *(float *)&X.m128i_i32[1];
    if ( *(float *)v16.m128i_i32 > *(float *)&X.m128i_i32[1] )
    {
      v19 = v16;
      v20 = *(float *)v16.m128i_i32;
    }
    v10 = (__m128)X.m128i_u32[2];
    v21 = *(float *)&X.m128i_i32[2];
    if ( *(float *)&X.m128i_i32[2] > *(float *)v13.m128i_i32 )
    {
      v10 = (__m128)v13;
      v21 = *(float *)v13.m128i_i32;
    }
    v22 = *(float *)&X.m128i_i32[3];
    v23 = (__m128i)X.m128i_u32[3];
    if ( *(float *)&X.m128i_i32[3] > *(float *)v15.m128i_i32 )
    {
      v22 = *(float *)v15.m128i_i32;
      v23 = v15;
    }
    v15 = v23;
    if ( v21 <= *(float *)v18.m128i_i32 || v22 <= v20 )
    {
      v10 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v15 = 0LL;
    }
    X.m128i_i64[0] = __PAIR64__(v19.m128i_u32[0], v18.m128i_u32[0]);
    v14 = v18;
    v16 = v19;
    X.m128i_i32[2] = v10.m128_i32[0];
    v13 = (__m128i)v10;
  }
  X.m128i_i32[3] = v15.m128i_i32[0];
  if ( *(float *)v13.m128i_i32 <= *(float *)v14.m128i_i32 || *(float *)v15.m128i_i32 <= *(float *)v16.m128i_i32 )
    goto LABEL_62;
  if ( *((_DWORD *)this + 434) == *((_DWORD *)this + 435)
    && (v39 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)this + 1728),
        v39 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v39);
  }
  else
  {
    *(__m128i *)(*((_QWORD *)this + 216) + 16LL * *((unsigned int *)this + 434)) = X;
    v24 = *((_DWORD *)this + 437);
    if ( v24 <= ++*((_DWORD *)this + 434) )
      v24 = *((_DWORD *)this + 434);
    *((_DWORD *)this + 437) = v24;
  }
  *((_BYTE *)a3 + 24) = 1;
  if ( (*(float *)v14.m128i_i32 > -3.4028235e38 || *(float *)v13.m128i_i32 < 3.4028235e38)
    && (*(float *)v16.m128i_i32 > -3.4028235e38 || *(float *)v15.m128i_i32 < 3.4028235e38) )
  {
    v25 = (float)(*(float *)v15.m128i_i32 - *(float *)v16.m128i_i32)
        * (float)(*(float *)v13.m128i_i32 - *(float *)v14.m128i_i32);
    if ( v25 >= 1.0 )
    {
      *a4 = v25;
      if ( (_mm_cvtsi128_si32(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v10.m128_f32[0] = (float)(int)*(float *)v14.m128i_i32 - *(float *)v14.m128i_i32;
        v37.m128_f32[0] = FLOAT_N0_5;
        v10 = _mm_cmple_ss(v10, v37);
        v26 = (int)*(float *)v14.m128i_i32 - _mm_cvtsi128_si32((__m128i)v10);
      }
      else
      {
        v40 = *(float *)v14.m128i_i32 + 6291456.25;
        v26 = (int)(LODWORD(v40) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v14.m128i_i32 - (float)v26) & _xmm) > 0.00390625 )
      {
        if ( *(float *)v14.m128i_i32 < -2147483600.0 )
        {
          v26 = 0x80000000;
        }
        else if ( *(float *)v14.m128i_i32 >= 2147483600.0 )
        {
          v26 = 0x7FFFFFFF;
        }
        else
        {
          v26 = (int)floorf_0(*(float *)v14.m128i_i32);
        }
      }
      if ( (_mm_cvtsi128_si32(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v10.m128_f32[0] = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
        v27 = (int)*(float *)v16.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v10, (__m128)LODWORD(FLOAT_N0_5)));
      }
      else
      {
        v41 = *(float *)v16.m128i_i32 + 6291456.25;
        v27 = (int)(LODWORD(v41) << 10) >> 11;
      }
      v28 = (__m128)v16;
      v28.m128_f32[0] = *(float *)v16.m128i_i32 - (float)v27;
      v29 = _mm_and_ps(v28, (__m128)(unsigned int)_xmm);
      if ( v29.m128_f32[0] > 0.00390625 )
      {
        if ( *(float *)v16.m128i_i32 < -2147483600.0 )
        {
          v27 = 0x80000000;
        }
        else if ( *(float *)v16.m128i_i32 >= 2147483600.0 )
        {
          v27 = 0x7FFFFFFF;
        }
        else
        {
          v27 = (int)floorf_0(*(float *)v16.m128i_i32);
        }
      }
      if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v29.m128_f32[0] = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
        v30 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v29, (__m128)LODWORD(FLOAT_N0_5)));
      }
      else
      {
        v42 = *(float *)v13.m128i_i32 + 6291456.25;
        v30 = (int)(LODWORD(v42) << 10) >> 11;
      }
      v31 = (__m128)v13;
      v31.m128_f32[0] = *(float *)v13.m128i_i32 - (float)v30;
      v32 = _mm_and_ps(v31, (__m128)(unsigned int)_xmm);
      if ( v32.m128_f32[0] > 0.00390625 )
      {
        if ( *(float *)v13.m128i_i32 < -2147483600.0 )
        {
          v30 = 0x80000000;
        }
        else if ( *(float *)v13.m128i_i32 >= 2147483600.0 )
        {
          v30 = 0x7FFFFFFF;
        }
        else
        {
          v30 = (int)ceilf_0(*(float *)v13.m128i_i32);
        }
      }
      if ( (_mm_cvtsi128_si32(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v32.m128_f32[0] = (float)(int)*(float *)v15.m128i_i32 - *(float *)v15.m128i_i32;
        v38.m128_f32[0] = FLOAT_N0_5;
        v33 = (int)*(float *)v15.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v32, v38));
      }
      else
      {
        v43 = *(float *)v15.m128i_i32 + 6291456.25;
        v33 = (int)(LODWORD(v43) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v15.m128i_i32 - (float)v33) & _xmm) > 0.00390625 )
      {
        if ( *(float *)v15.m128i_i32 < -2147483600.0 )
        {
          v33 = 0x80000000;
        }
        else if ( *(float *)v15.m128i_i32 >= 2147483600.0 )
        {
          v33 = 0x7FFFFFFF;
        }
        else
        {
          v33 = (int)ceilf_0(*(float *)v15.m128i_i32);
        }
      }
      v46 = v47;
      if ( v26 < v30 && v27 < v33 )
      {
        v49[0] = v33;
        v34 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 57);
        v47[0] = 2;
        v47[1] = v26;
        v48[1] = v35 + 116 - (unsigned int)v48;
        v47[2] = v30;
        v48[0] = v27;
        v49[1] = v35 + 116 - (unsigned int)v49 + 8;
        v49[2] = v26;
        v49[3] = v30;
        if ( *(_DWORD *)v34 )
          return FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)v47, v34);
      }
      return 0;
    }
LABEL_62:
    *a4 = 0.0;
    return 0;
  }
  *a4 = 3.4028235e38;
  return 1;
}
