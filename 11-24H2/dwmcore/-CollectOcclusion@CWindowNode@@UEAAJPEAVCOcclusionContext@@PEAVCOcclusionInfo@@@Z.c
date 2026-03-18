/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480
 * Callers:
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004B410 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1800C5DA0 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FEF90 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010061C (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801009B0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100A78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x180100FAC (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100FD4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180101210 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        __int64 a4)
{
  __m128 v4; // xmm2
  CRenderData *v6; // rcx
  int v8; // r13d
  const struct D2D_SIZE_F *v10; // r8
  __int64 (__fastcall *v11)(CBrush *, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  int EffectiveBounds; // edi
  __int64 v16; // rsi
  __int64 *v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // eax
  __int32 v20; // edi
  LONG **v21; // r12
  __int64 v22; // r15
  LONG *v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64, __int64); // rax
  __m128i v25; // xmm3
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  __m128i v28; // xmm8
  signed int v29; // edx
  __m128 v30; // xmm2
  __m128 v31; // xmm2
  int v32; // edx
  __m128 v33; // xmm2
  __m128 v34; // xmm2
  int v35; // edi
  __m128 v36; // xmm2
  __m128 v37; // xmm2
  int v38; // edx
  signed int v39; // ecx
  bool (__fastcall *v40)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  void ***v42; // r10
  int v43; // r15d
  __m128i v44; // xmm0
  __int32 v45; // rcx^4
  unsigned __int64 v46; // xmm0_8
  int v47; // edx
  int v48; // r13d
  int v49; // edi
  int v50; // r12d
  int v51; // r12d
  int v52; // r8d
  int v53; // r8d
  signed int v54; // ecx
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v57; // xmm0_8
  int v58; // eax
  int v59; // eax
  int v60; // r9d
  struct tagRECT v62; // xmm1
  __int64 v63; // rax
  __int64 v64; // rax
  LONG v65; // ecx
  LONG v66; // r8d
  bool v67; // cc
  signed int v68; // eax
  __int64 v69; // r15
  __int64 *v70; // r15
  __int64 v71; // rax
  CCompositionSurfaceBitmap *v72; // r8
  __int64 (__fastcall *v73)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rdi
  int v74; // eax
  CGeometry *v75; // rcx
  __int64 *v76; // rdx
  CGeometry *v77; // rcx
  void ***v78; // r11
  __m128i v79; // xmm0
  struct tagRECT v80; // xmm2
  __int32 v81; // rax^4
  unsigned __int64 v82; // xmm0_8
  float v83; // r9d
  int right; // r12d
  int top; // edi
  int left; // r10d
  int v87; // eax
  int v88; // r10d
  int v89; // r9d
  LONG v90; // r9d
  LONG v91; // r8d
  LONG v92; // edx
  float v93; // ecx
  int v94; // eax
  __int64 v95; // rax
  unsigned __int64 v96; // xmm0_8
  int v97; // eax
  struct tagRECT v98; // xmm1
  __int64 v99; // rax
  __int64 v100; // rax
  BOOL v101; // eax
  LONG v102; // ecx
  LONG v103; // edx
  bool v104; // cc
  LONG v105; // eax
  CGeometry *v106; // rcx
  __m128i v107; // xmm6
  void ***v108; // rcx
  __m128 v109; // rt1
  int v110; // eax
  int v111; // eax
  unsigned int v112; // [rsp+28h] [rbp-E0h]
  char v113[8]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v114; // [rsp+48h] [rbp-C0h] BYREF
  LONG bottom; // [rsp+58h] [rbp-B0h]
  __m128i v116; // [rsp+68h] [rbp-A0h] BYREF
  void ***v117; // [rsp+78h] [rbp-90h] BYREF
  float v118; // [rsp+80h] [rbp-88h]
  float v119; // [rsp+84h] [rbp-84h]
  float v120; // [rsp+88h] [rbp-80h]
  struct IBitmapRealization *v121; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v122[4]; // [rsp+98h] [rbp-70h] BYREF
  char v123; // [rsp+D8h] [rbp-30h]
  __int16 v124; // [rsp+D9h] [rbp-2Fh]
  char v125; // [rsp+DBh] [rbp-2Dh]
  __m128i v126; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT rcDst; // [rsp+F8h] [rbp-10h] BYREF
  RECT rcSrc2; // [rsp+108h] [rbp+0h] BYREF

  v6 = (CRenderData *)*((_QWORD *)this + 32);
  v8 = 0;
  v116 = 0LL;
  v113[0] = 0;
  v121 = 0LL;
  if ( v6 )
  {
    v10 = (const struct D2D_SIZE_F *)((char *)this + 144);
    v11 = *(__int64 (__fastcall **)(CBrush *, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v6 + 192LL);
    if ( v11 == CPrimitiveGroup::AddOcclusionInformation )
    {
      rcSrc2 = 0LL;
      if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(v6, &rcSrc2, v10, a4)
        && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&rcSrc2) )
      {
        COcclusionContext::AddOcclusionRect(a2, &rcSrc2, 0LL, v12);
      }
    }
    else
    {
      if ( v11 == CRenderData::AddOcclusionInformation )
      {
        v59 = CRenderData::AddOcclusionInformation(v6, a2, v10);
      }
      else if ( v11 == CBrush::AddOcclusionInformation )
      {
        v59 = CBrush::AddOcclusionInformation(v6, a2, v10);
      }
      else
      {
        v59 = v11(v6, a2, v10);
      }
      EffectiveBounds = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0xF2Du, 0LL);
        v60 = EffectiveBounds;
        v112 = 535;
LABEL_96:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, v112, 0LL);
        goto LABEL_99;
      }
    }
  }
  v13 = COcclusionContext::FlushOcclusionRects(a2);
  EffectiveBounds = v13;
  if ( v13 < 0 )
  {
    v112 = 536;
    goto LABEL_141;
  }
  *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 427);
  if ( (*((_BYTE *)this + 896) & 0x10) != 0 )
  {
    v69 = *((_QWORD *)this + 105);
    if ( (v69 & 2) != 0 )
    {
      v70 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFFCuLL);
      v71 = *v70;
    }
    else
    {
      v71 = *((_QWORD *)this + 105) & 1LL;
      v70 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v71 )
    {
      if ( v71 != 1 )
        v70 = (__int64 *)v70[2];
    }
    else
    {
      v70 = 0LL;
    }
    if ( v70 )
    {
      v72 = (CCompositionSurfaceBitmap *)(v70 + 9);
      v73 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v70[9] + 64);
      if ( v121 )
      {
        (*(void (__fastcall **)(struct IBitmapRealization *, __int64, CCompositionSurfaceBitmap *))(*(_QWORD *)v121
                                                                                                  + 16LL))(
          v121,
          v14,
          v72);
        v72 = (CCompositionSurfaceBitmap *)(v70 + 9);
      }
      v74 = v73 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization
          ? CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v72, &v121)
          : v73(v72, &v121);
      if ( v74 >= 0 )
      {
        v75 = (CGeometry *)*((_QWORD *)this + 101);
        v126.m128i_i64[0] = 0LL;
        v126.m128i_i8[8] = 0;
        if ( v75 )
        {
          CGeometry::GetShapeData(v75, (const struct D2D_SIZE_F *)this + 18, (CRectanglesShape **)&v126);
          v76 = (__int64 *)v126.m128i_i64[0];
        }
        else
        {
          CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
          v76 = (__int64 *)&CRectanglesShape::sc_emptyShape;
          v126.m128i_i8[8] = 0;
          v126.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
        }
        EffectiveBounds = CWindowNode::GetEffectiveBounds((__int64)this, v76, v116.m128i_i32, v113);
        CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
        if ( EffectiveBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectiveBounds, 0x226u, 0LL);
          goto LABEL_99;
        }
        v77 = (CGeometry *)*((_QWORD *)this + 101);
        v126.m128i_i64[0] = 0LL;
        v126.m128i_i8[8] = 0;
        if ( v77 )
        {
          CGeometry::GetShapeData(v77, (const struct D2D_SIZE_F *)this + 18, (CRectanglesShape **)&v126);
          v78 = (void ***)v126.m128i_i64[0];
        }
        else
        {
          CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
          v78 = &CRectanglesShape::sc_emptyShape;
          v126.m128i_i8[8] = 0;
          v126.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
        }
        v79 = *(__m128i *)((char *)this + 680);
        v117 = v78;
        v80 = (struct tagRECT)_mm_load_si128(&v116);
        v81 = v79.m128i_i32[1];
        rcDst = v80;
        if ( v79.m128i_i32[0] || (v82 = _mm_srli_si128(v79, 8).m128i_u64[0], (_DWORD)v82) || v81 || HIDWORD(v82) )
        {
          v88 = *((_DWORD *)this + 170);
          v89 = *((_DWORD *)this + 172);
          rcSrc2 = *(RECT *)((char *)this + 696);
          v90 = rcSrc2.top + v89;
          left = _mm_cvtsi128_si32((__m128i)rcSrc2) + v88;
          v91 = left;
          v92 = rcSrc2.right - HIDWORD(*((_QWORD *)this + 85));
          v114 = left;
          LODWORD(v93) = rcSrc2.bottom - HIDWORD(*((_QWORD *)this + 86));
          v94 = _mm_cvtsi128_si32((__m128i)v80);
          if ( v92 > left )
            v91 = v92;
          if ( SLODWORD(v93) <= v90 )
            v93 = *(float *)&v90;
          if ( left <= v94 )
          {
            left = rcDst.left;
            v114 = rcDst.left;
          }
          top = rcDst.top;
          if ( v90 > rcDst.top )
            top = v90;
          right = rcDst.right;
          if ( v91 < rcDst.right )
            right = v91;
          v83 = *(float *)&rcDst.bottom;
          if ( v91 >= rcDst.right )
            v91 = rcDst.right;
          bottom = rcDst.bottom;
          if ( SLODWORD(v93) < rcDst.bottom )
          {
            v83 = v93;
            *(float *)&bottom = v93;
          }
          if ( v91 > left )
          {
            if ( SLODWORD(v93) >= rcDst.bottom )
              v93 = *(float *)&rcDst.bottom;
            if ( SLODWORD(v93) > top )
            {
LABEL_166:
              v95 = *(_QWORD *)((char *)this + 756);
              if ( (_DWORD)v95
                || (v96 = _mm_srli_si128(*(__m128i *)((char *)this + 756), 8).m128i_u64[0],
                    __PAIR64__(HIDWORD(v95), 0) != (unsigned int)v96)
                || HIDWORD(v96) )
              {
                v99 = HIDWORD(*(_QWORD *)((char *)this + 756));
                rcDst = *(struct tagRECT *)((char *)this + 712);
                v98 = rcDst;
                rcDst.right -= v99;
                rcDst.top += *((_DWORD *)this + 191);
                rcDst.bottom -= HIDWORD(*(_QWORD *)((char *)this + 764));
                v100 = *((_QWORD *)this + 91);
                *(_QWORD *)&rcSrc2.right = v100;
                rcDst.left = *((_DWORD *)this + 189) + _mm_cvtsi128_si32((__m128i)v98);
                *(_QWORD *)&rcSrc2.left = 0LL;
                IntersectRect(&rcDst, &rcDst, &rcSrc2);
                v101 = EqualRect(&rcDst, &rcSrc2);
                left = v114;
                if ( v101 )
                {
                  v83 = *(float *)&bottom;
                }
                else
                {
                  if ( rcDst.left > (int)v114 )
                    left = rcDst.left;
                  if ( rcDst.top > top )
                    top = rcDst.top;
                  v102 = rcDst.right;
                  v103 = right;
                  v104 = rcDst.right < right;
                  if ( rcDst.right < right )
                    right = rcDst.right;
                  v83 = *(float *)&bottom;
                  if ( !v104 )
                    v102 = v103;
                  v105 = rcDst.bottom;
                  if ( rcDst.bottom < bottom )
                    v83 = *(float *)&rcDst.bottom;
                  if ( v102 <= left )
                    goto LABEL_219;
                  if ( rcDst.bottom >= bottom )
                    v105 = bottom;
                  if ( v105 <= top )
                  {
LABEL_219:
                    v83 = 0.0;
                    right = 0;
                    top = 0;
                    *(float *)&left = 0.0;
                  }
                }
                v78 = v117;
              }
              v4 = (__m128)COERCE_UNSIGNED_INT((float)right);
              *(float *)&v117 = (float)left;
              *((float *)&v117 + 1) = (float)top;
              v118 = (float)right;
              v119 = (float)SLODWORD(v83);
              if ( v113[0] )
              {
                v97 = COcclusionContext::DrawImage(a2, v70, &v117, *((unsigned int *)this + 193));
                v8 = v97;
                EffectiveBounds = v97;
                if ( v97 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v97, 0x270u, 0LL);
LABEL_172:
                  CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
LABEL_173:
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x22Cu, 0LL);
                  goto LABEL_99;
                }
              }
              else if ( v78 )
              {
                v110 = COcclusionContext::DrawClippedImage(
                         a2,
                         v70,
                         &v117,
                         v78,
                         _mm_cvtsi128_si32(*(__m128i *)((char *)this + 772)));
                v8 = v110;
                EffectiveBounds = v110;
                if ( v110 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v110, 0x277u, 0LL);
                  goto LABEL_172;
                }
              }
              EffectiveBounds = v8;
              CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
              if ( v8 < 0 )
                goto LABEL_173;
              v8 = 0;
              if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
              {
                v125 = 0;
                v122[0] = _xmm;
                v122[1] = _xmm;
                v124 = 41;
                v122[2] = _xmm;
                v122[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
                v123 = -86;
                v13 = CWindowNode::ApplyTextureToLocalTransform(this);
                EffectiveBounds = v13;
                if ( v13 < 0 )
                {
                  v112 = 563;
                  goto LABEL_141;
                }
                v106 = (CGeometry *)*((_QWORD *)this + 101);
                v126.m128i_i64[0] = 0LL;
                v126.m128i_i8[8] = 0;
                v107 = *(__m128i *)((char *)this + 772);
                if ( v106 )
                {
                  CGeometry::GetShapeData(v106, (const struct D2D_SIZE_F *)this + 18, (CRectanglesShape **)&v126);
                  v108 = (void ***)v126.m128i_i64[0];
                }
                else
                {
                  CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
                  v108 = &CRectanglesShape::sc_emptyShape;
                  v126.m128i_i8[8] = 0;
                  v126.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
                }
                EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                                    (_DWORD)a2,
                                    (_DWORD)this,
                                    v70[12],
                                    (unsigned int)v122,
                                    (__int64)v108,
                                    _mm_cvtsi128_si32(v107));
                CShapePtr::~CShapePtr((CRectanglesShape **)&v126);
                if ( EffectiveBounds < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectiveBounds, 0x239u, 0LL);
                  goto LABEL_99;
                }
              }
              goto LABEL_8;
            }
          }
          v83 = 0.0;
          right = 0;
          top = 0;
          *(float *)&left = 0.0;
        }
        else
        {
          v83 = *(float *)&rcDst.bottom;
          right = rcDst.right;
          top = rcDst.top;
          left = rcDst.left;
        }
        v114 = left;
        *(float *)&bottom = v83;
        goto LABEL_166;
      }
    }
  }
LABEL_8:
  v13 = COcclusionContext::FlushOcclusionRects(a2);
  EffectiveBounds = v13;
  if ( v13 < 0 )
  {
    v112 = 576;
LABEL_141:
    v60 = v13;
    goto LABEL_96;
  }
  *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 427);
  if ( (*((_BYTE *)this + 896) & 8) == 0 )
    goto LABEL_99;
  v16 = *((_QWORD *)this + 104);
  if ( (v16 & 2) != 0 )
  {
    v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    v18 = *v17;
  }
  else
  {
    v18 = *((_QWORD *)this + 104) & 1LL;
    v17 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v18 )
  {
    if ( v18 != 1 )
      v17 = (__int64 *)v17[2];
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 || *((_BYTE *)this + 753) || (*((_DWORD *)this + 193) & 2) != 0 )
    goto LABEL_99;
  v13 = CWindowNode::EnsureEffectiveSpriteClip(this);
  EffectiveBounds = v13;
  if ( v13 < 0 )
  {
    v112 = 584;
    goto LABEL_141;
  }
  v19 = *((_DWORD *)this + 182);
  v20 = 0;
  v21 = (LONG **)*((_QWORD *)this + 111);
  v22 = HIDWORD(*((_QWORD *)this + 91));
  v113[0] = 1;
  v116.m128i_i64[0] = 0LL;
  LODWORD(v117) = v19;
  v116.m128i_i64[1] = __PAIR64__(v22, v19);
  if ( !v21 )
    goto LABEL_59;
  v23 = *v21;
  v126 = 0LL;
  v24 = (__int64 (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)v23 + 6);
  if ( v24 == CRegionShape::GetTightBounds )
  {
    rcSrc2 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect(v21 + 2, &rcSrc2) )
    {
      v25 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.left);
      v26 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.top);
      v27 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.right);
      v28 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.bottom);
      *(float *)v126.m128i_i32 = (float)rcSrc2.left;
      *(float *)&v126.m128i_i32[1] = (float)rcSrc2.top;
      *(float *)&v126.m128i_i32[2] = (float)rcSrc2.right;
      *(float *)&v126.m128i_i32[3] = (float)rcSrc2.bottom;
      goto LABEL_23;
    }
LABEL_174:
    v28 = (__m128i)v126.m128i_u32[3];
    v27 = (__m128i)v126.m128i_u32[2];
    v26 = (__m128i)v126.m128i_u32[1];
    v25 = (__m128i)v126.m128i_u32[0];
LABEL_23:
    if ( (_mm_cvtsi128_si32(v25) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4.m128_f32[0] = (float)(int)*(float *)v25.m128i_i32 - *(float *)v25.m128i_i32;
      v29 = (int)*(float *)v25.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      *(float *)&v114 = *(float *)v25.m128i_i32 + 6291456.25;
      v29 = (int)(v114 << 10) >> 11;
    }
    v30 = (__m128)v25;
    v114 = v29;
    v30.m128_f32[0] = *(float *)v25.m128i_i32 - (float)v29;
    v31 = _mm_and_ps(v30, (__m128)(unsigned int)_xmm);
    if ( v31.m128_f32[0] > 0.00390625 )
      v114 = CFloatFPU::FloorSat(*(float *)v25.m128i_i32);
    if ( (_mm_cvtsi128_si32(v26) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v31.m128_f32[0] = (float)(int)*(float *)v26.m128i_i32 - *(float *)v26.m128i_i32;
      v32 = (int)*(float *)v26.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v31, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      *(float *)&bottom = *(float *)v26.m128i_i32 + 6291456.25;
      v32 = bottom << 10 >> 11;
    }
    v33 = (__m128)v26;
    bottom = v32;
    v33.m128_f32[0] = *(float *)v26.m128i_i32 - (float)v32;
    v34 = _mm_and_ps(v33, (__m128)(unsigned int)_xmm);
    if ( v34.m128_f32[0] > 0.00390625 )
      bottom = CFloatFPU::FloorSat(*(float *)v26.m128i_i32);
    if ( (_mm_cvtsi128_si32(v27) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v34.m128_f32[0] = (float)(int)*(float *)v27.m128i_i32 - *(float *)v27.m128i_i32;
      v35 = (int)*(float *)v27.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v34, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v120 = *(float *)v27.m128i_i32 + 6291456.25;
      v35 = (int)(LODWORD(v120) << 10) >> 11;
    }
    v36 = (__m128)v27;
    v36.m128_f32[0] = *(float *)v27.m128i_i32 - (float)v35;
    v37 = _mm_and_ps(v36, (__m128)(unsigned int)_xmm);
    if ( v37.m128_f32[0] > 0.00390625 )
      v35 = CFloatFPU::CeilingSat(*(float *)v27.m128i_i32);
    if ( (_mm_cvtsi128_si32(v28) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v37.m128_f32[0] = (float)(int)*(float *)v28.m128i_i32 - *(float *)v28.m128i_i32;
      v109.m128_f32[0] = FLOAT_N0_5;
      v38 = (int)*(float *)v28.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v37, v109));
    }
    else
    {
      v120 = *(float *)v28.m128i_i32 + 6291456.25;
      v38 = (int)(LODWORD(v120) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v28.m128i_i32 - (float)v38) & _xmm) > 0.00390625 )
      v38 = CFloatFPU::CeilingSat(*(float *)v28.m128i_i32);
    if ( (int)v114 <= 0 )
    {
      v39 = v116.m128i_i32[0];
    }
    else
    {
      v39 = v114;
      v116.m128i_i32[0] = v114;
    }
    if ( bottom > 0 )
    {
      v8 = bottom;
      v116.m128i_i32[1] = bottom;
    }
    if ( v35 >= (int)v117 )
      v35 = (int)v117;
    else
      v116.m128i_i32[2] = v35;
    if ( v38 < (int)v22 )
    {
      v116.m128i_i32[3] = v38;
      LODWORD(v22) = v38;
    }
    if ( v35 <= v39 || (int)v22 <= v8 )
    {
      v20 = 0;
      v116 = 0uLL;
    }
    else
    {
      v20 = v116.m128i_i32[0];
    }
    *(float *)&v114 = 0.0;
    v40 = (bool (__fastcall *)(CRoundedRectangleShape *__hidden, unsigned int *))*((_QWORD *)*v21 + 8);
    if ( v40 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v21[2] + 4)) )
LABEL_58:
        v113[0] = 0;
    }
    else
    {
      if ( v40 == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles((CRectanglesShape *)v21, &v114);
      }
      else if ( v40 == CRegionShape::IsRectangles )
      {
        IsRectangles = CRegionShape::IsRectangles((CRegionShape *)v21, &v114);
      }
      else
      {
        IsRectangles = v40((CRoundedRectangleShape *)v21, &v114);
      }
      if ( !IsRectangles || v114 != 1 )
        goto LABEL_58;
    }
LABEL_59:
    v42 = (void ***)*((_QWORD *)this + 111);
    v43 = 0;
    v126 = v116;
    v44 = *(__m128i *)((char *)this + 680);
    v117 = v42;
    v45 = v44.m128i_i32[1];
    if ( v44.m128i_i32[0] || (v46 = _mm_srli_si128(v44, 8).m128i_u64[0], (_DWORD)v46) || v45 || HIDWORD(v46) )
    {
      v51 = *((_DWORD *)this + 170);
      v52 = *((_DWORD *)this + 172);
      rcSrc2 = *(RECT *)((char *)this + 696);
      v53 = rcSrc2.top + v52;
      v50 = _mm_cvtsi128_si32((__m128i)rcSrc2) + v51;
      v54 = rcSrc2.bottom - HIDWORD(*((_QWORD *)this + 86));
      v55 = v50;
      if ( (int)(rcSrc2.right - HIDWORD(*((_QWORD *)this + 85))) > v50 )
        v55 = rcSrc2.right - HIDWORD(*((_QWORD *)this + 85));
      if ( v54 <= v53 )
        v54 = v53;
      if ( v50 <= v20 )
        v50 = v126.m128i_i32[0];
      v49 = v126.m128i_i32[1];
      if ( v53 > v126.m128i_i32[1] )
        v49 = v53;
      v48 = v126.m128i_i32[2];
      if ( v55 < v126.m128i_i32[2] )
        v48 = v55;
      v47 = v126.m128i_i32[3];
      if ( v55 >= v126.m128i_i32[2] )
        v55 = v126.m128i_i32[2];
      v114 = v126.m128i_u32[3];
      if ( v54 < v126.m128i_i32[3] )
      {
        v47 = v54;
        v114 = v54;
      }
      if ( v55 > v50 )
      {
        if ( v54 >= v126.m128i_i32[3] )
          v54 = v126.m128i_i32[3];
        if ( v54 > v49 )
        {
LABEL_85:
          v56 = *(_QWORD *)((char *)this + 756);
          if ( (_DWORD)v56
            || (v57 = _mm_srli_si128(*(__m128i *)((char *)this + 756), 8).m128i_u64[0],
                __PAIR64__(HIDWORD(v56), 0) != (unsigned int)v57)
            || HIDWORD(v57) )
          {
            v63 = HIDWORD(*(_QWORD *)((char *)this + 756));
            rcDst = *(struct tagRECT *)((char *)this + 712);
            v62 = rcDst;
            rcDst.right -= v63;
            rcDst.top += *((_DWORD *)this + 191);
            rcDst.bottom -= HIDWORD(*(_QWORD *)((char *)this + 764));
            v64 = *((_QWORD *)this + 91);
            *(_QWORD *)&rcSrc2.right = v64;
            rcDst.left = *((_DWORD *)this + 189) + _mm_cvtsi128_si32((__m128i)v62);
            *(_QWORD *)&rcSrc2.left = 0LL;
            IntersectRect(&rcDst, &rcDst, &rcSrc2);
            if ( EqualRect(&rcDst, &rcSrc2) )
            {
              v47 = v114;
            }
            else
            {
              if ( rcDst.left > v50 )
                v50 = rcDst.left;
              if ( rcDst.top > v49 )
                v49 = rcDst.top;
              v65 = rcDst.right;
              v66 = v48;
              v67 = rcDst.right < v48;
              if ( rcDst.right < v48 )
                v48 = rcDst.right;
              v47 = v114;
              if ( !v67 )
                v65 = v66;
              v68 = rcDst.bottom;
              if ( rcDst.bottom < (int)v114 )
                v47 = rcDst.bottom;
              if ( v65 <= v50 )
                goto LABEL_225;
              if ( rcDst.bottom >= (int)v114 )
                v68 = v114;
              if ( v68 <= v49 )
              {
LABEL_225:
                *(float *)&v47 = 0.0;
                v48 = 0;
                v49 = 0;
                v50 = 0;
              }
            }
            v42 = v117;
          }
          *(float *)v126.m128i_i32 = (float)v50;
          *(float *)&v126.m128i_i32[1] = (float)v49;
          *(float *)&v126.m128i_i32[2] = (float)v48;
          *(float *)&v126.m128i_i32[3] = (float)v47;
          if ( v113[0] )
          {
            v58 = COcclusionContext::DrawImage(a2, v17, &v126, *((unsigned int *)this + 193));
            v43 = v58;
            EffectiveBounds = v58;
            if ( v58 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x270u, 0LL);
              goto LABEL_91;
            }
          }
          else if ( v42 )
          {
            v87 = COcclusionContext::DrawClippedImage(
                    a2,
                    v17,
                    &v126,
                    v42,
                    _mm_cvtsi128_si32(*(__m128i *)((char *)this + 772)));
            v43 = v87;
            EffectiveBounds = v87;
            if ( v87 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v87, 0x277u, 0LL);
              goto LABEL_91;
            }
          }
          EffectiveBounds = v43;
          if ( v43 >= 0 )
            goto LABEL_99;
LABEL_91:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x250u, 0LL);
          goto LABEL_99;
        }
      }
      *(float *)&v47 = 0.0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
    }
    else
    {
      v47 = v126.m128i_i32[3];
      v48 = v126.m128i_i32[2];
      v49 = v126.m128i_i32[1];
      v50 = v126.m128i_i32[0];
    }
    v114 = v47;
    goto LABEL_85;
  }
  v111 = v24((__int64)v21, (__int64)&v126, 0LL);
  EffectiveBounds = v111;
  if ( v111 >= 0 )
    goto LABEL_174;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v111, 0x1B2u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectiveBounds, 0x24Bu, 0LL);
LABEL_99:
  if ( v121 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v121 + 16LL))(v121);
  return (unsigned int)EffectiveBounds;
}
