/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801741B0 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180265814 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FB7E0 (-Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBBB0 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014CF00 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801CC004 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        struct CDrawingContext *a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3,
        _BYTE *a4)
{
  CRoundedRectangleShape *v4; // r13
  float v5; // xmm14_4
  struct _LIST_ENTRY *v6; // rsi
  struct _EVENT_DATA_DESCRIPTOR *v8; // r12
  BOOLEAN v10; // al
  bool (__fastcall *v11)(CRoundedRectangleShape *__hidden, unsigned int *); // rdx
  bool (__fastcall *v12)(CRectanglesShape *__hidden, unsigned int *); // r8
  bool (__fastcall *v13)(CRegionShape *__hidden, unsigned int *); // r9
  CRectanglesShape *v14; // rcx
  __int64 v15; // rax
  bool (__fastcall *v16)(CRegionShape *__hidden, unsigned int *); // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const struct CShape *v19; // rbx
  const struct CShape *v20; // r15
  const struct CMILMatrix *Flink; // r9
  enum D2D1_ANTIALIAS_MODE v22; // edx
  char v23; // r12
  struct CCpuClipAntialiasSink *v24; // r13
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax
  CShape *v33; // r15
  __int64 v34; // rax
  bool (__fastcall *v35)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  int v36; // eax
  __int64 v37; // rbx
  bool v38; // al
  __int64 v39; // rax
  int v40; // eax
  __m128 v41; // xmm2
  float v42; // xmm8_4
  float v43; // xmm7_4
  float v44; // xmm4_4
  float v45; // xmm6_4
  __int64 v46; // rax
  int v47; // eax
  __m128 v48; // xmm0
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm5_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm6_4
  CPolygonShape *v58; // rsi
  int v59; // ebx
  __int64 (__fastcall *v60)(); // rax
  struct D2D_RECT_F *v61; // rcx
  unsigned __int64 v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // esi
  int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rax
  int v69; // r15d
  unsigned int v70; // eax
  bool v71; // zf
  int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  float v75; // xmm6_4
  const struct CMILMatrix *v76; // rdx
  char v77; // cl
  bool v78; // bl
  __int64 (__fastcall *v79)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  struct _LIST_ENTRY *v81; // r12
  CVisual *v82; // r13
  int v83; // eax
  int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // ecx
  unsigned int v88; // eax
  unsigned int v89; // eax
  CRectanglesShape *v90; // rcx
  __int64 v91; // rax
  bool (__fastcall *v92)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  char IsRectangles; // al
  char v94; // al
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // rbx
  void (__fastcall ***v99)(_QWORD); // rcx
  __int64 *v100; // rax
  __int128 *v101; // rdx
  unsigned int v102; // xmm1_4
  unsigned int v103; // xmm0_4
  int v104; // eax
  __int64 v105; // rcx
  char v106; // al
  float left; // xmm8_4
  float top; // xmm7_4
  float right; // xmm6_4
  float bottom; // xmm0_4
  int v111; // eax
  unsigned int v112; // eax
  int v113; // esi
  float v114; // xmm0_4
  int v115; // eax
  float v116; // xmm0_4
  int v117; // eax
  float v118; // xmm0_4
  int v119; // eax
  float v120; // xmm0_4
  CMILMatrix *v121; // r8
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // esi
  int v126; // eax
  unsigned int v127; // eax
  unsigned int v128; // ecx
  __int64 v129; // rax
  int v130; // r15d
  unsigned int v131; // eax
  unsigned int v132; // ebx
  unsigned int v133; // esi
  int v134; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  void *v137; // rax
  void *v138; // r13
  int v139; // eax
  int v140; // r15d
  float v141; // xmm1_4
  int v142; // eax
  int v143; // eax
  float v144; // xmm6_4
  float v145; // xmm7_4
  float v146; // xmm8_4
  float v147; // xmm0_4
  int v148; // eax
  unsigned int v149; // eax
  int v150; // eax
  int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // r15d
  __int64 v155; // r12
  int v156; // eax
  int v157; // eax
  int v158; // eax
  int v159; // r14d
  __int64 v160; // rcx
  void (__fastcall *v161)(__int64, CRoundedRectangleShape **); // rax
  int v162; // eax
  int v163; // eax
  bool v164; // [rsp+40h] [rbp-C0h] BYREF
  CRoundedRectangleShape *v165; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v166; // [rsp+50h] [rbp-B0h]
  _BYTE *v167; // [rsp+58h] [rbp-A8h]
  struct D2D_RECT_F v168; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v169; // [rsp+70h] [rbp-90h] BYREF
  __int128 v170; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v171; // [rsp+90h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4 = 0LL;
  v5 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v6 = 0LL;
  v8 = a2;
  v167 = a4;
  v166 = a2;
  v165 = 0LL;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v10 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start);
    v11 = CRoundedRectangleShape::IsRectangles;
    v12 = CRectanglesShape::IsRectangles;
    v13 = CRegionShape::IsRectangles;
    if ( !v10 )
      goto LABEL_3;
    v90 = *(CRectanglesShape **)(a3 + 8);
    if ( v90 )
    {
      v91 = *(_QWORD *)v90;
      v168.left = 0.0;
      v92 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v91 + 64);
      if ( v92 == CRoundedRectangleShape::IsRectangles )
      {
        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v90 + 2)
                                                                                                 + 16LL)) )
          goto LABEL_130;
LABEL_129:
        *(_DWORD *)(a3 + 180) |= 1u;
        goto LABEL_130;
      }
      if ( v92 == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v90, (unsigned int *)&v168);
      }
      else if ( v92 == CRegionShape::IsRectangles )
      {
        IsRectangles = CRegionShape::IsRectangles(v90, (unsigned int *)&v168);
      }
      else
      {
        IsRectangles = ((__int64 (__fastcall *)(CRectanglesShape *, struct D2D_RECT_F *, bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *), bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v92)(
                         v90,
                         &v168,
                         CRectanglesShape::IsRectangles,
                         CRegionShape::IsRectangles);
      }
      if ( IsRectangles && LODWORD(v168.left) == 1 )
        goto LABEL_129;
    }
LABEL_130:
    v94 = CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(a3 + 108));
    v11 = CRoundedRectangleShape::IsRectangles;
    v12 = CRectanglesShape::IsRectangles;
    if ( v94 )
      *(_DWORD *)(a3 + 180) |= 4u;
LABEL_3:
    v14 = *(CRectanglesShape **)(a3 + 8);
    if ( !v14 )
    {
LABEL_6:
      v4 = *(CRoundedRectangleShape **)(a3 + 8);
      v165 = v4;
      goto LABEL_7;
    }
    v15 = *(_QWORD *)v14;
    v168.left = 0.0;
    v16 = *(bool (__fastcall **)(CRegionShape *__hidden, unsigned int *))(v15 + 64);
    if ( v16 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v14 + 2)
                                                                                               + 16LL)) )
        goto LABEL_6;
    }
    else
    {
      if ( v16 == CRectanglesShape::IsRectangles )
      {
        v106 = CRectanglesShape::IsRectangles(v14, (unsigned int *)&v168);
      }
      else if ( v16 == v13 )
      {
        v106 = CRegionShape::IsRectangles(v14, (unsigned int *)&v168);
      }
      else
      {
        v106 = ((__int64 (__fastcall *)(CRectanglesShape *, struct D2D_RECT_F *, bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *)))v16)(
                 v14,
                 &v168,
                 CRectanglesShape::IsRectangles);
      }
      if ( !v106 || LODWORD(v168.left) != 1 )
        goto LABEL_6;
    }
    if ( *(char *)(a3 + 172) >> 6 == 1 )
      goto LABEL_156;
    if ( *(char *)(a3 + 172) >> 6 < 0 )
      goto LABEL_7;
    v11 = (bool (__fastcall *)(CRoundedRectangleShape *__hidden, unsigned int *))*(unsigned __int8 *)(a3 + 173);
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
    if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3 + 108) )
      goto LABEL_6;
LABEL_7:
    if ( *(_BYTE *)(a3 + 184) && *(_BYTE *)(*((_QWORD *)a1 + 94) - 8LL) )
    {
      v17 = *(_QWORD *)(a3 + 24);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 56);
        v19 = *(const struct CShape **)(v18 + 8);
        if ( !v19 )
          v19 = *(const struct CShape **)(a3 + 8);
        v20 = *(const struct CShape **)(v18 + 24);
        Flink = (const struct CMILMatrix *)(v18 + 40);
        v22 = *(_DWORD *)(v18 + 108);
        v23 = *(_BYTE *)(v18 + 116);
        v24 = *(struct CCpuClipAntialiasSink **)v18;
      }
      else
      {
        v81 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 993);
        v20 = 0LL;
        v19 = *(const struct CShape **)(a3 + 8);
        v82 = *(CVisual **)a3;
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, bool (__fastcall *)(CRoundedRectangleShape *__hidden, unsigned int *), bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *), bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v81->Flink[11].Blink)(
               v81,
               v11,
               v12,
               v13) )
        {
          v6 = (struct _LIST_ENTRY *)((char *)v82 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v82);
          if ( TreeDataListHead )
          {
            for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
            {
              if ( i[2].Flink == v81 )
              {
                v6 = i - 22;
                break;
              }
            }
          }
        }
        Flink = (const struct CMILMatrix *)v6[7].Flink;
        v22 = *((_DWORD *)a1 + 61) != 0;
        v23 = 0;
        v24 = 0LL;
      }
      *(_QWORD *)&v169.right = *(_QWORD *)a3;
      *(_QWORD *)&v168.left = v24;
      *(_QWORD *)&v169.left = 2LL;
      v164 = 0;
      v25 = CScopedClipStack::PushCpuClipToScope(
              (struct CDrawingContext *)((char *)a1 + 744),
              v19,
              v20,
              Flink,
              v22,
              v23,
              v24,
              &v164);
      v26 = v25;
      LODWORD(v6) = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC81u, 0LL);
        goto LABEL_230;
      }
      v27 = *((unsigned int *)a1 + 68);
      v28 = *((unsigned int *)a1 + 69);
      if ( (_DWORD)v27 != (_DWORD)v28 )
        goto LABEL_15;
      v132 = 2 * v28;
      if ( (unsigned __int64)(2 * v28) > 0xFFFFFFFF )
      {
        v31 = 98LL;
      }
      else
      {
        if ( v132 <= 0x40 )
          v132 = 64;
        v133 = 16 * v27;
        if ( (unsigned __int64)(16 * v27) <= 0xFFFFFFFF )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v132 <= 0x10 )
          {
            v26 = -2147024809;
          }
          else
          {
            v137 = MIDL_user_allocate(16LL * v132);
            v138 = v137;
            if ( v137 )
            {
              memcpy_0(v137, *((const void **)a1 + 33), v133);
              operator delete(*((void **)a1 + 33));
              *((_QWORD *)a1 + 33) = v138;
              v24 = *(struct CCpuClipAntialiasSink **)&v168.left;
              *((_DWORD *)a1 + 69) = v132;
LABEL_15:
              *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * *((unsigned int *)a1 + 68)) = v169;
              v29 = *((_DWORD *)a1 + 71);
              v30 = *((_DWORD *)a1 + 68) + 1;
              *((_DWORD *)a1 + 68) = v30;
              if ( v29 <= v30 )
                v29 = v30;
              v26 = 0;
              *((_DWORD *)a1 + 71) = v29;
              if ( v164 )
              {
                *((_BYTE *)a1 + 8066) = 1;
                LODWORD(v6) = 0;
                goto LABEL_23;
              }
              goto LABEL_22;
            }
            v24 = *(struct CCpuClipAntialiasSink **)&v168.left;
            v26 = -2147024882;
          }
          v31 = 104LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v31,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v26);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v26);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC84u, 0LL);
          v164 = 0;
          CScopedClipStack::PopCpuClipFromScope((struct CDrawingContext *)((char *)a1 + 744), a1, &v164);
LABEL_22:
          LODWORD(v6) = v26;
          if ( v26 >= 0 )
          {
LABEL_23:
            if ( *(_QWORD *)(a3 + 24) )
            {
              if ( !v20 )
              {
                v32 = *((_QWORD *)a1 + 94);
                if ( v32 != *((_QWORD *)a1 + 93) )
                {
                  if ( *(_QWORD *)(v32 - 176) )
                  {
                    v33 = *(CShape **)(*((_QWORD *)a1 + 337) - 40LL);
                    if ( v33 )
                    {
                      v34 = *(_QWORD *)v33;
                      v168.left = 0.0;
                      v35 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v34 + 64);
                      if ( v35 == CRoundedRectangleShape::IsRectangles )
                      {
                        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v33 + 2) + 16LL)) )
                        {
LABEL_30:
                          *(_QWORD *)&v168.left = 0LL;
                          v36 = CShape::CopyShape(v33, 0LL, (struct CShape **)&v168);
                          LODWORD(v6) = v36;
                          if ( v36 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1181u, 0LL);
                            return (unsigned int)v6;
                          }
                          *(_QWORD *)&v169.left = 0LL;
                          LOBYTE(v169.right) = 0;
                          CShapePtr::~CShapePtr((CShapePtr *)&v169);
                          v37 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 56LL);
                          CShapePtr::~CShapePtr((CShapePtr *)(v37 + 24));
                          *(_QWORD *)(v37 + 24) = *(_QWORD *)&v168.left;
                          *(_BYTE *)(v37 + 32) = 1;
                          *(_QWORD *)&v169.left = 0LL;
                          LOBYTE(v169.right) = 0;
                          CShapePtr::~CShapePtr((CShapePtr *)&v169);
                        }
                      }
                      else
                      {
                        if ( v35 == CRectanglesShape::IsRectangles )
                        {
                          v38 = CRectanglesShape::IsRectangles(v33, (unsigned int *)&v168);
                        }
                        else if ( v35 == CRegionShape::IsRectangles )
                        {
                          v38 = CRegionShape::IsRectangles(v33, (unsigned int *)&v168);
                        }
                        else
                        {
                          v38 = v35(v33, (unsigned int *)&v168);
                        }
                        if ( !v38 || LODWORD(v168.left) != 1 )
                          goto LABEL_30;
                      }
                    }
                  }
                }
              }
              if ( v23 && !v24 )
              {
                v95 = *(_QWORD *)(a3 + 24);
                v96 = *(_QWORD *)(*((_QWORD *)a1 + 94) - 16LL);
                if ( *(_QWORD *)(v96 + 24) == *(_QWORD *)(v96 + 16) )
                {
                  v97 = *(__int64 **)(v95 + 56);
                  v98 = *v97;
                  *v97 = 0LL;
                }
                else
                {
                  v99 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(v96 + 24) - 432LL);
                  v100 = *(__int64 **)(v95 + 56);
                  v98 = *v100;
                  *v100 = (__int64)v99;
                  if ( v99 )
                    (**v99)(v99);
                }
                if ( v98 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
              }
            }
LABEL_37:
            v4 = v165;
            goto LABEL_38;
          }
LABEL_230:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1173u, 0LL);
          return (unsigned int)v6;
        }
        v31 = 101LL;
      }
      v26 = -2147024362;
      goto LABEL_21;
    }
    v58 = *(CPolygonShape **)(a3 + 8);
    v59 = -2003304309;
    v168 = 0LL;
    if ( !v58 )
      goto LABEL_69;
    v60 = *(__int64 (__fastcall **)())(*(_QWORD *)v58 + 48LL);
    if ( (char *)v60 == (char *)&CRectanglesShape::GetTightBounds )
    {
      v61 = (struct D2D_RECT_F *)*((_QWORD *)v58 + 2);
      if ( *((struct D2D_RECT_F **)v58 + 3) == v61 )
        goto LABEL_70;
      v62 = 1LL;
      v168 = *v61;
      v63 = *((_QWORD *)v58 + 2);
      if ( (unsigned __int64)((*((_QWORD *)v58 + 3) - v63) >> 4) > 1 )
      {
        v155 = 16LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
            &v168.left,
            (float *)(v155 + v63));
          v63 = *((_QWORD *)v58 + 2);
          v155 += 16LL;
          ++v62;
        }
        while ( v62 < (*((_QWORD *)v58 + 3) - v63) >> 4 );
      }
LABEL_66:
      if ( a3 != -108 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3 + 108) )
        CMILMatrix::Transform2DBoundsHelper<0>(v64, &v168, &v168);
LABEL_70:
      v65 = *((_DWORD *)a1 + 61);
      *(_QWORD *)&v169.right = *(_QWORD *)a3;
      v66 = *((_DWORD *)a1 + 69);
      *(_QWORD *)&v169.left = 3LL;
      if ( *((_DWORD *)a1 + 68) == v66 )
      {
        v134 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
        v69 = v134;
        if ( v134 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v134);
          LODWORD(v6) = v69;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xCC6u, 0LL);
LABEL_211:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x119Fu, 0LL);
          return (unsigned int)v6;
        }
      }
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v169;
      v67 = *((_DWORD *)a1 + 71);
      if ( v67 <= *((_DWORD *)a1 + 68) )
        v67 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v67;
      v68 = *((_QWORD *)a1 + 94);
      if ( v68 == *((_QWORD *)a1 + 93) || !*(_QWORD *)(v68 - 168) )
      {
        if ( v65 )
        {
          v113 = 0x7FFFFFFF;
          v114 = v168.left - 0.5;
          if ( (float)(v168.left - 0.5) < -2147483600.0 )
          {
            v115 = 0x80000000;
          }
          else if ( v114 >= 2147483600.0 )
          {
            v115 = 0x7FFFFFFF;
          }
          else
          {
            v115 = (int)ceilf_0(v114);
          }
          v116 = v168.top - 0.5;
          left = (float)v115;
          if ( (float)(v168.top - 0.5) < -2147483600.0 )
          {
            v117 = 0x80000000;
          }
          else if ( v116 >= 2147483600.0 )
          {
            v117 = 0x7FFFFFFF;
          }
          else
          {
            v117 = (int)ceilf_0(v116);
          }
          v118 = v168.right - 0.5;
          top = (float)v117;
          if ( (float)(v168.right - 0.5) < -2147483600.0 )
          {
            v119 = 0x80000000;
          }
          else if ( v118 >= 2147483600.0 )
          {
            v119 = 0x7FFFFFFF;
          }
          else
          {
            v119 = (int)ceilf_0(v118);
          }
          v120 = v168.bottom - 0.5;
          right = (float)v119;
          if ( (float)(v168.bottom - 0.5) < -2147483600.0 )
          {
            v113 = 0x80000000;
          }
          else if ( v120 < 2147483600.0 )
          {
            v113 = (int)ceilf_0(v120);
          }
          bottom = (float)v113;
        }
        else
        {
          left = v168.left;
          top = v168.top;
          right = v168.right;
          bottom = v168.bottom;
        }
        v111 = *((_DWORD *)a1 + 787);
        *(float *)&v169.left = left;
        *(float *)&v169.top = top;
        *(float *)&v169.right = right;
        *(float *)&v169.bottom = bottom;
        if ( *((_DWORD *)a1 + 786) == v111 )
        {
          v123 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
                   (char *)a1 + 3136,
                   v11,
                   v12,
                   v13,
                   (char *)a1 + 3136);
          v69 = v123;
          if ( v123 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x83,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)(unsigned int)v123);
            v70 = 513;
LABEL_191:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, v70, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xCCBu, 0LL);
            v124 = *((_DWORD *)a1 + 68);
            if ( v124 )
              *((_DWORD *)a1 + 68) = v124 - 1;
            LODWORD(v6) = v69;
            if ( v69 < 0 )
              goto LABEL_211;
LABEL_194:
            if ( v4 )
            {
LABEL_38:
              v39 = *((_QWORD *)a1 + 94);
              v169 = 0LL;
              if ( v39 != *((_QWORD *)a1 + 93) )
              {
                if ( *(_QWORD *)(v39 - 184) )
                {
                  v40 = *((_DWORD *)a1 + 780);
                  if ( v40 )
                  {
                    v41 = *(__m128 *)(*((_QWORD *)a1 + 389) + 16LL * (unsigned int)(v40 - 1));
                    LODWORD(v42) = _mm_shuffle_ps(v41, v41, 255).m128_u32[0];
                    LODWORD(v43) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
                    v44 = v41.m128_f32[0];
                    LODWORD(v45) = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
                  }
                  else
                  {
                    v44 = *(float *)&_xmm;
                    LODWORD(v42) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
                    LODWORD(v43) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
                    LODWORD(v45) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
                  }
                }
                else
                {
                  v160 = *(_QWORD *)(v39 - 192);
                  v161 = *(void (__fastcall **)(__int64, CRoundedRectangleShape **))(*(_QWORD *)v160 + 88LL);
                  if ( (char *)v161 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
                    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v160, &v165);
                  else
                    v161(v160, &v165);
                  v44 = 0.0;
                  v45 = 0.0;
                  v43 = (float)(int)v165;
                  v42 = (float)SHIDWORD(v165);
                }
                v46 = *((_QWORD *)a1 + 94);
                if ( v46 != *((_QWORD *)a1 + 93) )
                {
                  if ( *(_QWORD *)(v46 - 168) )
                  {
                    v47 = *((_DWORD *)a1 + 786);
                    if ( v47 )
                      v48 = *(__m128 *)(*((_QWORD *)a1 + 392) + 16LL * (unsigned int)(v47 - 1));
                    else
                      v48 = (__m128)_xmm;
                    if ( v48.m128_f32[0] > v44 )
                      v44 = v48.m128_f32[0];
                    v49 = v45;
                    v50 = _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
                    if ( v50 > v45 )
                    {
                      v45 = v50;
                      v49 = v50;
                    }
                    v51 = v49;
                    v52 = _mm_shuffle_ps(v48, v48, 170).m128_f32[0];
                    v53 = v43;
                    if ( v43 > v52 )
                    {
                      v43 = v52;
                      v53 = v52;
                    }
                    v54 = v42;
                    v55 = _mm_shuffle_ps(v48, v48, 255).m128_f32[0];
                    if ( v42 > v55 )
                    {
                      v42 = v55;
                      v54 = v55;
                      v51 = v49;
                    }
                    if ( v53 <= v44 || v54 <= v51 )
                      goto LABEL_268;
                  }
                }
                if ( v43 <= v44 || v42 <= v45 )
                {
LABEL_268:
                  *v167 = 1;
                  return (unsigned int)v6;
                }
              }
              v8 = v166;
              goto LABEL_59;
            }
            v125 = *((_DWORD *)a1 + 61);
            if ( *(_QWORD *)a3 )
            {
              *(_QWORD *)&v169.right = *(_QWORD *)a3;
              v126 = *((_DWORD *)a1 + 69);
              *(_QWORD *)&v169.left = 1LL;
              if ( *((_DWORD *)a1 + 68) == v126 )
              {
                v152 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
                v130 = v152;
                if ( v152 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)(unsigned int)v152);
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v130, 0xBF3u, 0LL);
                  LODWORD(v6) = v130;
                  goto LABEL_250;
                }
              }
              LOBYTE(v4) = 1;
              *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * *((unsigned int *)a1 + 68)) = v169;
              v127 = *((_DWORD *)a1 + 71);
              v128 = *((_DWORD *)a1 + 68) + 1;
              *((_DWORD *)a1 + 68) = v128;
              if ( v127 <= v128 )
                v127 = v128;
              *((_DWORD *)a1 + 71) = v127;
            }
            v129 = *((_QWORD *)a1 + 94);
            if ( v129 == *((_QWORD *)a1 + 93) || !*(_QWORD *)(v129 - 184) )
            {
              if ( v125 )
              {
                v144 = (float)(int)CFloatFPU::CeilingSat(v168.left - 0.5);
                v145 = (float)(int)CFloatFPU::CeilingSat(v168.top - 0.5);
                v146 = (float)(int)CFloatFPU::CeilingSat(v168.right - 0.5);
                v147 = (float)(int)CFloatFPU::CeilingSat(v168.bottom - 0.5);
              }
              else
              {
                v144 = v168.left;
                v145 = v168.top;
                v146 = v168.right;
                v147 = v168.bottom;
              }
              v148 = *((_DWORD *)a1 + 781);
              *(float *)&v169.left = v144;
              *(float *)&v169.top = v145;
              *(float *)&v169.right = v146;
              *(float *)&v169.bottom = v147;
              if ( *((_DWORD *)a1 + 780) == v148 )
              {
                v150 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
                         (char *)a1 + 3112,
                         v11,
                         v12,
                         v13,
                         (char *)a1 + 3112);
                LODWORD(v6) = v150;
                if ( v150 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)(unsigned int)v150);
                  v131 = 252;
                  v130 = (int)v6;
                  goto LABEL_254;
                }
              }
              *(struct tagRECT *)(*((_QWORD *)a1 + 389) + 16LL * (unsigned int)(*((_DWORD *)a1 + 780))++) = v169;
              v149 = *((_DWORD *)a1 + 783);
              if ( v149 <= *((_DWORD *)a1 + 780) )
                v149 = *((_DWORD *)a1 + 780);
              v130 = 0;
              *((_DWORD *)a1 + 783) = v149;
            }
            else
            {
              v130 = CD2DClipStack::Push(
                       (struct CDrawingContext *)((char *)a1 + 3112),
                       &v168,
                       (enum D2D1_ANTIALIAS_MODE)(v125 != 0));
              LODWORD(v6) = v130;
              if ( v130 < 0 )
              {
                v131 = 256;
LABEL_254:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v6, v131, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v130, 0xBF8u, 0LL);
                v130 = (int)v6;
                if ( (_BYTE)v4 )
                {
                  v151 = *((_DWORD *)a1 + 68);
                  if ( v151 )
                  {
                    *((_DWORD *)a1 + 68) = v151 - 1;
                    goto LABEL_250;
                  }
                }
LABEL_249:
                LODWORD(v6) = v130;
                if ( v130 >= 0 )
                  goto LABEL_37;
LABEL_250:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v130, 0x11A8u, 0LL);
                return (unsigned int)v6;
              }
            }
            ++*(_QWORD *)(*((_QWORD *)a1 + 94) - 184LL);
            *((_BYTE *)a1 + 8065) = 1;
            goto LABEL_249;
          }
        }
        *(struct tagRECT *)(*((_QWORD *)a1 + 392) + 16LL * (unsigned int)(*((_DWORD *)a1 + 786))++) = v169;
        v112 = *((_DWORD *)a1 + 789);
        if ( v112 <= *((_DWORD *)a1 + 786) )
          v112 = *((_DWORD *)a1 + 786);
        LODWORD(v6) = 0;
        *((_DWORD *)a1 + 789) = v112;
      }
      else
      {
        LODWORD(v6) = CD2DClipStack::Push(
                        (struct CDrawingContext *)((char *)a1 + 3136),
                        &v168,
                        (enum D2D1_ANTIALIAS_MODE)(v65 != 0));
        v69 = (int)v6;
        if ( (int)v6 < 0 )
        {
          v70 = 517;
          goto LABEL_191;
        }
      }
      ++*(_QWORD *)(*((_QWORD *)a1 + 94) - 168LL);
      goto LABEL_194;
    }
    if ( v60 == CRegionShape::GetTightBounds )
    {
      v169 = 0LL;
      if ( !FastRegion::CRegion::GetBoundingRect((CPolygonShape *)((char *)v58 + 16), &v169) )
        goto LABEL_70;
      v168.left = (float)v169.left;
      v168.top = (float)v169.top;
      v168.right = (float)v169.right;
      v168.bottom = (float)v169.bottom;
      goto LABEL_66;
    }
    v121 = (CMILMatrix *)(a3 + 108);
    v122 = (char *)v60 == (char *)CRoundedRectangleShape::GetTightBounds
         ? CRoundedRectangleShape::GetTightBounds(v58, &v168, v121)
         : ((__int64 (__fastcall *)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *, bool (__fastcall *)(CRegionShape *__hidden, unsigned int *)))v60)(
             v58,
             &v168,
             v121,
             v13);
    v59 = v122;
    LODWORD(v6) = v122;
    if ( v122 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x140u, 0LL);
    }
    else
    {
LABEL_69:
      LODWORD(v6) = v59;
      if ( v59 >= 0 )
        goto LABEL_70;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x119Bu, 0LL);
    return (unsigned int)v6;
  }
LABEL_59:
  v56 = *(float *)(a3 + 36);
  if ( v4 )
    goto LABEL_77;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 36) - 1.0) & _xmm) < 0.0000011920929 )
    return (unsigned int)v6;
  if ( !*(_BYTE *)(a3 + 189) )
  {
LABEL_77:
    v71 = *(_BYTE *)(a3 + 189) == 0;
    *(_QWORD *)&v169.right = *(_QWORD *)a3;
    v72 = *((_DWORD *)a1 + 69);
    *(_QWORD *)&v168.left = 0LL;
    *(_QWORD *)&v169.left = 8LL;
    if ( v71 )
    {
      if ( *((_DWORD *)a1 + 68) == v72 )
      {
        v139 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
        v140 = v139;
        if ( v139 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v139);
          LODWORD(v6) = v140;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v140, 0x120Eu, 0LL);
LABEL_234:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v140, 0x11C8u, 0LL);
          goto LABEL_235;
        }
      }
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v169;
      v73 = *((_DWORD *)a1 + 71);
      if ( v73 <= *((_DWORD *)a1 + 68) )
        v73 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v73;
      if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793) )
      {
        v142 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160);
        v140 = v142;
        if ( v142 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v142);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v140, 0x1212u, 0LL);
          v143 = *((_DWORD *)a1 + 68);
          LODWORD(v6) = v140;
          if ( v143 )
            *((_DWORD *)a1 + 68) = v143 - 1;
          goto LABEL_234;
        }
      }
      *(_DWORD *)(*((_QWORD *)a1 + 395) + 4LL * (unsigned int)(*((_DWORD *)a1 + 792))++) = 1065353216;
      v74 = *((_DWORD *)a1 + 795);
      if ( v74 <= *((_DWORD *)a1 + 792) )
        v74 = *((_DWORD *)a1 + 792);
      *((_DWORD *)a1 + 795) = v74;
      v75 = *(float *)(a3 + 36);
LABEL_85:
      v171 = 0LL;
      v170 = 0LL;
      if ( !v4 )
        goto LABEL_139;
      if ( *(_QWORD *)&v168.left )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v168.left + 16LL))(*(_QWORD *)&v168.left);
      v76 = (const struct CMILMatrix *)(a3 + 108);
      v77 = *(_BYTE *)(a3 + 173);
      *(_QWORD *)&v168.left = 0LL;
      if ( (v77 & 0x20) != 0 || 4 * (v77 & 0xF0) == 0 )
      {
        if ( (v77 & 0x20) != 0 )
        {
          v78 = 0;
          v79 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL);
LABEL_91:
          v76 = 0LL;
          goto LABEL_92;
        }
        LODWORD(v141) = COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 136) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 120) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a3 + 168) & _xmm))
                        - 1.0) & _xmm;
        *(_BYTE *)(a3 + 173) = v77 & 0xCF | (32 * (v141 < 0.000081380211) + 16);
        v78 = v141 >= 0.000081380211;
        v79 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL);
        if ( v141 < 0.000081380211 )
          goto LABEL_91;
      }
      else
      {
        v78 = 1;
        v79 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL);
      }
LABEL_92:
      if ( v79 == CRoundedRectangleShape::GetD2DGeometry )
      {
        D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v4, v76, (struct ID2D1Geometry **)&v168);
      }
      else if ( (char *)v79 == (char *)CRegionShape::GetD2DGeometry )
      {
        D2DGeometry = CRegionShape::GetD2DGeometry(v4, v76, (struct ID2D1Geometry **)&v168);
      }
      else if ( (char *)v79 == (char *)CPathSegmentsShape::GetD2DGeometry )
      {
        D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v4, v76, (struct ID2D1Geometry **)&v168);
      }
      else
      {
        D2DGeometry = v79(v4, v76, (struct ID2D1Geometry **)&v168);
      }
      LODWORD(v6) = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x9ABu, 0LL);
        if ( (_DWORD)v6 != -2003238895 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v6, 0x11DDu, 0LL);
          goto LABEL_143;
        }
        LODWORD(v6) = 0;
        *v167 = 1;
        goto LABEL_299;
      }
      if ( !v78 )
      {
        v101 = &v170;
        v102 = *(_DWORD *)(a3 + 112);
        LODWORD(v170) = *(_DWORD *)(a3 + 108);
        *(_QWORD *)((char *)&v170 + 4) = __PAIR64__(*(_DWORD *)(a3 + 124), v102);
        v103 = *(_DWORD *)(a3 + 156);
        HIDWORD(v170) = *(_DWORD *)(a3 + 128);
        v171 = __PAIR64__(*(_DWORD *)(a3 + 160), v103);
        goto LABEL_142;
      }
LABEL_139:
      v101 = 0LL;
LABEL_142:
      v104 = CDrawingContext::PushD2DLayer(
               a1,
               *(_QWORD *)a3,
               v8,
               *(__int64 *)&v168.left,
               (__int64)v101,
               v75,
               *(_BYTE *)(a3 + 184),
               *(_DWORD *)(a3 + 180));
      LODWORD(v6) = v104;
      if ( v104 >= 0 )
      {
LABEL_143:
        v105 = *(_QWORD *)&v168.left;
        if ( !*(_QWORD *)&v168.left )
          return (unsigned int)v6;
LABEL_144:
        *(_QWORD *)&v168.left = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
        return (unsigned int)v6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v104, 0x11ECu, 0LL);
LABEL_299:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v168);
      return (unsigned int)v6;
    }
    if ( *((_DWORD *)a1 + 68) == v72
      && (v153 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264),
          v154 = v153,
          v153 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v153);
      LODWORD(v6) = v154;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v154, 0x120Eu, 0LL);
    }
    else
    {
      *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v169;
      v88 = *((_DWORD *)a1 + 71);
      if ( v88 <= *((_DWORD *)a1 + 68) )
        v88 = *((_DWORD *)a1 + 68);
      *((_DWORD *)a1 + 71) = v88;
      if ( *((_DWORD *)a1 + 792) != *((_DWORD *)a1 + 793)
        || (v156 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160), v154 = v156, v156 >= 0) )
      {
        *(float *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = v56;
        v75 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v89 = *((_DWORD *)a1 + 795);
        if ( v89 <= ++*((_DWORD *)a1 + 792) )
          v89 = *((_DWORD *)a1 + 792);
        *((_DWORD *)a1 + 795) = v89;
        goto LABEL_85;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v156);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v154, 0x1212u, 0LL);
      v157 = *((_DWORD *)a1 + 68);
      LODWORD(v6) = v154;
      if ( v157 )
        *((_DWORD *)a1 + 68) = v157 - 1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v154, 0x11C1u, 0LL);
LABEL_235:
    v105 = *(_QWORD *)&v168.left;
    if ( !*(_QWORD *)&v168.left )
      return (unsigned int)v6;
    goto LABEL_144;
  }
  v83 = *((_DWORD *)a1 + 792);
  if ( v83 )
    v5 = *(float *)(*((_QWORD *)a1 + 395) + 4LL * (unsigned int)(v83 - 1));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v56 - v5) & _xmm) > 0.0000011920929 )
  {
    *(_QWORD *)&v169.right = *(_QWORD *)a3;
    v84 = *((_DWORD *)a1 + 69);
    *(_QWORD *)&v169.left = 8LL;
    if ( *((_DWORD *)a1 + 68) == v84 )
    {
      v158 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
      v159 = v158;
      if ( v158 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v158);
        LODWORD(v6) = v159;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0x120Eu, 0LL);
LABEL_279:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0x11F9u, 0LL);
        return (unsigned int)v6;
      }
    }
    *(struct tagRECT *)(*((_QWORD *)a1 + 33) + 16LL * (unsigned int)(*((_DWORD *)a1 + 68))++) = v169;
    v85 = *((_DWORD *)a1 + 71);
    if ( v85 <= *((_DWORD *)a1 + 68) )
      v85 = *((_DWORD *)a1 + 68);
    *((_DWORD *)a1 + 71) = v85;
    if ( *((_DWORD *)a1 + 792) == *((_DWORD *)a1 + 793) )
    {
      v162 = CWatermarkStack<float,64,2,10>::Grow((char *)a1 + 3160);
      v159 = v162;
      if ( v162 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v162);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0x1212u, 0LL);
        v163 = *((_DWORD *)a1 + 68);
        LODWORD(v6) = v159;
        if ( v163 )
          *((_DWORD *)a1 + 68) = v163 - 1;
        goto LABEL_279;
      }
    }
    *(float *)(*((_QWORD *)a1 + 395) + 4LL * *((unsigned int *)a1 + 792)) = v56;
    v86 = *((_DWORD *)a1 + 795);
    v87 = *((_DWORD *)a1 + 792) + 1;
    *((_DWORD *)a1 + 792) = v87;
    if ( v86 <= v87 )
      v86 = v87;
    LODWORD(v6) = 0;
    *((_DWORD *)a1 + 795) = v86;
  }
  return (unsigned int)v6;
}
