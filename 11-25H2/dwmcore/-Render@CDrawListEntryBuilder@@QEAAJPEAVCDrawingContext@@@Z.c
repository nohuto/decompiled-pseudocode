/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DD2C (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800E0B50 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x180012090 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800125B0 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x180012608 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAAXXZ @ 0x1800D2540 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x180201170 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180237FAC (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18025B8F0 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(
        CDrawListEntryBuilder *this,
        struct CDrawingContext *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  __int64 v7; // r13
  bool v8; // zf
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  int v28; // eax
  float *v29; // rax
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  BOOL v34; // ecx
  BOOL v35; // eax
  __int128 v36; // xmm0
  CDrawListEntryBuilder *v37; // r13
  int v38; // ebx
  int v39; // eax
  __int64 v40; // r14
  int v41; // xmm6_4
  int v42; // eax
  bool v43; // si
  _OWORD *v44; // rax
  ClipPlaneIterator *v45; // rdi
  int v46; // eax
  int v47; // esi
  __int64 v48; // rdi
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  _QWORD *v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __m128 v67; // xmm3
  __m128 v68; // xmm6
  __m128 v69; // xmm11
  __int128 v70; // xmm0
  char v71; // al
  unsigned __int32 v72; // xmm5_4
  unsigned __int32 v73; // xmm13_4
  unsigned __int32 v74; // xmm9_4
  float v75; // xmm8_4
  unsigned __int32 v76; // xmm10_4
  float v77; // xmm4_4
  char v78; // al
  float v79; // xmm9_4
  float v80; // xmm0_4
  int updated; // eax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // eax
  unsigned int v86; // [rsp+20h] [rbp-E0h]
  __int128 v87; // [rsp+30h] [rbp-D0h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  _OWORD v89[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v90; // [rsp+70h] [rbp-90h]
  __int128 v91; // [rsp+80h] [rbp-80h]
  int v92; // [rsp+90h] [rbp-70h]
  _DWORD v93[10]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  __int64 v98; // [rsp+1B0h] [rbp+B0h] BYREF
  BOOL v99; // [rsp+1B8h] [rbp+B8h]

  v4 = 0LL;
  if ( !*((_QWORD *)this + 560) )
  {
    *((_QWORD *)this + 560) = 0LL;
    v98 = 0LL;
    v54 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc(this, a2, a3, a4);
    v58 = v54;
    if ( !v54 )
    {
      v47 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v98, v82, v83, v84);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7F9u, 0LL);
      v37 = this;
      goto LABEL_54;
    }
    *(_DWORD *)(v54 + 8) = 0;
    v59 = 0LL;
    *(_QWORD *)v54 = &CDrawListCache::`vftable';
    if ( g_pComposition )
      v59 = *((_QWORD *)g_pComposition + 111);
    *(_QWORD *)(v54 + 16) = v59;
    *(_QWORD *)(v54 + 24) = 0LL;
    *(_QWORD *)(v54 + 32) = 0LL;
    *(_QWORD *)(v54 + 40) = 2LL;
    *(_QWORD *)(v54 + 72) = 0LL;
    *(_WORD *)(v54 + 84) = 0;
    *(_BYTE *)(v54 + 86) = 1;
    if ( _InterlockedAdd((volatile signed __int32 *)(v54 + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v86);
    v98 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v98, v55, v56, v57);
    v98 = 0LL;
    *((_QWORD *)this + 560) = v58;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v98, v60, v61, v62);
  }
  v7 = *((_QWORD *)this + 560);
  if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 576LL) )
    *(_BYTE *)(v7 + 85) = 1;
  v8 = *((_DWORD *)a2 + 61) == 0;
  v9 = (__int64 *)*((_QWORD *)this + 14);
  v10 = *((_QWORD *)this + 15);
  LOBYTE(v98) = *((_BYTE *)this + 4488);
  v11 = (v10 - (__int64)v9) >> 3;
  v99 = !v8;
  v94 = v11;
  if ( *((_BYTE *)a2 + 7936) )
    v88 = *(_QWORD *)(*((_QWORD *)a2 + 993) + 2600LL);
  else
    v88 = 0LL;
  v12 = (unsigned int)v11;
  if ( !v9 && (_DWORD)v11 )
  {
LABEL_104:
    `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v11);
    __debugbreak();
  }
  v13 = (unsigned __int64)&v9[(unsigned int)v11];
  v14 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 40);
  v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 40);
  v16 = v9;
  v11 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
          v7 + 40,
          (v14 - v15) >> 3,
          v12);
  v17 = v9;
  while ( v17 != (__int64 *)v13 )
  {
    if ( !v9 || !v13 || v9 > v16 || (unsigned __int64)v16 >= v13 )
      goto LABEL_104;
    v18 = *v16++;
    *(_QWORD *)v11 = v18;
    v17 = v16;
    v11 += 8LL;
  }
  detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 40);
  v19 = 0LL;
  if ( g_pComposition )
    v19 = *((_QWORD *)g_pComposition + 111);
  *(_QWORD *)(v7 + 24) = v19;
  *(_QWORD *)(v7 + 16) = v19;
  *(_DWORD *)(v7 + 80) = v99;
  *(_QWORD *)(v7 + 32) = v88;
  *(_BYTE *)(v7 + 84) = v98;
  v20 = v94;
  if ( (_DWORD)v94 )
  {
    v21 = 0.0;
    *(_DWORD *)(v7 + 72) = 0;
    v22 = 0.0;
    v23 = 0.0;
    v24 = 0.0;
    v87 = 0uLL;
    v25 = 0LL;
    *(_DWORD *)(v7 + 76) = -1;
    v26 = v20;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v25 + detail::pointer_buffer_impl<CDrawListEntry *>::first(v7 + 40));
      (**(void (__fastcall ***)(__int64))v27)(v27);
      v28 = *(_DWORD *)(v27 + 64);
      *(_DWORD *)(v7 + 72) |= v28;
      *(_DWORD *)(v7 + 76) &= v28;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27) != 2 )
      {
        v29 = *(float **)(v27 + 16);
        v30 = v29[14];
        v31 = v29[15];
        v32 = v29[16];
        v33 = v29[17];
        v34 = v22 <= v24 || v21 <= v23;
        v35 = v32 <= v30 || v33 <= v31;
        if ( v34 )
        {
          if ( v35 )
          {
            v21 = 0.0;
            v22 = 0.0;
            v23 = 0.0;
            v24 = 0.0;
            v87 = 0uLL;
            goto LABEL_35;
          }
          *(float *)&v87 = v30;
          v24 = v30;
          *(_QWORD *)((char *)&v87 + 4) = __PAIR64__(LODWORD(v32), LODWORD(v31));
          v23 = v31;
          v22 = v32;
        }
        else
        {
          if ( v35 )
            goto LABEL_35;
          if ( v24 > v30 )
          {
            *(float *)&v87 = v30;
            v24 = v30;
          }
          if ( v23 > v31 )
          {
            *((float *)&v87 + 1) = v31;
            v23 = v31;
          }
          if ( v32 > v22 )
          {
            *((float *)&v87 + 2) = v32;
            v22 = v32;
          }
          if ( v33 <= v21 )
            goto LABEL_35;
        }
        *((float *)&v87 + 3) = v33;
        v21 = v33;
      }
LABEL_35:
      v25 += 8LL;
      if ( !--v26 )
      {
        v36 = v87;
        goto LABEL_37;
      }
    }
  }
  *(_DWORD *)(v7 + 72) = 4;
  v36 = 0LL;
  *(_DWORD *)(v7 + 76) = 4;
LABEL_37:
  v8 = (*(_DWORD *)(v7 + 72) & 0x400) == 0;
  *(_OWORD *)(v7 + 48) = v36;
  if ( v8 )
    ++dword_1804068B4;
  else
    ++dword_1804068C0;
  if ( (*(_BYTE *)(v7 + 72) & 0x10) != 0 )
  {
    v64 = *((_DWORD *)a2 + 74);
    v92 = 0;
    if ( v64 )
    {
      v65 = (unsigned int)(v64 - 1);
      v66 = *((_QWORD *)a2 + 36);
      v67 = *(__m128 *)(68 * v65 + v66);
      v68 = *(__m128 *)(68 * v65 + v66 + 16);
      v69 = *(__m128 *)(68 * v65 + v66 + 48);
      v70 = *(_OWORD *)(68 * v65 + v66 + 32);
      v92 = *(_DWORD *)(68 * v65 + v66 + 64);
      v71 = BYTE1(v92);
      v72 = _mm_shuffle_ps(v69, v69, 255).m128_u32[0];
      v73 = _mm_shuffle_ps(v69, v69, 85).m128_u32[0];
      v74 = _mm_shuffle_ps(v68, v68, 255).m128_u32[0];
      LODWORD(v75) = _mm_shuffle_ps(v68, v68, 85).m128_u32[0];
      v76 = _mm_shuffle_ps(v67, v67, 255).m128_u32[0];
      LODWORD(v77) = _mm_shuffle_ps(v67, v67, 85).m128_u32[0];
      v90 = v70;
    }
    else
    {
      v67.m128_i32[0] = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v77 = 0.0;
      v76 = 0;
      v68.m128_i32[0] = 0;
      v75 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v74 = 0;
      v69.m128_i32[0] = 0;
      v73 = 0;
      v72 = (unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v71 = 41;
    }
    v78 = (char)(4 * v71) >> 6;
    if ( v78 > 0
      || v78 >= 0
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(v76 & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(v74 & _xmm) * 61440.0))
                              + COERCE_FLOAT(v72 & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v93[0] = v67.m128_i32[0];
      *(float *)&v93[1] = v77;
      v93[2] = v76;
      v93[3] = v68.m128_i32[0];
      *(float *)&v93[4] = v75;
      v93[5] = v74;
      v93[6] = v69.m128_i32[0];
      v93[7] = v73;
      v93[8] = v72;
      if ( !(unsigned __int8)Matrix3x3::Get2DScaleDimensionsWithPerspective(v93, v7 + 64, v7 + 68, 0LL) )
        *(_DWORD *)(v7 + 72) |= 0x40u;
    }
    else
    {
      v79 = sqrtf_0((float)(v67.m128_f32[0] * v67.m128_f32[0]) + (float)(v77 * v77));
      v80 = sqrtf_0((float)(v68.m128_f32[0] * v68.m128_f32[0]) + (float)(v75 * v75));
      *(float *)(v7 + 64) = v79;
      *(float *)(v7 + 68) = v80;
    }
  }
  v37 = this;
  v38 = 0;
  v39 = *((_DWORD *)a2 + 792);
  v40 = *((_QWORD *)this + 560);
  if ( v39 )
    v41 = *(_DWORD *)(*((_QWORD *)a2 + 395) + 4LL * (unsigned int)(v39 - 1));
  else
    v41 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( COERCE_FLOAT(v41 & _xmm) >= 0.0000011920929 )
  {
    v42 = *((_DWORD *)a2 + 74);
    v43 = 0;
    if ( v42 )
      v44 = (_OWORD *)(*((_QWORD *)a2 + 36) + 68LL * (unsigned int)(v42 - 1));
    else
      v44 = &CMILMatrix::Identity;
    v89[0] = *v44;
    v89[1] = v44[1];
    v90 = v44[2];
    v91 = v44[3];
    v92 = *((_DWORD *)v44 + 16);
    if ( !*((_QWORD *)a2 + 413) )
    {
      v45 = (struct CDrawingContext *)((char *)a2 + 3312);
LABEL_47:
      if ( v43 )
        goto LABEL_94;
      while ( 1 )
      {
        v46 = CDrawListCache::Render(v40, a2, v89);
        v38 = v46;
        if ( v46 < 0 )
          break;
        if ( !v43 || !ClipPlaneIterator::HasMoreClipPlanes(v45) )
          goto LABEL_50;
LABEL_94:
        updated = ClipPlaneIterator::UpdateClippingPlanes(v45);
        v38 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3B8u, 0LL);
          goto LABEL_50;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x3BEu, 0LL);
      goto LABEL_50;
    }
    v85 = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(a2);
    v38 = v85;
    if ( v85 >= 0 )
    {
      v45 = (struct CDrawingContext *)((char *)a2 + 3312);
      v43 = *((_BYTE *)a2 + 3312) == 0;
      goto LABEL_47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0x3ACu, 0LL);
  }
LABEL_50:
  v47 = 0;
  if ( v38 != -2003304441 )
    v47 = v38;
  if ( v47 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x7FDu, 0LL);
LABEL_54:
  v48 = *((_QWORD *)v37 + 560);
  if ( v48 && *(_QWORD *)(v48 + 24) )
  {
    if ( (*(_DWORD *)(v48 + 72) & 0x400) != 0 )
      ++dword_1804068BC;
    else
      ++dword_1804068B0;
    v49 = (_QWORD *)(v48 + 40);
    *(_QWORD *)(v48 + 24) = 0LL;
    v50 = *(_QWORD *)(v48 + 40);
    v51 = v50 & 3;
    if ( v51 == 1 )
    {
      v49 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
      v52 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
      v4 = *(_QWORD *)((v50 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    }
    else if ( v51 == 2 )
    {
      v49 = 0LL;
      v52 = 0LL;
    }
    else
    {
      v52 = v48 + 40;
      if ( (v50 & 3) != 0 )
      {
        if ( (unsigned __int64)(v51 - 2) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      else
      {
        v4 = 1LL;
      }
    }
    v53 = (_QWORD *)(v52 + 8 * v4);
    while ( v49 != v53 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v49 + 8LL))(*v49);
      ++v49;
    }
    detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear(v48 + 40);
    *(_WORD *)(v48 + 84) = 0;
  }
  return (unsigned int)v47;
}
