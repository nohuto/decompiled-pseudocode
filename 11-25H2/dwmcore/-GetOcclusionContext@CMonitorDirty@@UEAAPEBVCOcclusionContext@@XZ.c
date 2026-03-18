/*
 * XREFs of ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x180053710
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18028FA90 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055430 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800825E0 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
const struct COcclusionContext *__fastcall CMonitorDirty::GetOcclusionContext(
        CMonitorDirty *this,
        __int64 a2,
        double a3)
{
  __int64 v4; // rax
  CGlobalComposition *v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rsi
  unsigned int *v10; // r14
  unsigned int *v11; // rsi
  __m128i v12; // xmm3
  int v13; // ebp
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128i v16; // xmm3
  int v17; // edi
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  __m128i v20; // xmm3
  int v21; // ebx
  __m128 v22; // xmm2
  __m128 v23; // xmm2
  __m128i v24; // xmm3
  int v25; // ecx
  __m128 v26; // xmm2
  __int64 v27; // rax
  int *v28; // r9
  __int64 v29; // rax
  int v30; // edx
  int *v31; // r8
  int v32; // r9d
  int *v33; // rdx
  unsigned __int64 i; // r10
  int v35; // eax
  char v36; // al
  const struct COcclusionContext *result; // rax
  bool v38; // sf
  _QWORD v39[2]; // [rsp+20h] [rbp-78h] BYREF
  float v40; // [rsp+A0h] [rbp+8h]
  float v41; // [rsp+A0h] [rbp+8h]
  float v42; // [rsp+A0h] [rbp+8h]
  float v43; // [rsp+A0h] [rbp+8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 290) + 56LL))(*((_QWORD *)this + 290));
  v5 = g_pComposition;
  v6 = 0LL;
  v7 = 0LL;
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 111);
  if ( *(_QWORD *)(v4 + 2672) == v7 )
    v8 = v4 + 2648;
  else
    v8 = 0LL;
  if ( !*((_BYTE *)this + 456) )
  {
    CMergedRectBase<8>::Optimize((char *)this + 16);
    v5 = g_pComposition;
  }
  v9 = *((unsigned int *)this + 4);
  v39[1] = (char *)this + 20;
  v39[0] = v9;
  if ( this == (CMonitorDirty *)-20LL && v9 )
  {
    ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v6, v7);
    __debugbreak();
  }
  v10 = (unsigned int *)((char *)this + 28);
  v11 = (unsigned int *)((char *)this + 16 * v9 + 20);
  while ( v10 - 2 != v11 )
  {
    v12 = (__m128i)*(v10 - 2);
    if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
      v13 = (int)*(float *)v12.m128i_i32
          - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v40 = *(float *)v12.m128i_i32 + 6291456.25;
      v13 = (int)(LODWORD(v40) << 10) >> 11;
    }
    v14 = (__m128)*(v10 - 2);
    v14.m128_f32[0] = *(float *)v12.m128i_i32 - (float)v13;
    v15 = _mm_and_ps(v14, (__m128)(unsigned int)_xmm);
    if ( v15.m128_f32[0] > 0.00390625 )
    {
      if ( *(float *)v12.m128i_i32 < -2147483600.0 )
      {
        v13 = 0x80000000;
      }
      else if ( *(float *)v12.m128i_i32 >= 2147483600.0 )
      {
        v13 = 0x7FFFFFFF;
      }
      else
      {
        v13 = (int)floorf_0(*(float *)v12.m128i_i32);
      }
    }
    v16 = (__m128i)*(v10 - 1);
    if ( (_mm_cvtsi128_si32(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v15.m128_f32[0] = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
      v17 = (int)*(float *)v16.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v15, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v41 = *(float *)v16.m128i_i32 + 6291456.25;
      v17 = (int)(LODWORD(v41) << 10) >> 11;
    }
    v18 = (__m128)*(v10 - 1);
    v18.m128_f32[0] = *(float *)v16.m128i_i32 - (float)v17;
    v19 = _mm_and_ps(v18, (__m128)(unsigned int)_xmm);
    if ( v19.m128_f32[0] > 0.00390625 )
    {
      if ( *(float *)v16.m128i_i32 < -2147483600.0 )
      {
        v17 = 0x80000000;
      }
      else if ( *(float *)v16.m128i_i32 >= 2147483600.0 )
      {
        v17 = 0x7FFFFFFF;
      }
      else
      {
        v17 = (int)floorf_0(*(float *)v16.m128i_i32);
      }
    }
    v20 = (__m128i)*v10;
    if ( (_mm_cvtsi128_si32(v20) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v19.m128_f32[0] = (float)(int)*(float *)v20.m128i_i32 - *(float *)v20.m128i_i32;
      v21 = (int)*(float *)v20.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v19, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v42 = *(float *)v20.m128i_i32 + 6291456.25;
      v21 = (int)(LODWORD(v42) << 10) >> 11;
    }
    v22 = (__m128)*v10;
    v22.m128_f32[0] = *(float *)v20.m128i_i32 - (float)v21;
    v23 = _mm_and_ps(v22, (__m128)(unsigned int)_xmm);
    if ( v23.m128_f32[0] > 0.00390625 )
      v21 = CFloatFPU::CeilingSat(*(float *)v20.m128i_i32);
    v24 = (__m128i)v10[1];
    if ( (_mm_cvtsi128_si32(v24) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v23.m128_f32[0] = (float)(int)*(float *)v24.m128i_i32 - *(float *)v24.m128i_i32;
      v25 = (int)*(float *)v24.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v23, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v43 = *(float *)v24.m128i_i32 + 6291456.25;
      v25 = (int)(LODWORD(v43) << 10) >> 11;
    }
    v26 = (__m128)v10[1];
    v26.m128_f32[0] = *(float *)v24.m128i_i32 - (float)v25;
    *(__m128 *)&a3 = _mm_and_ps(v26, (__m128)(unsigned int)_xmm);
    if ( *(float *)&a3 > 0.00390625 )
      v25 = CFloatFPU::CeilingSat(*(float *)v24.m128i_i32);
    v27 = 0LL;
    if ( v5 )
      v27 = *((_QWORD *)v5 + 111);
    if ( *(_QWORD *)(v8 + 24) != v27 )
      goto LABEL_54;
    v28 = *(int **)(v8 + 528);
    v29 = *v28;
    if ( !(_DWORD)v29 )
      goto LABEL_54;
    if ( v13 < v28[1] || v21 > v28[2] || (v30 = v28[3], v31 = v28 + 3, v17 < v30) || v25 > v28[2 * v29 + 1] )
    {
LABEL_52:
      v36 = 0;
    }
    else
    {
      while ( v25 > v30 )
      {
        if ( v17 < v31[2] )
        {
          v32 = v13;
          v33 = (int *)((char *)v31 + v31[1]);
          for ( i = (unsigned __int64)v31 + v31[3] + 8; (unsigned __int64)v33 < i; v32 = v35 )
          {
            if ( *v33 > v32 )
              break;
            v35 = v33[1];
            v33 += 2;
            if ( v35 <= v32 )
              v35 = v32;
          }
          if ( v32 < v21 )
            goto LABEL_52;
        }
        v30 = v31[2];
        v31 += 2;
      }
      v36 = 1;
    }
    if ( !v36 )
      goto LABEL_54;
    v10 += 4;
  }
  if ( v8 )
  {
    *((_BYTE *)this + 2313) = 0;
    return (const struct COcclusionContext *)v8;
  }
LABEL_54:
  v38 = (int)CTargetDirtyBase<8>::CalcOcclusion(this, v39) < 0;
  result = 0LL;
  if ( !v38 )
    return (CMonitorDirty *)((char *)this + 472);
  return result;
}
