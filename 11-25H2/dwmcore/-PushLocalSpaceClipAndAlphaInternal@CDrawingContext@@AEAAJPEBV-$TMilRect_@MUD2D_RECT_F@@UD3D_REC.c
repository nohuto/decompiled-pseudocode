/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800A360C (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A5060 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180271824 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055430 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800921D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180118820 (-Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x180118BF0 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118E60 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        struct CDrawingContext *a1,
        __int128 *a2,
        __int64 a3,
        bool (__fastcall *a4)(CRegionShape *__hidden this, unsigned int *))
{
  CRoundedRectangleShape *v4; // r13
  float v5; // xmm14_4
  struct _LIST_ENTRY **p_Blink; // rsi
  __int128 *v8; // r12
  BOOLEAN v10; // al
  char (__fastcall *v11)(CRoundedRectangleShape *, unsigned int *); // rdx
  bool (__fastcall *v12)(CRectanglesShape *__hidden, unsigned int *); // r8
  CRectanglesShape *v13; // rcx
  __int64 v14; // rax
  bool (__fastcall *v15)(CRectanglesShape *__hidden, unsigned int *); // rax
  __int64 v16; // rax
  __int64 v17; // rax
  const struct CShape *v18; // rbx
  const struct CShape *v19; // r15
  const struct CMILMatrix *v20; // r9
  enum D2D1_ANTIALIAS_MODE v21; // edx
  char v22; // r12
  struct CCpuClipAntialiasSink *v23; // r13
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  CShape *v32; // r15
  __int64 v33; // rax
  char (__fastcall *v34)(CRoundedRectangleShape *, unsigned int *); // rax
  int v35; // eax
  __int64 v36; // rbx
  char v37; // al
  __int64 v38; // rax
  int v39; // eax
  __m128 v40; // xmm2
  float v41; // xmm8_4
  float v42; // xmm7_4
  float v43; // xmm4_4
  float v44; // xmm6_4
  __int64 v45; // rax
  int v46; // eax
  __m128 v47; // xmm0
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm6_4
  CPolygonShape *v57; // rsi
  int v58; // ebx
  __int64 (__fastcall *v59)(__int64, struct D2D_RECT_F *, __int64); // rax
  struct D2D_RECT_F *v60; // rcx
  unsigned __int64 v61; // r15
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // esi
  int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rax
  int v68; // r15d
  unsigned int v69; // eax
  bool v70; // zf
  int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  float v74; // xmm6_4
  const struct CMILMatrix *v75; // rdx
  char v76; // cl
  bool v77; // bl
  __int64 (__fastcall *v78)(CRoundedRectangleShape *, const struct CMILMatrix *, struct D2D_RECT_F *); // rax
  int D2DGeometry; // eax
  struct _LIST_ENTRY *v80; // r12
  CVisual *v81; // r13
  int v82; // eax
  int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // ecx
  unsigned int v87; // eax
  unsigned int v88; // eax
  CRectanglesShape *v89; // rcx
  __int64 v90; // rax
  char (__fastcall *v91)(CRoundedRectangleShape *, unsigned int *); // rax
  char IsRectangles; // al
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 *v96; // rax
  __int64 v97; // rbx
  void (__fastcall ***v98)(_QWORD); // rcx
  __int64 *v99; // rax
  __int128 *v100; // rdx
  unsigned int v101; // xmm1_4
  unsigned int v102; // xmm0_4
  int v103; // eax
  __int64 v104; // rcx
  char v105; // al
  float left; // xmm8_4
  float top; // xmm7_4
  float right; // xmm6_4
  float bottom; // xmm0_4
  int v110; // eax
  unsigned int v111; // eax
  int v112; // esi
  float v113; // xmm0_4
  int v114; // eax
  float v115; // xmm0_4
  int v116; // eax
  float v117; // xmm0_4
  int v118; // eax
  float v119; // xmm0_4
  CMILMatrix *v120; // r8
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // esi
  int v125; // eax
  unsigned int v126; // eax
  unsigned int v127; // ecx
  __int64 v128; // rax
  int v129; // r15d
  unsigned int v130; // eax
  unsigned int v131; // ebx
  unsigned int v132; // esi
  int v133; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  void *v136; // rax
  void *v137; // r13
  int v138; // eax
  int v139; // r15d
  float v140; // xmm1_4
  int v141; // eax
  int v142; // eax
  float v143; // xmm6_4
  float v144; // xmm7_4
  float v145; // xmm8_4
  float v146; // xmm0_4
  int v147; // eax
  unsigned int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  int v152; // eax
  int v153; // r15d
  __int64 v154; // r12
  int v155; // eax
  int v156; // eax
  int v157; // eax
  int v158; // r14d
  __int64 v159; // rcx
  void (__fastcall *v160)(__int64, CRoundedRectangleShape **); // rax
  int v161; // eax
  int v162; // eax
  int v163; // [rsp+20h] [rbp-E0h]
  int v164; // [rsp+20h] [rbp-E0h]
  bool v165; // [rsp+40h] [rbp-C0h] BYREF
  CRoundedRectangleShape *v166; // [rsp+48h] [rbp-B8h] BYREF
  __int128 *v167; // [rsp+50h] [rbp-B0h]
  bool (__fastcall *v168)(CRegionShape *__hidden, unsigned int *); // [rsp+58h] [rbp-A8h]
  struct D2D_RECT_F v169; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v170; // [rsp+70h] [rbp-90h] BYREF
  __int128 v171; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v172; // [rsp+90h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4 = 0LL;
  v5 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  p_Blink = 0LL;
  v8 = a2;
  v168 = a4;
  v167 = a2;
  v166 = 0LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v10 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start);
    v11 = CRoundedRectangleShape::IsRectangles;
    v12 = CRectanglesShape::IsRectangles;
    a4 = CRegionShape::IsRectangles;
    if ( !v10 )
      goto LABEL_3;
    v89 = *(CRectanglesShape **)(a3 + 8);
    if ( v89 )
    {
      v90 = *(_QWORD *)v89;
      v169.left = 0.0;
      v91 = *(char (__fastcall **)(CRoundedRectangleShape *, unsigned int *))(v90 + 64);
      if ( v91 == CRoundedRectangleShape::IsRectangles )
      {
        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v89 + 2)
                                                                                                 + 16LL)) )
          goto LABEL_130;
LABEL_129:
        *(_DWORD *)(a3 + 180) |= 1u;
        goto LABEL_130;
      }
      if ( (char *)v91 == (char *)CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v89, (unsigned int *)&v169);
      }
      else if ( (char *)v91 == (char *)CRegionShape::IsRectangles )
      {
        IsRectangles = CRegionShape::IsRectangles(v89, (unsigned int *)&v169);
      }
      else
      {
        IsRectangles = ((__int64 (__fastcall *)(CRectanglesShape *, struct D2D_RECT_F *, bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *), bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v91)(
                         v89,
                         &v169,
                         CRectanglesShape::IsRectangles,
                         CRegionShape::IsRectangles);
      }
      if ( IsRectangles && LODWORD(v169.left) == 1 )
        goto LABEL_129;
    }
LABEL_130:
    v93 = CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(a3 + 108));
    v11 = CRoundedRectangleShape::IsRectangles;
    v12 = CRectanglesShape::IsRectangles;
    if ( v93 )
      *(_DWORD *)(a3 + 180) |= 4u;
LABEL_3:
    v13 = *(CRectanglesShape **)(a3 + 8);
    if ( !v13 )
    {
LABEL_6:
      v4 = *(CRoundedRectangleShape **)(a3 + 8);
      v166 = v4;
      goto LABEL_7;
    }
    v14 = *(_QWORD *)v13;
    v169.left = 0.0;
    v15 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(v14 + 64);
    if ( (char *)v15 == (char *)CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v13 + 2)
                                                                                               + 16LL)) )
        goto LABEL_6;
    }
    else
    {
      if ( v15 == CRectanglesShape::IsRectangles )
      {
        v105 = CRectanglesShape::IsRectangles(v13, (unsigned int *)&v169);
      }
      else if ( v15 == a4 )
      {
        v105 = CRegionShape::IsRectangles(v13, (unsigned int *)&v169);
      }
      else
      {
        v105 = ((__int64 (__fastcall *)(CRectanglesShape *, struct D2D_RECT_F *, bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *)))v15)(
                 v13,
                 &v169,
                 CRectanglesShape::IsRectangles);
      }
      if ( !v105 || LODWORD(v169.left) != 1 )
        goto LABEL_6;
    }
    if ( *(char *)(a3 + 172) >> 6 == 1 )
      goto LABEL_156;
    if ( *(char *)(a3 + 172) >> 6 < 0 )
      goto LABEL_7;
    v11 = (char (__fastcall *)(CRoundedRectangleShape *, unsigned int *))*(unsigned __int8 *)(a3 + 173);
    if ( (char)(4 * (_BYTE)v11) >> 6 != 1 )
    {
      if ( (char)(4 * (_BYTE)v11) >> 6 < 0 )
      {
LABEL_154:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 112) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 124) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a3 + 172) |= 0xC0u;
          goto LABEL_7;
        }
        goto LABEL_155;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 136) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 120) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a3 + 168) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        LOBYTE(v11) = (unsigned __int8)v11 | 0x30;
        *(_BYTE *)(a3 + 173) = (_BYTE)v11;
        goto LABEL_154;
      }
      *(_BYTE *)(a3 + 173) = (unsigned __int8)v11 & 0xCF | 0x10;
    }
LABEL_155:
    *(_BYTE *)(a3 + 172) = *(_BYTE *)(a3 + 172) & 0x3F | 0x40;
LABEL_156:
    if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3 + 108) )
      goto LABEL_6;
LABEL_7:
    if ( *(_BYTE *)(a3 + 184) && *(_BYTE *)(*((_QWORD *)a1 + 94) - 8LL) )
    {
      v16 = *(_QWORD *)(a3 + 24);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 56);
        v18 = *(const struct CShape **)(v17 + 8);
        if ( !v18 )
          v18 = *(const struct CShape **)(a3 + 8);
        v19 = *(const struct CShape **)(v17 + 24);
        v20 = (const struct CMILMatrix *)(v17 + 40);
        v21 = *(_DWORD *)(v17 + 108);
        v22 = *(_BYTE *)(v17 + 116);
        v23 = *(struct CCpuClipAntialiasSink **)v17;
      }
      else
      {
        v80 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 993);
        v19 = 0LL;
        v18 = *(const struct CShape **)(a3 + 8);
        v81 = *(CVisual **)a3;
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, char (__fastcall *)(CRoundedRectangleShape *, unsigned int *), bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *), bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v80->Flink[11].Blink)(
               v80,
               v11,
               v12,
               a4) )
        {
          p_Blink = (struct _LIST_ENTRY **)((char *)v81 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v81);
          if ( TreeDataListHead )
          {
            for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
            {
              if ( i[2].Flink == v80 )
              {
                p_Blink = &i[-22].Blink;
                break;
              }
            }
          }
        }
        v20 = (const struct CMILMatrix *)p_Blink[14];
        v21 = *((_DWORD *)a1 + 61) != 0;
        v22 = 0;
        v23 = 0LL;
      }
      *(_QWORD *)&v170.right = *(_QWORD *)a3;
      *(_QWORD *)&v169.left = v23;
      *(_QWORD *)&v170.left = 2LL;
      v165 = 0;
      v24 = CScopedClipStack::PushCpuClipToScope(
              (struct CDrawingContext *)((char *)a1 + 744),
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              &v165);
      v25 = v24;
      LODWORD(p_Blink) = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC81u, 0LL);
        goto LABEL_230;
      }
      v26 = *((unsigned int *)a1 + 68);
      v27 = *((unsigned int *)a1 + 69);
      if ( (_DWORD)v26 != (_DWORD)v27 )
        goto LABEL_15;
      v131 = 2 * v27;
      if ( (unsigned __int64)(2 * v27) > 0xFFFFFFFF )
      {
        v30 = 98LL;
      }
      else
      {
        if ( v131 <= 0x40 )
          v131 = 64;
        v132 = 16 * v26;
        if ( (unsigned __int64)(16 * v26) <= 0xFFFFFFFF )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v131 <= 0x10 )
          {
            v25 = -2147024809;
          }
          else
          {
            v136 = MIDL_user_allocate(16LL * v131);
            v137 = v136;
            if ( v136 )
            {
              memcpy_0(v136, *((const void **)a1 + 33), v132);
              operator delete(*((void **)a1 + 33));
              *((_QWORD *)a1 + 33) = v137;
              v23 = *(struct CCpuClipAntialiasSink **)&v169.left;
              *((_DWORD *)a1 + 69) = v131;
LABEL_15:
              *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * *((unsigned int *)a1 + 68)) = v170;
              v28 = *((_DWORD *)a1 + 71);
              v29 = *((_DWORD *)a1 + 68) + 1;
              *((_DWORD *)a1 + 68) = v29;
              if ( v28 <= v29 )
                v28 = v29;
              v25 = 0;
              *((_DWORD *)a1 + 71) = v28;
              if ( v165 )
              {
                *((_BYTE *)a1 + 8066) = 1;
                LODWORD(p_Blink) = 0;
                goto LABEL_23;
              }
              goto LABEL_22;
            }
            v23 = *(struct CCpuClipAntialiasSink **)&v169.left;
            v25 = -2147024882;
          }
          v30 = 104LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v25,
            v163);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v25,
            v164);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC84u, 0LL);
          v165 = 0;
          CScopedClipStack::PopCpuClipFromScope((struct CDrawingContext *)((char *)a1 + 744), a1, &v165);
LABEL_22:
          LODWORD(p_Blink) = v25;
          if ( v25 >= 0 )
          {
LABEL_23:
            if ( *(_QWORD *)(a3 + 24) )
            {
              if ( !v19 )
              {
                v31 = *((_QWORD *)a1 + 94);
                if ( v31 != *((_QWORD *)a1 + 93) )
                {
                  if ( *(_QWORD *)(v31 - 176) )
                  {
                    v32 = *(CShape **)(*((_QWORD *)a1 + 337) - 40LL);
                    if ( v32 )
                    {
                      v33 = *(_QWORD *)v32;
                      v169.left = 0.0;
                      v34 = *(char (__fastcall **)(CRoundedRectangleShape *, unsigned int *))(v33 + 64);
                      if ( v34 == CRoundedRectangleShape::IsRectangles )
                      {
                        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v32 + 2) + 16LL)) )
                        {
LABEL_30:
                          *(_QWORD *)&v169.left = 0LL;
                          v35 = CShape::CopyShape(v32, 0LL, (struct CShape **)&v169);
                          LODWORD(p_Blink) = v35;
                          if ( v35 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x1159u, 0LL);
                            return (unsigned int)p_Blink;
                          }
                          *(_QWORD *)&v170.left = 0LL;
                          LOBYTE(v170.right) = 0;
                          CShapePtr::~CShapePtr((CShapePtr *)&v170);
                          v36 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 56LL);
                          CShapePtr::~CShapePtr((CShapePtr *)(v36 + 24));
                          *(_QWORD *)(v36 + 24) = *(_QWORD *)&v169.left;
                          *(_BYTE *)(v36 + 32) = 1;
                          *(_QWORD *)&v170.left = 0LL;
                          LOBYTE(v170.right) = 0;
                          CShapePtr::~CShapePtr((CShapePtr *)&v170);
                        }
                      }
                      else
                      {
                        if ( (char *)v34 == (char *)CRectanglesShape::IsRectangles )
                        {
                          v37 = CRectanglesShape::IsRectangles(v32, (unsigned int *)&v169);
                        }
                        else if ( (char *)v34 == (char *)CRegionShape::IsRectangles )
                        {
                          v37 = CRegionShape::IsRectangles(v32, (unsigned int *)&v169);
                        }
                        else
                        {
                          v37 = v34(v32, (unsigned int *)&v169);
                        }
                        if ( !v37 || LODWORD(v169.left) != 1 )
                          goto LABEL_30;
                      }
                    }
                  }
                }
              }
              if ( v22 && !v23 )
              {
                v94 = *(_QWORD *)(a3 + 24);
                v95 = *(_QWORD *)(*((_QWORD *)a1 + 94) - 16LL);
                if ( *(_QWORD *)(v95 + 24) == *(_QWORD *)(v95 + 16) )
                {
                  v96 = *(__int64 **)(v94 + 56);
                  v97 = *v96;
                  *v96 = 0LL;
                }
                else
                {
                  v98 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(v95 + 24) - 432LL);
                  v99 = *(__int64 **)(v94 + 56);
                  v97 = *v99;
                  *v99 = (__int64)v98;
                  if ( v98 )
                    (**v98)(v98);
                }
                if ( v97 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 8LL))(v97);
              }
            }
LABEL_37:
            v4 = v166;
            goto LABEL_38;
          }
LABEL_230:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x114Bu, 0LL);
          return (unsigned int)p_Blink;
        }
        v30 = 101LL;
      }
      v25 = -2147024362;
      goto LABEL_21;
    }
    v57 = *(CPolygonShape **)(a3 + 8);
    v58 = -2003304309;
    v169 = 0LL;
    if ( !v57 )
      goto LABEL_69;
    v59 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v57 + 48LL);
    if ( v59 == CRectanglesShape::GetTightBounds )
    {
      v60 = (struct D2D_RECT_F *)*((_QWORD *)v57 + 2);
      if ( *((struct D2D_RECT_F **)v57 + 3) == v60 )
        goto LABEL_70;
      v61 = 1LL;
      v169 = *v60;
      v62 = *((_QWORD *)v57 + 2);
      if ( (unsigned __int64)((*((_QWORD *)v57 + 3) - v62) >> 4) > 1 )
      {
        v154 = 16LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
            &v169.left,
            (float *)(v154 + v62));
          v62 = *((_QWORD *)v57 + 2);
          v154 += 16LL;
          ++v61;
        }
        while ( v61 < (*((_QWORD *)v57 + 3) - v62) >> 4 );
      }
LABEL_66:
      if ( a3 != -108 && !CMILMatrix::IsIdentity<0>(a3 + 108) )
        CMILMatrix::Transform2DBoundsHelper<0>(v63, &v169, &v169.left);
LABEL_70:
      v64 = *((_DWORD *)a1 + 61);
      *(_QWORD *)&v170.right = *(_QWORD *)a3;
      v65 = *((_DWORD *)a1 + 69);
      *(_QWORD *)&v170.left = 3LL;
      if ( *((_DWORD *)a1 + 68) == v65 )
      {
        v133 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
        v68 = v133;
        if ( v133 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v133,
            (_DWORD)a1 + 264);
          LODWORD(p_Blink) = v68;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xCC6u, 0LL);
LABEL_211:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x1177u, 0LL);
          return (unsigned int)p_Blink;
        }
      }
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v170;
      v66 = *((_DWORD *)a1 + 71);
      if ( v66 <= *((_DWORD *)a1 + 68) )
        v66 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v66;
      v67 = *((_QWORD *)a1 + 94);
      if ( v67 == *((_QWORD *)a1 + 93) || !*(_QWORD *)(v67 - 168) )
      {
        if ( v64 )
        {
          v112 = 0x7FFFFFFF;
          v113 = v169.left - 0.5;
          if ( (float)(v169.left - 0.5) < -2147483600.0 )
          {
            v114 = 0x80000000;
          }
          else if ( v113 >= 2147483600.0 )
          {
            v114 = 0x7FFFFFFF;
          }
          else
          {
            v114 = (int)ceilf_0(v113);
          }
          v115 = v169.top - 0.5;
          left = (float)v114;
          if ( (float)(v169.top - 0.5) < -2147483600.0 )
          {
            v116 = 0x80000000;
          }
          else if ( v115 >= 2147483600.0 )
          {
            v116 = 0x7FFFFFFF;
          }
          else
          {
            v116 = (int)ceilf_0(v115);
          }
          v117 = v169.right - 0.5;
          top = (float)v116;
          if ( (float)(v169.right - 0.5) < -2147483600.0 )
          {
            v118 = 0x80000000;
          }
          else if ( v117 >= 2147483600.0 )
          {
            v118 = 0x7FFFFFFF;
          }
          else
          {
            v118 = (int)ceilf_0(v117);
          }
          v119 = v169.bottom - 0.5;
          right = (float)v118;
          if ( (float)(v169.bottom - 0.5) < -2147483600.0 )
          {
            v112 = 0x80000000;
          }
          else if ( v119 < 2147483600.0 )
          {
            v112 = (int)ceilf_0(v119);
          }
          bottom = (float)v112;
        }
        else
        {
          left = v169.left;
          top = v169.top;
          right = v169.right;
          bottom = v169.bottom;
        }
        v110 = *((_DWORD *)a1 + 787);
        *(float *)&v170.left = left;
        *(float *)&v170.top = top;
        *(float *)&v170.right = right;
        *(float *)&v170.bottom = bottom;
        if ( *((_DWORD *)a1 + 786) == v110 )
        {
          v122 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
                   (char *)a1 + 3136,
                   v11,
                   v12,
                   a4);
          v68 = v122;
          if ( v122 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x83,
              (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)(unsigned int)v122,
              (_DWORD)a1 + 3136);
            v69 = 513;
LABEL_191:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, v69, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xCCBu, 0LL);
            v123 = *((_DWORD *)a1 + 68);
            if ( v123 )
              *((_DWORD *)a1 + 68) = v123 - 1;
            LODWORD(p_Blink) = v68;
            if ( v68 < 0 )
              goto LABEL_211;
LABEL_194:
            if ( v4 )
            {
LABEL_38:
              v38 = *((_QWORD *)a1 + 94);
              v170 = 0LL;
              if ( v38 != *((_QWORD *)a1 + 93) )
              {
                if ( *(_QWORD *)(v38 - 184) )
                {
                  v39 = *((_DWORD *)a1 + 780);
                  if ( v39 )
                  {
                    v40 = *(__m128 *)(*((_QWORD *)a1 + 389) + 16LL * (unsigned int)(v39 - 1));
                    LODWORD(v41) = _mm_shuffle_ps(v40, v40, 255).m128_u32[0];
                    LODWORD(v42) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
                    v43 = v40.m128_f32[0];
                    LODWORD(v44) = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
                  }
                  else
                  {
                    v43 = *(float *)&_xmm;
                    LODWORD(v41) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
                    LODWORD(v42) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
                    LODWORD(v44) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
                  }
                }
                else
                {
                  v159 = *(_QWORD *)(v38 - 192);
                  v160 = *(void (__fastcall **)(__int64, CRoundedRectangleShape **))(*(_QWORD *)v159 + 88LL);
                  if ( (char *)v160 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
                    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v159, &v166);
                  else
                    v160(v159, &v166);
                  v43 = 0.0;
                  v44 = 0.0;
                  v42 = (float)(int)v166;
                  v41 = (float)SHIDWORD(v166);
                }
                v45 = *((_QWORD *)a1 + 94);
                if ( v45 != *((_QWORD *)a1 + 93) )
                {
                  if ( *(_QWORD *)(v45 - 168) )
                  {
                    v46 = *((_DWORD *)a1 + 786);
                    if ( v46 )
                      v47 = *(__m128 *)(*((_QWORD *)a1 + 392) + 16LL * (unsigned int)(v46 - 1));
                    else
                      v47 = (__m128)_xmm;
                    if ( v47.m128_f32[0] > v43 )
                      v43 = v47.m128_f32[0];
                    v48 = v44;
                    v49 = _mm_shuffle_ps(v47, v47, 85).m128_f32[0];
                    if ( v49 > v44 )
                    {
                      v44 = v49;
                      v48 = v49;
                    }
                    v50 = v48;
                    v51 = _mm_shuffle_ps(v47, v47, 170).m128_f32[0];
                    v52 = v42;
                    if ( v42 > v51 )
                    {
                      v42 = v51;
                      v52 = v51;
                    }
                    v53 = v41;
                    v54 = _mm_shuffle_ps(v47, v47, 255).m128_f32[0];
                    if ( v41 > v54 )
                    {
                      v41 = v54;
                      v53 = v54;
                      v50 = v48;
                    }
                    if ( v52 <= v43 || v53 <= v50 )
                      goto LABEL_268;
                  }
                }
                if ( v42 <= v43 || v41 <= v44 )
                {
LABEL_268:
                  *(_BYTE *)v168 = 1;
                  return (unsigned int)p_Blink;
                }
              }
              v8 = v167;
              goto LABEL_59;
            }
            v124 = *((_DWORD *)a1 + 61);
            if ( *(_QWORD *)a3 )
            {
              *(_QWORD *)&v170.right = *(_QWORD *)a3;
              v125 = *((_DWORD *)a1 + 69);
              *(_QWORD *)&v170.left = 1LL;
              if ( *((_DWORD *)a1 + 68) == v125 )
              {
                v151 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
                v129 = v151;
                if ( v151 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)(unsigned int)v151,
                    (_DWORD)a1 + 264);
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0xBF3u, 0LL);
                  LODWORD(p_Blink) = v129;
                  goto LABEL_250;
                }
              }
              LOBYTE(v4) = 1;
              *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * *((unsigned int *)a1 + 68)) = v170;
              v126 = *((_DWORD *)a1 + 71);
              v127 = *((_DWORD *)a1 + 68) + 1;
              *((_DWORD *)a1 + 68) = v127;
              if ( v126 <= v127 )
                v126 = v127;
              *((_DWORD *)a1 + 71) = v126;
            }
            v128 = *((_QWORD *)a1 + 94);
            if ( v128 == *((_QWORD *)a1 + 93) || !*(_QWORD *)(v128 - 184) )
            {
              if ( v124 )
              {
                v143 = (float)(int)CFloatFPU::CeilingSat(v169.left - 0.5);
                v144 = (float)(int)CFloatFPU::CeilingSat(v169.top - 0.5);
                v145 = (float)(int)CFloatFPU::CeilingSat(v169.right - 0.5);
                v146 = (float)(int)CFloatFPU::CeilingSat(v169.bottom - 0.5);
              }
              else
              {
                v143 = v169.left;
                v144 = v169.top;
                v145 = v169.right;
                v146 = v169.bottom;
              }
              v147 = *((_DWORD *)a1 + 781);
              *(float *)&v170.left = v143;
              *(float *)&v170.top = v144;
              *(float *)&v170.right = v145;
              *(float *)&v170.bottom = v146;
              if ( *((_DWORD *)a1 + 780) == v147 )
              {
                v149 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
                         (char *)a1 + 3112,
                         v11,
                         v12,
                         a4);
                LODWORD(p_Blink) = v149;
                if ( v149 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)(unsigned int)v149,
                    (_DWORD)a1 + 3112);
                  v130 = 252;
                  v129 = (int)p_Blink;
                  goto LABEL_254;
                }
              }
              *(struct tagRECT *)(*((_QWORD *)a1 + 389) + 16LL * (unsigned int)(*((_DWORD *)a1 + 780))++) = v170;
              v148 = *((_DWORD *)a1 + 783);
              if ( v148 <= *((_DWORD *)a1 + 780) )
                v148 = *((_DWORD *)a1 + 780);
              v129 = 0;
              *((_DWORD *)a1 + 783) = v148;
            }
            else
            {
              v129 = CD2DClipStack::Push(
                       (struct CDrawingContext *)((char *)a1 + 3112),
                       &v169,
                       (enum D2D1_ANTIALIAS_MODE)(v124 != 0));
              LODWORD(p_Blink) = v129;
              if ( v129 < 0 )
              {
                v130 = 256;
LABEL_254:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)p_Blink, v130, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0xBF8u, 0LL);
                v129 = (int)p_Blink;
                if ( (_BYTE)v4 )
                {
                  v150 = *((_DWORD *)a1 + 68);
                  if ( v150 )
                  {
                    *((_DWORD *)a1 + 68) = v150 - 1;
                    goto LABEL_250;
                  }
                }
LABEL_249:
                LODWORD(p_Blink) = v129;
                if ( v129 >= 0 )
                  goto LABEL_37;
LABEL_250:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0x1180u, 0LL);
                return (unsigned int)p_Blink;
              }
            }
            ++*(_QWORD *)(*((_QWORD *)a1 + 94) - 184LL);
            *((_BYTE *)a1 + 8065) = 1;
            goto LABEL_249;
          }
        }
        *(struct tagRECT *)(*((_QWORD *)a1 + 392) + 16LL * (unsigned int)(*((_DWORD *)a1 + 786))++) = v170;
        v111 = *((_DWORD *)a1 + 789);
        if ( v111 <= *((_DWORD *)a1 + 786) )
          v111 = *((_DWORD *)a1 + 786);
        LODWORD(p_Blink) = 0;
        *((_DWORD *)a1 + 789) = v111;
      }
      else
      {
        LODWORD(p_Blink) = CD2DClipStack::Push(
                             (struct CDrawingContext *)((char *)a1 + 3136),
                             &v169,
                             (enum D2D1_ANTIALIAS_MODE)(v64 != 0));
        v68 = (int)p_Blink;
        if ( (int)p_Blink < 0 )
        {
          v69 = 517;
          goto LABEL_191;
        }
      }
      ++*(_QWORD *)(*((_QWORD *)a1 + 94) - 168LL);
      goto LABEL_194;
    }
    if ( (char *)v59 == (char *)CRegionShape::GetTightBounds )
    {
      v170 = 0LL;
      if ( !FastRegion::CRegion::GetBoundingRect((LONG **)v57 + 2, &v170) )
        goto LABEL_70;
      v169.left = (float)v170.left;
      v169.top = (float)v170.top;
      v169.right = (float)v170.right;
      v169.bottom = (float)v170.bottom;
      goto LABEL_66;
    }
    v120 = (CMILMatrix *)(a3 + 108);
    v121 = (char *)v59 == (char *)CRoundedRectangleShape::GetTightBounds
         ? CRoundedRectangleShape::GetTightBounds(v57, &v169, v120)
         : ((__int64 (__fastcall *)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *, bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v59)(
             v57,
             &v169,
             v120,
             a4);
    v58 = v121;
    LODWORD(p_Blink) = v121;
    if ( v121 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v121, 0x140u, 0LL);
    }
    else
    {
LABEL_69:
      LODWORD(p_Blink) = v58;
      if ( v58 >= 0 )
        goto LABEL_70;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1173u, 0LL);
    return (unsigned int)p_Blink;
  }
LABEL_59:
  v55 = *(float *)(a3 + 36);
  if ( v4 )
    goto LABEL_77;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 36) - 1.0) & _xmm) < 0.0000011920929 )
    return (unsigned int)p_Blink;
  if ( !*(_BYTE *)(a3 + 189) )
  {
LABEL_77:
    v70 = *(_BYTE *)(a3 + 189) == 0;
    *(_QWORD *)&v170.right = *(_QWORD *)a3;
    v71 = *((_DWORD *)a1 + 69);
    *(_QWORD *)&v169.left = 0LL;
    *(_QWORD *)&v170.left = 8LL;
    if ( v70 )
    {
      if ( *((_DWORD *)a1 + 68) == v71 )
      {
        v138 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
        v139 = v138;
        if ( v138 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v138,
            (_DWORD)a1 + 264);
          LODWORD(p_Blink) = v139;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v139, 0x11E6u, 0LL);
LABEL_234:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v139, 0x11A0u, 0LL);
          goto LABEL_235;
        }
      }
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v170;
      v72 = *((_DWORD *)a1 + 71);
      if ( v72 <= *((_DWORD *)a1 + 68) )
        v72 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v72;
      if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793) )
      {
        v141 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160);
        v139 = v141;
        if ( v141 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v141,
            (_DWORD)a1 + 3160);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v139, 0x11EAu, 0LL);
          v142 = *((_DWORD *)a1 + 68);
          LODWORD(p_Blink) = v139;
          if ( v142 )
            *((_DWORD *)a1 + 68) = v142 - 1;
          goto LABEL_234;
        }
      }
      *(_DWORD *)(*((_QWORD *)a1 + 395) + 4LL * (unsigned int)(*((_DWORD *)a1 + 792))++) = 1065353216;
      v73 = *((_DWORD *)a1 + 795);
      if ( v73 <= *((_DWORD *)a1 + 792) )
        v73 = *((_DWORD *)a1 + 792);
      *((_DWORD *)a1 + 795) = v73;
      v74 = *(float *)(a3 + 36);
LABEL_85:
      v172 = 0LL;
      v171 = 0LL;
      if ( !v4 )
        goto LABEL_139;
      if ( *(_QWORD *)&v169.left )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v169.left + 16LL))(*(_QWORD *)&v169.left);
      v75 = (const struct CMILMatrix *)(a3 + 108);
      v76 = *(_BYTE *)(a3 + 173);
      *(_QWORD *)&v169.left = 0LL;
      if ( (v76 & 0x20) != 0 || 4 * (v76 & 0xF0) == 0 )
      {
        if ( (v76 & 0x20) != 0 )
        {
          v77 = 0;
          v78 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct D2D_RECT_F *))(*(_QWORD *)v4 + 24LL);
LABEL_91:
          v75 = 0LL;
          goto LABEL_92;
        }
        LODWORD(v140) = COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 136) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 120) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a3 + 168) & _xmm))
                        - 1.0) & _xmm;
        *(_BYTE *)(a3 + 173) = v76 & 0xCF | (32 * (v140 < 0.000081380211) + 16);
        v77 = v140 >= 0.000081380211;
        v78 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct D2D_RECT_F *))(*(_QWORD *)v4 + 24LL);
        if ( v140 < 0.000081380211 )
          goto LABEL_91;
      }
      else
      {
        v77 = 1;
        v78 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct D2D_RECT_F *))(*(_QWORD *)v4 + 24LL);
      }
LABEL_92:
      if ( (char *)v78 == (char *)CRoundedRectangleShape::GetD2DGeometry )
      {
        D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v4, v75, (struct ID2D1Geometry **)&v169, (__int64)a4);
      }
      else if ( (char *)v78 == (char *)CRegionShape::GetD2DGeometry )
      {
        D2DGeometry = CRegionShape::GetD2DGeometry((struct ID2D1Geometry **)v4, v75, (struct ID2D1Geometry **)&v169);
      }
      else if ( (char *)v78 == (char *)CPathSegmentsShape::GetD2DGeometry )
      {
        D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v4, v75, (struct ID2D1Geometry **)&v169);
      }
      else
      {
        D2DGeometry = v78(v4, v75, &v169);
      }
      LODWORD(p_Blink) = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x9ABu, 0LL);
        if ( (_DWORD)p_Blink != -2003238895 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)p_Blink, 0x11B5u, 0LL);
          goto LABEL_143;
        }
        LODWORD(p_Blink) = 0;
        *(_BYTE *)v168 = 1;
        goto LABEL_299;
      }
      if ( !v77 )
      {
        v100 = &v171;
        v101 = *(_DWORD *)(a3 + 112);
        LODWORD(v171) = *(_DWORD *)(a3 + 108);
        *(_QWORD *)((char *)&v171 + 4) = __PAIR64__(*(_DWORD *)(a3 + 124), v101);
        v102 = *(_DWORD *)(a3 + 156);
        HIDWORD(v171) = *(_DWORD *)(a3 + 128);
        v172 = __PAIR64__(*(_DWORD *)(a3 + 160), v102);
        goto LABEL_142;
      }
LABEL_139:
      v100 = 0LL;
LABEL_142:
      v103 = CDrawingContext::PushD2DLayer(
               a1,
               *(_QWORD *)a3,
               v8,
               *(__int64 *)&v169.left,
               (__int64)v100,
               v74,
               *(_BYTE *)(a3 + 184),
               *(_DWORD *)(a3 + 180));
      LODWORD(p_Blink) = v103;
      if ( v103 >= 0 )
      {
LABEL_143:
        v104 = *(_QWORD *)&v169.left;
        if ( !*(_QWORD *)&v169.left )
          return (unsigned int)p_Blink;
LABEL_144:
        *(_QWORD *)&v169.left = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
        return (unsigned int)p_Blink;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x11C4u, 0LL);
LABEL_299:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v169);
      return (unsigned int)p_Blink;
    }
    if ( *((_DWORD *)a1 + 68) == v71
      && (v152 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264),
          v153 = v152,
          v152 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v152,
        (_DWORD)a1 + 264);
      LODWORD(p_Blink) = v153;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v153, 0x11E6u, 0LL);
    }
    else
    {
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v170;
      v87 = *((_DWORD *)a1 + 71);
      if ( v87 <= *((_DWORD *)a1 + 68) )
        v87 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v87;
      if ( *((_DWORD *)a1 + 792) != *((_DWORD *)a1 + 793)
        || (v155 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160), v153 = v155, v155 >= 0) )
      {
        *(float *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = v55;
        v74 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v88 = *((_DWORD *)a1 + 795);
        if ( v88 <= ++*((_DWORD *)a1 + 792) )
          v88 = *((_DWORD *)a1 + 792);
        *((_DWORD *)a1 + 795) = v88;
        goto LABEL_85;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v155,
        (_DWORD)a1 + 3160);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v153, 0x11EAu, 0LL);
      v156 = *((_DWORD *)a1 + 68);
      LODWORD(p_Blink) = v153;
      if ( v156 )
        *((_DWORD *)a1 + 68) = v156 - 1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v153, 0x1199u, 0LL);
LABEL_235:
    v104 = *(_QWORD *)&v169.left;
    if ( !*(_QWORD *)&v169.left )
      return (unsigned int)p_Blink;
    goto LABEL_144;
  }
  v82 = *((_DWORD *)a1 + 792);
  if ( v82 )
    v5 = *(float *)(*((_QWORD *)a1 + 395) + 4LL * (unsigned int)(v82 - 1));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - v5) & _xmm) > 0.0000011920929 )
  {
    *(_QWORD *)&v170.right = *(_QWORD *)a3;
    v83 = *((_DWORD *)a1 + 69);
    *(_QWORD *)&v170.left = 8LL;
    if ( *((_DWORD *)a1 + 68) == v83 )
    {
      v157 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
      v158 = v157;
      if ( v157 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v157,
          (_DWORD)a1 + 264);
        LODWORD(p_Blink) = v158;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v158, 0x11E6u, 0LL);
LABEL_279:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v158, 0x11D1u, 0LL);
        return (unsigned int)p_Blink;
      }
    }
    *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v170;
    v84 = *((_DWORD *)a1 + 71);
    if ( v84 <= *((_DWORD *)a1 + 68) )
      v84 = *((_DWORD *)a1 + 68);
    *((_DWORD *)a1 + 71) = v84;
    if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793) )
    {
      v161 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160);
      v158 = v161;
      if ( v161 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v161,
          (_DWORD)a1 + 3160);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v158, 0x11EAu, 0LL);
        v162 = *((_DWORD *)a1 + 68);
        LODWORD(p_Blink) = v158;
        if ( v162 )
          *((_DWORD *)a1 + 68) = v162 - 1;
        goto LABEL_279;
      }
    }
    *(float *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = v55;
    v85 = *((_DWORD *)a1 + 795);
    v86 = *((_DWORD *)a1 + 792) + 1;
    *((_DWORD *)a1 + 792) = v86;
    if ( v85 <= v86 )
      v85 = v86;
    LODWORD(p_Blink) = 0;
    *((_DWORD *)a1 + 795) = v85;
  }
  return (unsigned int)p_Blink;
}
