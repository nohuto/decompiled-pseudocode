/*
 * XREFs of ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A920 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18013C510 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180243AE8 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18013E290 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18013E7B0 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E8F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3)
{
  struct CDrawingContext *v3; // r13
  CDrawListCache *v4; // r15
  __int64 *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  __int64 v22; // rsi
  __int64 v23; // rbx
  int v24; // eax
  float *v25; // rax
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  BOOL v30; // ecx
  BOOL v31; // eax
  bool v32; // zf
  _BYTE *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __m128 v37; // xmm4
  __m128 v38; // xmm6
  __m128 v39; // xmm12
  __int128 v40; // xmm0
  char v41; // al
  unsigned __int32 v42; // xmm9_4
  unsigned __int32 v43; // xmm13_4
  unsigned __int32 v44; // xmm10_4
  float v45; // xmm7_4
  unsigned __int32 v46; // xmm11_4
  float v47; // xmm5_4
  char v48; // al
  float v49; // xmm8_4
  float v50; // xmm0_4
  __int64 v51; // rax
  __int64 v52; // [rsp+20h] [rbp-E0h]
  __int128 v53; // [rsp+20h] [rbp-E0h]
  _DWORD v54[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+80h] [rbp-80h]
  void *retaddr; // [rsp+148h] [rbp+48h]
  char v59; // [rsp+160h] [rbp+60h]
  BOOL v60; // [rsp+168h] [rbp+68h]

  v3 = a2;
  v4 = this;
  if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 576LL) )
    *((_BYTE *)this + 85) = 1;
  v5 = (__int64 *)*((_QWORD *)a3 + 14);
  v59 = *((_BYTE *)a3 + 4488);
  v6 = (__int64)(*((_QWORD *)a3 + 15) - (_QWORD)v5) >> 3;
  v60 = *((_DWORD *)a2 + 61) != 0;
  if ( *((_BYTE *)a2 + 7936) )
    v52 = *(_QWORD *)(*((_QWORD *)a2 + 993) + 2600LL);
  else
    v52 = 0LL;
  if ( !v5 && (_DWORD)v6 )
  {
LABEL_65:
    `gsl::details::get_terminate_handler'::`2'::handler(this);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 5);
  v8 = (unsigned __int64)&v5[(unsigned int)v6];
  v9 = (char *)this + 40;
  v10 = v7 & 3;
  if ( v10 == 1 )
  {
    v11 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( (v7 & 3) != 0 )
    {
      v51 = v10 - 2;
      if ( !v51 )
      {
        v11 = 0LL;
        goto LABEL_8;
      }
      if ( v51 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v11 = (unsigned __int64)v9;
  }
LABEL_8:
  v12 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v9);
  v13 = v5;
  this = (CDrawListCache *)detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
                             (char *)v4 + 40,
                             (__int64)(v11 - v12) >> 3,
                             (unsigned int)v6);
  v14 = v5;
  while ( v14 != (__int64 *)v8 )
  {
    if ( !v5 || !v8 || v5 > v13 || (unsigned __int64)v13 >= v8 )
      goto LABEL_65;
    v15 = *v13++;
    *(_QWORD *)this = v15;
    v14 = v13;
    this = (CDrawListCache *)((char *)this + 8);
  }
  detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)v4 + 40);
  v16 = 0LL;
  if ( g_pComposition )
    v16 = *((_QWORD *)g_pComposition + 111);
  *((_QWORD *)v4 + 3) = v16;
  *((_QWORD *)v4 + 2) = v16;
  *((_DWORD *)v4 + 20) = v60;
  *((_QWORD *)v4 + 4) = v52;
  *((_BYTE *)v4 + 84) = v59;
  if ( (_DWORD)v6 )
  {
    v17 = (unsigned int)v6;
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    v53 = 0uLL;
    v22 = 0LL;
    *((_DWORD *)v4 + 18) = 0;
    *((_DWORD *)v4 + 19) = -1;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 + detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)v4 + 40));
      (**(void (__fastcall ***)(__int64))v23)(v23);
      v24 = *(_DWORD *)(v23 + 64);
      *((_DWORD *)v4 + 18) |= v24;
      *((_DWORD *)v4 + 19) &= v24;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23) != 2 )
      {
        v25 = *(float **)(v23 + 16);
        v26 = v25[14];
        v27 = v25[15];
        v28 = v25[16];
        v29 = v25[17];
        v30 = v19 <= v21 || v18 <= v20;
        v31 = v28 <= v26 || v29 <= v27;
        if ( v30 )
        {
          if ( v31 )
          {
            v18 = 0.0;
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
            v53 = 0uLL;
            goto LABEL_36;
          }
          *(float *)&v53 = v26;
          v21 = v26;
          *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(LODWORD(v28), LODWORD(v27));
          v20 = v27;
          v19 = v28;
        }
        else
        {
          if ( v31 )
            goto LABEL_36;
          if ( v21 > v26 )
          {
            *(float *)&v53 = v26;
            v21 = v26;
          }
          if ( v20 > v27 )
          {
            *((float *)&v53 + 1) = v27;
            v20 = v27;
          }
          if ( v28 > v19 )
          {
            *((float *)&v53 + 2) = v28;
            v19 = v28;
          }
          if ( v29 <= v18 )
            goto LABEL_36;
        }
        *((float *)&v53 + 3) = v29;
        v18 = v29;
      }
LABEL_36:
      v22 += 8LL;
      if ( !--v17 )
      {
        v32 = (*((_DWORD *)v4 + 18) & 0x400) == 0;
        v33 = (char *)v4 + 72;
        v3 = a2;
        *((_OWORD *)v4 + 3) = v53;
        if ( v32 )
          goto LABEL_38;
        ++dword_1803FA860;
        goto LABEL_39;
      }
    }
  }
  *((_DWORD *)v4 + 18) = 4;
  *((_OWORD *)v4 + 3) = 0LL;
  *((_DWORD *)v4 + 19) = 4;
  v33 = (char *)v4 + 72;
LABEL_38:
  ++dword_1803FA854;
LABEL_39:
  if ( (*v33 & 0x10) != 0 )
  {
    v34 = *((_DWORD *)v3 + 74);
    v56 = 0;
    if ( v34 )
    {
      v35 = (unsigned int)(v34 - 1);
      v36 = *((_QWORD *)v3 + 36);
      v37 = *(__m128 *)(68 * v35 + v36);
      v38 = *(__m128 *)(68 * v35 + v36 + 16);
      v39 = *(__m128 *)(68 * v35 + v36 + 48);
      v40 = *(_OWORD *)(68 * v35 + v36 + 32);
      v56 = *(_DWORD *)(68 * v35 + v36 + 64);
      v41 = BYTE1(v56);
      v42 = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
      v43 = _mm_shuffle_ps(v39, v39, 85).m128_u32[0];
      v44 = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
      LODWORD(v45) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
      v46 = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
      LODWORD(v47) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
      v55 = v40;
    }
    else
    {
      v37.m128_i32[0] = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v47 = 0.0;
      v46 = 0;
      v38.m128_i32[0] = 0;
      v45 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v44 = 0;
      v39.m128_i32[0] = 0;
      v43 = 0;
      v42 = (unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v41 = 41;
    }
    v48 = (char)(4 * v41) >> 6;
    if ( v48 > 0
      || v48 >= 0
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(v46 & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(v44 & _xmm) * 61440.0))
                              + COERCE_FLOAT(v42 & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v54[0] = v37.m128_i32[0];
      *(float *)&v54[1] = v47;
      v54[2] = v46;
      v54[3] = v38.m128_i32[0];
      *(float *)&v54[4] = v45;
      v54[5] = v44;
      v54[6] = v39.m128_i32[0];
      v54[7] = v43;
      LODWORD(v55) = v42;
      if ( !(unsigned __int8)Matrix3x3::Get2DScaleDimensionsWithPerspective(v54, (char *)v4 + 64, (char *)v4 + 68, 0LL) )
        *((_DWORD *)v4 + 18) |= 0x40u;
    }
    else
    {
      v49 = sqrtf_0((float)(v37.m128_f32[0] * v37.m128_f32[0]) + (float)(v47 * v47));
      v50 = sqrtf_0((float)(v38.m128_f32[0] * v38.m128_f32[0]) + (float)(v45 * v45));
      *((float *)v4 + 16) = v49;
      *((float *)v4 + 17) = v50;
    }
  }
}
