/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800081EC (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009D78 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18000ABF8 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC48 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1B0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000B350 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BBE4 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000CE1C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180054610 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B7830 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C3900 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x180209DF0 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180298534 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(
        __int64 a1,
        struct IRenderTargetBitmap *a2,
        bool *a3)
{
  bool v3; // r12
  CVisual *v6; // r15
  __int64 v7; // r14
  struct _LIST_ENTRY *v8; // rbx
  __int64 v9; // r8
  struct _LIST_ENTRY **p_Blink; // r11
  CBackdropVisualImage **i; // rdx
  CBackdropVisualImage *v12; // r10
  __int128 *v13; // rcx
  CBackdropVisualImage *v14; // rdi
  __int64 k; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  int WorldTransform; // eax
  unsigned int v19; // ebx
  char v20; // r13
  struct CTreeData *v21; // rdi
  struct CBackdropVisualImage **m; // rbx
  struct CBackdropVisualImage *v23; // r9
  __int128 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct CBackdropVisualImage *v27; // rbx
  int v28; // edi
  struct _LIST_ENTRY *v29; // rbx
  struct _LIST_ENTRY **v30; // r11
  struct _LIST_ENTRY *n; // rdx
  struct _LIST_ENTRY *Flink; // r10
  __int128 *v33; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v35; // r8
  struct _LIST_ENTRY *v36; // r14
  bool IsValid; // al
  float *v38; // rdi
  int v39; // xmm2_4
  unsigned int v40; // xmm3_4
  char v41; // al
  float v42; // xmm0_4
  int v43; // xmm2_4
  __int128 v44; // xmm1
  char v45; // r15
  _BYTE *v46; // rbx
  const struct RenderTargetInfo *v47; // rdx
  CBackdropVisualImage *v48; // rcx
  void *v49; // rbx
  void *v50; // rdi
  __int64 v51; // rsi
  const char *v52; // rdx
  __int64 v53; // rax
  struct CVisualTree *VisualTreeNoRef; // rax
  DwmDbg::Backdrops *v56; // rcx
  const char **DebugString; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v62; // rax
  struct _LIST_ENTRY *ii; // rcx
  const struct RenderTargetInfo *v64; // rax
  __int64 v65; // rbx
  const char *v66; // rdx
  __int64 v67; // rax
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  const struct RenderTargetInfo *v72; // rax
  __int64 v73; // rax
  int v74; // [rsp+28h] [rbp-F0h]
  int v75; // [rsp+28h] [rbp-F0h]
  __int64 v76; // [rsp+98h] [rbp-80h] BYREF
  struct IRenderTargetBitmap *v77; // [rsp+A0h] [rbp-78h] BYREF
  void *v78; // [rsp+A8h] [rbp-70h] BYREF
  void *v79; // [rsp+B0h] [rbp-68h] BYREF
  struct CBackdropVisualImage *v80; // [rsp+B8h] [rbp-60h] BYREF
  CVisual *v81; // [rsp+C0h] [rbp-58h] BYREF
  __m256i v82; // [rsp+C8h] [rbp-50h] BYREF
  __int128 v83; // [rsp+E8h] [rbp-30h]
  _BYTE v84[20]; // [rsp+F8h] [rbp-20h]
  __int128 v85; // [rsp+118h] [rbp+0h] BYREF
  __int128 v86; // [rsp+128h] [rbp+10h]
  __int128 v87; // [rsp+138h] [rbp+20h]
  __int128 v88; // [rsp+148h] [rbp+30h]
  int v89; // [rsp+158h] [rbp+40h]
  __int128 v90; // [rsp+168h] [rbp+50h]
  __int128 v91; // [rsp+178h] [rbp+60h]
  __int128 v92; // [rsp+190h] [rbp+78h] BYREF
  __int128 v93; // [rsp+1A0h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+178h]

  v3 = 0;
  v79 = a3;
  v77 = a2;
  LOBYTE(v76) = 0;
  if ( *(_BYTE *)(a1 + 7936) )
  {
    if ( *(_BYTE *)(a1 + 7937) )
      v6 = *(CVisual **)(a1 + 3216);
    else
      v6 = *(CVisual **)(a1 + 7952);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 7968);
  v8 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v7 + 8) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v8->Flink[11].Blink)(v8) )
  {
    p_Blink = (struct _LIST_ENTRY **)((char *)v6 + 328);
LABEL_6:
    if ( p_Blink )
    {
      for ( i = (CBackdropVisualImage **)p_Blink[18]; i != (CBackdropVisualImage **)p_Blink[19]; ++i )
      {
        v12 = *i;
        v13 = *(__int128 **)v7;
        v9 = *((_QWORD *)*i + 259);
        if ( *((_QWORD *)*i + 260) - v9 == *(_QWORD *)(v7 + 8) - *(_QWORD *)v7 )
        {
          v9 -= (__int64)v13;
          while ( (__int128 *)((char *)v13 + v9) != *((__int128 **)v12 + 260) )
          {
            if ( *(_QWORD *)((char *)v13 + v9) != *(_QWORD *)v13
              || *(_QWORD *)((char *)v13 + v9 + 8) != *((_QWORD *)v13 + 1) )
            {
              goto LABEL_101;
            }
            ++v13;
          }
          *((_QWORD *)v12 + 279) = p_Blink[31][1].Blink[55].Blink;
          v14 = *i;
          goto LABEL_16;
        }
LABEL_101:
        ;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v6);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        p_Blink = &j[-22].Blink;
        if ( j[2].Flink == v8 )
          goto LABEL_6;
      }
    }
  }
  v14 = 0LL;
LABEL_16:
  if ( *(_QWORD *)(a1 + 200) && v14 && CBackdropVisualImage::CanUseAsEffectInput(v14) )
  {
    if ( a3 )
    {
      v64 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
      v3 = !CBackdropVisualImage::HasValidRenderingRealization(v14, v64);
      *a3 = v3;
    }
    v65 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v78, word_180336D88);
    v66 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v3 )
      v66 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v67 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v79, v66);
    CBackdropVisualImage::LogEtwEvent(v14, v67, v65);
    return 0LL;
  }
  for ( k = a1; *(_QWORD *)(k + 208); k = *(_QWORD *)(k + 208) )
    ;
  v89 = 0;
  v16 = *(_QWORD *)(k + 7944);
  v17 = *(_QWORD *)(a1 + 7944);
  v85 = _xmm;
  v87 = _xmm;
  LOBYTE(v89) = -86;
  v86 = _xmm;
  v92 = DirectX::g_XMZero;
  *(_WORD *)((char *)&v89 + 1) = 41;
  v88 = *(__int128 *)&_xmm.r;
  WorldTransform = CVisual::GetWorldTransform(v6, (__int128 **)v7, v9, (__int64)&v85);
  v19 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform,
      v74);
    return v19;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(&v85, v77, &v92);
    if ( (unsigned __int8)CBackdropVisualImage::RequireClippedBounds(&v92) )
    {
      v93 = 0LL;
      CDrawingContext::CalcWorldSpaceClippedBounds(a1, v77, &v93);
      v68 = *(_OWORD *)(a1 + 96);
      v69 = *(_OWORD *)(a1 + 112);
      *(_DWORD *)&v84[16] = *(_DWORD *)(a1 + 160);
      *(_OWORD *)v82.m256i_i8 = v68;
      v70 = *(_OWORD *)(a1 + 128);
      *(_OWORD *)&v82.m256i_u64[2] = v69;
      v71 = *(_OWORD *)(a1 + 144);
      v83 = v70;
      *(_OWORD *)v84 = v71;
      if ( CMILMatrix::Invert((CMILMatrix *)&v82) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>(&v82, &v93, &v92);
      }
      else
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x692,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          (const char *)0x8007029CLL,
          v74);
        v92 = DirectX::g_XMZero;
      }
    }
    v20 = 1;
    if ( v17 == v16 )
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 184LL))(v16);
    v81 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 72LL);
    v78 = *(void **)(*(_QWORD *)(v7 + 8) - 8LL);
    v21 = CVisual::EnsureTreeData(v6, (const struct CVisualTree *)v78);
    for ( m = (struct CBackdropVisualImage **)*((_QWORD *)v21 + 18); m != *((struct CBackdropVisualImage ***)v21 + 19); ++m )
    {
      v23 = *m;
      v24 = *(__int128 **)v7;
      v25 = *((_QWORD *)*m + 259);
      if ( *((_QWORD *)*m + 260) - v25 == *(_QWORD *)(v7 + 8) - *(_QWORD *)v7 )
      {
        v26 = v25 - (_QWORD)v24;
        while ( (__int128 *)((char *)v24 + v26) != *((__int128 **)v23 + 260) )
        {
          if ( *(_QWORD *)((char *)v24 + v26) != *(_QWORD *)v24
            || *(_QWORD *)((char *)v24 + v26 + 8) != *((_QWORD *)v24 + 1) )
          {
            goto LABEL_102;
          }
          ++v24;
        }
        *((_QWORD *)v23 + 279) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 31) + 24LL) + 888LL);
        v27 = *m;
        if ( v27 )
        {
          CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)v27 + 8));
          goto LABEL_33;
        }
        break;
      }
LABEL_102:
      ;
    }
    v80 = 0LL;
    VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v81);
    CBackdropVisualImage::Create(g_pComposition, v6, (const struct CVisualTreePath *)v7, VisualTreeNoRef == v78, &v80);
    v27 = v80;
    CTreeData::SetBackdropVisualImage(v21, (const struct CVisualTreePath *)v7, v80);
    if ( DwmDbg::Backdrops::IsEtwEnabled(v56) )
    {
      DebugString = (const char **)CVisualTreePath::GetDebugString(v7, &v78);
      v58 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v80, "pBVI=0x%p, bviPath=[%s]", v27, *DebugString);
      v59 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v93, "Visual-CreatedNewBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v59, v6, v58);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v78);
    }
LABEL_33:
    v28 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v27, (__int64)&v76);
    if ( v27 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v27);
    if ( v28 >= 0 )
    {
      v29 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v7 + 8) - 8LL);
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v29->Flink[11].Blink)(v29) )
      {
        v30 = (struct _LIST_ENTRY **)((char *)v6 + 328);
LABEL_38:
        if ( v30 )
        {
          for ( n = v30[18]; n != v30[19]; n = (struct _LIST_ENTRY *)((char *)n + 8) )
          {
            Flink = n->Flink;
            v33 = *(__int128 **)v7;
            Blink = n->Flink[129].Blink;
            if ( (char *)n->Flink[130].Flink - (char *)Blink == *(_QWORD *)(v7 + 8) - *(_QWORD *)v7 )
            {
              v35 = (char *)Blink - (char *)v33;
              while ( (char *)v33 + v35 != (char *)Flink[130].Flink )
              {
                if ( *(_QWORD *)((char *)v33 + v35) != *(_QWORD *)v33
                  || *(_QWORD *)((char *)v33 + v35 + 8) != *((_QWORD *)v33 + 1) )
                {
                  goto LABEL_103;
                }
                ++v33;
              }
              Flink[139].Blink = v30[31][1].Blink[55].Blink;
              v36 = n->Flink;
              goto LABEL_48;
            }
LABEL_103:
            ;
          }
        }
      }
      else
      {
        v62 = CVisual::GetTreeDataListHead(v6);
        if ( v62 )
        {
          for ( ii = v62->Flink; ii != v62; ii = ii->Flink )
          {
            v30 = &ii[-22].Blink;
            if ( ii[2].Flink == v29 )
              goto LABEL_38;
          }
        }
      }
      v36 = 0LL;
LABEL_48:
      IsValid = CBackdropVisualImage::IsValid((CBackdropVisualImage *)v36);
      v38 = (float *)v77;
      if ( IsValid )
      {
        v39 = *(_DWORD *)v77;
        v40 = *((_DWORD *)v77 + 1);
        *(_QWORD *)&v84[12] = 0x29A83F800000LL;
        *(_OWORD *)v82.m256i_i8 = _xmm;
        *(_DWORD *)v84 = v39;
        *(_QWORD *)&v84[4] = v40;
        *(_OWORD *)&v82.m256i_u64[2] = _xmm;
        v83 = _xmm;
        CMILMatrix::Multiply((CMILMatrix *)&v82, (const struct CMILMatrix *)&v85);
        v41 = 0;
        LODWORD(v42) = COERCE_UNSIGNED_INT(*((float *)&v36[135].Blink + 1) - *(float *)v82.m256i_i32) & _xmm;
        v43 = *(_DWORD *)&v84[12];
        *(_QWORD *)&v90 = v82.m256i_i64[0];
        *((_QWORD *)&v90 + 1) = *(__int64 *)((char *)&v82.m256i_i64[1] + 4);
        *(_QWORD *)&v91 = __PAIR64__(v82.m256i_u32[7], v82.m256i_u32[5]);
        *((_QWORD *)&v91 + 1) = *(_QWORD *)v84;
        if ( v42 >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v36[136].Flink - *(float *)&v82.m256i_i32[1]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v36[136].Flink + 1) - *(float *)&v82.m256i_i32[3]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v36[136].Blink - *(float *)&v82.m256i_i32[4]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v36[136].Blink + 1) - *(float *)&v82.m256i_i32[5]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v36[137].Flink - *(float *)&v82.m256i_i32[7]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v36[137].Flink + 1) - *(float *)v84) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v36[137].Blink - *(float *)&v84[4]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v36[137].Blink + 1) - *(float *)&v84[12]) & _xmm) >= 0.000081380211 )
        {
          v44 = v91;
          *(_OWORD *)((char *)&v36[135].Blink + 4) = v90;
          *(_OWORD *)((char *)&v36[136].Blink + 4) = v44;
          HIDWORD(v36[137].Blink) = v43;
          CBackdropVisualImage::InvalidateAllBlurCaches((CBackdropVisualImage *)v36);
          v41 = 1;
        }
        v45 = v41 | v76;
        BYTE1(v36[140].Flink) = 1;
        if ( g_LockAndReadBackdropTexture )
        {
          v77 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v77);
          v72 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap((CCachedVisualImage *)v36, v72, &v77) >= 0 )
          {
            v73 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v77 + 144LL))(v77);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 112LL))(v73, (a1 + 24) & -(__int64)(a1 != 0));
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v77);
        }
      }
      else
      {
        v45 = v76;
      }
      v46 = v79;
      if ( v79 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
        if ( CBackdropVisualImage::IsValid((CBackdropVisualImage *)v36)
          && !CBackdropVisualImage::RequiresRendering(v48, v47) )
        {
          v20 = 0;
        }
        v45 |= v20;
        *v46 = v45;
      }
      DwmDbg::DbgString::DbgString(
        (DwmDbg::DbgString *)&v78,
        "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
        *(float *)&v85,
        *((float *)&v85 + 1),
        *((float *)&v85 + 2),
        *((float *)&v85 + 3),
        *(float *)&v86,
        *((float *)&v86 + 1),
        *((float *)&v86 + 2),
        *((float *)&v86 + 3),
        *(float *)&v87,
        *((float *)&v87 + 1),
        *((float *)&v87 + 2),
        *((float *)&v87 + 3),
        *(float *)&v88,
        *((float *)&v88 + 1),
        *((float *)&v88 + 2),
        *((float *)&v88 + 3));
      DwmDbg::DbgString::DbgString(
        (DwmDbg::DbgString *)&v79,
        "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
        *v38,
        v38[1],
        v38[2],
        v38[3],
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v38[2] - *v38) & _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v38[3] - v38[1]) & _xmm));
      v49 = v78;
      v50 = v79;
      v51 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v93,
              "rcBackdropLocal=[%s], worldTransform=[%s]",
              (const char *)v79,
              (const char *)v78);
      v52 = "BVI-Validate-InvalidatedCache";
      if ( !v45 )
        v52 = "BVI-Validate-DidNotInvalidateCache";
      v53 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v81, v52);
      CBackdropVisualImage::LogEtwEvent(v36, v53, v51);
      if ( v50 )
        operator delete(v50);
      if ( v49 )
        operator delete(v49);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v28,
      v75);
    return (unsigned int)v28;
  }
}
