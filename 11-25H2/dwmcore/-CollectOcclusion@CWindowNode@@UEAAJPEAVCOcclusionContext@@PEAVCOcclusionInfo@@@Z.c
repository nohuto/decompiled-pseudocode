/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055430 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x180055480 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800554D0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800555A0 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056C2C (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180056C90 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180057A60 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073524 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801D7FC0 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020AA60 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023DBEC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ @ 0x18023DE28 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180298118 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  __m128 v3; // xmm2
  CRenderData *v5; // rcx
  int v7; // r13d
  const struct D2D_SIZE_F *v9; // r8
  int (*v10)(CBrush *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v11; // eax
  __int64 v12; // rdx
  int EffectiveBounds; // edi
  __int64 v14; // rsi
  struct IUnknown *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // eax
  __int32 v18; // edi
  CRectanglesShape *v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 (__fastcall *v22)(CRectanglesShape *, __m128i *, _QWORD); // rax
  __m128i v23; // xmm3
  __m128i v24; // xmm6
  __m128i v25; // xmm7
  __m128i v26; // xmm8
  signed int v27; // edx
  __m128 v28; // xmm2
  __m128 v29; // xmm2
  int v30; // edx
  __m128 v31; // xmm2
  __m128 v32; // xmm2
  int v33; // edi
  __m128 v34; // xmm2
  __m128 v35; // xmm2
  int v36; // edx
  signed int v37; // ecx
  bool (__fastcall *v38)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  void ***v40; // r10
  int v41; // r15d
  __m128i v42; // xmm0
  __int32 v43; // rcx^4
  unsigned __int64 v44; // xmm0_8
  int v45; // edx
  int v46; // r13d
  int v47; // edi
  int v48; // r12d
  int v49; // r12d
  int v50; // r8d
  int v51; // r8d
  signed int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v55; // xmm0_8
  int v56; // eax
  int v57; // eax
  int v58; // r9d
  tagRECT v60; // xmm1
  __int64 v61; // rax
  __int64 v62; // rax
  LONG v63; // ecx
  LONG v64; // r8d
  bool v65; // cc
  signed int v66; // eax
  __int64 v67; // r15
  struct IUnknown *v68; // r15
  __int64 lpVtbl; // rax
  CCompositionSurfaceBitmap *v70; // r8
  __int64 (__fastcall *Release)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rdi
  int v72; // eax
  CGeometry *v73; // rcx
  void ***v74; // rdx
  CGeometry *v75; // rcx
  void ***v76; // r11
  __m128i v77; // xmm0
  tagRECT v78; // xmm2
  __int32 v79; // rax^4
  unsigned __int64 v80; // xmm0_8
  float v81; // r9d
  int right; // r12d
  int top; // edi
  int left; // r10d
  int v85; // eax
  int v86; // r10d
  int v87; // r9d
  LONG v88; // r9d
  LONG v89; // r8d
  LONG v90; // edx
  float v91; // ecx
  int v92; // eax
  __int64 v93; // rax
  unsigned __int64 v94; // xmm0_8
  int v95; // eax
  tagRECT v96; // xmm1
  __int64 v97; // rax
  __int64 v98; // rax
  BOOL v99; // eax
  LONG v100; // ecx
  LONG v101; // edx
  bool v102; // cc
  LONG v103; // eax
  CGeometry *v104; // rcx
  __m128i v105; // xmm6
  void ***v106; // rcx
  __m128 v107; // rt1
  int v108; // eax
  int v109; // eax
  unsigned int v110; // [rsp+28h] [rbp-E0h]
  char v111[8]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v112; // [rsp+48h] [rbp-C0h] BYREF
  LONG bottom; // [rsp+58h] [rbp-B0h]
  __m128i v114; // [rsp+68h] [rbp-A0h] BYREF
  void ***v115; // [rsp+78h] [rbp-90h] BYREF
  float v116; // [rsp+80h] [rbp-88h]
  float v117; // [rsp+84h] [rbp-84h]
  float v118; // [rsp+88h] [rbp-80h]
  struct IBitmapRealization *v119; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v120[4]; // [rsp+98h] [rbp-70h] BYREF
  char v121; // [rsp+D8h] [rbp-30h]
  __int16 v122; // [rsp+D9h] [rbp-2Fh]
  char v123; // [rsp+DBh] [rbp-2Dh]
  __m128i v124; // [rsp+E8h] [rbp-20h] BYREF
  tagRECT rcDst; // [rsp+F8h] [rbp-10h] BYREF
  RECT rcSrc2; // [rsp+108h] [rbp+0h] BYREF

  v5 = (CRenderData *)*((_QWORD *)this + 32);
  v7 = 0;
  v114 = 0LL;
  v111[0] = 0;
  v119 = 0LL;
  if ( v5 )
  {
    v9 = (const struct D2D_SIZE_F *)((char *)this + 144);
    v10 = *(int (**)(CBrush *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v5 + 192LL);
    if ( (char *)v10 == (char *)CPrimitiveGroup::AddOcclusionInformation )
    {
      rcSrc2 = 0LL;
      if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect(v5, &rcSrc2, v9)
        && (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&rcSrc2) )
      {
        COcclusionContext::AddOcclusionRect(a2, &rcSrc2, 0LL);
      }
    }
    else
    {
      if ( (char *)v10 == (char *)CRenderData::AddOcclusionInformation )
      {
        v57 = CRenderData::AddOcclusionInformation(v5, a2, v9);
      }
      else if ( v10 == CBrush::AddOcclusionInformation )
      {
        v57 = CBrush::AddOcclusionInformation(v5, a2, v9);
      }
      else
      {
        v57 = ((__int64 (__fastcall *)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *))v10)(
                v5,
                a2,
                v9);
      }
      EffectiveBounds = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xF13u, 0LL);
        v58 = EffectiveBounds;
        v110 = 535;
LABEL_96:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, v110, 0LL);
        goto LABEL_99;
      }
    }
  }
  v11 = COcclusionContext::FlushOcclusionRects(a2);
  EffectiveBounds = v11;
  if ( v11 < 0 )
  {
    v110 = 536;
    goto LABEL_141;
  }
  *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 427);
  if ( (*((_BYTE *)this + 888) & 0x10) != 0 )
  {
    v67 = *((_QWORD *)this + 104);
    if ( (v67 & 2) != 0 )
    {
      v68 = (struct IUnknown *)(v67 & 0xFFFFFFFFFFFFFFFCuLL);
      lpVtbl = (__int64)v68->lpVtbl;
    }
    else
    {
      lpVtbl = *((_QWORD *)this + 104) & 1LL;
      v68 = (struct IUnknown *)(v67 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( lpVtbl )
    {
      if ( lpVtbl != 1 )
        v68 = (struct IUnknown *)v68[2].lpVtbl;
    }
    else
    {
      v68 = 0LL;
    }
    if ( v68 )
    {
      v70 = (CCompositionSurfaceBitmap *)&v68[9];
      Release = (__int64 (__fastcall *)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))v68[9].lpVtbl[2].Release;
      if ( v119 )
      {
        (*(void (__fastcall **)(struct IBitmapRealization *, __int64, CCompositionSurfaceBitmap *))(*(_QWORD *)v119
                                                                                                  + 16LL))(
          v119,
          v12,
          v70);
        v70 = (CCompositionSurfaceBitmap *)&v68[9];
      }
      v72 = Release == CCompositionSurfaceBitmap::GetCurrentRenderingRealization
          ? CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v70, &v119)
          : Release(v70, &v119);
      if ( v72 >= 0 )
      {
        v73 = (CGeometry *)*((_QWORD *)this + 100);
        v124.m128i_i64[0] = 0LL;
        v124.m128i_i8[8] = 0;
        if ( v73 )
        {
          CGeometry::GetShapeData(v73, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v124);
          v74 = (void ***)v124.m128i_i64[0];
        }
        else
        {
          CShapePtr::~CShapePtr((CShapePtr *)&v124);
          v74 = &CRectanglesShape::sc_emptyShape;
          v124.m128i_i8[8] = 0;
          v124.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
        }
        EffectiveBounds = CWindowNode::GetEffectiveBounds(this, v74, &v114, v111);
        CShapePtr::~CShapePtr((CShapePtr *)&v124);
        if ( EffectiveBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x226u, 0LL);
          goto LABEL_99;
        }
        v75 = (CGeometry *)*((_QWORD *)this + 100);
        v124.m128i_i64[0] = 0LL;
        v124.m128i_i8[8] = 0;
        if ( v75 )
        {
          CGeometry::GetShapeData(v75, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v124);
          v76 = (void ***)v124.m128i_i64[0];
        }
        else
        {
          CShapePtr::~CShapePtr((CShapePtr *)&v124);
          v76 = &CRectanglesShape::sc_emptyShape;
          v124.m128i_i8[8] = 0;
          v124.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
        }
        v77 = *((__m128i *)this + 42);
        v115 = v76;
        v78 = (tagRECT)_mm_load_si128(&v114);
        v79 = v77.m128i_i32[1];
        rcDst = v78;
        if ( v77.m128i_i32[0] || (v80 = _mm_srli_si128(v77, 8).m128i_u64[0], (_DWORD)v80) || v79 || HIDWORD(v80) )
        {
          v86 = *((_DWORD *)this + 168);
          v87 = *((_DWORD *)this + 170);
          rcSrc2 = (RECT)*((_OWORD *)this + 43);
          v88 = rcSrc2.top + v87;
          left = _mm_cvtsi128_si32((__m128i)rcSrc2) + v86;
          v89 = left;
          v90 = rcSrc2.right - HIDWORD(*((_QWORD *)this + 84));
          v112 = left;
          LODWORD(v91) = rcSrc2.bottom - HIDWORD(*((_QWORD *)this + 85));
          v92 = _mm_cvtsi128_si32((__m128i)v78);
          if ( v90 > left )
            v89 = v90;
          if ( SLODWORD(v91) <= v88 )
            v91 = *(float *)&v88;
          if ( left <= v92 )
          {
            left = rcDst.left;
            v112 = rcDst.left;
          }
          top = rcDst.top;
          if ( v88 > rcDst.top )
            top = v88;
          right = rcDst.right;
          if ( v89 < rcDst.right )
            right = v89;
          v81 = *(float *)&rcDst.bottom;
          if ( v89 >= rcDst.right )
            v89 = rcDst.right;
          bottom = rcDst.bottom;
          if ( SLODWORD(v91) < rcDst.bottom )
          {
            v81 = v91;
            *(float *)&bottom = v91;
          }
          if ( v89 > left )
          {
            if ( SLODWORD(v91) >= rcDst.bottom )
              v91 = *(float *)&rcDst.bottom;
            if ( SLODWORD(v91) > top )
            {
LABEL_166:
              v93 = *(_QWORD *)((char *)this + 748);
              if ( (_DWORD)v93
                || (v94 = _mm_srli_si128(*(__m128i *)((char *)this + 748), 8).m128i_u64[0],
                    __PAIR64__(HIDWORD(v93), 0) != (unsigned int)v94)
                || HIDWORD(v94) )
              {
                v97 = HIDWORD(*(_QWORD *)((char *)this + 748));
                rcDst = (tagRECT)*((_OWORD *)this + 44);
                v96 = rcDst;
                rcDst.right -= v97;
                rcDst.top += *((_DWORD *)this + 189);
                rcDst.bottom -= HIDWORD(*(_QWORD *)((char *)this + 756));
                v98 = *((_QWORD *)this + 90);
                *(_QWORD *)&rcSrc2.right = v98;
                rcDst.left = *((_DWORD *)this + 187) + _mm_cvtsi128_si32((__m128i)v96);
                *(_QWORD *)&rcSrc2.left = 0LL;
                IntersectRect(&rcDst, &rcDst, &rcSrc2);
                v99 = EqualRect(&rcDst, &rcSrc2);
                left = v112;
                if ( v99 )
                {
                  v81 = *(float *)&bottom;
                }
                else
                {
                  if ( rcDst.left > (int)v112 )
                    left = rcDst.left;
                  if ( rcDst.top > top )
                    top = rcDst.top;
                  v100 = rcDst.right;
                  v101 = right;
                  v102 = rcDst.right < right;
                  if ( rcDst.right < right )
                    right = rcDst.right;
                  v81 = *(float *)&bottom;
                  if ( !v102 )
                    v100 = v101;
                  v103 = rcDst.bottom;
                  if ( rcDst.bottom < bottom )
                    v81 = *(float *)&rcDst.bottom;
                  if ( v100 <= left )
                    goto LABEL_219;
                  if ( rcDst.bottom >= bottom )
                    v103 = bottom;
                  if ( v103 <= top )
                  {
LABEL_219:
                    v81 = 0.0;
                    right = 0;
                    top = 0;
                    *(float *)&left = 0.0;
                  }
                }
                v76 = v115;
              }
              v3 = (__m128)COERCE_UNSIGNED_INT((float)right);
              *(float *)&v115 = (float)left;
              *((float *)&v115 + 1) = (float)top;
              v116 = (float)right;
              v117 = (float)SLODWORD(v81);
              if ( v111[0] )
              {
                v95 = COcclusionContext::DrawImage(a2, v68, (__int64)&v115, *((_DWORD *)this + 191));
                v7 = v95;
                EffectiveBounds = v95;
                if ( v95 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x270u, 0LL);
LABEL_172:
                  CShapePtr::~CShapePtr((CShapePtr *)&v124);
LABEL_173:
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x22Cu, 0LL);
                  goto LABEL_99;
                }
              }
              else if ( v76 )
              {
                v108 = COcclusionContext::DrawClippedImage(
                         a2,
                         v68,
                         &v115,
                         v76,
                         _mm_cvtsi128_si32(*(__m128i *)((char *)this + 764)));
                v7 = v108;
                EffectiveBounds = v108;
                if ( v108 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0x277u, 0LL);
                  goto LABEL_172;
                }
              }
              EffectiveBounds = v7;
              CShapePtr::~CShapePtr((CShapePtr *)&v124);
              if ( v7 < 0 )
                goto LABEL_173;
              v7 = 0;
              if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
              {
                v123 = 0;
                v120[0] = _xmm;
                v120[1] = _xmm;
                v122 = 41;
                v120[2] = _xmm;
                v120[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
                v121 = -86;
                v11 = CWindowNode::ApplyTextureToLocalTransform(this);
                EffectiveBounds = v11;
                if ( v11 < 0 )
                {
                  v110 = 563;
                  goto LABEL_141;
                }
                v104 = (CGeometry *)*((_QWORD *)this + 100);
                v124.m128i_i64[0] = 0LL;
                v124.m128i_i8[8] = 0;
                v105 = *(__m128i *)((char *)this + 764);
                if ( v104 )
                {
                  CGeometry::GetShapeData(v104, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v124);
                  v106 = (void ***)v124.m128i_i64[0];
                }
                else
                {
                  CShapePtr::~CShapePtr((CShapePtr *)&v124);
                  v106 = &CRectanglesShape::sc_emptyShape;
                  v124.m128i_i8[8] = 0;
                  v124.m128i_i64[0] = (__int64)&CRectanglesShape::sc_emptyShape;
                }
                EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                                    (_DWORD)a2,
                                    (_DWORD)this,
                                    v68[12].lpVtbl,
                                    (unsigned int)v120,
                                    (__int64)v106,
                                    _mm_cvtsi128_si32(v105));
                CShapePtr::~CShapePtr((CShapePtr *)&v124);
                if ( EffectiveBounds < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x239u, 0LL);
                  goto LABEL_99;
                }
              }
              goto LABEL_8;
            }
          }
          v81 = 0.0;
          right = 0;
          top = 0;
          *(float *)&left = 0.0;
        }
        else
        {
          v81 = *(float *)&rcDst.bottom;
          right = rcDst.right;
          top = rcDst.top;
          left = rcDst.left;
        }
        v112 = left;
        *(float *)&bottom = v81;
        goto LABEL_166;
      }
    }
  }
LABEL_8:
  v11 = COcclusionContext::FlushOcclusionRects(a2);
  EffectiveBounds = v11;
  if ( v11 < 0 )
  {
    v110 = 576;
LABEL_141:
    v58 = v11;
    goto LABEL_96;
  }
  *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 427);
  if ( (*((_BYTE *)this + 888) & 8) == 0 )
    goto LABEL_99;
  v14 = *((_QWORD *)this + 103);
  if ( (v14 & 2) != 0 )
  {
    v15 = (struct IUnknown *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    v16 = (__int64)v15->lpVtbl;
  }
  else
  {
    v16 = *((_QWORD *)this + 103) & 1LL;
    v15 = (struct IUnknown *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v16 )
  {
    if ( v16 != 1 )
      v15 = (struct IUnknown *)v15[2].lpVtbl;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 || *((_BYTE *)this + 745) || (*((_DWORD *)this + 191) & 2) != 0 )
    goto LABEL_99;
  v11 = CWindowNode::EnsureEffectiveSpriteClip(this);
  EffectiveBounds = v11;
  if ( v11 < 0 )
  {
    v110 = 584;
    goto LABEL_141;
  }
  v17 = *((_DWORD *)this + 180);
  v18 = 0;
  v19 = (CRectanglesShape *)*((_QWORD *)this + 110);
  v20 = HIDWORD(*((_QWORD *)this + 90));
  v111[0] = 1;
  v114.m128i_i64[0] = 0LL;
  LODWORD(v115) = v17;
  v114.m128i_i64[1] = __PAIR64__(v20, v17);
  if ( !v19 )
    goto LABEL_59;
  v21 = *(_QWORD *)v19;
  v124 = 0LL;
  v22 = *(__int64 (__fastcall **)(CRectanglesShape *, __m128i *, _QWORD))(v21 + 48);
  if ( (char *)v22 == (char *)CRegionShape::GetTightBounds )
  {
    rcSrc2 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v19 + 16), &rcSrc2) )
    {
      v23 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.left);
      v24 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.top);
      v25 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.right);
      v26 = (__m128i)COERCE_UNSIGNED_INT((float)rcSrc2.bottom);
      *(float *)v124.m128i_i32 = (float)rcSrc2.left;
      *(float *)&v124.m128i_i32[1] = (float)rcSrc2.top;
      *(float *)&v124.m128i_i32[2] = (float)rcSrc2.right;
      *(float *)&v124.m128i_i32[3] = (float)rcSrc2.bottom;
      goto LABEL_23;
    }
LABEL_174:
    v26 = (__m128i)v124.m128i_u32[3];
    v25 = (__m128i)v124.m128i_u32[2];
    v24 = (__m128i)v124.m128i_u32[1];
    v23 = (__m128i)v124.m128i_u32[0];
LABEL_23:
    if ( (_mm_cvtsi128_si32(v23) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v3.m128_f32[0] = (float)(int)*(float *)v23.m128i_i32 - *(float *)v23.m128i_i32;
      v27 = (int)*(float *)v23.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      *(float *)&v112 = *(float *)v23.m128i_i32 + 6291456.25;
      v27 = (int)(v112 << 10) >> 11;
    }
    v28 = (__m128)v23;
    v112 = v27;
    v28.m128_f32[0] = *(float *)v23.m128i_i32 - (float)v27;
    v29 = _mm_and_ps(v28, (__m128)(unsigned int)_xmm);
    if ( v29.m128_f32[0] > 0.00390625 )
      v112 = CFloatFPU::FloorSat(*(float *)v23.m128i_i32);
    if ( (_mm_cvtsi128_si32(v24) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v29.m128_f32[0] = (float)(int)*(float *)v24.m128i_i32 - *(float *)v24.m128i_i32;
      v30 = (int)*(float *)v24.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v29, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      *(float *)&bottom = *(float *)v24.m128i_i32 + 6291456.25;
      v30 = bottom << 10 >> 11;
    }
    v31 = (__m128)v24;
    bottom = v30;
    v31.m128_f32[0] = *(float *)v24.m128i_i32 - (float)v30;
    v32 = _mm_and_ps(v31, (__m128)(unsigned int)_xmm);
    if ( v32.m128_f32[0] > 0.00390625 )
      bottom = CFloatFPU::FloorSat(*(float *)v24.m128i_i32);
    if ( (_mm_cvtsi128_si32(v25) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v32.m128_f32[0] = (float)(int)*(float *)v25.m128i_i32 - *(float *)v25.m128i_i32;
      v33 = (int)*(float *)v25.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v32, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v118 = *(float *)v25.m128i_i32 + 6291456.25;
      v33 = (int)(LODWORD(v118) << 10) >> 11;
    }
    v34 = (__m128)v25;
    v34.m128_f32[0] = *(float *)v25.m128i_i32 - (float)v33;
    v35 = _mm_and_ps(v34, (__m128)(unsigned int)_xmm);
    if ( v35.m128_f32[0] > 0.00390625 )
      v33 = CFloatFPU::CeilingSat(*(float *)v25.m128i_i32);
    if ( (_mm_cvtsi128_si32(v26) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v35.m128_f32[0] = (float)(int)*(float *)v26.m128i_i32 - *(float *)v26.m128i_i32;
      v107.m128_f32[0] = FLOAT_N0_5;
      v36 = (int)*(float *)v26.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v35, v107));
    }
    else
    {
      v118 = *(float *)v26.m128i_i32 + 6291456.25;
      v36 = (int)(LODWORD(v118) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v26.m128i_i32 - (float)v36) & _xmm) > 0.00390625 )
      v36 = CFloatFPU::CeilingSat(*(float *)v26.m128i_i32);
    if ( (int)v112 <= 0 )
    {
      v37 = v114.m128i_i32[0];
    }
    else
    {
      v37 = v112;
      v114.m128i_i32[0] = v112;
    }
    if ( bottom > 0 )
    {
      v7 = bottom;
      v114.m128i_i32[1] = bottom;
    }
    if ( v33 >= (int)v115 )
      v33 = (int)v115;
    else
      v114.m128i_i32[2] = v33;
    if ( v36 < (int)v20 )
    {
      v114.m128i_i32[3] = v36;
      LODWORD(v20) = v36;
    }
    if ( v33 <= v37 || (int)v20 <= v7 )
    {
      v18 = 0;
      v114 = 0uLL;
    }
    else
    {
      v18 = v114.m128i_i32[0];
    }
    *(float *)&v112 = 0.0;
    v38 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)v19 + 64LL);
    if ( v38 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v19 + 2)
                                                                                               + 16LL)) )
LABEL_58:
        v111[0] = 0;
    }
    else
    {
      if ( v38 == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v19, &v112);
      }
      else if ( v38 == CRegionShape::IsRectangles )
      {
        IsRectangles = CRegionShape::IsRectangles(v19, &v112);
      }
      else
      {
        IsRectangles = v38(v19, &v112);
      }
      if ( !IsRectangles || v112 != 1 )
        goto LABEL_58;
    }
LABEL_59:
    v40 = (void ***)*((_QWORD *)this + 110);
    v41 = 0;
    v124 = v114;
    v42 = *((__m128i *)this + 42);
    v115 = v40;
    v43 = v42.m128i_i32[1];
    if ( v42.m128i_i32[0] || (v44 = _mm_srli_si128(v42, 8).m128i_u64[0], (_DWORD)v44) || v43 || HIDWORD(v44) )
    {
      v49 = *((_DWORD *)this + 168);
      v50 = *((_DWORD *)this + 170);
      rcSrc2 = (RECT)*((_OWORD *)this + 43);
      v51 = rcSrc2.top + v50;
      v48 = _mm_cvtsi128_si32((__m128i)rcSrc2) + v49;
      v52 = rcSrc2.bottom - HIDWORD(*((_QWORD *)this + 85));
      v53 = v48;
      if ( (int)(rcSrc2.right - HIDWORD(*((_QWORD *)this + 84))) > v48 )
        v53 = rcSrc2.right - HIDWORD(*((_QWORD *)this + 84));
      if ( v52 <= v51 )
        v52 = v51;
      if ( v48 <= v18 )
        v48 = v124.m128i_i32[0];
      v47 = v124.m128i_i32[1];
      if ( v51 > v124.m128i_i32[1] )
        v47 = v51;
      v46 = v124.m128i_i32[2];
      if ( v53 < v124.m128i_i32[2] )
        v46 = v53;
      v45 = v124.m128i_i32[3];
      if ( v53 >= v124.m128i_i32[2] )
        v53 = v124.m128i_i32[2];
      v112 = v124.m128i_u32[3];
      if ( v52 < v124.m128i_i32[3] )
      {
        v45 = v52;
        v112 = v52;
      }
      if ( v53 > v48 )
      {
        if ( v52 >= v124.m128i_i32[3] )
          v52 = v124.m128i_i32[3];
        if ( v52 > v47 )
        {
LABEL_85:
          v54 = *(_QWORD *)((char *)this + 748);
          if ( (_DWORD)v54
            || (v55 = _mm_srli_si128(*(__m128i *)((char *)this + 748), 8).m128i_u64[0],
                __PAIR64__(HIDWORD(v54), 0) != (unsigned int)v55)
            || HIDWORD(v55) )
          {
            v61 = HIDWORD(*(_QWORD *)((char *)this + 748));
            rcDst = (tagRECT)*((_OWORD *)this + 44);
            v60 = rcDst;
            rcDst.right -= v61;
            rcDst.top += *((_DWORD *)this + 189);
            rcDst.bottom -= HIDWORD(*(_QWORD *)((char *)this + 756));
            v62 = *((_QWORD *)this + 90);
            *(_QWORD *)&rcSrc2.right = v62;
            rcDst.left = *((_DWORD *)this + 187) + _mm_cvtsi128_si32((__m128i)v60);
            *(_QWORD *)&rcSrc2.left = 0LL;
            IntersectRect(&rcDst, &rcDst, &rcSrc2);
            if ( EqualRect(&rcDst, &rcSrc2) )
            {
              v45 = v112;
            }
            else
            {
              if ( rcDst.left > v48 )
                v48 = rcDst.left;
              if ( rcDst.top > v47 )
                v47 = rcDst.top;
              v63 = rcDst.right;
              v64 = v46;
              v65 = rcDst.right < v46;
              if ( rcDst.right < v46 )
                v46 = rcDst.right;
              v45 = v112;
              if ( !v65 )
                v63 = v64;
              v66 = rcDst.bottom;
              if ( rcDst.bottom < (int)v112 )
                v45 = rcDst.bottom;
              if ( v63 <= v48 )
                goto LABEL_225;
              if ( rcDst.bottom >= (int)v112 )
                v66 = v112;
              if ( v66 <= v47 )
              {
LABEL_225:
                *(float *)&v45 = 0.0;
                v46 = 0;
                v47 = 0;
                v48 = 0;
              }
            }
            v40 = v115;
          }
          *(float *)v124.m128i_i32 = (float)v48;
          *(float *)&v124.m128i_i32[1] = (float)v47;
          *(float *)&v124.m128i_i32[2] = (float)v46;
          *(float *)&v124.m128i_i32[3] = (float)v45;
          if ( v111[0] )
          {
            v56 = COcclusionContext::DrawImage(a2, v15, (__int64)&v124, *((_DWORD *)this + 191));
            v41 = v56;
            EffectiveBounds = v56;
            if ( v56 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x270u, 0LL);
              goto LABEL_91;
            }
          }
          else if ( v40 )
          {
            v85 = COcclusionContext::DrawClippedImage(
                    a2,
                    v15,
                    &v124,
                    v40,
                    _mm_cvtsi128_si32(*(__m128i *)((char *)this + 764)));
            v41 = v85;
            EffectiveBounds = v85;
            if ( v85 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0x277u, 0LL);
              goto LABEL_91;
            }
          }
          EffectiveBounds = v41;
          if ( v41 >= 0 )
            goto LABEL_99;
LABEL_91:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x250u, 0LL);
          goto LABEL_99;
        }
      }
      *(float *)&v45 = 0.0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
    }
    else
    {
      v45 = v124.m128i_i32[3];
      v46 = v124.m128i_i32[2];
      v47 = v124.m128i_i32[1];
      v48 = v124.m128i_i32[0];
    }
    v112 = v45;
    goto LABEL_85;
  }
  v109 = v22(v19, &v124, 0LL);
  EffectiveBounds = v109;
  if ( v109 >= 0 )
    goto LABEL_174;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v109, 0x1B2u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x24Bu, 0LL);
LABEL_99:
  if ( v119 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v119 + 16LL))(v119);
  return (unsigned int)EffectiveBounds;
}
