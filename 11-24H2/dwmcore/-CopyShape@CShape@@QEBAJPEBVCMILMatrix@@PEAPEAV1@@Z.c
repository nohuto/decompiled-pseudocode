/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0
 * Callers:
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x18001CF80 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800712E0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C42D0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0F38 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1802034D0 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18024E3E0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x180258EE0 (-FlattenToLineSegments@CRegionShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x180285748 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18028F2E8 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18029BF80 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180017C60 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800CA7E0 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddRef@CEffectCompilationTask@@UEAAKXZ @ 0x180146320 (-AddRef@CEffectCompilationTask@@UEAAKXZ.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801469A0 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180146C68 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x180146C9C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18017CF08 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18019D5D0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x18019DDEC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1801BAACC (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CRoundedRectangleShape@@@WRL@Microsoft@@IEBAXXZ @ 0x1801CFD40 (-InternalAddRef@-$ComPtr@VSharedData@CRoundedRectangleShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x1801D08CC (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801DE5AC (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  detail::liberal_expansion_policy *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  int v7; // eax
  _DWORD *v8; // rdi
  int v9; // ecx
  _QWORD *v10; // r8
  HANDLE v11; // rax
  detail::liberal_expansion_policy *v12; // rcx
  detail::liberal_expansion_policy *v13; // rdx
  detail::liberal_expansion_policy *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  _OWORD *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  detail::liberal_expansion_policy *v27; // xmm1_8
  _OWORD *v28; // rbx
  detail::liberal_expansion_policy *j; // rax
  __int128 v30; // xmm0
  int v31; // eax
  int v32; // eax
  CPathSegmentsShape *v33; // rax
  CPathSegmentsShape *v34; // rax
  int v35; // r14d
  char v37; // dl
  char v38; // al
  char v39; // cl
  int v40; // xmm6_4
  float v41; // xmm8_4
  float v42; // xmm9_4
  char v43; // al
  char (__fastcall *v44)(CRectanglesShape *, unsigned int *); // rcx
  char (__fastcall *v45)(CRectanglesShape *, unsigned int *); // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rbx
  _OWORD *v48; // r14
  _OWORD *v49; // rdx
  _BYTE *v50; // rdi
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  _OWORD *v54; // rax
  char (__fastcall *v55)(__int64, __int64, int); // rax
  int v56; // ecx
  unsigned int v57; // r10d
  _OWORD *v58; // r11
  const struct D2D_RECT_F *v59; // rdi
  unsigned int v60; // xmm3_4
  unsigned int v61; // xmm1_4
  float v62; // xmm2_4
  __int64 v63; // rax
  _DWORD *Value; // rdi
  int v65; // ecx
  _QWORD *v66; // r8
  HANDLE ProcessHeap; // rax
  detail::liberal_expansion_policy *v68; // rdx
  __int64 v69; // rax
  detail::liberal_expansion_policy *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  _OWORD *v73; // r13
  __int64 v74; // rdi
  unsigned __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rcx
  _OWORD *v78; // rax
  __int128 v79; // xmm0
  detail::liberal_expansion_policy *v80; // xmm1_8
  _OWORD *v81; // rbx
  detail::liberal_expansion_policy *i; // rax
  __int128 v83; // xmm0
  _BYTE *v84; // rdi
  __int64 v85; // rax
  HANDLE v86; // rax
  _DWORD *v87; // rsi
  int v88; // ecx
  _QWORD *v89; // rdi
  HANDLE v90; // rax
  volatile signed __int32 *v91; // rcx
  unsigned int (__fastcall *v92)(CEffectCompilationTask *__hidden); // rax
  signed __int32 v93; // esi
  unsigned __int64 v94; // rsi
  SIZE_T v95; // r9
  SIZE_T v96; // rax
  LPVOID v97; // rax
  void *v98; // rdi
  void *v99; // rcx
  bool v100; // zf
  __int64 v101; // rdx
  __int64 v102; // rax
  unsigned __int64 v103; // rsi
  _OWORD *v104; // rdi
  __int64 v105; // rcx
  __int128 v106; // xmm0
  HANDLE v107; // rax
  _QWORD *v108; // rax
  CEffectCompilationTask *v109; // rdx
  const struct CRoundedRectangleGeometryData *v110; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rsi
  unsigned __int64 v113; // r13
  unsigned __int8 v114; // al
  char v115; // cl
  float v116; // xmm2_4
  float v117; // xmm8_4
  float v118; // xmm4_4
  float v119; // xmm3_4
  float v120; // xmm5_4
  float v121; // xmm1_4
  HANDLE v122; // rax
  CThreadContext *v123; // rax
  CThreadContext *v124; // rax
  char *v125; // rax
  char *v126; // rsi
  unsigned __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // r8
  __int64 v130; // rdx
  _QWORD *v131; // rax
  _QWORD *v132; // rcx
  char v133; // cl
  char v134; // al
  char v135; // cl
  char v136; // cl
  CThreadContext *v137; // rax
  CThreadContext *v138; // rax
  CThreadContext *v139; // rax
  CThreadContext *v140; // rax
  char *v141; // rax
  char *v142; // rdi
  unsigned __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 v145; // r8
  __int64 v146; // rdx
  _QWORD *v147; // rax
  _QWORD *v148; // rcx
  _BYTE *v149; // rdi
  __int64 v150; // rax
  HANDLE v151; // rax
  _OWORD *v152; // rdx
  detail::liberal_expansion_policy *v153; // rcx
  _OWORD *v154; // rdx
  detail::liberal_expansion_policy *v155; // rcx
  _OWORD *v156; // rsi
  unsigned __int64 v157; // rcx
  float v158; // xmm1_4
  float v159; // xmm0_4
  float x; // xmm2_4
  unsigned __int64 v161; // rcx
  float y; // xmm3_4
  float v163; // xmm4_4
  float v164; // xmm5_4
  char *v165; // rax
  char *v166; // rdi
  unsigned int v167; // ebx
  int v168; // eax
  CShape *v169; // rdi
  CPolygonShape *v170; // rax
  CComplexShape *v171; // rax
  CComplexShape *v172; // rax
  int v173; // [rsp+28h] [rbp-E0h]
  unsigned int v174; // [rsp+28h] [rbp-E0h]
  __int64 v175; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v176; // [rsp+40h] [rbp-C8h]
  __int128 v177; // [rsp+48h] [rbp-C0h] BYREF
  detail::liberal_expansion_policy *v178; // [rsp+58h] [rbp-B0h]
  __int128 v179; // [rsp+68h] [rbp-A0h] BYREF
  detail::liberal_expansion_policy *v180; // [rsp+78h] [rbp-90h]
  int v181; // [rsp+88h] [rbp-80h]
  struct ID2D1Geometry *v182; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v183; // [rsp+98h] [rbp-70h] BYREF
  CShape *v184; // [rsp+A8h] [rbp-60h]
  const struct CMILMatrix *v185; // [rsp+B0h] [rbp-58h]
  __int128 v186; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v187; // [rsp+C8h] [rbp-40h]
  struct D2D_POINT_2F v188[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v189; // [rsp+E8h] [rbp-20h]
  int v190; // [rsp+108h] [rbp+0h]
  LPVOID lpMem; // [rsp+128h] [rbp+20h] BYREF
  _BYTE *v192; // [rsp+130h] [rbp+28h]
  char *v193; // [rsp+138h] [rbp+30h]
  _BYTE Src[160]; // [rsp+140h] [rbp+38h] BYREF
  char v195; // [rsp+1E0h] [rbp+D8h] BYREF
  void *retaddr; // [rsp+280h] [rbp+178h]

  v3 = 0LL;
  *(_QWORD *)&v183.left = a3;
  v185 = a2;
  v4 = (unsigned __int64)a3;
  v184 = this;
  v181 = 0;
  v6 = (__int64)this;
  v182 = 0LL;
  LODWORD(v175) = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v37 = *((_BYTE *)a2 + 64);
    v38 = (char)(v37 << 6) >> 6;
    if ( v38 == 1 )
      goto LABEL_139;
    if ( v38 < 0 && v38 == -2 )
      goto LABEL_2;
    v39 = *((_BYTE *)a2 + 65);
    if ( (char)(16 * v39) >> 6 == 1 )
    {
LABEL_139:
      v40 = _xmm;
      v41 = FLOAT_61440_0;
      v42 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      goto LABEL_49;
    }
    v40 = _xmm;
    v41 = FLOAT_61440_0;
    v42 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    if ( (char)(16 * v39) >> 6 != 0xFE )
    {
      if ( (char)(4 * v39) >> 6 == 1 )
        goto LABEL_49;
      if ( (char)(4 * v39) >> 6 == 0xFE )
      {
        if ( (float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & _xmm) * 61440.0) != 0.0 )
          goto LABEL_49;
      }
      else
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm)) == 1.0 )
        {
          v43 = 1;
          *((_BYTE *)a2 + 65) = v39 & 0xCF ^ 0x20;
        }
        else
        {
          v43 = 0;
        }
        if ( ((unsigned __int8)v43 & ((float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & _xmm) * 61440.0) == 0.0)) == 0 )
          goto LABEL_49;
      }
      if ( *((float *)a2 + 8) != 0.0 || *((float *)a2 + 9) != 0.0 )
        goto LABEL_49;
      *((_BYTE *)a2 + 65) = *((_BYTE *)a2 + 65) & 0xF3 ^ 8;
    }
    if ( (char)(16 * v37) >> 6 == 1 )
      goto LABEL_49;
    if ( (char)(16 * v37) >> 6 != 0xFE )
    {
      v115 = *((_BYTE *)a2 + 65);
      if ( (char)(4 * v115) >> 6 == 1 )
        goto LABEL_49;
      if ( (char)(4 * v115) >> 6 != 0xFE )
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm)) != 1.0 )
          goto LABEL_49;
        *((_BYTE *)a2 + 65) = v115 & 0xCF ^ 0x20;
      }
      if ( *((float *)a2 + 2) != 0.0 || *((float *)a2 + 6) != 0.0 )
        goto LABEL_49;
      *((_BYTE *)a2 + 64) = v37 & 0xF3 ^ 8;
    }
    v133 = *((_BYTE *)a2 + 64);
    v134 = (char)(4 * v133) >> 6;
    if ( v134 == 1 )
      goto LABEL_49;
    if ( v134 < 0 && v134 == -2 )
    {
LABEL_227:
      if ( *((float *)a2 + 10) == 1.0
        && *((float *)a2 + 12) == 0.0
        && *((float *)a2 + 13) == 0.0
        && *((float *)a2 + 14) == 0.0 )
      {
        *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xFC ^ 2;
        goto LABEL_2;
      }
      goto LABEL_49;
    }
    v135 = v133 >> 6;
    if ( v135 > 0 )
      goto LABEL_49;
    if ( v135 < 0 && v135 == -2 )
    {
LABEL_224:
      if ( *(float *)a2 != 1.0 || *((float *)a2 + 5) != 1.0 )
        goto LABEL_49;
      *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xCF ^ 0x20;
      goto LABEL_227;
    }
    v136 = *((_BYTE *)a2 + 65);
    if ( (char)(4 * v136) >> 6 == 1 )
      goto LABEL_49;
    if ( (char)(4 * v136) >> 6 != 0xFE )
    {
      if ( (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm)) != 1.0 )
        goto LABEL_49;
      *((_BYTE *)a2 + 65) = v136 & 0xCF ^ 0x20;
    }
    if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 4) == 0.0 )
    {
      *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0x3F | 0x80;
      goto LABEL_224;
    }
LABEL_49:
    v44 = CRectanglesShape::IsRectangles;
    v45 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v6 + 64LL);
    if ( v45 == CRectanglesShape::IsRectangles )
    {
      v46 = (__int64)(*(_QWORD *)(v6 + 24) - *(_QWORD *)(v6 + 16)) >> 4;
      LODWORD(v175) = v46;
    }
    else
    {
      if ( !v45((CRectanglesShape *)v6, (unsigned int *)&v175) )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6)
          || !CMILMatrix::Is2DAxisAlignedPreserving(a2) )
        {
          goto LABEL_35;
        }
        v110 = (const struct CRoundedRectangleGeometryData *)(*(_QWORD *)(v6 + 16) + 16LL);
        v190 = 0;
        CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
          v110,
          a2,
          (struct CRoundedRectangleGeometryData *)v188);
        v111 = (_QWORD *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
        v112 = v111;
        if ( v111 )
        {
          v111[1] = 0LL;
          *v111 = &CRoundedRectangleShape::`vftable';
          v111[2] = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v188);
          Microsoft::WRL::ComPtr<CRoundedRectangleShape::SharedData>::InternalAddRef(v112 + 2);
          *(_QWORD *)v4 = v112;
          goto LABEL_35;
        }
        *(_QWORD *)v4 = 0LL;
        v174 = 329;
        goto LABEL_237;
      }
      LODWORD(v46) = v175;
    }
    if ( *((char *)a2 + 64) >> 6 == 1 )
      goto LABEL_176;
    if ( *((char *)a2 + 64) >> 6 < 0 )
      goto LABEL_53;
    v114 = *((_BYTE *)a2 + 65);
    v44 = (char (__fastcall *)(CRectanglesShape *, unsigned int *))v114;
    LOBYTE(v44) = (char)(4 * v114) >> 6;
    if ( (_BYTE)v44 != 1 )
    {
      if ( (char)v44 < 0 )
      {
LABEL_174:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 1) - 0.0) & v40) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - 0.0) & v40) < 0.000081380211 )
        {
          *((_BYTE *)a2 + 64) |= 0xC0u;
          goto LABEL_53;
        }
        goto LABEL_175;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v40) * v41)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v40) * v41))
                                + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v40))
                        - v42) & v40) < 0.000081380211 )
      {
        *((_BYTE *)a2 + 65) = v114 | 0x30;
        goto LABEL_174;
      }
      *((_BYTE *)a2 + 65) = v114 & 0xCF | 0x10;
    }
LABEL_175:
    *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0x3F | 0x40;
LABEL_176:
    if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a2) )
      goto LABEL_35;
LABEL_53:
    if ( !(_DWORD)v46 )
    {
      v141 = (char *)MIDL_user_allocate(0x60uLL);
      v142 = v141;
      if ( v141 )
      {
        memset_0(v141 + 24, 0, 0x40uLL);
        *((_QWORD *)v142 + 1) = 0LL;
        *(_QWORD *)v142 = &CRegionShape::`vftable';
        *((_QWORD *)v142 + 2) = v142 + 24;
        *((_DWORD *)v142 + 6) = 0;
        *((_QWORD *)v142 + 11) = 0LL;
        *(_QWORD *)v4 = v142;
        goto LABEL_35;
      }
      *(_QWORD *)v4 = 0LL;
      v174 = 312;
      goto LABEL_237;
    }
    v47 = (unsigned int)v46;
    v48 = Src;
    lpMem = Src;
    v49 = Src;
    v192 = Src;
    v193 = &v195;
    v50 = Src;
    if ( v47 > 0xA )
    {
      v94 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v44, 0xAuLL, v47);
      v96 = 16 * v94;
      if ( !is_mul_ok(v94, 0x10uLL) )
        v96 = v95;
      v97 = operator new[](v96);
      v186 = (unsigned __int64)v97;
      v98 = v97;
      v187 = 0LL;
      v177 = (unsigned __int64)v97;
      v178 = 0LL;
      std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        v188,
        lpMem,
        v192,
        &v177);
      v99 = lpMem;
      v100 = lpMem == Src;
      lpMem = v98;
      if ( v100 )
        v99 = 0LL;
      operator delete(v99);
      v48 = lpMem;
      v49 = lpMem;
      v192 = lpMem;
      v193 = (char *)lpMem + 16 * v94;
      v50 = lpMem;
    }
    v187 = 0LL;
    v51 = (v50 - (_BYTE *)v48) >> 4;
    *((_QWORD *)&v186 + 1) = v47;
    v178 = 0LL;
    *(_QWORD *)&v186 = &v48[v51];
    if ( !(_QWORD)v186 )
      goto LABEL_101;
    v178 = (detail::liberal_expansion_policy *)v47;
    v52 = v51;
    if ( v47 < v51 )
      v52 = v47;
    v53 = 16 * v52;
    v54 = &v49[v53 / 0xFFFFFFFFFFFFFFF0uLL];
    v187 = v47;
    if ( v49 != &v49[v53 / 0xFFFFFFFFFFFFFFF0uLL] )
    {
      v156 = (_OWORD *)(v186 + 16 * v47);
      v157 = v187;
      do
      {
        --v49;
        if ( !(_QWORD)v186 )
          goto LABEL_101;
        if ( !v157 )
          goto LABEL_101;
        --v157;
        --v156;
        if ( v157 >= *((_QWORD *)&v186 + 1) )
          goto LABEL_101;
        *v156 = *v49;
      }
      while ( v49 != v54 );
      v49 = v192;
    }
    if ( v51 <= v47 )
    {
      v192 = &v49[v47];
    }
    else
    {
      if ( v51 && (!v48 || (v51 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_101;
      if ( (__int64)(-16LL * v47 + 16 * v51) >> 4 > 0 )
      {
        if ( v51 < (__int64)(-16LL * v47 + 16 * v51) >> 4 )
          goto LABEL_101;
      }
      else if ( (__int64)(-16LL * v47 + 16 * v51) >> 4 < 0 )
      {
        goto LABEL_101;
      }
      memmove_0(&v48[v47], v48, -16LL * v47 + 16 * v51);
      v192 += 16 * v47;
    }
    *v48 = 0LL;
    qmemcpy(v48 + 1, v48, 8 * ((16 * v47 - 9) >> 3));
    v55 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v6 + 80LL);
    if ( v55 == CRectanglesShape::GetRectangles )
    {
      v56 = v175;
      if ( !(_DWORD)v175
        || (v101 = *(_QWORD *)(v6 + 16), v102 = (*(_QWORD *)(v6 + 24) - v101) >> 4, (_DWORD)v175 != (_DWORD)v102)
        || (v103 = 0LL, !v102) )
      {
LABEL_68:
        v57 = 0;
        if ( v56 )
        {
          do
          {
            v58 = lpMem;
            v59 = (const struct D2D_RECT_F *)((char *)lpMem + 16 * v57);
            if ( (char)(4 * *((_BYTE *)a2 + 64)) >> 6 == 1 )
              goto LABEL_185;
            if ( (char)(4 * *((_BYTE *)a2 + 64)) >> 6 >= 0 )
            {
              if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - v42) & v40) >= 0.000081380211
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - v42) & v40) >= 0.000081380211 )
              {
                *((_BYTE *)a2 + 64) &= ~0x20u;
                *((_BYTE *)a2 + 64) |= 0x10u;
LABEL_185:
                if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2) )
                {
                  v116 = *(float *)a2;
                  v117 = *((float *)a2 + 5);
                  v118 = (float)(*(float *)a2 * v59->left) + *((float *)a2 + 12);
                  v119 = (float)(v117 * v59->top) + *((float *)a2 + 13);
                  v120 = (float)(*(float *)a2 * v59->right) + *((float *)a2 + 12);
                  v121 = (float)(v117 * v59->bottom) + *((float *)a2 + 13);
                  *(float *)&v186 = v118;
                  *(_QWORD *)((char *)&v186 + 4) = __PAIR64__(LODWORD(v120), LODWORD(v119));
                  *((float *)&v186 + 3) = v121;
                  if ( v116 <= 0.0 || v117 <= 0.0 )
                  {
                    if ( v118 > v120 )
                    {
                      *(float *)&v186 = v120;
                      *((float *)&v186 + 2) = v118;
                    }
                    if ( v119 > v121 )
                    {
                      *((float *)&v186 + 1) = v121;
                      *((float *)&v186 + 3) = v119;
                    }
                  }
                }
                else
                {
                  CMILMatrix::Transform2DRectToPerspective(a2, v59, v188);
                  x = v188[0].x;
                  v161 = 1LL;
                  y = v188[0].y;
                  v163 = v188[0].x;
                  v164 = v188[0].y;
                  do
                  {
                    v158 = v188[v161].x;
                    v159 = v188[v161].y;
                    x = fminf(x, v158);
                    ++v161;
                    y = fminf(y, v159);
                    v163 = fmaxf(v163, v158);
                    v164 = fmaxf(v164, v159);
                  }
                  while ( v161 < 4 );
                  *(_QWORD *)&v186 = __PAIR64__(LODWORD(y), LODWORD(x));
                  *((_QWORD *)&v186 + 1) = __PAIR64__(LODWORD(v164), LODWORD(v163));
                }
                goto LABEL_72;
              }
              *((_BYTE *)a2 + 64) |= 0x30u;
            }
            *(float *)&v60 = *((float *)a2 + 12) + v59->right;
            *(float *)&v61 = *((float *)a2 + 13) + v59->top;
            v62 = *((float *)a2 + 13) + v59->bottom;
            *(float *)&v186 = *((float *)a2 + 12) + v59->left;
            *(_QWORD *)((char *)&v186 + 4) = __PAIR64__(v60, v61);
            *((float *)&v186 + 3) = v62;
LABEL_72:
            v63 = v57++;
            v58[v63] = v186;
          }
          while ( v57 < (unsigned int)v175 );
        }
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) == 2
          && CMILMatrix::Is2DAxisAlignedIntegerPreserving(a2) )
        {
          v165 = (char *)MIDL_user_allocate(0x60uLL);
          v166 = v165;
          if ( !v165 )
          {
            v35 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x11Bu, 0LL);
            detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&lpMem);
            goto LABEL_37;
          }
          memset_0(v165 + 24, 0, 0x40uLL);
          *((_QWORD *)v166 + 1) = 0LL;
          *(_QWORD *)v166 = &CRegionShape::`vftable';
          v167 = 0;
          *((_QWORD *)v166 + 2) = v166 + 24;
          *((_DWORD *)v166 + 6) = 0;
          *((_QWORD *)v166 + 11) = 0LL;
          v188[0] = (struct D2D_POINT_2F)&v188[1];
          v188[1].x = 0.0;
          while ( v167 < (unsigned int)v175 )
          {
            CMilRectLFromD2D_RECT_F(&v183, (char *)lpMem + 16 * v167);
            v168 = CRegion::TryAddRectangle((CRegion *)v188, &v183);
            v181 = v168;
            v35 = v168;
            if ( v168 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v168, 0x121u, 0LL);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v188);
              detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&lpMem);
              CRegionShape::`vector deleting destructor'((CRegionShape *)v166, 1);
              goto LABEL_37;
            }
            ++v167;
          }
          CRegionShape::BuildFromCRegion((CRegionShape *)v166, (const struct CRegion *)v188);
          *(_QWORD *)v4 = v166;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v188);
          goto LABEL_109;
        }
        Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !Value )
        {
          v137 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v137 || (v138 = CThreadContext::CThreadContext(v137), (Value = v138) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v138);
        }
        v65 = Value[13];
        v66 = 0LL;
        v176 = 0LL;
        if ( v65 )
        {
          v66 = (_QWORD *)*((_QWORD *)Value + 7);
          v176 = v66;
          *((_QWORD *)Value + 7) = *v66;
          Value[13] = v65 - 1;
        }
        if ( !v66 )
        {
          ProcessHeap = GetProcessHeap();
          v176 = HeapAlloc(ProcessHeap, 0, 0x40uLL);
          v66 = v176;
          if ( !v176 )
          {
            v35 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x12Du, 0LL);
            v149 = lpMem;
            v150 = (v192 - (_BYTE *)lpMem) >> 4;
            if ( v150 )
              v192 -= 16 * v150;
            lpMem = 0LL;
            if ( v149 != Src && v149 )
            {
              v151 = GetProcessHeap();
              HeapFree(v151, 0, v149);
            }
            goto LABEL_37;
          }
        }
        v66[1] = 0LL;
        *v66 = &CRectanglesShape::`vftable';
        v66[4] = v66 + 7;
        v66[2] = v66 + 5;
        v66[3] = v66 + 5;
        v66[7] = 0LL;
        v68 = (detail::liberal_expansion_policy *)v66[3];
        v21 = (unsigned int)v175;
        v14 = (detail::liberal_expansion_policy *)lpMem;
        v69 = (v68 - (detail::liberal_expansion_policy *)(v66 + 5)) >> 4;
        if ( v69 )
        {
          v68 = (detail::liberal_expansion_policy *)((char *)v68 - 16 * v69);
          v66[3] = v68;
        }
        v70 = 0LL;
        v6 = v21;
        if ( !v14 && (_DWORD)v21 )
        {
LABEL_107:
          ((void (__fastcall *)(detail::liberal_expansion_policy *, detail::liberal_expansion_policy *))`gsl::details::get_terminate_handler'::`2'::handler)(
            v70,
            v68);
          __debugbreak();
        }
        v71 = v66[2];
        v72 = v66[4];
        v73 = (_OWORD *)v66[3];
        v3 = (detail::liberal_expansion_policy *)((char *)v14 + 16 * v21);
        v20 = ((__int64)v73 - v71) >> 4;
        *(_QWORD *)&v177 = v14;
        *((_QWORD *)&v177 + 1) = v3;
        v178 = v14;
        *(_QWORD *)&v186 = v71;
        if ( (v72 - (__int64)v73) >> 4 < (unsigned __int64)v21 )
        {
          v113 = ((__int64)v73 - v71) >> 4;
          if ( v21 + v113 < v113 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_164:
            if ( v21 )
              goto LABEL_124;
            goto LABEL_122;
          }
          v143 = detail::liberal_expansion_policy::expand(0LL, (v72 - v71) >> 4, v21 + v113);
          *(_QWORD *)&v186 = operator new[](saturated_mul(v143, 0x10uLL));
          *((_QWORD *)&v186 + 1) = v113;
          v144 = v186;
          v145 = v176[3];
          v146 = v176[2];
          v187 = 0LL;
          v179 = v186;
          v180 = 0LL;
          std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
            v188,
            v146,
            v145,
            &v179);
          v147 = v176;
          v148 = (_QWORD *)v176[2];
          v176[2] = v144;
          if ( v148 == v147 + 5 )
            v148 = 0LL;
          operator delete(v148);
          v66 = v176;
          v71 = v176[2];
          v73 = (_OWORD *)(v71 + 16 * v113);
          *(_QWORD *)&v186 = v71;
          v176[3] = v73;
          v66[4] = v71 + 16 * v143;
        }
        *((_QWORD *)&v179 + 1) = v6;
        v180 = 0LL;
        v74 = ((__int64)v73 - v71) >> 4;
        v189 = 0LL;
        v75 = v74 - v20;
        *(_QWORD *)&v179 = v71 + 16 * v74;
        if ( !v6 || v71 + 16 * (((__int64)v73 - v71) >> 4) )
        {
          v189 = v6;
          v76 = (((__int64)v73 - v71) >> 4) - v20;
          if ( v6 < v75 )
            v76 = v6;
          v77 = 16 * v76;
          v78 = &v73[v77 / 0xFFFFFFFFFFFFFFF0uLL];
          v180 = (detail::liberal_expansion_policy *)v6;
          if ( v73 == &v73[v77 / 0xFFFFFFFFFFFFFFF0uLL] )
          {
LABEL_88:
            if ( v75 <= v6 )
              goto LABEL_89;
            if ( !v74 || v71 && v74 >= 0 )
            {
              if ( (16 * (v74 - v6) - 16 * v20) >> 4 <= 0 )
              {
                if ( (16 * (v74 - v6) - 16 * v20) >> 4 < 0 )
                  goto LABEL_101;
LABEL_105:
                memmove_0(
                  (void *)(v71 + 16 * v74 - (16 * (v74 - v6) - 16 * v20)),
                  (const void *)(v71 + 16 * v20),
                  16 * (v74 - v6) - 16 * v20);
                v71 = v186;
                v66 = v176;
LABEL_89:
                v79 = v177;
                v80 = v178;
                v66[3] += 16 * v6;
                v179 = v79;
                v70 = (detail::liberal_expansion_policy *)*((_QWORD *)&v79 + 1);
                v68 = (detail::liberal_expansion_policy *)v79;
                v180 = v80;
                v81 = (_OWORD *)(v71 + 16 * v20);
                for ( i = v80; ; i = (detail::liberal_expansion_policy *)((char *)i + 16) )
                {
                  if ( v70 != v3 || v68 != v14 )
                    goto LABEL_107;
                  if ( i == v3 )
                    break;
                  if ( !v68 || !v70 || v68 > i || i >= v70 )
                    goto LABEL_107;
                  v83 = *(_OWORD *)i;
                  *v81++ = v83;
                }
                v4 = *(_QWORD *)&v183.left;
                **(_QWORD **)&v183.left = v66;
LABEL_109:
                v84 = lpMem;
                v85 = (v192 - (_BYTE *)lpMem) >> 4;
                if ( v85 )
                  v192 -= 16 * v85;
                lpMem = 0LL;
                if ( v84 != Src && v84 )
                {
                  v86 = GetProcessHeap();
                  HeapFree(v86, 0, v84);
                }
                goto LABEL_35;
              }
              if ( v74 >= (unsigned __int64)((16 * (v74 - v6) - 16 * v20) >> 4) )
                goto LABEL_105;
            }
          }
          else
          {
            v154 = (_OWORD *)(v179 + 16 * v6);
            v155 = v180;
            while ( 1 )
            {
              --v73;
              if ( !(_QWORD)v179 )
                break;
              if ( !v155 )
                break;
              v155 = (detail::liberal_expansion_policy *)((char *)v155 - 1);
              --v154;
              if ( (unsigned __int64)v155 >= *((_QWORD *)&v179 + 1) )
                break;
              *v154 = *v73;
              if ( v73 == v78 )
                goto LABEL_88;
            }
          }
        }
LABEL_101:
        _invalid_parameter_noinfo_noreturn();
      }
      v104 = lpMem;
      v105 = 0LL;
      do
      {
        v106 = *(_OWORD *)(v101 + v105);
        ++v103;
        v105 += 16LL;
        *v104 = v106;
        v101 = *(_QWORD *)(v6 + 16);
        ++v104;
      }
      while ( v103 < (*(_QWORD *)(v6 + 24) - v101) >> 4 );
    }
    else
    {
      v55(v6, (__int64)lpMem, v175);
    }
    v56 = v175;
    goto LABEL_68;
  }
LABEL_2:
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 != 1 )
  {
    if ( v7 )
    {
      v31 = v7 - 2;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 2 )
            goto LABEL_35;
          v33 = (CPathSegmentsShape *)MIDL_user_allocate(0x18uLL);
          if ( v33 )
          {
            v34 = CPathSegmentsShape::CPathSegmentsShape(v33, *(const struct CPathData **)(v6 + 16));
            if ( v34 )
            {
              *(_QWORD *)v4 = v34;
              goto LABEL_35;
            }
          }
          v174 = 252;
        }
        else
        {
          v107 = GetProcessHeap();
          v108 = HeapAlloc(v107, 0, 0x18uLL);
          v89 = v108;
          if ( v108 )
          {
            v108[1] = 0LL;
            *v108 = &CPolygonShape::`vftable';
            v109 = *(CEffectCompilationTask **)(v6 + 16);
            v108[2] = v109;
            if ( !v109 )
              goto LABEL_138;
            v92 = **(unsigned int (__fastcall ***)(CEffectCompilationTask *__hidden))v109;
            if ( v92 == CEffectCompilationTask::AddRef )
            {
              CEffectCompilationTask::AddRef(v109);
              *(_QWORD *)v4 = v89;
              goto LABEL_35;
            }
            if ( (char *)v92 == (char *)CMILRefCountImpl::AddReference )
            {
              CMILRefCountImpl::AddReference(v109);
              *(_QWORD *)v4 = v89;
              goto LABEL_35;
            }
            goto LABEL_291;
          }
          *(_QWORD *)v4 = 0LL;
          v174 = 243;
        }
      }
      else
      {
        v125 = (char *)MIDL_user_allocate(0x60uLL);
        v126 = v125;
        if ( v125 )
        {
          memset_0(v125 + 24, 0, 0x40uLL);
          *((_QWORD *)v126 + 1) = 0LL;
          *(_QWORD *)v126 = &CRegionShape::`vftable';
          *((_QWORD *)v126 + 2) = v126 + 24;
          *((_DWORD *)v126 + 6) = 0;
          *((_QWORD *)v126 + 11) = 0LL;
          CRegionShape::SetEmpty((CRegionShape *)v126);
          CRegion::Copy((CRegion *)(v126 + 16), (const struct CRegion *)(v6 + 16));
          *(_QWORD *)v4 = v126;
          goto LABEL_35;
        }
        v174 = 230;
      }
LABEL_237:
      v35 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v174, 0LL);
      goto LABEL_37;
    }
LABEL_130:
    v87 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v87 )
    {
      v139 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v139 || (v140 = CThreadContext::CThreadContext(v139), (v87 = v140) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, v3);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v140);
    }
    v88 = v87[17];
    v89 = v3;
    if ( v88 )
    {
      v89 = (_QWORD *)*((_QWORD *)v87 + 9);
      *((_QWORD *)v87 + 9) = *v89;
      v87[17] = v88 - 1;
    }
    if ( v89 || (v90 = GetProcessHeap(), (v89 = HeapAlloc(v90, 0, 0x18uLL)) != 0LL) )
    {
      v89[1] = v3;
      *v89 = &CRoundedRectangleShape::`vftable';
      v91 = *(volatile signed __int32 **)(v6 + 16);
      v89[2] = v91;
      if ( !v91 )
        goto LABEL_138;
      v92 = **(unsigned int (__fastcall ***)(CEffectCompilationTask *__hidden))v91;
      if ( (char *)v92 == (char *)CMILRefCountImpl::AddReference )
      {
        v93 = _InterlockedExchangeAdd(v91, 1u);
        if ( (v93 + 1 < 0) ^ __OFADD__(1, v93) | (v93 == -1) )
        {
          wil::details::in1diag3::Log_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v173);
          *(_QWORD *)v4 = v89;
          goto LABEL_35;
        }
LABEL_138:
        *(_QWORD *)v4 = v89;
        goto LABEL_35;
      }
LABEL_291:
      ((void (*)(void))v92)();
      goto LABEL_138;
    }
    *(_QWORD *)v4 = v3;
    v174 = 206;
    goto LABEL_237;
  }
  v8 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v8 )
  {
    v122 = GetProcessHeap();
    v123 = (CThreadContext *)HeapAlloc(v122, 0, 0x1C0uLL);
    if ( !v123 || (v124 = CThreadContext::CThreadContext(v123), (v8 = v124) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v124);
  }
  v9 = v8[13];
  v10 = 0LL;
  v176 = 0LL;
  if ( v9 )
  {
    v10 = (_QWORD *)*((_QWORD *)v8 + 7);
    v176 = v10;
    *((_QWORD *)v8 + 7) = *v10;
    v8[13] = v9 - 1;
  }
  if ( !v10 )
  {
    v11 = GetProcessHeap();
    v176 = HeapAlloc(v11, 0, 0x40uLL);
    v10 = v176;
    if ( !v176 )
    {
      v174 = 215;
      goto LABEL_237;
    }
  }
  v10[1] = 0LL;
  *v10 = &CRectanglesShape::`vftable';
  v10[4] = v10 + 7;
  v12 = (detail::liberal_expansion_policy *)(v10 + 5);
  v10[2] = v10 + 5;
  v10[3] = v10 + 5;
  v10[7] = 0LL;
  v13 = (detail::liberal_expansion_policy *)v10[3];
  v14 = *(detail::liberal_expansion_policy **)(v6 + 16);
  v15 = (v13 - (detail::liberal_expansion_policy *)(v10 + 5)) >> 4;
  v16 = (__int64)(*(_QWORD *)(v6 + 24) - (_QWORD)v14) >> 4;
  if ( v15 )
  {
    v13 = (detail::liberal_expansion_policy *)((char *)v13 - 16 * v15);
    v10[3] = v13;
  }
  v6 = (unsigned int)v16;
  if ( !v14 && (_DWORD)v16 )
  {
LABEL_118:
    ((void (__fastcall *)(detail::liberal_expansion_policy *, detail::liberal_expansion_policy *))`gsl::details::get_terminate_handler'::`2'::handler)(
      v12,
      v13);
    __debugbreak();
  }
  v17 = v10[2];
  v18 = v10[4];
  v19 = (_OWORD *)v10[3];
  v3 = (detail::liberal_expansion_policy *)((char *)v14 + 16 * (unsigned int)v16);
  v20 = ((__int64)v19 - v17) >> 4;
  *(_QWORD *)&v179 = v14;
  *((_QWORD *)&v179 + 1) = v3;
  v180 = v14;
  *(_QWORD *)&v186 = v17;
  if ( (v18 - (__int64)v19) >> 4 < (unsigned __int64)(unsigned int)v16 )
  {
    v4 = ((__int64)v19 - v17) >> 4;
    if ( (unsigned int)v16 + v4 >= v4 )
    {
      v127 = detail::liberal_expansion_policy::expand(v12, (v18 - v17) >> 4, (unsigned int)v16 + v4);
      *(_QWORD *)&v177 = operator new[](saturated_mul(v127, 0x10uLL));
      v128 = v177;
      *((_QWORD *)&v177 + 1) = v4;
      v129 = v176[3];
      v130 = v176[2];
      v178 = 0LL;
      *(_OWORD *)&v188[0].x = v177;
      v189 = 0LL;
      std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        &v177,
        v130,
        v129,
        v188);
      v131 = v176;
      v132 = (_QWORD *)v176[2];
      v176[2] = v128;
      if ( v132 == v131 + 5 )
        v132 = 0LL;
      operator delete(v132);
      v10 = v176;
      v17 = v176[2];
      v19 = (_OWORD *)(v17 + 16 * v4);
      *(_QWORD *)&v186 = v17;
      v176[3] = v19;
      v10[4] = v17 + 16 * v127;
      goto LABEL_12;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_130;
  }
LABEL_12:
  *((_QWORD *)&v177 + 1) = v6;
  v178 = 0LL;
  v21 = ((__int64)v19 - v17) >> 4;
  v189 = 0LL;
  v22 = v21 - v20;
  *(_QWORD *)&v177 = v17 + 16 * v21;
  if ( v6 && !(v17 + 16 * (((__int64)v19 - v17) >> 4)) )
    goto LABEL_124;
  v189 = v6;
  v23 = (((__int64)v19 - v17) >> 4) - v20;
  if ( v6 < v22 )
    v23 = v6;
  v24 = 16 * v23;
  v25 = &v19[v24 / 0xFFFFFFFFFFFFFFF0uLL];
  v178 = (detail::liberal_expansion_policy *)v6;
  if ( v19 != &v19[v24 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v152 = (_OWORD *)(v177 + 16 * v6);
    v153 = v178;
    do
    {
      --v19;
      if ( !(_QWORD)v177 )
        goto LABEL_124;
      if ( !v153 )
        goto LABEL_124;
      v153 = (detail::liberal_expansion_policy *)((char *)v153 - 1);
      --v152;
      if ( (unsigned __int64)v153 >= *((_QWORD *)&v177 + 1) )
        goto LABEL_124;
      *v152 = *v19;
    }
    while ( v19 != v25 );
  }
  if ( v22 <= v6 )
    goto LABEL_18;
  if ( v21 )
  {
    if ( !v17 )
      goto LABEL_124;
    if ( v21 < 0 )
      goto LABEL_164;
  }
LABEL_122:
  if ( (16 * (v21 - v6) - 16 * v20) >> 4 > 0 )
  {
    if ( v21 >= (unsigned __int64)((16 * (v21 - v6) - 16 * v20) >> 4) )
      goto LABEL_125;
LABEL_124:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( (16 * (v21 - v6) - 16 * v20) >> 4 < 0 )
    goto LABEL_124;
LABEL_125:
  memmove_0(
    (void *)(v17 + 16 * v21 - (16 * (v21 - v6) - 16 * v20)),
    (const void *)(v17 + 16 * v20),
    16 * (v21 - v6) - 16 * v20);
  v17 = v186;
  v10 = v176;
LABEL_18:
  v26 = v179;
  v27 = v180;
  v10[3] += 16 * v6;
  v177 = v26;
  v12 = (detail::liberal_expansion_policy *)*((_QWORD *)&v26 + 1);
  v13 = (detail::liberal_expansion_policy *)v26;
  v178 = v27;
  v28 = (_OWORD *)(v17 + 16 * v20);
  for ( j = v27; ; j = (detail::liberal_expansion_policy *)((char *)j + 16) )
  {
    if ( v12 != v3 || v13 != v14 )
      goto LABEL_118;
    if ( j == v3 )
      break;
    if ( !v13 || !v12 || v13 > j || j >= v12 )
      goto LABEL_118;
    v30 = *(_OWORD *)j;
    *v28++ = v30;
  }
  v4 = *(_QWORD *)&v183.left;
  **(_QWORD **)&v183.left = v10;
LABEL_35:
  if ( *(_QWORD *)v4 )
  {
    v35 = v181;
    goto LABEL_37;
  }
  v169 = v184;
  v35 = (*(__int64 (__fastcall **)(CShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v184 + 24LL))(
          v184,
          v185,
          &v182);
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x14Fu, 0LL);
    goto LABEL_37;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v169 + 56LL))(v169) )
  {
    v170 = (CPolygonShape *)MIDL_user_allocate(0x18uLL);
    if ( v170 )
    {
      v171 = CPolygonShape::CPolygonShape(v170, v182);
      goto LABEL_308;
    }
  }
  else
  {
    v172 = (CComplexShape *)MIDL_user_allocate(0x18uLL);
    if ( v172 )
    {
      v171 = CComplexShape::CComplexShape(v172, v182);
      goto LABEL_308;
    }
  }
  v171 = 0LL;
LABEL_308:
  *(_QWORD *)v4 = v171;
  if ( !v171 )
  {
    v174 = 346;
    goto LABEL_237;
  }
LABEL_37:
  if ( v182 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v182 + 16LL))(v182);
  return (unsigned int)v35;
}
