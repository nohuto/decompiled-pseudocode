/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x18004E5B0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18005E280 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180051CA0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x180057840 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18005F910 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800889D0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18008ED00 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800921D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800AC4A0 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800E0960 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180190FA0 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801951D4 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801A70B0 (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8160 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801B50E0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801C3150 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1801CE1C0 (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1801D9ECC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     CanCombineToRegion @ 0x1801DE680 (CanCombineToRegion.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x1801DE6EC (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x1801E970C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1801E9740 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x1801EC34C (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x180219C70 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        int a5,
        struct CShape **a6)
{
  __int128 v6; // xmm8
  struct CShape **v7; // r13
  CShape *v10; // rbx
  unsigned int v11; // r14d
  __int64 (*v12)(void); // rax
  float *v13; // rcx
  char v14; // dl
  __int64 v15; // rax
  char v16; // r12
  bool (__fastcall *v17)(CShape *__hidden); // rax
  float *v18; // rcx
  bool v19; // dl
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax
  const struct CRoundedRectangleGeometryData *v23; // r12
  bool (__fastcall *v24)(CRegionShape *__hidden, unsigned int *); // rdx
  bool (__fastcall *v25)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v26; // rax
  float v27; // xmm0_4
  __int64 v29; // rax
  bool (__fastcall *v30)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v31; // rdx
  const struct D2D_VECTOR_2F *v32; // rcx
  __int64 v33; // rax
  const struct CRoundedRectangleGeometryData *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall *v37)(CShape *, struct D2D_RECT_F *, _QWORD); // rax
  int v38; // eax
  char v39; // al
  __int64 v40; // rdx
  float y; // xmm3_4
  float x; // xmm2_4
  struct CShape *v43; // rax
  struct CShape *v44; // rbx
  struct CRoundedRectangleShape::SharedData *v45; // rax
  volatile signed __int32 *v46; // rcx
  unsigned int (__fastcall *v47)(CMILRefCountImpl *__hidden); // rax
  signed __int32 v48; // r12d
  __int64 v49; // rax
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  int v54; // eax
  int v55; // r9d
  float v57; // xmm0_4
  __int64 v58; // rax
  bool (__fastcall *v59)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  const struct D2D_VECTOR_2F *v60; // rdx
  bool v61; // al
  int v62; // eax
  CRegionShape *v63; // rdi
  int v64; // eax
  CRegionShape *v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  bool IsRectangles; // al
  __int64 v69; // rax
  bool (__fastcall *v70)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v71; // rcx
  float v72; // xmm0_4
  bool v73; // al
  __int64 v74; // rax
  __int64 (__fastcall *v75)(_QWORD, _QWORD, _QWORD); // rdx
  __int64 (__fastcall *v76)(CShape *, struct D2D_RECT_F *, _QWORD); // rax
  struct D2D_RECT_F *v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r14
  __int64 (__fastcall *v80)(char *, struct D2D_RECT_F *, unsigned __int64); // rax
  struct D2D_RECT_F *v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdi
  float left; // xmm7_4
  float top; // xmm3_4
  float right; // xmm4_4
  float bottom; // xmm5_4
  __int64 v90; // rax
  FLOAT v91; // edx
  FLOAT v92; // r8d
  FLOAT v93; // r9d
  int *v94; // rax
  int v95; // edx
  int v96; // r8d
  int v97; // r9d
  char *v98; // rax
  char *v99; // rbx
  struct D2D_POINT_2F *v100; // rcx
  float v101; // xmm0_4
  float v102; // xmm2_4
  float v103; // xmm3_4
  float v104; // xmm1_4
  _DWORD *Value; // rbx
  int v106; // ecx
  HANDLE v107; // rax
  char *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r9
  unsigned __int64 v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rcx
  char *v115; // rax
  char v116; // cl
  char v117; // dl
  float v118; // xmm4_4
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  float v122; // xmm2_4
  float v123; // xmm8_4
  FLOAT v124; // xmm0_4
  FLOAT v125; // xmm0_4
  HANDLE ProcessHeap; // rax
  char *v127; // rax
  char *v128; // rbx
  float v129; // xmm0_4
  float v130; // xmm0_4
  float v131; // xmm0_4
  int v132; // eax
  int TightBounds; // eax
  __int64 v134; // rax
  __int64 (__fastcall *v135)(char *, struct D2D_RECT_F *, unsigned __int64); // rax
  int v136; // eax
  bool v137; // zf
  bool v138; // al
  bool (__fastcall *v139)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v140; // rdx
  const struct D2D_VECTOR_2F *v141; // rcx
  const struct D2D_VECTOR_2F *v142; // rdx
  char *v143; // rax
  char *v144; // rsi
  __int64 v145; // r14
  CThreadContext *v146; // rax
  CThreadContext *v147; // rax
  __int64 v148; // rax
  void (__fastcall *v149)(CShape *, struct D2D_RECT_F *, __int64); // rax
  struct CShape *v150; // rax
  int v151; // eax
  unsigned __int64 v152; // rdi
  void *v153; // rax
  __int64 v154; // r8
  __int64 v155; // rdx
  void *v156; // rbx
  char *v157; // rcx
  bool v158; // al
  _QWORD *v159; // rax
  struct CShape *v160; // rdx
  _QWORD *v161; // rax
  CRectanglesShape *v162; // rax
  CRectanglesShape *v163; // rax
  unsigned __int64 v164; // rdi
  _OWORD *v165; // r11
  unsigned __int64 v166; // rcx
  __int64 v167; // r13
  __int64 v168; // rdx
  const struct tagRECT *v169; // rax
  const struct tagRECT *v170; // rax
  char *v171; // rax
  char *v172; // rbx
  CRegionShape *v173; // rbx
  int v174; // eax
  unsigned int v175; // [rsp+20h] [rbp-E0h]
  unsigned int v176; // [rsp+20h] [rbp-E0h]
  unsigned int v177; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v178; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v179; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v180; // [rsp+3Ch] [rbp-C4h] BYREF
  CRegionShape *v181[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v182; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v183; // [rsp+60h] [rbp-A0h]
  _BYTE v184[48]; // [rsp+70h] [rbp-90h] BYREF
  int v185; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v186; // [rsp+A8h] [rbp-58h] BYREF
  struct D2D_RECT_F v187; // [rsp+B8h] [rbp-48h] BYREF
  struct D2D_RECT_F v188; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_POINT_2F v189[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct D2D_VECTOR_2F v190; // [rsp+F0h] [rbp-10h] BYREF
  D2D_VECTOR_2F v191; // [rsp+F8h] [rbp-8h] BYREF
  struct D2D_VECTOR_2F v192; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_VECTOR_2F v193; // [rsp+108h] [rbp+8h] BYREF
  int v194; // [rsp+110h] [rbp+10h]
  char v195; // [rsp+114h] [rbp+14h]
  const struct FastRegion::Internal::CRgnData *v196; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v197[3]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v198[2]; // [rsp+144h] [rbp+44h] BYREF
  _DWORD v199[13]; // [rsp+14Ch] [rbp+4Ch] BYREF
  __int128 v200; // [rsp+190h] [rbp+90h]
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v7 = a6;
  *(_QWORD *)&v188.left = a6;
  v181[0] = 0LL;
  v10 = a1;
  *a6 = 0LL;
  v11 = 0;
  if ( !a1 )
    goto LABEL_57;
  v12 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v12 == (char *)CRectanglesShape::IsEmpty )
  {
    v13 = (float *)*((_QWORD *)a1 + 2);
    v14 = 1;
    v15 = (__int64)(*((_QWORD *)v10 + 3) - (_QWORD)v13) >> 4;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        if ( v13[2] > *v13 )
          v14 = v13[3] <= v13[1];
      }
      else
      {
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = v12();
  }
  if ( v14 )
LABEL_57:
    v16 = 1;
  else
    v16 = 0;
  if ( !a3 )
    goto LABEL_56;
  v17 = *(bool (__fastcall **)(CShape *__hidden))(*(_QWORD *)a3 + 16LL);
  if ( v17 == CRectanglesShape::IsEmpty )
  {
    v18 = (float *)*((_QWORD *)a3 + 2);
    v19 = 1;
    v20 = (__int64)(*((_QWORD *)a3 + 3) - (_QWORD)v18) >> 4;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        if ( v18[2] > *v18 )
          v19 = v18[3] <= v18[1];
      }
      else
      {
        v19 = 0;
      }
    }
  }
  else if ( v17 == CRoundedRectangleShape::IsEmpty )
  {
    v49 = *((_QWORD *)a3 + 2);
    v50 = *(float *)(v49 + 20);
    v51 = *(float *)(v49 + 16);
    if ( *(_BYTE *)(v49 + 68) )
    {
      v52 = v51 + *(float *)(v49 + 24);
      v53 = v50 + *(float *)(v49 + 28);
    }
    else
    {
      v52 = *(float *)(v49 + 24);
      v53 = *(float *)(v49 + 28);
    }
    v19 = v52 <= v51 || v53 <= v50;
  }
  else
  {
    v61 = v17 == CShape::IsEmpty ? CShape::IsEmpty((CShape *)a3) : v17((CShape *)a3);
    v19 = v61;
  }
  if ( v19 )
LABEL_56:
    v21 = 1;
  else
    v21 = 0;
  if ( v16 )
  {
    if ( v21 )
    {
      v159 = (_QWORD *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
      v160 = (struct CShape *)v159;
      if ( v159 )
      {
        v159[1] = 0LL;
        *v159 = &CRectanglesShape::`vftable';
        v161 = v159 + 5;
        *((_QWORD *)v160 + 2) = v161;
        *((_QWORD *)v160 + 3) = v161;
        *((_QWORD *)v160 + 4) = (char *)v160 + 56;
        *((_QWORD *)v160 + 7) = 0LL;
        *a6 = v160;
      }
      else
      {
        v11 = -2147024882;
        *a6 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x264u, 0LL);
      }
      return v11;
    }
LABEL_315:
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v150 = (struct CShape *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
        if ( !v150 )
        {
          v11 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x278u, 0LL);
          return v11;
        }
        goto LABEL_396;
      }
      if ( a5 != 2 )
        return v11;
      if ( v16 )
      {
        v150 = (struct CShape *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
        if ( !v150 )
        {
          v11 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x280u, 0LL);
          return v11;
        }
        goto LABEL_396;
      }
      v11 = CShape::CopyShape(v10, 0LL, a6);
      if ( (v11 & 0x80000000) == 0 )
        return v11;
      v176 = 645;
    }
    else
    {
      if ( v16 )
      {
        v11 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
        if ( (v11 & 0x80000000) != 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x26Du, 0LL);
        return v11;
      }
      v11 = CShape::CopyShape(v10, 0LL, a6);
      if ( (v11 & 0x80000000) == 0 )
        return v11;
      v176 = 625;
    }
    goto LABEL_150;
  }
  if ( v21 )
    goto LABEL_315;
  v22 = *(_QWORD *)v10;
  v23 = 0LL;
  v178 = 0;
  v24 = CRegionShape::IsRectangles;
  v25 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v22 + 64);
  if ( v25 == CRoundedRectangleShape::IsRectangles )
  {
    v26 = *((_QWORD *)v10 + 2);
    v27 = *(float *)(v26 + 32);
    if ( *(_BYTE *)(v26 + 68) )
    {
      if ( v27 > 0.0 )
      {
        v57 = *(float *)(v26 + 36);
LABEL_90:
        if ( v57 > 0.0 )
          goto LABEL_23;
      }
    }
    else
    {
      if ( v27 > 0.0 && *(float *)(v26 + 36) > 0.0
        || *(float *)(v26 + 40) > 0.0 && *(float *)(v26 + 44) > 0.0
        || *(float *)(v26 + 48) > 0.0 && *(float *)(v26 + 52) > 0.0 )
      {
        goto LABEL_23;
      }
      if ( *(float *)(v26 + 56) > 0.0 )
      {
        v57 = *(float *)(v26 + 60);
        goto LABEL_90;
      }
    }
  }
  else
  {
    if ( v25 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(v10, &v178);
    }
    else if ( v25 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(v10, &v178);
    }
    else
    {
      IsRectangles = v25(v10, &v178);
    }
    if ( !IsRectangles || v178 != 1 )
      goto LABEL_23;
    v24 = CRegionShape::IsRectangles;
  }
  v69 = *(_QWORD *)a3;
  v179 = 0;
  v70 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v69 + 64);
  if ( v70 == CRoundedRectangleShape::IsRectangles )
  {
    v71 = *((_QWORD *)a3 + 2);
    v72 = *(float *)(v71 + 32);
    if ( *(_BYTE *)(v71 + 68) )
    {
      if ( v72 <= 0.0 || *(float *)(v71 + 36) <= 0.0 )
      {
LABEL_155:
        if ( a4 )
        {
          v116 = *(_BYTE *)(a4 + 64);
          if ( v116 >> 6 == 1 )
            goto LABEL_224;
          if ( v116 >> 6 >= 0 )
          {
            v117 = *(_BYTE *)(a4 + 65);
            if ( (char)(4 * v117) >> 6 != 1 )
            {
              v103 = *(float *)&_xmm;
              v118 = FLOAT_0_000081380211;
              if ( (char)(4 * v117) >> 6 < 0 )
                goto LABEL_222;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a4 + 28) & _xmm) * 61440.0)
                                                + (float)(COERCE_FLOAT(*(_DWORD *)(a4 + 12) & _xmm) * 61440.0))
                                        + COERCE_FLOAT(*(_DWORD *)(a4 + 60) & _xmm))
                                - 1.0) & _xmm) < 0.000081380211 )
              {
                *(_BYTE *)(a4 + 65) = v117 | 0x30;
LABEL_222:
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 4) - 0.0) & _xmm) < 0.000081380211 )
                  goto LABEL_257;
                goto LABEL_223;
              }
              *(_BYTE *)(a4 + 65) = v117 & 0xCF | 0x10;
            }
LABEL_223:
            *(_BYTE *)(a4 + 64) = v116 & 0x3F | 0x40;
LABEL_224:
            if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4) )
              goto LABEL_156;
            return v11;
          }
        }
LABEL_156:
        while ( 1 )
        {
          v74 = *(_QWORD *)v10;
          v75 = CRegionShape::GetTightBounds;
          v186 = 0LL;
          v76 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v74 + 48);
          v187 = 0LL;
          if ( (char *)v76 != (char *)CRectanglesShape::GetTightBounds )
            break;
          v77 = (struct D2D_RECT_F *)*((_QWORD *)v10 + 2);
          v78 = (__int64)(*((_QWORD *)v10 + 3) - (_QWORD)v77) >> 4;
          if ( v78 )
          {
            v79 = 1LL;
            v186 = *v77;
            if ( v78 > 1 )
            {
              v167 = 1LL;
              do
              {
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v186, &v77[v167]);
                v77 = (struct D2D_RECT_F *)*((_QWORD *)v10 + 2);
                ++v167;
                ++v79;
              }
              while ( v79 < (__int64)(*((_QWORD *)v10 + 3) - (_QWORD)v77) >> 4 );
              v7 = *(struct CShape ***)&v188.left;
LABEL_241:
              v75 = CRegionShape::GetTightBounds;
            }
          }
          v80 = *(__int64 (__fastcall **)(char *, struct D2D_RECT_F *, unsigned __int64))(*(_QWORD *)a3 + 48LL);
          if ( (char *)v80 == (char *)CRectanglesShape::GetTightBounds )
          {
            v81 = (struct D2D_RECT_F *)*((_QWORD *)a3 + 2);
            v82 = *((_QWORD *)a3 + 3) - (_QWORD)v81;
            v200 = v6;
            v83 = v82 >> 4;
            if ( !v83 )
              goto LABEL_163;
            v84 = 1LL;
            v187 = *v81;
            if ( v83 > 1 )
            {
              v145 = 1LL;
              do
              {
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v187, &v81[v145]);
                v81 = (struct D2D_RECT_F *)*((_QWORD *)a3 + 2);
                ++v145;
                ++v84;
              }
              while ( v84 < (__int64)(*((_QWORD *)a3 + 3) - (_QWORD)v81) >> 4 );
            }
            if ( !a4 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a4) )
              goto LABEL_163;
            if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v119, v75, v120, v121) )
            {
              left = v187.left + *(float *)(a4 + 48);
              top = v187.top + *(float *)(a4 + 52);
              right = v187.right + *(float *)(a4 + 48);
              bottom = v187.bottom + *(float *)(a4 + 52);
              v187.left = left;
              v187.top = top;
              v187.right = right;
              v187.bottom = bottom;
            }
            else
            {
              if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4) )
              {
                v122 = *(float *)a4;
                v123 = *(float *)(a4 + 20);
                left = (float)(*(float *)a4 * v187.left) + *(float *)(a4 + 48);
                top = (float)(v187.top * v123) + *(float *)(a4 + 52);
                right = (float)(v187.right * *(float *)a4) + *(float *)(a4 + 48);
                v187.left = left;
                bottom = (float)(v187.bottom * v123) + *(float *)(a4 + 52);
                v187.top = top;
                v187.right = right;
                v187.bottom = bottom;
                if ( v122 <= 0.0 || v123 <= 0.0 )
                {
                  v124 = left;
                  if ( left > right )
                  {
                    v187.left = right;
                    left = right;
                    right = v124;
                    v187.right = v124;
                  }
                  v125 = top;
                  if ( top > bottom )
                  {
                    v187.top = bottom;
                    top = bottom;
                    bottom = v125;
                    v187.bottom = v125;
                  }
                }
                goto LABEL_164;
              }
              CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a4, &v187, v189);
              *(_QWORD *)&v188.left = 4LL;
              *(_QWORD *)&v188.right = v189;
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
                &v187,
                &v188);
LABEL_163:
              left = v187.left;
              top = v187.top;
              right = v187.right;
              bottom = v187.bottom;
            }
LABEL_164:
            v6 = v200;
            v11 = 0;
            goto LABEL_165;
          }
          if ( (char *)v80 == (char *)CRegionShape::GetTightBounds )
            TightBounds = CRegionShape::GetTightBounds(a3, &v187, a4);
          else
            TightBounds = v80(a3, &v187, a4);
          v11 = TightBounds;
          if ( TightBounds < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x297u, 0LL);
            return v11;
          }
          bottom = v187.bottom;
          right = v187.right;
          top = v187.top;
          left = v187.left;
LABEL_165:
          if ( !a5 )
          {
            if ( right > left
              && bottom > top
              && (left < v186.left || top < v186.top || v186.right < right || v186.bottom < bottom)
              && !IsEmpty(&v187) )
            {
              if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(
                                      &v187,
                                      &v186)
                || IsEmpty(&v186) )
              {
                v174 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, v7);
                v11 = v174;
                if ( v174 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v174, 0x2D8u, 0LL);
                return v11;
              }
              if ( !(unsigned __int8)CanCombineToRegion(v10, v168, a3, a4) )
                return v11;
              v197[0] = 0;
              v196 = (const struct FastRegion::Internal::CRgnData *)v197;
              v169 = (const struct tagRECT *)PixelAlign(&v188, &v186);
              CRegion::AddRectangle(&v196, v169);
              v170 = (const struct tagRECT *)PixelAlign(&v188, &v187);
              CRegion::AddRectangle(&v196, v170);
              v171 = (char *)MIDL_user_allocate(0x60uLL);
              v172 = v171;
              if ( v171 )
              {
                memset_0(v171 + 24, 0, 0x40uLL);
                *((_QWORD *)v172 + 1) = 0LL;
                *(_QWORD *)v172 = &CRegionShape::`vftable';
                *((_QWORD *)v172 + 2) = v172 + 24;
                *((_DWORD *)v172 + 6) = 0;
                *((_QWORD *)v172 + 11) = 0LL;
              }
              else
              {
                v172 = 0LL;
              }
              std::unique_ptr<CRegionShape>::reset(v181, v172);
              v173 = v181[0];
              if ( !v181[0] )
              {
                v11 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2E7u, 0LL);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v196);
                return v11;
              }
              CRegionShape::BuildFromCRegion(v181[0], (const struct CRegion *)&v196);
              v100 = (struct D2D_POINT_2F *)&v196;
              *v7 = v173;
LABEL_192:
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v100);
              return v11;
            }
            v54 = CShape::CopyShape(v10, 0LL, v7);
            v11 = v54;
            if ( v54 >= 0 )
              return v11;
            v55 = v54;
            v176 = 724;
LABEL_72:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, v176, 0LL);
            return v11;
          }
          if ( a5 != 1 )
          {
            if ( a5 != 2 )
              return v11;
            if ( v186.right > v186.left
              && v186.bottom > v186.top
              && (v186.left < left || v186.top < top || right < v186.right || bottom < v186.bottom)
              && v186.right > v186.left
              && v186.bottom > v186.top )
            {
              if ( v186.right < left || right < v186.left || v186.bottom < top || bottom < v186.top )
              {
                v151 = CShape::CopyShape(v10, 0LL, v7);
                v11 = v151;
                if ( v151 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v151, 0x2B8u, 0LL);
                return v11;
              }
              if ( (*(unsigned int (__fastcall **)(CShape *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v10 + 8LL))(
                     v10,
                     v75) != 2
                || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) != 2
                || a4 && !CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4) )
              {
                return v11;
              }
              v90 = PixelAlign(&v188, &v186);
              v189[0] = (struct D2D_POINT_2F)&v189[1];
              v91 = *(float *)(v90 + 8);
              v92 = *(float *)v90;
              v93 = *(float *)(v90 + 12);
              if ( *(_DWORD *)v90 >= SLODWORD(v91) || *(_DWORD *)(v90 + 4) >= SLODWORD(v93) )
              {
                v189[1].x = 0.0;
              }
              else
              {
                v190.y = *(FLOAT *)(v90 + 4);
                LODWORD(v189[1].x) = 2;
                v189[1].y = v92;
                v190.x = v91;
                LODWORD(v191.x) = (unsigned int)&v192 + 4 - (unsigned int)&v190.y;
                v192.y = v92;
                v193.x = v91;
                LODWORD(v192.x) = (unsigned int)&v192 + 4 - (unsigned int)&v191.y + 8;
                v191.y = v93;
              }
              v94 = (int *)PixelAlign(&v188, &v187);
              v196 = (const struct FastRegion::Internal::CRgnData *)v197;
              v95 = v94[2];
              v96 = *v94;
              v97 = v94[3];
              if ( *v94 >= v95 || v94[1] >= v97 )
              {
                v197[0] = 0;
              }
              else
              {
                v198[0] = v94[1];
                v197[0] = 2;
                v197[1] = v96;
                v197[2] = v95;
                v198[1] = (unsigned int)&v192 + 84 - (unsigned int)v198;
                v199[2] = v96;
                v199[3] = v95;
                v199[1] = (unsigned int)&v192 + 84 - (unsigned int)v199 + 8;
                v199[0] = v97;
              }
              CRegion::Subtract((CRegion *)v189, (const struct CRegion *)&v196);
              v98 = (char *)MIDL_user_allocate(0x60uLL);
              v99 = v98;
              if ( v98 )
              {
                memset_0(v98 + 24, 0, 0x40uLL);
                *((_QWORD *)v99 + 1) = 0LL;
                *(_QWORD *)v99 = &CRegionShape::`vftable';
                *((_QWORD *)v99 + 2) = v99 + 24;
                *((_DWORD *)v99 + 6) = 0;
                *((_QWORD *)v99 + 11) = 0LL;
                CRegionShape::SetEmpty((CRegionShape *)v99);
                CRegion::Copy((CRegion *)(v99 + 16), (const struct CRegion *)v189);
                *v7 = (struct CShape *)v99;
              }
              else
              {
                v11 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C8u, 0LL);
              }
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v196);
              v100 = v189;
              goto LABEL_192;
            }
            v150 = (struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(
                                      (unsigned int)(a5 - 1),
                                      v75);
            if ( !v150 )
            {
              v11 = -2147024882;
              *v7 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2B3u, 0LL);
              return v11;
            }
LABEL_396:
            *((_QWORD *)v150 + 1) = 0LL;
            *(_QWORD *)v150 = &CRectanglesShape::`vftable';
            *((_QWORD *)v150 + 2) = (char *)v150 + 40;
            *((_QWORD *)v150 + 3) = (char *)v150 + 40;
            *((_QWORD *)v150 + 4) = (char *)v150 + 56;
            *((_QWORD *)v150 + 7) = 0LL;
            *v7 = v150;
            return v11;
          }
          v101 = v186.left;
          if ( left > v186.left )
          {
            v186.left = left;
            v101 = left;
          }
          v102 = v186.top;
          if ( top > v186.top )
          {
            v186.top = top;
            v102 = top;
          }
          v103 = v186.right;
          if ( v186.right > right )
          {
            v186.right = right;
            v103 = right;
          }
          v104 = v186.bottom;
          if ( v186.bottom > bottom )
          {
            v186.bottom = bottom;
            v104 = bottom;
          }
          if ( v103 <= v101 || v104 <= v102 )
          {
            *(_QWORD *)&v186.right = 0LL;
            *(_QWORD *)&v186.left = 0LL;
          }
          if ( (*(unsigned int (__fastcall **)(CShape *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v10 + 8LL))(
                 v10,
                 v75) == 2
            && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2
            && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
          {
            ProcessHeap = GetProcessHeap();
            v127 = (char *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
            v128 = v127;
            if ( v127 )
            {
              memset_0(v127 + 24, 0, 0x40uLL);
              *((_QWORD *)v128 + 1) = 0LL;
              *(_QWORD *)v128 = &CRegionShape::`vftable';
              *((_QWORD *)v128 + 2) = v128 + 24;
              *((_DWORD *)v128 + 6) = 0;
              *((_QWORD *)v128 + 11) = 0LL;
              v129 = v186.left + 6291456.25;
              LODWORD(v188.left) = (int)(LODWORD(v129) << 10) >> 11;
              v130 = v186.top + 6291456.25;
              LODWORD(v188.top) = (int)(LODWORD(v130) << 10) >> 11;
              v131 = v186.right + 6291456.25;
              LODWORD(v188.right) = (int)(LODWORD(v131) << 10) >> 11;
              *(float *)&v177 = v186.bottom + 6291456.25;
              LODWORD(v188.bottom) = (int)(v177 << 10) >> 11;
              CRegionShape::BuildFromRects(v128, &v188, 1LL);
              *v7 = (struct CShape *)v128;
            }
            else
            {
              v11 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A2u, 0LL);
            }
            return v11;
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v146 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v146 || (v147 = CThreadContext::CThreadContext(v146), (Value = v147) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v147);
          }
          v106 = Value[13];
          a3 = 0LL;
          if ( v106 )
          {
            a3 = (char *)*((_QWORD *)Value + 7);
            *((_QWORD *)Value + 7) = *(_QWORD *)a3;
            Value[13] = v106 - 1;
          }
          if ( !a3 )
          {
            v107 = GetProcessHeap();
            a3 = (char *)HeapAlloc(v107, 0, 0x40uLL);
            if ( !a3 )
            {
              v11 = -2147024882;
              *v7 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A9u, 0LL);
              return v11;
            }
          }
          *((_QWORD *)a3 + 1) = 0LL;
          *(_QWORD *)a3 = &CRectanglesShape::`vftable';
          *((_QWORD *)a3 + 4) = a3 + 56;
          *((_QWORD *)a3 + 2) = a3 + 40;
          *((_QWORD *)a3 + 3) = a3 + 40;
          *((_QWORD *)a3 + 7) = 0LL;
          v108 = (char *)*((_QWORD *)a3 + 3);
          v109 = (v108 - (a3 + 40)) >> 4;
          if ( v109 )
          {
            v108 -= 16 * v109;
            *((_QWORD *)a3 + 3) = v108;
          }
          v110 = *((_QWORD *)a3 + 4);
          v10 = (CShape *)*((_QWORD *)a3 + 2);
          a4 = (v108 - (char *)v10) >> 4;
          v188 = v186;
          if ( (v110 - (__int64)v108) >> 4 )
            goto LABEL_212;
          if ( a4 + 1 >= a4 )
          {
            v152 = detail::liberal_expansion_policy::expand(
                     (detail::liberal_expansion_policy *)((v110 - (__int64)v10) >> 4),
                     (v110 - (__int64)v10) >> 4,
                     a4 + 1);
            v153 = operator new[](saturated_mul(v152, 0x10uLL));
            v154 = *((_QWORD *)a3 + 3);
            v155 = *((_QWORD *)a3 + 2);
            *(_QWORD *)&v182 = v153;
            v156 = v153;
            *((_QWORD *)&v182 + 1) = a4;
            v183 = 0LL;
            *(_OWORD *)&v189[0].x = v182;
            v190 = 0LL;
            std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
              &v182,
              v155,
              v154,
              v189);
            v157 = (char *)*((_QWORD *)a3 + 2);
            *((_QWORD *)a3 + 2) = v156;
            if ( v157 == a3 + 40 )
              v157 = 0LL;
            operator delete(v157);
            v10 = (CShape *)*((_QWORD *)a3 + 2);
            v108 = (char *)v10 + 16 * a4;
            *((_QWORD *)a3 + 4) = (char *)v10 + 16 * v152;
            *((_QWORD *)a3 + 3) = v108;
LABEL_212:
            v183 = 0LL;
            v111 = (v108 - (char *)v10) >> 4;
            *((_QWORD *)&v182 + 1) = 1LL;
            v112 = v111 - a4;
            v190 = 0LL;
            *(_QWORD *)&v182 = (char *)v10 + 16 * v111;
            if ( (_QWORD)v182 )
            {
              v190 = (struct D2D_VECTOR_2F)1LL;
              v113 = ((v108 - (char *)v10) >> 4) - a4;
              if ( v112 > 1 )
                v113 = 1LL;
              v114 = 16 * v113;
              v115 = &v108[-v114];
              v183 = 1LL;
              if ( v108 == &v108[-v114] )
              {
LABEL_216:
                if ( v112 <= 1 )
                  goto LABEL_217;
                if ( !v111 || v10 && v111 >= 0 )
                {
                  if ( (__int64)(16 * v111 - 16 * a4 - 16) >> 4 > 0 )
                  {
                    if ( v111 >= (unsigned __int64)((__int64)(16 * v111 - 16 * a4 - 16) >> 4) )
                      goto LABEL_252;
                  }
                  else if ( (__int64)(16 * v111 - 16 * a4 - 16) >> 4 >= 0 )
                  {
LABEL_252:
                    memmove_0(
                      (char *)v10 + 16 * v111 - (16 * v111 - 16 * a4) + 16,
                      (char *)v10 + 16 * a4,
                      16 * v111 - 16 * a4 - 16);
LABEL_217:
                    *((_QWORD *)a3 + 3) += 16LL;
                    *((struct D2D_RECT_F *)v10 + a4) = v188;
                    *v7 = (struct CShape *)a3;
                    return v11;
                  }
                }
              }
              else
              {
                v164 = *((_QWORD *)&v182 + 1);
                v165 = (_OWORD *)(v182 + 16);
                v166 = v183;
                while ( 1 )
                {
                  v108 -= 16;
                  if ( !v166 )
                    break;
                  --v166;
                  --v165;
                  if ( v166 >= v164 )
                    break;
                  *v165 = *(_OWORD *)v108;
                  if ( v108 == v115 )
                    goto LABEL_216;
                }
              }
            }
            _invalid_parameter_noinfo_noreturn();
          }
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_257:
          if ( v118 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a4 + 16) - 0.0) & LODWORD(v103)) )
            goto LABEL_223;
          *(_BYTE *)(a4 + 64) = v116 | 0xC0;
        }
        if ( (char *)v76 == (char *)CRegionShape::GetTightBounds )
          v132 = CRegionShape::GetTightBounds(v10, &v186, 0LL);
        else
          v132 = v76(v10, &v186, 0LL);
        v11 = v132;
        if ( v132 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v132, 0x296u, 0LL);
          return v11;
        }
        goto LABEL_241;
      }
    }
    else if ( (v72 <= 0.0 || *(float *)(v71 + 36) <= 0.0)
           && (*(float *)(v71 + 40) <= 0.0 || *(float *)(v71 + 44) <= 0.0)
           && (*(float *)(v71 + 48) <= 0.0 || *(float *)(v71 + 52) <= 0.0)
           && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v71 + 56)) )
    {
      goto LABEL_155;
    }
  }
  else
  {
    if ( v70 == CRectanglesShape::IsRectangles )
    {
      v73 = CRectanglesShape::IsRectangles((CRectanglesShape *)a3, &v179);
    }
    else if ( v70 == CRegionShape::IsRectangles )
    {
      v73 = CRegionShape::IsRectangles((CRegionShape *)a3, &v179);
    }
    else
    {
      v73 = v70((CRoundedRectangleShape *)a3, &v179);
    }
    if ( v73 && v179 == 1 )
      goto LABEL_155;
  }
LABEL_23:
  if ( (*(unsigned int (__fastcall **)(CShape *, _QWORD))(*(_QWORD *)v10 + 8LL))(v10, v24) == 2
    && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2
    && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
  {
    v181[0] = 0LL;
    v62 = CShape::CopyShape(v10, 0LL, v181);
    v63 = v181[0];
    v11 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x2F9u, 0LL);
      if ( !v63 )
        return v11;
    }
    else
    {
      v181[0] = 0LL;
      v64 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, v181);
      v65 = v181[0];
      v11 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2FCu, 0LL);
        if ( v65 )
          CRegionShape::`vector deleting destructor'(v65, 1u);
        if ( !v63 )
          return v11;
      }
      else
      {
        v197[0] = 0;
        v196 = (const struct FastRegion::Internal::CRgnData *)v197;
        v66 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v196, (CRegionShape *)((char *)v63 + 16));
        v11 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x2FFu, 0LL);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v196);
          if ( v65 )
            CRegionShape::`vector deleting destructor'(v65, 1u);
          if ( !v63 )
            return v11;
        }
        else
        {
          if ( a5 == 1 )
          {
            CRegion::Intersect((CRegion *)&v196, (CRegionShape *)((char *)v65 + 16));
          }
          else if ( a5 )
          {
            if ( a5 == 2 )
              CRegion::Subtract((CRegion *)&v196, (CRegionShape *)((char *)v65 + 16));
          }
          else
          {
            CRegion::Union((CRegion *)&v196, (CRegionShape *)((char *)v65 + 16));
          }
          v143 = (char *)MIDL_user_allocate(0x60uLL);
          v144 = v143;
          if ( v143 )
          {
            memset_0(v143 + 24, 0, 0x40uLL);
            *((_QWORD *)v144 + 1) = 0LL;
            *(_QWORD *)v144 = &CRegionShape::`vftable';
            *((_QWORD *)v144 + 2) = v144 + 24;
            *((_DWORD *)v144 + 6) = 0;
            *((_QWORD *)v144 + 11) = 0LL;
            CRegionShape::SetEmpty((CRegionShape *)v144);
            CRegion::Copy((CRegion *)(v144 + 16), (const struct CRegion *)&v196);
            *a6 = (struct CShape *)v144;
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v196);
            if ( v65 )
              CRegionShape::`vector deleting destructor'(v65, 1u);
            if ( !v63 )
              return v11;
          }
          else
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x312u, 0LL);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v196);
            if ( v65 )
              CRegionShape::`vector deleting destructor'(v65, 1u);
            if ( !v63 )
              return v11;
          }
        }
      }
    }
    CRegionShape::`vector deleting destructor'(v63, 1u);
    return v11;
  }
  v29 = *(_QWORD *)v10;
  v180 = 0;
  v30 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v29 + 64);
  if ( v30 == CRoundedRectangleShape::IsRectangles )
  {
    v31 = *((_QWORD *)v10 + 2);
    v32 = (const struct D2D_VECTOR_2F *)(v31 + 32);
    if ( !*(_BYTE *)(v31 + 68) )
    {
      if ( v32->x > 0.0 && *(float *)(v31 + 36) > 0.0
        || *(float *)(v31 + 40) > 0.0 && *(float *)(v31 + 44) > 0.0
        || CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v31 + 48))
        || CRoundedRectangleGeometryData::IsRoundedCorner(v60 + 7) )
      {
        goto LABEL_30;
      }
      goto LABEL_269;
    }
    v137 = !CRoundedRectangleGeometryData::IsRoundedCorner(v32);
  }
  else
  {
    if ( v30 == CRectanglesShape::IsRectangles )
    {
      v138 = CRectanglesShape::IsRectangles(v10, &v180);
    }
    else if ( v30 == CRegionShape::IsRectangles )
    {
      v138 = CRegionShape::IsRectangles(v10, &v180);
    }
    else
    {
      v138 = v30(v10, &v180);
    }
    if ( !v138 )
      goto LABEL_30;
    v137 = v180 == 1;
  }
  if ( !v137 )
    goto LABEL_30;
LABEL_269:
  v139 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)a3 + 64LL);
  if ( v139 == CRoundedRectangleShape::IsRectangles )
  {
    v140 = *((_QWORD *)a3 + 2);
    v141 = (const struct D2D_VECTOR_2F *)(v140 + 32);
    if ( *(_BYTE *)(v140 + 68) )
    {
      if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v141) )
        goto LABEL_300;
    }
    else if ( (v141->x <= 0.0 || *(float *)(v140 + 36) <= 0.0)
           && (*(float *)(v140 + 40) <= 0.0 || *(float *)(v140 + 44) <= 0.0)
           && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v140 + 48))
           && !CRoundedRectangleGeometryData::IsRoundedCorner(v142 + 7) )
    {
LABEL_300:
      if ( !a4 && a5 == 1 )
      {
        v148 = *(_QWORD *)v10;
        v186 = 0LL;
        v149 = *(void (__fastcall **)(CShape *, struct D2D_RECT_F *, __int64))(v148 + 80);
        if ( (char *)v149 == (char *)CRectanglesShape::GetRectangles )
          CRectanglesShape::GetRectangles(v10, &v186, 1LL);
        else
          v149(v10, &v186, 1LL);
        if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3) == 2 )
        {
          v11 = CRegionShape::IntersectWithRect(a3, &v186, a6);
          if ( (v11 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x326u, 0LL);
        }
        else
        {
          v11 = CRectanglesShape::IntersectWithRect(a3, &v186, a6);
          if ( (v11 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32Du, 0LL);
        }
      }
      return v11;
    }
  }
  else if ( v139((CRoundedRectangleShape *)a3, 0LL) )
  {
    goto LABEL_300;
  }
LABEL_30:
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v10 + 8LL))(v10) )
  {
    v58 = *(_QWORD *)v10;
    *(float *)&v177 = 0.0;
    v59 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v58 + 64);
    if ( v59 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v10 + 2)
                                                                                               + 16LL)) )
        return v11;
    }
    else
    {
      if ( v59 == CRectanglesShape::IsRectangles )
      {
        v158 = CRectanglesShape::IsRectangles(v10, &v177);
      }
      else if ( v59 == CRegionShape::IsRectangles )
      {
        v158 = CRegionShape::IsRectangles(v10, &v177);
      }
      else
      {
        v158 = v59(v10, &v177);
      }
      if ( !v158 || v177 != 1 )
        return v11;
    }
  }
  if ( (!(*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3)
     || CShape::IsAxisAlignedRectangle((CShape *)a3))
    && a5 == 1
    && (!a4 || CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)a4)) )
  {
    v33 = *(_QWORD *)v10;
    v34 = 0LL;
    *(_QWORD *)&v188.left = 0LL;
    if ( !(*(unsigned int (__fastcall **)(CShape *))(v33 + 8))(v10) )
    {
      v34 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)v10 + 2) + 16LL);
      *(_QWORD *)&v188.left = v34;
    }
    v35 = *(_QWORD *)a3;
    v185 = 0;
    if ( !(*(unsigned int (__fastcall **)(char *))(v35 + 8))(a3) )
    {
      v23 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL);
      if ( a4 )
      {
        CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
          (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)a3 + 2) + 16LL),
          (const struct CMILMatrix *)a4,
          (struct CRoundedRectangleGeometryData *)v184);
        v23 = (const struct CRoundedRectangleGeometryData *)v184;
      }
    }
    v194 = 0;
    if ( v34 && v23 )
    {
      v39 = CRoundedRectangleGeometryData::TryMerge(v34, v23, (struct CRoundedRectangleGeometryData *)v189);
    }
    else
    {
      v186 = 0LL;
      if ( v34 )
      {
        v134 = *(_QWORD *)a3;
        *(_QWORD *)&v187.left = v34;
        v135 = *(__int64 (__fastcall **)(char *, struct D2D_RECT_F *, unsigned __int64))(v134 + 48);
        if ( (char *)v135 == (char *)CRectanglesShape::GetTightBounds )
          v136 = CRectanglesShape::GetTightBounds(a3, &v186, a4);
        else
          v136 = v135(a3, &v186, a4);
        v11 = v136;
        if ( v136 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v136, 0x369u, 0LL);
          return v11;
        }
      }
      else
      {
        v36 = *(_QWORD *)v10;
        *(_QWORD *)&v187.left = v23;
        v37 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v36 + 48);
        if ( (char *)v37 == (char *)CRectanglesShape::GetTightBounds )
          v38 = CRectanglesShape::GetTightBounds(v10, &v186, 0LL);
        else
          v38 = v37(v10, &v186, 0LL);
        v11 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x370u, 0LL);
          return v11;
        }
      }
      v39 = CRoundedRectangleGeometryData::TryClipWithRect(*(_QWORD *)&v187.left, &v186, v189);
      v34 = *(const struct CRoundedRectangleGeometryData **)&v188.left;
    }
    if ( v39 )
    {
      LOBYTE(v40) = v195;
      y = v190.y;
      x = v190.x;
      if ( v195 )
      {
        if ( !CRoundedRectangleGeometryData::IsRoundedCorner(&v190) )
          goto LABEL_388;
      }
      else if ( (v190.x <= 0.0 || v190.y <= 0.0)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v191)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v192)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v193) )
      {
LABEL_388:
        v162 = (CRectanglesShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(v67, v40);
        if ( v162 )
        {
          if ( v195 )
          {
            v186.left = v189[0].x;
            v186.top = v189[0].y;
            v186.right = v189[1].x + v189[0].x;
            v186.bottom = v189[1].y + v189[0].y;
          }
          else
          {
            v186 = *(struct D2D_RECT_F *)&v189[0].x;
          }
          v163 = CRectanglesShape::CRectanglesShape(v162, &v186);
          *a6 = v163;
          if ( v163 )
            return v11;
        }
        else
        {
          *a6 = 0LL;
        }
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37Bu, 0LL);
        return v11;
      }
      if ( v34 )
      {
        if ( (unsigned __int8)CRoundedRectangleGeometryData::operator==(v189, v34) )
        {
          v11 = CShape::CopyShape(v10, 0LL, a6);
          if ( (v11 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x381u, 0LL);
          return v11;
        }
        LOBYTE(v40) = v195;
      }
      if ( v23
        && (_BYTE)v40 == *((_BYTE *)v23 + 52)
        && v189[0].x == *(float *)v23
        && v189[0].y == *((float *)v23 + 1)
        && v189[1].x == *((float *)v23 + 2)
        && v189[1].y == *((float *)v23 + 3)
        && x == *((float *)v23 + 4)
        && y == *((float *)v23 + 5)
        && ((_BYTE)v40
         || v191.x == *((float *)v23 + 6)
         && v191.y == *((float *)v23 + 7)
         && v193.x == *((float *)v23 + 10)
         && v193.y == *((float *)v23 + 11)
         && v192.x == *((float *)v23 + 8)
         && v192.y == *((float *)v23 + 9)) )
      {
        v11 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
        if ( (v11 & 0x80000000) != 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x387u, 0LL);
        return v11;
      }
      v43 = (struct CShape *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
      v44 = v43;
      if ( v43 )
      {
        *((_QWORD *)v43 + 1) = 0LL;
        *(_QWORD *)v43 = &CRoundedRectangleShape::`vftable';
        v45 = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v189);
        *((_QWORD *)v44 + 2) = v45;
        v46 = (volatile signed __int32 *)v45;
        if ( v45 )
        {
          v47 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v45;
          if ( v47 == CMILRefCountImpl::AddReference )
          {
            v48 = _InterlockedExchangeAdd(v46, 1u);
            if ( (v48 + 1 < 0) ^ __OFADD__(1, v48) | (v48 == -1) )
            {
              wil::details::in1diag3::Log_Hr(
                (wil::details::in1diag3 *)retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v175);
              *a6 = v44;
              return v11;
            }
          }
          else
          {
            v47((CMILRefCountImpl *)v46);
          }
        }
        *a6 = v44;
        return v11;
      }
      v11 = -2147024882;
      v176 = 908;
      *a6 = 0LL;
LABEL_150:
      v55 = v11;
      goto LABEL_72;
    }
  }
  return v11;
}
