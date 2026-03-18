/*
 * XREFs of ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000C068 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1B0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B240 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C2F0 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18000CDC4 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18009C400 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x180147A38 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180147FC0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1802077BC (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBackdropVisualImage::ValidateRootAndSourceRectangle(
        CBackdropVisualImage *this,
        __int64 a2,
        float *a3,
        char a4,
        char *a5)
{
  bool v5; // zf
  CGlobalComposition *v7; // r10
  char *v9; // r12
  __int64 v12; // rax
  char v13; // dl
  int v14; // eax
  unsigned int v15; // eax
  char v16; // r13
  float v17; // xmm1_4
  char v18; // r15
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  struct D2D_RECT_F *v25; // r9
  __int64 v26; // r10
  float v27; // xmm3_4
  int v29; // eax
  unsigned int v30; // edi
  unsigned __int64 v31; // r12
  __int64 *v32; // rax
  CCachedVisualImage::CCachedTarget **v33; // rbx
  __int64 v34; // r13
  CCachedVisualImage::CCachedTarget **v35; // rsi
  CCachedVisualImage::CCachedTarget *v36; // rdi
  __int64 v37; // rbx
  const char *v38; // rdx
  __int64 v39; // rax
  CCachedVisualImage::CCachedTarget **v40; // rbp
  CCachedVisualImage::CCachedTarget **v41; // rdi
  char *v42; // rsi
  CCachedVisualImage::CCachedTarget *v43; // rax
  __int64 v44; // rdx
  float v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // [rsp+20h] [rbp-78h]
  struct D2D_MATRIX_3X2_F v48; // [rsp+28h] [rbp-70h] BYREF
  D2D_RECT_F v49; // [rsp+40h] [rbp-58h] BYREF
  float v50; // [rsp+50h] [rbp-48h]
  float v51; // [rsp+54h] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = *((_BYTE *)this + 2240) == 0;
  v7 = g_pComposition;
  v9 = a5;
  *(_QWORD *)&v48.m[2][0] = a5;
  v12 = *((_QWORD *)g_pComposition + 77);
  if ( v5
    && ((v45 = *(float *)(v12 + 724),
         COERCE_FLOAT(COERCE_UNSIGNED_INT(v45 - *((float *)this + 536)) & _xmm) > 0.0000011920929)
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 728) - *((float *)this + 537)) & _xmm) > 0.0000011920929) )
  {
    v46 = *(_DWORD *)(v12 + 728);
    v13 = 1;
    *((_DWORD *)this + 537) = v46;
    *((_DWORD *)this + 539) = v46;
    *((float *)this + 536) = v45;
    *((float *)this + 538) = v45;
  }
  else
  {
    v13 = 0;
  }
  v14 = *((_DWORD *)v7 + 1625);
  if ( v14 == 49152 || v14 == 45056 )
    goto LABEL_4;
  if ( v14 > 45312 )
  {
    if ( v14 != 49408 && v14 != 49664 )
      goto LABEL_67;
LABEL_4:
    v15 = 0x4000;
    goto LABEL_5;
  }
  switch ( v14 )
  {
    case 45312:
      goto LABEL_4;
    case 40960:
LABEL_41:
      v15 = 0x2000;
      goto LABEL_5;
    case 37632:
      v15 = 4096;
      goto LABEL_5;
    case 41216:
      goto LABEL_41;
  }
LABEL_67:
  v15 = 2048;
LABEL_5:
  if ( *((_DWORD *)this + 542) != v15 )
  {
    if ( *((_DWORD *)this + 542) > v15 )
      v13 = 1;
    *((_DWORD *)this + 542) = v15;
  }
  v16 = 0;
  LOBYTE(v47) = 0;
  if ( *((_QWORD *)this + 17) != a2
    || (v17 = a3[2], v17 > *a3)
    && a3[3] > a3[1]
    && (*a3 < *((float *)this + 24)
     || a3[1] < *((float *)this + 25)
     || *((float *)this + 26) < v17
     || *((float *)this + 27) < a3[3])
    || v13 )
  {
    v29 = CBackdropVisualImage::SetRootAndSourceRectangle(this, a2, a3);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
        (const char *)(unsigned int)v29,
        v47);
      return v30;
    }
    v16 = 1;
    LOBYTE(v47) = 1;
  }
  v18 = v16;
  *((_OWORD *)this + 133) = *(_OWORD *)a3;
  LODWORD(v19) = *((_DWORD *)this + 25) ^ _xmm;
  LODWORD(v20) = *((_DWORD *)this + 24) ^ _xmm;
  v21 = v19 + *((float *)this + 533);
  v22 = v19 + *((float *)this + 535);
  v23 = v20 + *((float *)this + 532);
  v24 = v20 + *((float *)this + 534);
  *((float *)this + 533) = v21;
  *((float *)this + 535) = v22;
  *((float *)this + 532) = v23;
  *((float *)this + 534) = v24;
  if ( CBackdropVisualImage::IsValid(this) )
  {
    v27 = *((float *)this + 538);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 539) - 1.0) & _xmm) >= 0.000081380211 )
    {
      v49.bottom = *((FLOAT *)this + 539);
      v49.left = v27;
      *(_QWORD *)&v49.top = 0LL;
      *(_OWORD *)&v48.m11 = 0LL;
      v51 = 0.0 - (float)(v49.bottom * 0.0);
      v50 = 0.0 - (float)(v27 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (CBackdropVisualImage *)((char *)this + 2128),
        &v49,
        &v48,
        v25);
      *((_OWORD *)this + 133) = *(_OWORD *)&v48.m11;
    }
    if ( v16 )
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      *((_BYTE *)this + 2241) = 0;
    }
    else if ( a4 )
    {
      v31 = 0LL;
      if ( *((_BYTE *)this + 2240) )
        v31 = CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta;
      v32 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 312) + 24LL))(*(_QWORD *)(v26 + 312));
      v33 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 23);
      v34 = *v32;
      v35 = v33 + 1;
LABEL_30:
      *(_QWORD *)&v48.m11 = v35;
      while ( v33 != *((CCachedVisualImage::CCachedTarget ***)this + 24) )
      {
        v36 = *v33;
        if ( CCachedVisualImage::CCachedTarget::IsValid(*v33) )
        {
          if ( v34 - *((_QWORD *)v36 + 5) > v31 )
          {
            CCachedVisualImage::CCachedTarget::MarkDirty(v36);
            v18 = 1;
          }
          ++v33;
          ++v35;
          goto LABEL_30;
        }
        v40 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
        v41 = v35;
        if ( v35 != v40 )
        {
          v42 = (char *)v33 - *(_QWORD *)&v48.m11;
          do
          {
            v43 = *v41;
            *v41 = 0LL;
            v44 = *(__int64 *)((char *)v41 + (_QWORD)v42);
            *(CCachedVisualImage::CCachedTarget **)((char *)v41 + (_QWORD)v42) = v43;
            if ( v44 )
              std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(0LL);
            ++v41;
          }
          while ( v41 != v40 );
          v35 = *(CCachedVisualImage::CCachedTarget ***)&v48.m11;
        }
        std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(*((_QWORD *)this + 24) - 8LL);
        *((_QWORD *)this + 24) -= 8LL;
      }
      v9 = *(char **)&v48.m[2][0];
      v16 = v47;
    }
  }
  if ( v9 )
    *v9 = v18;
  if ( v18 )
  {
    v37 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v48.m[2], word_180336D88);
    v38 = "BVI-RealizationIsDirty-Updated";
    if ( !v16 )
      v38 = "BVI-RealizationIsDirty-NotUpdated";
    v39 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v48, v38);
    CBackdropVisualImage::LogEtwEvent(this, v39, v37);
  }
  return 0LL;
}
