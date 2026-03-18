/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009488 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18000A0E8 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6F4 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC78 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1E0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000B380 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000C27C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801B3B30 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18028D0C4 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(__int64 a1, void *a2, bool *a3)
{
  bool v3; // r14
  CVisual *v7; // rdi
  __int64 v8; // r15
  struct _LIST_ENTRY *v9; // rsi
  __int64 v10; // r8
  struct _LIST_ENTRY *v11; // r11
  CBackdropVisualImage **i; // rdx
  CBackdropVisualImage *v13; // r10
  __int128 *v14; // rcx
  CBackdropVisualImage *v15; // rsi
  __int64 k; // rax
  struct IRenderTargetBitmap *v17; // r14
  int WorldTransform; // esi
  char v19; // r12
  struct _LIST_ENTRY *v20; // rsi
  struct _LIST_ENTRY *v21; // r11
  struct _LIST_ENTRY *m; // rdx
  struct _LIST_ENTRY *Flink; // r10
  __int128 *v24; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v26; // r8
  struct _LIST_ENTRY *v27; // r14
  bool IsValid; // al
  float *v29; // rdi
  int v30; // xmm2_4
  unsigned int v31; // xmm3_4
  char v32; // al
  float v33; // xmm0_4
  int v34; // xmm2_4
  __int128 v35; // xmm1
  char v36; // r15
  const struct RenderTargetInfo *v37; // rdx
  CBackdropVisualImage *v38; // rcx
  void *v39; // rbx
  struct IRenderTargetBitmap *v40; // rdi
  __int64 v41; // rsi
  const char *v42; // rdx
  __int64 v43; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v47; // rax
  struct _LIST_ENTRY *n; // rcx
  const struct RenderTargetInfo *v49; // rax
  __int64 v50; // rbx
  const char *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  const struct RenderTargetInfo *v58; // rax
  __int64 v59; // rax
  int v60; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+98h] [rbp-80h] BYREF
  struct IRenderTargetBitmap *v62; // [rsp+A0h] [rbp-78h] BYREF
  void *v63[2]; // [rsp+A8h] [rbp-70h] BYREF
  __m256i v64; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v65; // [rsp+D8h] [rbp-40h]
  __int128 v66; // [rsp+E8h] [rbp-30h]
  int v67; // [rsp+F8h] [rbp-20h]
  __int128 v68; // [rsp+108h] [rbp-10h] BYREF
  __int128 v69; // [rsp+118h] [rbp+0h]
  __int128 v70; // [rsp+128h] [rbp+10h]
  __int128 v71; // [rsp+138h] [rbp+20h]
  int v72; // [rsp+148h] [rbp+30h]
  __int128 v73; // [rsp+158h] [rbp+40h]
  __int128 v74; // [rsp+168h] [rbp+50h]
  __int128 v75; // [rsp+180h] [rbp+68h] BYREF
  __int128 v76; // [rsp+190h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+168h]

  v3 = 0;
  v63[0] = a2;
  LOBYTE(v61) = 0;
  if ( *(_BYTE *)(a1 + 7936) )
  {
    if ( *(_BYTE *)(a1 + 7937) )
      v7 = *(CVisual **)(a1 + 3216);
    else
      v7 = *(CVisual **)(a1 + 7952);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 7968);
  v9 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v8 + 8) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v9->Flink[11].Blink)(v9) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)v7 + 328);
LABEL_6:
    if ( v11 )
    {
      for ( i = (CBackdropVisualImage **)v11[9].Flink; i != (CBackdropVisualImage **)v11[9].Blink; ++i )
      {
        v13 = *i;
        v14 = *(__int128 **)v8;
        v10 = *((_QWORD *)*i + 259);
        if ( *((_QWORD *)*i + 260) - v10 == *(_QWORD *)(v8 + 8) - *(_QWORD *)v8 )
        {
          v10 -= (__int64)v14;
          while ( (__int128 *)((char *)v14 + v10) != *((__int128 **)v13 + 260) )
          {
            if ( *(_QWORD *)((char *)v14 + v10) != *(_QWORD *)v14
              || *(_QWORD *)((char *)v14 + v10 + 8) != *((_QWORD *)v14 + 1) )
            {
              goto LABEL_88;
            }
            ++v14;
          }
          *((_QWORD *)v13 + 279) = v11[15].Blink[1].Blink[55].Blink;
          v15 = *i;
          goto LABEL_16;
        }
LABEL_88:
        ;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v7);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        v11 = j - 22;
        if ( j[2].Flink == v9 )
          goto LABEL_6;
      }
    }
  }
  v15 = 0LL;
LABEL_16:
  if ( *(_QWORD *)(a1 + 200) && v15 && CBackdropVisualImage::CanUseAsEffectInput(v15) )
  {
    if ( a3 )
    {
      v49 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
      v3 = !CBackdropVisualImage::HasValidRenderingRealization(v15, v49);
      *a3 = v3;
    }
    v50 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v63, word_18032AF78);
    v51 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v3 )
      v51 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v52 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v62, v51);
    CBackdropVisualImage::LogEtwEvent(v15, v52, v50);
    return 0LL;
  }
  for ( k = a1; *(_QWORD *)(k + 208); k = *(_QWORD *)(k + 208) )
    ;
  v17 = *(struct IRenderTargetBitmap **)(k + 7944);
  v72 = 0;
  v62 = *(struct IRenderTargetBitmap **)(a1 + 7944);
  v68 = _xmm;
  v70 = _xmm;
  *(_WORD *)((char *)&v72 + 1) = 41;
  v69 = _xmm;
  v75 = DirectX::g_XMZero;
  LOBYTE(v72) = -86;
  v71 = *(__int128 *)&_xmm.r;
  WorldTransform = CVisual::GetWorldTransform(v7, (__int128 **)v8, v10, (__int64)&v68);
  if ( WorldTransform < 0 )
  {
    v53 = 1662LL;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(&v68, a2, &v75);
    if ( (unsigned __int8)CBackdropVisualImage::RequireClippedBounds(&v75) )
    {
      v76 = 0LL;
      CDrawingContext::CalcWorldSpaceClippedBounds(a1, a2, &v76);
      v54 = *(_OWORD *)(a1 + 96);
      v55 = *(_OWORD *)(a1 + 112);
      v67 = *(_DWORD *)(a1 + 160);
      *(_OWORD *)v64.m256i_i8 = v54;
      v56 = *(_OWORD *)(a1 + 128);
      *(_OWORD *)&v64.m256i_u64[2] = v55;
      v57 = *(_OWORD *)(a1 + 144);
      v65 = v56;
      v66 = v57;
      if ( CMILMatrix::Invert((CMILMatrix *)&v64) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>(&v64, &v76, &v75);
      }
      else
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x692,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          (const char *)0x8007029CLL,
          v60);
        v75 = DirectX::g_XMZero;
      }
    }
    v19 = 1;
    if ( v62 == v17 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 184LL))(v17);
    WorldTransform = CVisual::CreateOrUpdateBVI(v7, (struct CVisualTreePath *)v8, (__int64)&v61);
    if ( WorldTransform >= 0 )
    {
      v20 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v8 + 8) - 8LL);
      if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v20->Flink[11].Blink)(v20) )
      {
        v21 = (struct _LIST_ENTRY *)((char *)v7 + 328);
LABEL_26:
        if ( v21 )
        {
          for ( m = v21[9].Flink; m != v21[9].Blink; m = (struct _LIST_ENTRY *)((char *)m + 8) )
          {
            Flink = m->Flink;
            v24 = *(__int128 **)v8;
            Blink = m->Flink[129].Blink;
            if ( (char *)m->Flink[130].Flink - (char *)Blink == *(_QWORD *)(v8 + 8) - *(_QWORD *)v8 )
            {
              v26 = (char *)Blink - (char *)v24;
              while ( (char *)v24 + v26 != (char *)Flink[130].Flink )
              {
                if ( *(_QWORD *)((char *)v24 + v26) != *(_QWORD *)v24
                  || *(_QWORD *)((char *)v24 + v26 + 8) != *((_QWORD *)v24 + 1) )
                {
                  goto LABEL_89;
                }
                ++v24;
              }
              Flink[139].Blink = v21[15].Blink[1].Blink[55].Blink;
              v27 = m->Flink;
              goto LABEL_36;
            }
LABEL_89:
            ;
          }
        }
      }
      else
      {
        v47 = CVisual::GetTreeDataListHead(v7);
        if ( v47 )
        {
          for ( n = v47->Flink; n != v47; n = n->Flink )
          {
            v21 = n - 22;
            if ( n[2].Flink == v20 )
              goto LABEL_26;
          }
        }
      }
      v27 = 0LL;
LABEL_36:
      IsValid = CBackdropVisualImage::IsValid((CBackdropVisualImage *)v27);
      v29 = (float *)v63[0];
      if ( IsValid )
      {
        v67 = 0;
        v30 = *(_DWORD *)v63[0];
        v31 = *((_DWORD *)v63[0] + 1);
        *(_OWORD *)v64.m256i_i8 = _xmm;
        LODWORD(v66) = v30;
        *(_QWORD *)((char *)&v66 + 4) = v31;
        *(_OWORD *)&v64.m256i_u64[2] = _xmm;
        v65 = _xmm;
        HIDWORD(v66) = 1065353216;
        LOWORD(v67) = 10664;
        CMILMatrix::Multiply((CMILMatrix *)&v64, (const struct CMILMatrix *)&v68);
        v32 = 0;
        LODWORD(v33) = COERCE_UNSIGNED_INT(*((float *)&v27[135].Blink + 1) - *(float *)v64.m256i_i32) & _xmm;
        v34 = HIDWORD(v66);
        *(_QWORD *)&v73 = v64.m256i_i64[0];
        *((_QWORD *)&v73 + 1) = *(__int64 *)((char *)&v64.m256i_i64[1] + 4);
        *(_QWORD *)&v74 = __PAIR64__(v64.m256i_u32[7], v64.m256i_u32[5]);
        *((_QWORD *)&v74 + 1) = v66;
        if ( v33 >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v27[136].Flink - *(float *)&v64.m256i_i32[1]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v27[136].Flink + 1) - *(float *)&v64.m256i_i32[3]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v27[136].Blink - *(float *)&v64.m256i_i32[4]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v27[136].Blink + 1) - *(float *)&v64.m256i_i32[5]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v27[137].Flink - *(float *)&v64.m256i_i32[7]) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v27[137].Flink + 1) - *(float *)&v66) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v27[137].Blink - *((float *)&v66 + 1)) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v27[137].Blink + 1) - *((float *)&v66 + 3)) & _xmm) >= 0.000081380211 )
        {
          v35 = v74;
          *(_OWORD *)((char *)&v27[135].Blink + 4) = v73;
          *(_OWORD *)((char *)&v27[136].Blink + 4) = v35;
          HIDWORD(v27[137].Blink) = v34;
          CBackdropVisualImage::InvalidateAllBlurCaches((CBackdropVisualImage *)v27);
          v32 = 1;
        }
        v36 = v32 | v61;
        BYTE1(v27[140].Flink) = 1;
        if ( g_LockAndReadBackdropTexture )
        {
          v62 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v62);
          v58 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap((CCachedVisualImage *)v27, v58, &v62) >= 0 )
          {
            v59 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v62 + 144LL))(v62);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 112LL))(v59, (a1 + 24) & -(__int64)(a1 != 0));
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v62);
          v29 = (float *)v63[0];
        }
      }
      else
      {
        v36 = v61;
      }
      if ( a3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 16LL))(a1 + 24);
        if ( CBackdropVisualImage::IsValid((CBackdropVisualImage *)v27)
          && !CBackdropVisualImage::RequiresRendering(v38, v37) )
        {
          v19 = 0;
        }
        v36 |= v19;
        *a3 = v36;
      }
      DwmDbg::DbgString::DbgString(
        (DwmDbg::DbgString *)v63,
        "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
        *(float *)&v68,
        *((float *)&v68 + 1),
        *((float *)&v68 + 2),
        *((float *)&v68 + 3),
        *(float *)&v69,
        *((float *)&v69 + 1),
        *((float *)&v69 + 2),
        *((float *)&v69 + 3),
        *(float *)&v70,
        *((float *)&v70 + 1),
        *((float *)&v70 + 2),
        *((float *)&v70 + 3),
        *(float *)&v71,
        *((float *)&v71 + 1),
        *((float *)&v71 + 2),
        *((float *)&v71 + 3));
      DwmDbg::DbgString::DbgString(
        (DwmDbg::DbgString *)&v62,
        "%.2f, %.2f, %.2f, %.2f (%.2f x %.2f)",
        *v29,
        v29[1],
        v29[2],
        v29[3],
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v29[2] - *v29) & _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(v29[3] - v29[1]) & _xmm));
      v39 = v63[0];
      v40 = v62;
      v41 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v76,
              "rcBackdropLocal=[%s], worldTransform=[%s]",
              (const char *)v62,
              (const char *)v63[0]);
      v42 = "BVI-Validate-InvalidatedCache";
      if ( !v36 )
        v42 = "BVI-Validate-DidNotInvalidateCache";
      v43 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v75, v42);
      CBackdropVisualImage::LogEtwEvent(v27, v43, v41);
      if ( v40 )
        operator delete(v40);
      if ( v39 )
        operator delete(v39);
      return 0LL;
    }
    v53 = 1690LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v53,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)WorldTransform,
    v60);
  return (unsigned int)WorldTransform;
}
