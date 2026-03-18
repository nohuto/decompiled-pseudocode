/*
 * XREFs of ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800081EC (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180008780 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BBE4 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000BEF4 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180054610 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180096EA4 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18009C400 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B7830 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010807C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@AEBA_NXZ @ 0x180108540 (-IsDirtyCollectionEnabled@SubTreeContext@CPreComputeContext@@AEBA_NXZ.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801951A0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1801D9D60 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x180209DF0 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180248DB0 (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::ProcessPostSubgraphBackdropInput(
        CPreComputeContext *this,
        struct CVisual *a2,
        unsigned __int8 a3)
{
  int v3; // eax
  char v4; // si
  char v5; // r12
  unsigned __int8 v6; // di
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __m128 v13; // xmm6
  int v14; // eax
  void *v15; // rcx
  __int64 v16; // rax
  char *v17; // rdx
  int v18; // eax
  _OWORD *v19; // rcx
  __int128 v20; // xmm7
  bool v21; // cc
  float top; // xmm9_4
  float v23; // xmm3_4
  float right; // xmm8_4
  float v25; // xmm4_4
  float bottom; // xmm1_4
  float v27; // xmm10_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  const struct CVisualTree *v31; // r14
  unsigned int *j; // rdx
  _DWORD *v33; // r8
  __int64 (__fastcall *v34)(); // r9
  struct CVisual *v35; // rbx
  float v36; // xmm8_4
  struct CVisual *v37; // rdi
  char v38; // al
  float v39; // xmm6_4
  struct CVisual *v40; // rcx
  float v41; // xmm2_4
  __int64 v42; // rax
  float v43; // xmm1_4
  float v44; // xmm0_4
  struct _LIST_ENTRY **p_Blink; // rax
  CCachedVisualImage **v46; // rbx
  CCachedVisualImage **v47; // rdi
  struct _LIST_ENTRY *v48; // rbx
  struct _LIST_ENTRY **v49; // rdi
  struct _LIST_ENTRY *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rbx
  __int64 v53; // rsi
  struct _LIST_ENTRY *v54; // rdi
  struct _LIST_ENTRY **v55; // r14
  struct _LIST_ENTRY *v56; // rdi
  struct _LIST_ENTRY *v57; // r14
  struct CBackdropVisualImage *v58; // rbx
  unsigned int v59; // edi
  __int64 v61; // rax
  unsigned int i; // ecx
  float **v63; // rsi
  float *v64; // rsi
  __int64 (__fastcall *v65)(); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v67; // r10
  struct _LIST_ENTRY *m; // rcx
  bool v69; // al
  struct D2D_RECT_F *v70; // rcx
  __m128 v71; // xmm6
  __int64 v72; // rax
  CVisual *v73; // rsi
  const struct CVisualTree *v74; // r14
  struct CTreeData *v75; // rdi
  struct CBackdropVisualImage **k; // rbx
  __int64 v77; // rax
  _QWORD *v78; // r8
  __int64 v79; // rax
  struct CVisualTree *VisualTreeNoRef; // rax
  DwmDbg::Backdrops *v81; // rcx
  const char **DebugString; // rax
  DwmDbg::DbgString *v83; // rdi
  DwmDbg::DbgString *v84; // rax
  struct _LIST_ENTRY *v85; // rax
  struct _LIST_ENTRY *n; // rcx
  __int64 v87; // rbx
  struct _LIST_ENTRY *v88; // rax
  struct _LIST_ENTRY *ii; // rcx
  char v90; // al
  CTreeDirty *v91; // r10
  int v92; // eax
  int v93; // edi
  const char *v94; // rbx
  DwmDbg::DbgString *v95; // rax
  CVisualTreePath *v96; // rbx
  DwmDbg::DbgString *v97; // rax
  int v98; // [rsp+28h] [rbp-E0h]
  int v99; // [rsp+28h] [rbp-E0h]
  int v100; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v101; // [rsp+38h] [rbp-D0h]
  __int16 v102; // [rsp+39h] [rbp-CFh] BYREF
  struct CBackdropVisualImage *v103; // [rsp+40h] [rbp-C8h] BYREF
  void *v104; // [rsp+48h] [rbp-C0h] BYREF
  char *v105; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_RECT_F v106; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v107; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v108; // [rsp+78h] [rbp-90h] BYREF
  __int64 v109; // [rsp+88h] [rbp-80h]
  _BYTE *v110; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v111; // [rsp+98h] [rbp-70h]
  __int64 *v112; // [rsp+A0h] [rbp-68h]
  _BYTE v113[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v114; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v3 = *((_DWORD *)this + 354);
  v4 = 0;
  v5 = 0;
  v102 = a3;
  v101 = 0;
  v6 = a3;
  if ( !v3 )
    return 0LL;
  v9 = v3 - 1;
  v109 = 0LL;
  *((_DWORD *)this + 354) = v9;
  v10 = *(_QWORD *)this;
  v11 = v9;
  v12 = *((_QWORD *)this + 176);
  v108 = 0LL;
  v13 = *(__m128 *)(v12 + 16 * v11);
  v14 = *(_DWORD *)(v10 + 280);
  v106 = (struct D2D_RECT_F)v13;
  if ( v14 )
    v15 = (void *)(*(_QWORD *)(v10 + 272) + 68LL * (unsigned int)(v14 - 1));
  else
    v15 = &CMILMatrix::Identity;
  v16 = *(_QWORD *)(v10 + 328);
  if ( a2 == *(struct CVisual **)(v16 + 72) )
    v17 = (char *)(v16 + 80);
  else
    v17 = (char *)a2 + 152;
  CMILMatrix::Transform3DBoundsHelper<1>(v15, v17, &v108);
  v18 = *(_DWORD *)(v10 + 304);
  if ( v18 )
  {
    v19 = (_OWORD *)(*(_QWORD *)(v10 + 296) + 16LL * (unsigned int)(v18 - 1));
    v20 = *v19;
    v21 = v108.left <= COERCE_FLOAT(*v19);
    v107 = (struct D2D_RECT_F)*v19;
    if ( !v21 )
      *(FLOAT *)&v20 = v108.left;
    top = v107.top;
    v23 = v107.top;
    if ( v108.top > v107.top )
    {
      top = v108.top;
      v23 = v108.top;
    }
    right = v107.right;
    v25 = v107.right;
    if ( v107.right > v108.right )
    {
      right = v108.right;
      v25 = v108.right;
    }
    bottom = v107.bottom;
    v27 = v107.bottom;
    if ( v107.bottom > v108.bottom )
    {
      bottom = v108.bottom;
      v27 = v108.bottom;
    }
    if ( v25 <= *(float *)&v20 || bottom <= v23 )
    {
      right = 0.0;
      top = 0.0;
      LODWORD(v20) = 0;
      v27 = 0.0;
    }
  }
  else
  {
    *(FLOAT *)&v20 = v108.left;
    top = v108.top;
    right = v108.right;
    v27 = v108.bottom;
  }
  v107.bottom = v27;
  v28 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
  v107.right = right;
  v107.top = top;
  LODWORD(v107.left) = v20;
  if ( v28 <= v13.m128_f32[0] )
    goto LABEL_25;
  v29 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0];
  v30 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  if ( v29 <= v30 )
    goto LABEL_25;
  if ( right <= *(float *)&v20 )
    goto LABEL_52;
  if ( v27 <= top
    || v28 <= *(float *)&v20
    || right <= v13.m128_f32[0]
    || v29 <= top
    || v27 <= v30
    || (v4 = 1,
        v101 = 1,
        !CPreComputeContext::SubTreeContext::IsDirtyCollectionEnabled((CPreComputeContext::SubTreeContext *)v10))
    || IsEmpty(&v107) )
  {
LABEL_25:
    if ( right > *(float *)&v20 && v27 > top )
    {
      if ( v4 || v6 )
      {
        v31 = *(const struct CVisualTree **)(v10 + 328);
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v31 + 184LL))(v31) )
        {
          v35 = a2;
          v36 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          v37 = a2;
          while ( 1 )
          {
            v34 = CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType;
            if ( !v35 )
              break;
            v38 = *((_BYTE *)v35 + 106);
            if ( (v38 & 0x40) == 0 || (v38 & 1) != 0 )
              break;
            v33 = (_DWORD *)*((_QWORD *)v35 + 29);
            v39 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            if ( (*v33 & 0x800000) != 0 )
            {
              v61 = (unsigned int)v33[1];
              j = v33 + 2;
              for ( i = 0; i < (unsigned int)v61; j = (unsigned int *)((char *)j + 1) )
              {
                if ( *(_BYTE *)j == 9 )
                  break;
                ++i;
              }
              if ( i >= (unsigned int)v61 )
              {
                v63 = 0LL;
              }
              else
              {
                j = (unsigned int *)(v61 + 15);
                v63 = (float **)((char *)v33 + 8LL * i - (((_BYTE)v61 + 15) & 7) + v61 + 15);
              }
              v64 = *v63;
              v65 = *(__int64 (__fastcall **)())(*(_QWORD *)v64 + 64LL);
              if ( v65 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
                || ((char *)v65 != (char *)CMatrixTransform3D::IsOfType
                  ? (v90 = ((__int64 (__fastcall *)(float *, __int64, _DWORD *, __int64 (__fastcall *)()))v65)(
                             v64,
                             57LL,
                             v33,
                             CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType))
                  : (v90 = CMatrixTransform3D::IsOfType(v64, 57LL)),
                    v90) )
              {
                v39 = v64[20];
              }
            }
            v40 = (struct CVisual *)*((_QWORD *)v31 + 9);
            v41 = fminf(1.0, fmaxf(v39, 0.0));
            if ( v35 == v40 )
            {
              v44 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
            }
            else
            {
              v42 = *((_QWORD *)v35 + 28);
              if ( (*(_DWORD *)(v42 + 4) & 0x8000000) != 0 )
              {
                v33 = (_DWORD *)*(unsigned int *)(v42 + 12);
                for ( j = (unsigned int *)(v42 + 12); (*j & 0x7F000000) != 0x5000000; v33 = (_DWORD *)*j )
                  j = (unsigned int *)((char *)j + ((unsigned int)v33 & 0xFFFFFF) + 4);
                v43 = *((float *)j + 1);
              }
              else
              {
                v43 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              }
              v44 = fminf(1.0, fmaxf(v43, 0.0));
            }
            v36 = v36 * (float)(v44 * v41);
            if ( COERCE_FLOAT(LODWORD(v36) & _xmm) < 0.0000011920929 )
              break;
            if ( v35 == v40 )
            {
              v69 = CBackdropVisualImage::RequireClippedBounds(&v108.left);
              v70 = &v108;
              if ( v69 )
                v70 = &v107;
              v71 = *(__m128 *)v70;
              v108 = *v70;
              if ( dword_180404D50 )
              {
                v94 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v104, &v106);
                v95 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v103, &v108);
                DwmDbg::DbgString::DbgString(
                  &v105,
                  "fNodeHasDirtyBackdrop=%d, boundsDirty=%d, bviBounds=[%s], dirtyRegionBehindBackdrop=[%s]",
                  v101,
                  (unsigned __int8)v102,
                  *(const char **)v95,
                  v94);
                v96 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)&v110, v31);
                v97 = DwmDbg::DbgString::DbgString((char **)&v107, "PreCompute-BackdropInputBVIUpdate");
                DwmDbg::Backdrops::LogTreeWalkEtwEvent(v97, a2, v31, v96);
                detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v110);
                if ( v103 )
                  operator delete(v103);
                if ( v104 )
                  operator delete(v104);
              }
              if ( _mm_shuffle_ps(v71, v71, 170).m128_f32[0] > v71.m128_f32[0]
                && _mm_shuffle_ps(v71, v71, 255).m128_f32[0] > _mm_shuffle_ps(v71, v71, 85).m128_f32[0] )
              {
                v72 = *(_QWORD *)(*(_QWORD *)this + 328LL);
                v110 = v113;
                *(_QWORD *)&v107.left = 0LL;
                v111 = v113;
                v112 = &v114;
                *(_QWORD *)&v107.right = v72;
                detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
                  (detail::liberal_expansion_policy *)&v110,
                  &v107);
                v73 = *(CVisual **)(*((_QWORD *)v110 + 1) + 72LL);
                v74 = (const struct CVisualTree *)*((_QWORD *)v111 - 1);
                v75 = CVisual::EnsureTreeData(a2, v74);
                for ( k = (struct CBackdropVisualImage **)*((_QWORD *)v75 + 18); ; ++k )
                {
                  if ( k == *((struct CBackdropVisualImage ***)v75 + 19) )
                  {
                    v103 = 0LL;
                    VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v73);
                    goto LABEL_110;
                  }
                  v77 = *((_QWORD *)*k + 259);
                  if ( *((_QWORD *)*k + 260) - v77 == v111 - v110 )
                    break;
LABEL_144:
                  ;
                }
                v78 = v110;
                v79 = v77 - (_QWORD)v110;
                while ( (_QWORD *)((char *)v78 + v79) != *((_QWORD **)*k + 260) )
                {
                  if ( *(_QWORD *)((char *)v78 + v79) != *v78 || *(_QWORD *)((char *)v78 + v79 + 8) != v78[1] )
                    goto LABEL_144;
                  v78 += 2;
                }
                *((_QWORD *)*k + 279) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 31) + 24LL) + 888LL);
                v58 = *k;
                if ( v58 )
                {
                  CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)v58 + 8));
                  goto LABEL_76;
                }
                VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v73);
                v103 = 0LL;
LABEL_110:
                CBackdropVisualImage::Create(
                  g_pComposition,
                  a2,
                  (const struct CVisualTreePath *)&v110,
                  VisualTreeNoRef == v74,
                  &v103);
                v58 = v103;
                CTreeData::SetBackdropVisualImage(v75, (const struct CVisualTreePath *)&v110, v103);
                if ( DwmDbg::Backdrops::IsEtwEnabled(v81) )
                {
                  DebugString = (const char **)CVisualTreePath::GetDebugString(&v110, &v104);
                  v83 = DwmDbg::DbgString::DbgString((char **)&v107, "pBVI=0x%p, bviPath=[%s]", v58, *DebugString);
                  v84 = DwmDbg::DbgString::DbgString(&v105, "Visual-CreatedNewBVI");
                  DwmDbg::Backdrops::LogBrushEtwEvent(v84, a2, v83);
                  if ( v104 )
                    operator delete(v104);
                }
LABEL_76:
                v59 = CBackdropVisualImage::ValidateRootAndSourceRectangle(
                        v58,
                        (__int64)v73,
                        &v108.left,
                        v101,
                        (char *)&v102 + 1);
                if ( v58 )
                  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v58);
                if ( (v59 & 0x80000000) != 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6F7,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                    (const char *)v59,
                    v99);
                  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v110);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x577,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                    (const char *)v59,
                    v100);
                  return v59;
                }
                detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v110);
                v5 = HIBYTE(v102);
              }
              if ( v5 )
                goto LABEL_57;
              return 0LL;
            }
            if ( v37 )
            {
              v37 = (struct CVisual *)*((_QWORD *)v37 + 11);
              if ( v37 )
              {
                if ( v35 == v37 )
                  break;
                v37 = (struct CVisual *)*((_QWORD *)v37 + 11);
                if ( v35 == v37 )
                  break;
              }
            }
            v35 = (struct CVisual *)*((_QWORD *)v35 + 11);
          }
        }
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, unsigned int *, _DWORD *, __int64 (__fastcall *)()))(*(_QWORD *)v31 + 184LL))(
               v31,
               j,
               v33,
               v34) )
        {
          p_Blink = (struct _LIST_ENTRY **)((char *)a2 + 328);
LABEL_42:
          if ( p_Blink )
          {
            v46 = (CCachedVisualImage **)p_Blink[18];
            v47 = (CCachedVisualImage **)p_Blink[19];
            while ( v46 != v47 )
              CCachedVisualImage::MarkAllTargetsDirty(*v46++);
          }
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(a2);
          v67 = TreeDataListHead;
          if ( TreeDataListHead )
          {
            for ( m = TreeDataListHead->Flink; m != v67; m = m->Flink )
            {
              p_Blink = &m[-22].Blink;
              if ( (const struct CVisualTree *)m[2].Flink == v31 )
                goto LABEL_42;
            }
          }
        }
LABEL_57:
        v52 = *(_QWORD *)this;
        v53 = *((_QWORD *)this + 1);
        while ( v52 != v53 )
        {
          v54 = *(struct _LIST_ENTRY **)(v52 + 328);
          if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v54->Flink[11].Blink)(v54) )
          {
            v55 = (struct _LIST_ENTRY **)((char *)a2 + 328);
LABEL_61:
            if ( v55 )
            {
              v56 = v55[2];
              v57 = v55[3];
              while ( v56 != v57 )
              {
                if ( !LODWORD(v56->Flink) && !HIDWORD(v56->Flink) )
                  CDrawListCache::Invalidate((CDrawListCache *)v56->Blink);
                ++v56;
              }
            }
          }
          else
          {
            v85 = CVisual::GetTreeDataListHead(a2);
            if ( v85 )
            {
              for ( n = v85->Flink; n != v85; n = n->Flink )
              {
                v55 = &n[-22].Blink;
                if ( n[2].Flink == v54 )
                  goto LABEL_61;
              }
            }
          }
          v52 += 352LL;
        }
      }
      return 0LL;
    }
LABEL_52:
    v48 = *(struct _LIST_ENTRY **)(v10 + 328);
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v48->Flink[11].Blink)(v48) )
    {
      v49 = (struct _LIST_ENTRY **)((char *)a2 + 328);
LABEL_54:
      if ( v49 )
      {
        v50 = v49[18];
        v51 = ((char *)v49[19] - (char *)v50) >> 3;
        if ( v51 )
        {
          v87 = 8 * v51;
          std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
            v50,
            (char *)v50 + v87);
          v49[19] = (struct _LIST_ENTRY *)((char *)v49[19] - v87);
        }
      }
    }
    else
    {
      v88 = CVisual::GetTreeDataListHead(a2);
      if ( v88 )
      {
        for ( ii = v88->Flink; ii != v88; ii = ii->Flink )
        {
          v49 = &ii[-22].Blink;
          if ( ii[2].Flink == v48 )
            goto LABEL_54;
        }
      }
    }
    goto LABEL_57;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 320) + 2324LL) )
    goto LABEL_135;
  if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v107.left) )
  {
    CTreeDirty::SetFullDirty(v91);
    goto LABEL_135;
  }
  v92 = CTreeDirty::_Add(v91);
  v93 = v92;
  if ( v92 >= 0 )
  {
LABEL_135:
    v93 = 0;
    goto LABEL_136;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF6,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
    (const char *)(unsigned int)v92,
    v98);
LABEL_136:
  if ( v93 >= 0 )
  {
    v6 = v102;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54F,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v93,
    v98);
  return (unsigned int)v93;
}
