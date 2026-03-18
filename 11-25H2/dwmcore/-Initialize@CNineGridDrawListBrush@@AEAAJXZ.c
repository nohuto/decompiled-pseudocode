/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x1801258EC
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180126C54 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180129940 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180125680 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180125CBC (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180126910 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180126964 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180127920 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801E37D4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  const struct D2D_MATRIX_3X2_F *v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  float v9; // xmm8_4
  __m128 *v10; // rbx
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  D2DMatrixHelper *v14; // rcx
  float *v15; // r9
  __m128 v16; // xmm2
  float m11; // xmm6_4
  unsigned __int64 v18; // xmm12_8
  float m12; // xmm7_4
  bool v20; // cc
  int v21; // eax
  unsigned int v22; // r14d
  __int128 *v23; // rdi
  __int128 *v24; // rbx
  _OWORD *v25; // rax
  _BYTE *v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm0
  bool v29; // zf
  __int128 v30; // xmm0
  struct D2D_RECT_F v31; // xmm0
  __int128 v33; // xmm0
  __int64 v34; // rax
  float v35; // xmm7_4
  __m128 v36; // xmm12
  FLOAT v37; // xmm0_4
  FLOAT v38; // xmm2_4
  char v39; // [rsp+38h] [rbp-D0h]
  struct D2D_MATRIX_3X2_F v40; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v41; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD *v42; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v43; // [rsp+80h] [rbp-88h]
  __int64 *v44; // [rsp+88h] [rbp-80h]
  _BYTE v45[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-68h] BYREF

  v2 = *((_QWORD *)this + 9);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v2 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v2 + 24);
  v3 = *(_BYTE *)(v2 + 52);
  *((_BYTE *)this + 52) = v3;
  if ( v3 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)(v2 + 32);
    *((_DWORD *)this + 12) = *(_DWORD *)(v2 + 48);
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL);
  if ( v4 == CSurfaceDrawListBrush::IsOfType )
    v5 = CSurfaceDrawListBrush::IsOfType(v2, 2LL);
  else
    v5 = v4(v2, 2LL);
  v7 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    if ( *(_BYTE *)(v7 + 147) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v7 + 136);
    v8 = *(_BYTE *)(v7 + 147);
LABEL_9:
    *((_BYTE *)this + 64) = v8;
    goto LABEL_10;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
  {
    v34 = *((_QWORD *)this + 9);
    if ( *(_BYTE *)(v34 + 64) )
      *((_QWORD *)this + 7) = *(_QWORD *)(v34 + 56);
    v8 = *(_BYTE *)(v34 + 64);
    goto LABEL_9;
  }
LABEL_10:
  v9 = *((float *)this + 8);
  v10 = (__m128 *)((char *)this + 8);
  v11 = *((float *)this + 9);
  v12 = *((float *)this + 10);
  v13 = *((float *)this + 11);
  memset(&v40, 0, sizeof(v40));
  if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((CNineGridDrawListBrush *)((char *)this + 8), v6) )
  {
    v16 = *v10;
    LODWORD(m11) = v10->m128_i32[0] & _xmm;
    v18 = *((_QWORD *)this + 3);
    *(__m128 *)&v40.m[1][0] = *v10;
    if ( m11 >= 0.000081380211 || COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm) >= 0.000081380211 )
    {
      v40.m21 = -1.0;
      LODWORD(m12) = *((_DWORD *)this + 5) & _xmm;
      if ( v16.m128_f32[0] >= 0.0 )
        v40.m21 = 1.0;
      v20 = v40.dy >= 0.0;
      v40.dy = -1.0;
      if ( v20 )
        v40.dy = 1.0;
    }
    else
    {
      LODWORD(m11) = *((_DWORD *)this + 3) & _xmm;
      LODWORD(m12) = *((_DWORD *)this + 4) & _xmm;
      v40.m22 = -1.0;
      if ( _mm_shuffle_ps(v16, v16, 85).m128_f32[0] >= 0.0 )
        v40.m22 = 1.0;
      if ( v40.dx >= 0.0 )
        v40.dx = 1.0;
      else
        v40.dx = -1.0;
    }
  }
  else
  {
    D2DMatrixHelper::GetScaleDimensions(v14, &v40, &v40.m12, v15);
    m11 = v40.m11;
    m12 = v40.m12;
    v36 = (__m128)*((unsigned int *)this + 6);
    v37 = (float)(1.0 / v40.m11) * v10->m128_f32[0];
    v40.m22 = (float)(1.0 / v40.m11) * *((float *)this + 3);
    v40.m21 = v37;
    v38 = (float)(1.0 / v40.m12) * *((float *)this + 5);
    v40.dx = (float)(1.0 / v40.m12) * *((float *)this + 4);
    v18 = _mm_unpacklo_ps(v36, (__m128)*((unsigned int *)this + 7)).m128_u64[0];
    v40.dy = v38;
  }
  v39 = *((_BYTE *)this + 568);
  v41.left = v9 * m11;
  v41.top = v11 * m12;
  v41.right = v12 * m11;
  v41.bottom = v13 * m12;
  v21 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          (int)this + 32,
          &v41,
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v39);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x62u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v23 = (__int128 *)*((_QWORD *)this + 61);
    v24 = (__int128 *)*((_QWORD *)this + 60);
    v42 = v45;
    v43 = v45;
    v44 = &v46;
    v25 = (_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
                      (__int64 *)&v42,
                      0LL,
                      v23 - v24);
    while ( v24 != v23 )
    {
      v33 = *v24++;
      *v25++ = v33;
    }
    v26 = v43;
    v27 = (v43 - (_BYTE *)v42) >> 4;
    if ( v27 )
    {
      v28 = *v42;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v28;
    }
    v29 = *((_BYTE *)this + 64) == 0;
    v30 = *(_OWORD *)&v40.m[1][0];
    *((_BYTE *)this + 52) = 1;
    *(_OWORD *)((char *)this + 8) = v30;
    v31 = v41;
    *((_QWORD *)this + 3) = v18;
    *((struct D2D_RECT_F *)this + 2) = v31;
    if ( !v29 )
    {
      v35 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v35;
    }
    if ( v27 )
      v43 = &v26[-16 * v27];
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v42);
  }
  return v22;
}
