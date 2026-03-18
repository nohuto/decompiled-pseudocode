/*
 * XREFs of ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180007E90 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6F4 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AB78 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022A18 (-AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV-$TMilRect.c)
 *     ?ResetAllBackdropVisualImagesForVisualTree@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x180031F58 (-ResetAllBackdropVisualImagesForVisualTree@CVisual@@QEBAXPEBVCVisualTree@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18019CA20 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1801E1C9C (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z.c)
 *     ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x1801FFDC8 (-MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18024D0BC (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::ProcessPostSubgraphBackdropInput(
        CPreComputeContext *this,
        struct CVisual *a2,
        unsigned __int8 a3)
{
  int v3; // eax
  unsigned __int8 v4; // r13
  int v5; // esi
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128 v12; // xmm8
  int v13; // eax
  void *v14; // rcx
  __int64 v15; // rax
  float *v16; // rdx
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm12_4
  float v20; // xmm11_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  int v23; // eax
  unsigned int v24; // edi
  const struct CVisualTree *v26; // r12
  bool v27; // al
  __m128 *v28; // rcx
  __m128 v29; // xmm12
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  void *v33; // rbx
  void *v34; // rdi
  DwmDbg::DbgString *v35; // rsi
  DwmDbg::DbgString *v36; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v38; // rax
  int updated; // eax
  unsigned int v40; // ebx
  __int64 v41; // rbx
  __int64 v42; // rdi
  int v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 lpMem; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v45; // [rsp+60h] [rbp-A8h] BYREF
  char *v46; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v47; // [rsp+70h] [rbp-98h] BYREF
  __m128 v48; // [rsp+80h] [rbp-88h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h]
  _QWORD v50[3]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v51[32]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v3 = *((_DWORD *)this + 354);
  v4 = 0;
  v5 = a3;
  LOBYTE(v43[0]) = 0;
  if ( !v3 )
    return 0LL;
  v8 = v3 - 1;
  v49 = 0LL;
  *((_DWORD *)this + 354) = v8;
  v9 = *(_QWORD *)this;
  v10 = v8;
  v11 = *((_QWORD *)this + 176);
  v48 = 0LL;
  v12 = *(__m128 *)(v11 + 16 * v10);
  v13 = *(_DWORD *)(v9 + 280);
  if ( v13 )
    v14 = (void *)(*(_QWORD *)(v9 + 272) + 68LL * (unsigned int)(v13 - 1));
  else
    v14 = &CMILMatrix::Identity;
  v15 = *(_QWORD *)(v9 + 328);
  if ( a2 == *(struct CVisual **)(v15 + 72) )
    v16 = (float *)(v15 + 80);
  else
    v16 = (float *)((char *)a2 + 152);
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v14, v16, v48.m128_f32);
  CBaseClipStack::Clip(v9 + 296, &v47, v48.m128_f32);
  v17 = v47.m128_f32[3];
  v18 = v47.m128_f32[1];
  v19 = v47.m128_f32[2];
  v20 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  LODWORD(v21) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  LODWORD(v22) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  if ( v20 > v12.m128_f32[0] && v21 > v22 )
  {
    if ( v47.m128_f32[2] <= v47.m128_f32[0] )
    {
LABEL_38:
      CVisual::ResetAllBackdropVisualImagesForVisualTree(a2, *(const struct CVisualTree **)(v9 + 328));
LABEL_39:
      v41 = *(_QWORD *)this;
      v42 = *((_QWORD *)this + 1);
      while ( v41 != v42 )
      {
        CVisual::InvalidateDrawListCaches(a2, *(const struct CVisualTree **)(v41 + 328));
        v41 += 352LL;
      }
      return 0LL;
    }
    if ( v47.m128_f32[3] > v47.m128_f32[1]
      && v20 > v47.m128_f32[0]
      && v47.m128_f32[2] > v12.m128_f32[0]
      && v21 > v47.m128_f32[1]
      && v47.m128_f32[3] > v22 )
    {
      v4 = 1;
      if ( !*(_DWORD *)(v9 + 340) && !*(_BYTE *)(*(_QWORD *)(v9 + 320) + 2324LL) )
      {
        v23 = CPreComputeContext::SubTreeContext::AddWorldBoundsToDirtyRegion(
                v9,
                (__int64)a2,
                (const struct D2D_RECT_F *)&v47);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58C,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v23);
          return v24;
        }
      }
    }
  }
  if ( v19 <= v47.m128_f32[0] || v17 <= v18 )
    goto LABEL_38;
  if ( !v4 && !(_BYTE)v5 )
    return 0LL;
  v26 = *(const struct CVisualTree **)(v9 + 328);
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v26 + 184LL))(v26)
    || !CVisualTree::_IsInTree((__int64)v26, (__int64)a2, 2) )
  {
    CVisual::MarkAllBackdropVisualImagesDirty(a2, v26);
    goto LABEL_39;
  }
  v27 = CBackdropVisualImage::RequireClippedBounds(v48.m128_f32);
  v28 = &v48;
  if ( v27 )
    v28 = &v47;
  v29 = *v28;
  v48 = *v28;
  if ( dword_1803F8D50 )
  {
    DwmDbg::DbgString::DbgString(
      (char **)&v45,
      "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
      v12.m128_f32[0],
      v22,
      v20,
      v21,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v12.m128_f32[0]) & _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v22) & _xmm));
    v30 = _mm_shuffle_ps(v29, v29, 255).m128_f32[0];
    v31 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
    v32 = _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
    DwmDbg::DbgString::DbgString(
      (char **)&lpMem,
      "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
      v29.m128_f32[0],
      v31,
      v32,
      v30,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - v29.m128_f32[0]) & _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - v31) & _xmm));
    v33 = v45;
    v34 = (void *)lpMem;
    v35 = DwmDbg::DbgString::DbgString(
            &v46,
            "fNodeHasDirtyBackdrop=%d, boundsDirty=%d, bviBounds=[%s], dirtyRegionBehindBackdrop=[%s]",
            v4,
            v5,
            (const char *)lpMem,
            (const char *)v45);
    *(_QWORD *)&lpMem = 0LL;
    *((_QWORD *)&lpMem + 1) = v26;
    v50[0] = v51;
    v50[1] = v51;
    v50[2] = &v52;
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
      (detail::liberal_expansion_policy *)v50,
      &lpMem);
    v36 = DwmDbg::DbgString::DbgString((char **)&v47, "PreCompute-BackdropInputBVIUpdate");
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v36, a2, v26, v50, v35);
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v50);
    if ( v34 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v34);
    }
    if ( v33 )
    {
      v38 = GetProcessHeap();
      HeapFree(v38, 0, v33);
    }
  }
  updated = CPreComputeContext::UpdateBVIForVisual((__int64)this, a2, v48.m128_f32, v4, (__int64)v43);
  v40 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)updated);
    return v40;
  }
  if ( LOBYTE(v43[0]) )
    goto LABEL_39;
  return 0LL;
}
