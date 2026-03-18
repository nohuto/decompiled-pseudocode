/*
 * XREFs of ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180017C60 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18007A680 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BA4A0 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800C6490 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800C6F80 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800CA7E0 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180146C68 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x180146C9C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801730FC (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180173C70 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18019D5D0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x18019DDEC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801AADB0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1801ABBEC (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801ACCA0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801B3040 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1801BC8C0 (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     CanCombineToRegion @ 0x1801D0860 (CanCombineToRegion.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x1801D08CC (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x1801E263C (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x18020DC10 (-reset@-$unique_ptr@VCRegionShape@@U-$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegion.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::TryOptimizedCombinePaths(
        CShape *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        int a5,
        struct CShape **a6)
{
  double v6; // xmm2_8
  __int128 v7; // xmm8
  struct CShape **v8; // r13
  CShape *v11; // rbx
  unsigned int v12; // r14d
  __int64 (*v13)(void); // rax
  float *v14; // rcx
  char v15; // dl
  __int64 v16; // rax
  char v17; // r12
  bool (__fastcall *v18)(LONG **); // rax
  float *v19; // rcx
  bool v20; // dl
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  const struct CRoundedRectangleGeometryData *v24; // r12
  bool (__fastcall *v25)(CRegionShape *__hidden, unsigned int *); // rdx
  bool (__fastcall *v26)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v27; // rax
  float v28; // xmm0_4
  __int64 v30; // rax
  bool (__fastcall *v31)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v32; // rdx
  const struct D2D_VECTOR_2F *v33; // rcx
  __int64 v34; // rax
  const struct CRoundedRectangleGeometryData *v35; // rdi
  LONG *v36; // rax
  __int64 v37; // rax
  __int64 (__fastcall *v38)(CShape *, struct D2D_RECT_F *, _QWORD); // rax
  int v39; // eax
  char v40; // al
  __int64 v41; // rdx
  float y; // xmm3_4
  float x; // xmm2_4
  struct CShape *v44; // rax
  struct CShape *v45; // rbx
  struct CRoundedRectangleShape::SharedData *v46; // rax
  volatile signed __int32 *v47; // rcx
  unsigned int (__fastcall *v48)(CMILRefCountImpl *__hidden); // rax
  signed __int32 v49; // r12d
  __int64 v50; // rax
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
  const struct FastRegion::Internal::CRgnData **v65; // rbx
  int v66; // eax
  __int64 v67; // rcx
  bool IsRectangles; // al
  LONG *v69; // rax
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
  __int64 (__fastcall *v80)(_QWORD *, struct D2D_RECT_F *, unsigned __int64); // rax
  struct D2D_RECT_F *v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdi
  float left; // xmm7_4
  double v86; // xmm3_8
  float right; // xmm4_4
  double v88; // xmm5_8
  double v89; // xmm2_8
  int *v91; // rax
  FLOAT v92; // edx
  FLOAT v93; // r8d
  FLOAT v94; // r9d
  int *v95; // rax
  int v96; // edx
  int v97; // r8d
  int v98; // r9d
  char *v99; // rax
  char *v100; // rbx
  FastRegion::CRegion **v101; // rcx
  float v102; // xmm0_4
  float v103; // xmm3_4
  float bottom; // xmm1_4
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
  float v122; // xmm8_4
  FLOAT v123; // xmm0_4
  FLOAT v124; // xmm0_4
  HANDLE ProcessHeap; // rax
  char *v126; // rax
  __int64 v127; // rbx
  float v128; // xmm0_4
  float v129; // xmm0_4
  float v130; // xmm0_4
  int v131; // eax
  int TightBounds; // eax
  LONG *v133; // rax
  __int64 (__fastcall *v134)(_QWORD *, struct D2D_RECT_F *, unsigned __int64); // rax
  int v135; // eax
  bool v136; // zf
  bool v137; // al
  bool (__fastcall *v138)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v139; // rdx
  const struct D2D_VECTOR_2F *v140; // rcx
  const struct D2D_VECTOR_2F *v141; // rdx
  char *v142; // rax
  char *v143; // rsi
  __int64 v144; // r14
  CThreadContext *v145; // rax
  CThreadContext *v146; // rax
  __int64 v147; // rax
  char (__fastcall *v148)(__int64, __int64, int); // rax
  struct CShape *v149; // rax
  int v150; // eax
  unsigned __int64 v151; // rdi
  LPVOID v152; // rax
  __int64 v153; // r8
  __int64 v154; // rdx
  LPVOID v155; // rbx
  _QWORD *v156; // rcx
  bool v157; // al
  _QWORD *v158; // rax
  struct CShape *v159; // rdx
  _QWORD *v160; // rax
  CRectanglesShape *v161; // rax
  CRectanglesShape *v162; // rax
  unsigned __int64 v163; // rdi
  _OWORD *v164; // r11
  unsigned __int64 v165; // rcx
  __int64 v166; // r13
  __int64 v167; // rdx
  const struct tagRECT *v168; // rax
  const struct tagRECT *v169; // rax
  char *v170; // rax
  char *v171; // rbx
  CRegionShape *v172; // rbx
  int v173; // eax
  unsigned int v174; // [rsp+20h] [rbp-E0h]
  unsigned int v175; // [rsp+20h] [rbp-E0h]
  unsigned int v176; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v177; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v178; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v179; // [rsp+3Ch] [rbp-C4h] BYREF
  CRegionShape *v180[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v181; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v182; // [rsp+60h] [rbp-A0h]
  _BYTE v183[48]; // [rsp+70h] [rbp-90h] BYREF
  int v184; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v185; // [rsp+A8h] [rbp-58h] BYREF
  struct D2D_RECT_F v186; // [rsp+B8h] [rbp-48h] BYREF
  struct D2D_RECT_F v187; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_POINT_2F v188[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct D2D_VECTOR_2F v189; // [rsp+F0h] [rbp-10h] BYREF
  D2D_VECTOR_2F v190; // [rsp+F8h] [rbp-8h] BYREF
  struct D2D_VECTOR_2F v191; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_VECTOR_2F v192; // [rsp+108h] [rbp+8h] BYREF
  int v193; // [rsp+110h] [rbp+10h]
  char v194; // [rsp+114h] [rbp+14h]
  FastRegion::CRegion *v195; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v196[3]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v197[2]; // [rsp+144h] [rbp+44h] BYREF
  _DWORD v198[13]; // [rsp+14Ch] [rbp+4Ch] BYREF
  __int128 v199; // [rsp+190h] [rbp+90h]
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v8 = a6;
  *(_QWORD *)&v187.left = a6;
  v180[0] = 0LL;
  v11 = a1;
  *a6 = 0LL;
  v12 = 0;
  if ( !a1 )
    goto LABEL_57;
  v13 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v13 == (char *)CRectanglesShape::IsEmpty )
  {
    v14 = (float *)*((_QWORD *)a1 + 2);
    v15 = 1;
    v16 = (__int64)(*((_QWORD *)v11 + 3) - (_QWORD)v14) >> 4;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        if ( v14[2] > *v14 )
          v15 = v14[3] <= v14[1];
      }
      else
      {
        v15 = 0;
      }
    }
  }
  else
  {
    v15 = v13();
  }
  if ( v15 )
LABEL_57:
    v17 = 1;
  else
    v17 = 0;
  if ( !a3 )
    goto LABEL_56;
  v18 = *(bool (__fastcall **)(LONG **))(*a3 + 16LL);
  if ( (char *)v18 == (char *)CRectanglesShape::IsEmpty )
  {
    v19 = (float *)a3[2];
    v20 = 1;
    v21 = (__int64)(a3[3] - (_QWORD)v19) >> 4;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        if ( v19[2] > *v19 )
          v20 = v19[3] <= v19[1];
      }
      else
      {
        v20 = 0;
      }
    }
  }
  else if ( (char *)v18 == (char *)CRoundedRectangleShape::IsEmpty )
  {
    v50 = a3[2];
    *(_QWORD *)&v6 = *(unsigned int *)(v50 + 20);
    v51 = *(float *)(v50 + 16);
    if ( *(_BYTE *)(v50 + 68) )
    {
      v52 = v51 + *(float *)(v50 + 24);
      v53 = *(float *)&v6 + *(float *)(v50 + 28);
    }
    else
    {
      v52 = *(float *)(v50 + 24);
      v53 = *(float *)(v50 + 28);
    }
    v20 = v52 <= v51 || v53 <= *(float *)&v6;
  }
  else
  {
    v61 = v18 == CShape::IsEmpty ? CShape::IsEmpty((LONG **)a3) : v18((LONG **)a3);
    v20 = v61;
  }
  if ( v20 )
LABEL_56:
    v22 = 1;
  else
    v22 = 0;
  if ( v17 )
  {
    if ( v22 )
    {
      v158 = (_QWORD *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
      v159 = (struct CShape *)v158;
      if ( v158 )
      {
        v158[1] = 0LL;
        *v158 = &CRectanglesShape::`vftable';
        v160 = v158 + 5;
        *((_QWORD *)v159 + 2) = v160;
        *((_QWORD *)v159 + 3) = v160;
        *((_QWORD *)v159 + 4) = (char *)v159 + 56;
        *((_QWORD *)v159 + 7) = 0LL;
        *a6 = v159;
      }
      else
      {
        v12 = -2147024882;
        *a6 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x264u, 0LL);
      }
      return v12;
    }
LABEL_315:
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v149 = (struct CShape *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
        if ( !v149 )
        {
          v12 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x278u, 0LL);
          return v12;
        }
        goto LABEL_396;
      }
      if ( a5 != 2 )
        return v12;
      if ( v17 )
      {
        v149 = (struct CShape *)((__int64 (*)(void))CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc)();
        if ( !v149 )
        {
          v12 = -2147024882;
          *a6 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x280u, 0LL);
          return v12;
        }
        goto LABEL_396;
      }
      v12 = CShape::CopyShape(v11, 0LL, a6);
      if ( (v12 & 0x80000000) == 0 )
        return v12;
      v175 = 645;
    }
    else
    {
      if ( v17 )
      {
        v12 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
        if ( (v12 & 0x80000000) != 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x26Du, 0LL);
        return v12;
      }
      v12 = CShape::CopyShape(v11, 0LL, a6);
      if ( (v12 & 0x80000000) == 0 )
        return v12;
      v175 = 625;
    }
    goto LABEL_150;
  }
  if ( v22 )
    goto LABEL_315;
  v23 = *(_QWORD *)v11;
  v24 = 0LL;
  v177 = 0;
  v25 = CRegionShape::IsRectangles;
  v26 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v23 + 64);
  if ( v26 == CRoundedRectangleShape::IsRectangles )
  {
    v27 = *((_QWORD *)v11 + 2);
    v28 = *(float *)(v27 + 32);
    if ( *(_BYTE *)(v27 + 68) )
    {
      if ( v28 > 0.0 )
      {
        v57 = *(float *)(v27 + 36);
LABEL_90:
        if ( v57 > 0.0 )
          goto LABEL_23;
      }
    }
    else
    {
      if ( v28 > 0.0 && *(float *)(v27 + 36) > 0.0
        || *(float *)(v27 + 40) > 0.0 && *(float *)(v27 + 44) > 0.0
        || *(float *)(v27 + 48) > 0.0 && *(float *)(v27 + 52) > 0.0 )
      {
        goto LABEL_23;
      }
      if ( *(float *)(v27 + 56) > 0.0 )
      {
        v57 = *(float *)(v27 + 60);
        goto LABEL_90;
      }
    }
  }
  else
  {
    if ( v26 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(v11, &v177);
    }
    else if ( v26 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(v11, &v177);
    }
    else
    {
      IsRectangles = v26(v11, &v177);
    }
    if ( !IsRectangles || v177 != 1 )
      goto LABEL_23;
    v25 = CRegionShape::IsRectangles;
  }
  v69 = (LONG *)*a3;
  v178 = 0;
  v70 = (bool (__fastcall *)(CRoundedRectangleShape *__hidden, unsigned int *))*((_QWORD *)v69 + 8);
  if ( v70 == CRoundedRectangleShape::IsRectangles )
  {
    v71 = a3[2];
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
              *(_QWORD *)&v6 = COERCE_UNSIGNED_INT(
                                 (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a4 + 28) & _xmm) * 61440.0)
                                               + (float)(COERCE_FLOAT(*(_DWORD *)(a4 + 12) & _xmm) * 61440.0))
                                       + COERCE_FLOAT(*(_DWORD *)(a4 + 60) & _xmm))
                               - 1.0) & (unsigned int)_xmm;
              if ( *(float *)&v6 < 0.000081380211 )
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
            return v12;
          }
        }
LABEL_156:
        while ( 1 )
        {
          v74 = *(_QWORD *)v11;
          v75 = CRegionShape::GetTightBounds;
          v185 = 0LL;
          v76 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v74 + 48);
          v186 = 0LL;
          if ( (char *)v76 != (char *)CRectanglesShape::GetTightBounds )
            break;
          v77 = (struct D2D_RECT_F *)*((_QWORD *)v11 + 2);
          v78 = (__int64)(*((_QWORD *)v11 + 3) - (_QWORD)v77) >> 4;
          if ( v78 )
          {
            v79 = 1LL;
            v185 = *v77;
            if ( v78 > 1 )
            {
              v166 = 1LL;
              do
              {
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                  &v185.left,
                  &v77[v166].left);
                v77 = (struct D2D_RECT_F *)*((_QWORD *)v11 + 2);
                ++v166;
                ++v79;
              }
              while ( v79 < (__int64)(*((_QWORD *)v11 + 3) - (_QWORD)v77) >> 4 );
              v8 = *(struct CShape ***)&v187.left;
LABEL_241:
              v75 = CRegionShape::GetTightBounds;
            }
          }
          v80 = *(__int64 (__fastcall **)(_QWORD *, struct D2D_RECT_F *, unsigned __int64))(*a3 + 48LL);
          if ( (char *)v80 == (char *)CRectanglesShape::GetTightBounds )
          {
            v81 = (struct D2D_RECT_F *)a3[2];
            v82 = a3[3] - (_QWORD)v81;
            v199 = v7;
            v83 = v82 >> 4;
            if ( !v83 )
              goto LABEL_163;
            v84 = 1LL;
            v186 = *v81;
            if ( v83 > 1 )
            {
              v144 = 1LL;
              do
              {
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                  &v186.left,
                  &v81[v144].left);
                v81 = (struct D2D_RECT_F *)a3[2];
                ++v144;
                ++v84;
              }
              while ( v84 < (__int64)(a3[3] - (_QWORD)v81) >> 4 );
            }
            if ( !a4 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a4) )
              goto LABEL_163;
            if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v119, v75, v120, v121) )
            {
              *(_QWORD *)&v86 = LODWORD(v186.top);
              left = v186.left + *(float *)(a4 + 48);
              *(float *)&v86 = v186.top + *(float *)(a4 + 52);
              right = v186.right + *(float *)(a4 + 48);
              *(float *)&v88 = v186.bottom + *(float *)(a4 + 52);
              v186.left = left;
              v186.top = *(FLOAT *)&v86;
              v186.right = right;
              v186.bottom = *(FLOAT *)&v88;
            }
            else
            {
              if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4) )
              {
                *(_QWORD *)&v6 = *(unsigned int *)a4;
                v122 = *(float *)(a4 + 20);
                *(_QWORD *)&v86 = LODWORD(v186.top);
                *(_QWORD *)&v88 = LODWORD(v186.bottom);
                left = (float)(*(float *)a4 * v186.left) + *(float *)(a4 + 48);
                *(float *)&v86 = (float)(v186.top * v122) + *(float *)(a4 + 52);
                right = (float)(v186.right * *(float *)&v6) + *(float *)(a4 + 48);
                v186.left = left;
                *(float *)&v88 = (float)(v186.bottom * v122) + *(float *)(a4 + 52);
                v186.top = *(FLOAT *)&v86;
                v186.right = right;
                v186.bottom = *(FLOAT *)&v88;
                if ( *(float *)&v6 <= 0.0 || v122 <= 0.0 )
                {
                  v123 = left;
                  if ( left > right )
                  {
                    v186.left = right;
                    left = right;
                    right = v123;
                    v186.right = v123;
                  }
                  v124 = *(float *)&v86;
                  if ( *(float *)&v86 > *(float *)&v88 )
                  {
                    v186.top = *(FLOAT *)&v88;
                    v86 = v88;
                    *(FLOAT *)&v88 = v124;
                    v186.bottom = v124;
                  }
                }
                goto LABEL_164;
              }
              CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a4, &v186, v188);
              *(_QWORD *)&v187.left = 4LL;
              *(_QWORD *)&v187.right = v188;
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
                &v186,
                &v187);
LABEL_163:
              left = v186.left;
              *(_QWORD *)&v86 = LODWORD(v186.top);
              right = v186.right;
              *(FLOAT *)&v88 = v186.bottom;
            }
LABEL_164:
            v7 = v199;
            v12 = 0;
            goto LABEL_165;
          }
          if ( (char *)v80 == (char *)CRegionShape::GetTightBounds )
            TightBounds = CRegionShape::GetTightBounds(a3, &v186, a4);
          else
            TightBounds = v80(a3, &v186, a4);
          v12 = TightBounds;
          if ( TightBounds < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x297u, 0LL);
            return v12;
          }
          *(FLOAT *)&v88 = v186.bottom;
          right = v186.right;
          *(_QWORD *)&v86 = LODWORD(v186.top);
          left = v186.left;
LABEL_165:
          if ( !a5 )
          {
            if ( right > left
              && *(float *)&v88 > *(float *)&v86
              && (left < v185.left || *(float *)&v86 < v185.top || v185.right < right || v185.bottom < *(float *)&v88)
              && !IsEmpty(&v186) )
            {
              if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(
                                      &v186,
                                      &v185)
                || IsEmpty(&v185) )
              {
                v173 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, v8);
                v12 = v173;
                if ( v173 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v173, 0x2D8u, 0LL);
                return v12;
              }
              if ( !(unsigned __int8)CanCombineToRegion(v11, v167, a3, a4) )
                return v12;
              v196[0] = 0;
              v195 = (FastRegion::CRegion *)v196;
              v168 = (const struct tagRECT *)PixelAlign((int *)&v187, (unsigned int *)&v185, v6);
              CRegion::AddRectangle((CRegion *)&v195, v168);
              v169 = (const struct tagRECT *)PixelAlign((int *)&v187, (unsigned int *)&v186, v6);
              CRegion::AddRectangle((CRegion *)&v195, v169);
              v170 = (char *)MIDL_user_allocate(0x60uLL);
              v171 = v170;
              if ( v170 )
              {
                memset_0(v170 + 24, 0, 0x40uLL);
                *((_QWORD *)v171 + 1) = 0LL;
                *(_QWORD *)v171 = &CRegionShape::`vftable';
                *((_QWORD *)v171 + 2) = v171 + 24;
                *((_DWORD *)v171 + 6) = 0;
                *((_QWORD *)v171 + 11) = 0LL;
              }
              else
              {
                v171 = 0LL;
              }
              std::unique_ptr<CRegionShape>::reset(v180, v171);
              v172 = v180[0];
              if ( !v180[0] )
              {
                v12 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2E7u, 0LL);
                FastRegion::CRegion::FreeMemory(&v195);
                return v12;
              }
              CRegionShape::BuildFromCRegion(v180[0], (const struct CRegion *)&v195);
              v101 = &v195;
              *v8 = v172;
LABEL_192:
              FastRegion::CRegion::FreeMemory(v101);
              return v12;
            }
            v54 = CShape::CopyShape(v11, 0LL, v8);
            v12 = v54;
            if ( v54 >= 0 )
              return v12;
            v55 = v54;
            v175 = 724;
LABEL_72:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, v175, 0LL);
            return v12;
          }
          if ( a5 != 1 )
          {
            if ( a5 != 2 )
              return v12;
            if ( v185.right > v185.left )
            {
              *(_QWORD *)&v89 = LODWORD(v185.top);
              if ( v185.bottom > v185.top
                && (v185.left < left || v185.top < *(float *)&v86 || right < v185.right || *(float *)&v88 < v185.bottom)
                && v185.right > v185.left
                && v185.bottom > v185.top )
              {
                if ( v185.right < left || right < v185.left || v185.bottom < *(float *)&v86 || *(float *)&v88 < v185.top )
                {
                  v150 = CShape::CopyShape(v11, 0LL, v8);
                  v12 = v150;
                  if ( v150 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v150, 0x2B8u, 0LL);
                  return v12;
                }
                if ( (*(unsigned int (__fastcall **)(CShape *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v11 + 8LL))(
                       v11,
                       v75) != 2
                  || (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3) != 2
                  || a4 && !CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4) )
                {
                  return v12;
                }
                v91 = PixelAlign((int *)&v187, (unsigned int *)&v185, v89);
                v188[0] = (struct D2D_POINT_2F)&v188[1];
                v92 = *((float *)v91 + 2);
                v93 = *(float *)v91;
                v94 = *((float *)v91 + 3);
                if ( *v91 >= SLODWORD(v92) || v91[1] >= SLODWORD(v94) )
                {
                  v188[1].x = 0.0;
                }
                else
                {
                  LODWORD(v189.y) = v91[1];
                  LODWORD(v188[1].x) = 2;
                  v188[1].y = v93;
                  v189.x = v92;
                  LODWORD(v190.x) = (unsigned int)&v191 + 4 - (unsigned int)&v189.y;
                  v191.y = v93;
                  v192.x = v92;
                  LODWORD(v191.x) = (unsigned int)&v191 + 4 - (unsigned int)&v190.y + 8;
                  v190.y = v94;
                }
                v95 = PixelAlign((int *)&v187, (unsigned int *)&v186, v89);
                v195 = (FastRegion::CRegion *)v196;
                v96 = v95[2];
                v97 = *v95;
                v98 = v95[3];
                if ( *v95 >= v96 || v95[1] >= v98 )
                {
                  v196[0] = 0;
                }
                else
                {
                  v197[0] = v95[1];
                  v196[0] = 2;
                  v196[1] = v97;
                  v196[2] = v96;
                  v197[1] = (unsigned int)&v191 + 84 - (unsigned int)v197;
                  v198[2] = v97;
                  v198[3] = v96;
                  v198[1] = (unsigned int)&v191 + 84 - (unsigned int)v198 + 8;
                  v198[0] = v98;
                }
                CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v188, &v195);
                v99 = (char *)MIDL_user_allocate(0x60uLL);
                v100 = v99;
                if ( v99 )
                {
                  memset_0(v99 + 24, 0, 0x40uLL);
                  *((_QWORD *)v100 + 1) = 0LL;
                  *(_QWORD *)v100 = &CRegionShape::`vftable';
                  *((_QWORD *)v100 + 2) = v100 + 24;
                  *((_DWORD *)v100 + 6) = 0;
                  *((_QWORD *)v100 + 11) = 0LL;
                  CRegionShape::SetEmpty((CRegionShape *)v100);
                  CRegion::Copy((CRegion *)(v100 + 16), (const struct CRegion *)v188);
                  *v8 = (struct CShape *)v100;
                }
                else
                {
                  v12 = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2C8u, 0LL);
                }
                FastRegion::CRegion::FreeMemory(&v195);
                v101 = (FastRegion::CRegion **)v188;
                goto LABEL_192;
              }
            }
            v149 = (struct CShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(
                                      (unsigned int)(a5 - 1),
                                      v75);
            if ( !v149 )
            {
              v12 = -2147024882;
              *v8 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2B3u, 0LL);
              return v12;
            }
LABEL_396:
            *((_QWORD *)v149 + 1) = 0LL;
            *(_QWORD *)v149 = &CRectanglesShape::`vftable';
            *((_QWORD *)v149 + 2) = (char *)v149 + 40;
            *((_QWORD *)v149 + 3) = (char *)v149 + 40;
            *((_QWORD *)v149 + 4) = (char *)v149 + 56;
            *((_QWORD *)v149 + 7) = 0LL;
            *v8 = v149;
            return v12;
          }
          v102 = v185.left;
          if ( left > v185.left )
          {
            v185.left = left;
            v102 = left;
          }
          *(_QWORD *)&v6 = LODWORD(v185.top);
          if ( *(float *)&v86 > v185.top )
          {
            v185.top = *(FLOAT *)&v86;
            v6 = v86;
          }
          v103 = v185.right;
          if ( v185.right > right )
          {
            v185.right = right;
            v103 = right;
          }
          bottom = v185.bottom;
          if ( v185.bottom > *(float *)&v88 )
          {
            v185.bottom = *(FLOAT *)&v88;
            bottom = *(float *)&v88;
          }
          if ( v103 <= v102 || bottom <= *(float *)&v6 )
          {
            *(_QWORD *)&v185.right = 0LL;
            *(_QWORD *)&v185.left = 0LL;
          }
          if ( (*(unsigned int (__fastcall **)(CShape *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v11 + 8LL))(
                 v11,
                 v75) == 2
            && (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3) == 2
            && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
          {
            ProcessHeap = GetProcessHeap();
            v126 = (char *)HeapAlloc(ProcessHeap, 0, 0x60uLL);
            v127 = (__int64)v126;
            if ( v126 )
            {
              memset_0(v126 + 24, 0, 0x40uLL);
              *(_QWORD *)(v127 + 8) = 0LL;
              *(_QWORD *)v127 = &CRegionShape::`vftable';
              *(_QWORD *)(v127 + 16) = v127 + 24;
              *(_DWORD *)(v127 + 24) = 0;
              *(_QWORD *)(v127 + 88) = 0LL;
              v128 = v185.left + 6291456.25;
              LODWORD(v187.left) = (int)(LODWORD(v128) << 10) >> 11;
              v129 = v185.top + 6291456.25;
              LODWORD(v187.top) = (int)(LODWORD(v129) << 10) >> 11;
              v130 = v185.right + 6291456.25;
              LODWORD(v187.right) = (int)(LODWORD(v130) << 10) >> 11;
              *(float *)&v176 = v185.bottom + 6291456.25;
              LODWORD(v187.bottom) = (int)(v176 << 10) >> 11;
              CRegionShape::BuildFromRects(v127, (__int64)&v187, 1u);
              *v8 = (struct CShape *)v127;
            }
            else
            {
              v12 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2A2u, 0LL);
            }
            return v12;
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v145 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v145 || (v146 = CThreadContext::CThreadContext(v145), (Value = v146) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v146);
          }
          v106 = Value[13];
          a3 = 0LL;
          if ( v106 )
          {
            a3 = (_QWORD *)*((_QWORD *)Value + 7);
            *((_QWORD *)Value + 7) = *a3;
            Value[13] = v106 - 1;
          }
          if ( !a3 )
          {
            v107 = GetProcessHeap();
            a3 = HeapAlloc(v107, 0, 0x40uLL);
            if ( !a3 )
            {
              v12 = -2147024882;
              *v8 = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2A9u, 0LL);
              return v12;
            }
          }
          a3[1] = 0LL;
          *a3 = &CRectanglesShape::`vftable';
          a3[4] = a3 + 7;
          a3[2] = a3 + 5;
          a3[3] = a3 + 5;
          a3[7] = 0LL;
          v108 = (char *)a3[3];
          v109 = (v108 - (char *)(a3 + 5)) >> 4;
          if ( v109 )
          {
            v108 -= 16 * v109;
            a3[3] = v108;
          }
          v110 = a3[4];
          v11 = (CShape *)a3[2];
          a4 = (v108 - (char *)v11) >> 4;
          v187 = v185;
          if ( (v110 - (__int64)v108) >> 4 )
            goto LABEL_212;
          if ( a4 + 1 >= a4 )
          {
            v151 = detail::liberal_expansion_policy::expand(
                     (detail::liberal_expansion_policy *)((v110 - (__int64)v11) >> 4),
                     (v110 - (__int64)v11) >> 4,
                     a4 + 1);
            v152 = operator new[](saturated_mul(v151, 0x10uLL));
            v153 = a3[3];
            v154 = a3[2];
            *(_QWORD *)&v181 = v152;
            v155 = v152;
            *((_QWORD *)&v181 + 1) = a4;
            v182 = 0LL;
            *(_OWORD *)&v188[0].x = v181;
            v189 = 0LL;
            std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
              &v181,
              v154,
              v153,
              v188);
            v156 = (_QWORD *)a3[2];
            a3[2] = v155;
            if ( v156 == a3 + 5 )
              v156 = 0LL;
            operator delete(v156);
            v11 = (CShape *)a3[2];
            v108 = (char *)v11 + 16 * a4;
            a3[4] = (char *)v11 + 16 * v151;
            a3[3] = v108;
LABEL_212:
            v182 = 0LL;
            v111 = (v108 - (char *)v11) >> 4;
            *((_QWORD *)&v181 + 1) = 1LL;
            v112 = v111 - a4;
            v189 = 0LL;
            *(_QWORD *)&v181 = (char *)v11 + 16 * v111;
            if ( (_QWORD)v181 )
            {
              v189 = (struct D2D_VECTOR_2F)1LL;
              v113 = ((v108 - (char *)v11) >> 4) - a4;
              if ( v112 > 1 )
                v113 = 1LL;
              v114 = 16 * v113;
              v115 = &v108[-v114];
              v182 = 1LL;
              if ( v108 == &v108[-v114] )
              {
LABEL_216:
                if ( v112 <= 1 )
                  goto LABEL_217;
                if ( !v111 || v11 && v111 >= 0 )
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
                      (char *)v11 + 16 * v111 - (16 * v111 - 16 * a4) + 16,
                      (char *)v11 + 16 * a4,
                      16 * v111 - 16 * a4 - 16);
LABEL_217:
                    a3[3] += 16LL;
                    *((struct D2D_RECT_F *)v11 + a4) = v187;
                    *v8 = (struct CShape *)a3;
                    return v12;
                  }
                }
              }
              else
              {
                v163 = *((_QWORD *)&v181 + 1);
                v164 = (_OWORD *)(v181 + 16);
                v165 = v182;
                while ( 1 )
                {
                  v108 -= 16;
                  if ( !v165 )
                    break;
                  --v165;
                  --v164;
                  if ( v165 >= v163 )
                    break;
                  *v164 = *(_OWORD *)v108;
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
          v131 = CRegionShape::GetTightBounds(v11, &v185, 0LL);
        else
          v131 = v76(v11, &v185, 0LL);
        v12 = v131;
        if ( v131 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v131, 0x296u, 0LL);
          return v12;
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
      v73 = CRectanglesShape::IsRectangles((CRectanglesShape *)a3, &v178);
    }
    else if ( v70 == CRegionShape::IsRectangles )
    {
      v73 = CRegionShape::IsRectangles((CRegionShape *)a3, &v178);
    }
    else
    {
      v73 = v70((CRoundedRectangleShape *)a3, &v178);
    }
    if ( v73 && v178 == 1 )
      goto LABEL_155;
  }
LABEL_23:
  if ( (*(unsigned int (__fastcall **)(CShape *, _QWORD))(*(_QWORD *)v11 + 8LL))(v11, v25) == 2
    && (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3) == 2
    && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving((CMILMatrix *)a4)) )
  {
    v180[0] = 0LL;
    v62 = CShape::CopyShape(v11, 0LL, v180);
    v63 = v180[0];
    v12 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v62, 0x2F9u, 0LL);
      if ( !v63 )
        return v12;
    }
    else
    {
      v180[0] = 0LL;
      v64 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, v180);
      v65 = (const struct FastRegion::Internal::CRgnData **)v180[0];
      v12 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v64, 0x2FCu, 0LL);
        if ( v65 )
          CRegionShape::`vector deleting destructor'((CRegionShape *)v65, 1);
        if ( !v63 )
          return v12;
      }
      else
      {
        v196[0] = 0;
        v195 = (FastRegion::CRegion *)v196;
        v66 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v195, (CRegionShape *)((char *)v63 + 16));
        v12 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v66, 0x2FFu, 0LL);
          FastRegion::CRegion::FreeMemory(&v195);
          if ( v65 )
            CRegionShape::`vector deleting destructor'((CRegionShape *)v65, 1);
          if ( !v63 )
            return v12;
        }
        else
        {
          if ( a5 == 1 )
          {
            CRegion::Intersect(&v195, v65 + 2);
          }
          else if ( a5 )
          {
            if ( a5 == 2 )
              CRegion::Subtract(&v195, v65 + 2);
          }
          else
          {
            CRegion::Union(&v195, v65 + 2);
          }
          v142 = (char *)MIDL_user_allocate(0x60uLL);
          v143 = v142;
          if ( v142 )
          {
            memset_0(v142 + 24, 0, 0x40uLL);
            *((_QWORD *)v143 + 1) = 0LL;
            *(_QWORD *)v143 = &CRegionShape::`vftable';
            *((_QWORD *)v143 + 2) = v143 + 24;
            *((_DWORD *)v143 + 6) = 0;
            *((_QWORD *)v143 + 11) = 0LL;
            CRegionShape::SetEmpty((CRegionShape *)v143);
            CRegion::Copy((CRegion *)(v143 + 16), (const struct CRegion *)&v195);
            *a6 = (struct CShape *)v143;
            FastRegion::CRegion::FreeMemory(&v195);
            if ( v65 )
              CRegionShape::`vector deleting destructor'((CRegionShape *)v65, 1);
            if ( !v63 )
              return v12;
          }
          else
          {
            v12 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x312u, 0LL);
            FastRegion::CRegion::FreeMemory(&v195);
            if ( v65 )
              CRegionShape::`vector deleting destructor'((CRegionShape *)v65, 1);
            if ( !v63 )
              return v12;
          }
        }
      }
    }
    CRegionShape::`vector deleting destructor'(v63, 1);
    return v12;
  }
  v30 = *(_QWORD *)v11;
  v179 = 0;
  v31 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v30 + 64);
  if ( v31 == CRoundedRectangleShape::IsRectangles )
  {
    v32 = *((_QWORD *)v11 + 2);
    v33 = (const struct D2D_VECTOR_2F *)(v32 + 32);
    if ( !*(_BYTE *)(v32 + 68) )
    {
      if ( v33->x > 0.0 && *(float *)(v32 + 36) > 0.0
        || *(float *)(v32 + 40) > 0.0 && *(float *)(v32 + 44) > 0.0
        || CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v32 + 48))
        || CRoundedRectangleGeometryData::IsRoundedCorner(v60 + 7) )
      {
        goto LABEL_30;
      }
      goto LABEL_269;
    }
    v136 = !CRoundedRectangleGeometryData::IsRoundedCorner(v33);
  }
  else
  {
    if ( v31 == CRectanglesShape::IsRectangles )
    {
      v137 = CRectanglesShape::IsRectangles(v11, &v179);
    }
    else if ( v31 == CRegionShape::IsRectangles )
    {
      v137 = CRegionShape::IsRectangles(v11, &v179);
    }
    else
    {
      v137 = v31(v11, &v179);
    }
    if ( !v137 )
      goto LABEL_30;
    v136 = v179 == 1;
  }
  if ( !v136 )
    goto LABEL_30;
LABEL_269:
  v138 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*a3 + 64LL);
  if ( v138 == CRoundedRectangleShape::IsRectangles )
  {
    v139 = a3[2];
    v140 = (const struct D2D_VECTOR_2F *)(v139 + 32);
    if ( *(_BYTE *)(v139 + 68) )
    {
      if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v140) )
        goto LABEL_300;
    }
    else if ( (v140->x <= 0.0 || *(float *)(v139 + 36) <= 0.0)
           && (*(float *)(v139 + 40) <= 0.0 || *(float *)(v139 + 44) <= 0.0)
           && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v139 + 48))
           && !CRoundedRectangleGeometryData::IsRoundedCorner(v141 + 7) )
    {
LABEL_300:
      if ( !a4 && a5 == 1 )
      {
        v147 = *(_QWORD *)v11;
        v185 = 0LL;
        v148 = *(char (__fastcall **)(__int64, __int64, int))(v147 + 80);
        if ( v148 == CRectanglesShape::GetRectangles )
          CRectanglesShape::GetRectangles((__int64)v11, (__int64)&v185, 1);
        else
          v148((__int64)v11, (__int64)&v185, 1);
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3) == 2 )
        {
          v12 = CRegionShape::IntersectWithRect(a3, &v185, a6);
          if ( (v12 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x326u, 0LL);
        }
        else
        {
          v12 = CRectanglesShape::IntersectWithRect(a3, &v185, a6);
          if ( (v12 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x32Du, 0LL);
        }
      }
      return v12;
    }
  }
  else if ( v138((CRoundedRectangleShape *)a3, 0LL) )
  {
    goto LABEL_300;
  }
LABEL_30:
  if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v11 + 8LL))(v11) )
  {
    v58 = *(_QWORD *)v11;
    *(float *)&v176 = 0.0;
    v59 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v58 + 64);
    if ( v59 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v11 + 2)
                                                                                               + 16LL)) )
        return v12;
    }
    else
    {
      if ( v59 == CRectanglesShape::IsRectangles )
      {
        v157 = CRectanglesShape::IsRectangles(v11, &v176);
      }
      else if ( v59 == CRegionShape::IsRectangles )
      {
        v157 = CRegionShape::IsRectangles(v11, &v176);
      }
      else
      {
        v157 = v59(v11, &v176);
      }
      if ( !v157 || v176 != 1 )
        return v12;
    }
  }
  if ( (!(*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3) || CShape::IsAxisAlignedRectangle((CShape *)a3))
    && a5 == 1
    && (!a4 || CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)a4)) )
  {
    v34 = *(_QWORD *)v11;
    v35 = 0LL;
    *(_QWORD *)&v187.left = 0LL;
    if ( !(*(unsigned int (__fastcall **)(CShape *))(v34 + 8))(v11) )
    {
      v35 = (const struct CRoundedRectangleGeometryData *)(*((_QWORD *)v11 + 2) + 16LL);
      *(_QWORD *)&v187.left = v35;
    }
    v36 = (LONG *)*a3;
    v184 = 0;
    if ( !(*((unsigned int (__fastcall **)(_QWORD *))v36 + 1))(a3) )
    {
      v24 = (const struct CRoundedRectangleGeometryData *)(a3[2] + 16LL);
      if ( a4 )
      {
        CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
          (const struct CRoundedRectangleGeometryData *)(a3[2] + 16LL),
          (const struct CMILMatrix *)a4,
          (struct CRoundedRectangleGeometryData *)v183);
        v24 = (const struct CRoundedRectangleGeometryData *)v183;
      }
    }
    v193 = 0;
    if ( v35 && v24 )
    {
      v40 = CRoundedRectangleGeometryData::TryMerge(v35, v24, (struct CRoundedRectangleGeometryData *)v188);
    }
    else
    {
      v185 = 0LL;
      if ( v35 )
      {
        v133 = (LONG *)*a3;
        *(_QWORD *)&v186.left = v35;
        v134 = (__int64 (__fastcall *)(_QWORD *, struct D2D_RECT_F *, unsigned __int64))*((_QWORD *)v133 + 6);
        if ( (char *)v134 == (char *)CRectanglesShape::GetTightBounds )
          v135 = CRectanglesShape::GetTightBounds(a3, &v185, a4);
        else
          v135 = v134(a3, &v185, a4);
        v12 = v135;
        if ( v135 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v135, 0x369u, 0LL);
          return v12;
        }
      }
      else
      {
        v37 = *(_QWORD *)v11;
        *(_QWORD *)&v186.left = v24;
        v38 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v37 + 48);
        if ( (char *)v38 == (char *)CRectanglesShape::GetTightBounds )
          v39 = CRectanglesShape::GetTightBounds(v11, &v185, 0LL);
        else
          v39 = v38(v11, &v185, 0LL);
        v12 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x370u, 0LL);
          return v12;
        }
      }
      v40 = CRoundedRectangleGeometryData::TryClipWithRect(*(_QWORD *)&v186.left, &v185, v188);
      v35 = *(const struct CRoundedRectangleGeometryData **)&v187.left;
    }
    if ( v40 )
    {
      LOBYTE(v41) = v194;
      y = v189.y;
      x = v189.x;
      if ( v194 )
      {
        if ( !CRoundedRectangleGeometryData::IsRoundedCorner(&v189) )
          goto LABEL_388;
      }
      else if ( (v189.x <= 0.0 || v189.y <= 0.0)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v190)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v191)
             && !CRoundedRectangleGeometryData::IsRoundedCorner(&v192) )
      {
LABEL_388:
        v161 = (CRectanglesShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(v67, v41);
        if ( v161 )
        {
          if ( v194 )
          {
            v185.left = v188[0].x;
            v185.top = v188[0].y;
            v185.right = v188[1].x + v188[0].x;
            v185.bottom = v188[1].y + v188[0].y;
          }
          else
          {
            v185 = *(struct D2D_RECT_F *)&v188[0].x;
          }
          v162 = CRectanglesShape::CRectanglesShape(v161, &v185);
          *a6 = v162;
          if ( v162 )
            return v12;
        }
        else
        {
          *a6 = 0LL;
        }
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x37Bu, 0LL);
        return v12;
      }
      if ( v35 )
      {
        if ( (unsigned __int8)CRoundedRectangleGeometryData::operator==(v188, v35) )
        {
          v12 = CShape::CopyShape(v11, 0LL, a6);
          if ( (v12 & 0x80000000) != 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x381u, 0LL);
          return v12;
        }
        LOBYTE(v41) = v194;
      }
      if ( v24
        && (_BYTE)v41 == *((_BYTE *)v24 + 52)
        && v188[0].x == *(float *)v24
        && v188[0].y == *((float *)v24 + 1)
        && v188[1].x == *((float *)v24 + 2)
        && v188[1].y == *((float *)v24 + 3)
        && x == *((float *)v24 + 4)
        && y == *((float *)v24 + 5)
        && ((_BYTE)v41
         || v190.x == *((float *)v24 + 6)
         && v190.y == *((float *)v24 + 7)
         && v192.x == *((float *)v24 + 10)
         && v192.y == *((float *)v24 + 11)
         && v191.x == *((float *)v24 + 8)
         && v191.y == *((float *)v24 + 9)) )
      {
        v12 = CShape::CopyShape((CShape *)a3, (const struct CMILMatrix *)a4, a6);
        if ( (v12 & 0x80000000) != 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x387u, 0LL);
        return v12;
      }
      v44 = (struct CShape *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
      v45 = v44;
      if ( v44 )
      {
        *((_QWORD *)v44 + 1) = 0LL;
        *(_QWORD *)v44 = &CRoundedRectangleShape::`vftable';
        v46 = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v188);
        *((_QWORD *)v45 + 2) = v46;
        v47 = (volatile signed __int32 *)v46;
        if ( v46 )
        {
          v48 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v46;
          if ( v48 == CMILRefCountImpl::AddReference )
          {
            v49 = _InterlockedExchangeAdd(v47, 1u);
            if ( (v49 + 1 < 0) ^ __OFADD__(1, v49) | (v49 == -1) )
            {
              wil::details::in1diag3::Log_Hr(
                (wil::details::in1diag3 *)retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v174);
              *a6 = v45;
              return v12;
            }
          }
          else
          {
            v48((CMILRefCountImpl *)v47);
          }
        }
        *a6 = v45;
        return v12;
      }
      v12 = -2147024882;
      v175 = 908;
      *a6 = 0LL;
LABEL_150:
      v55 = v12;
      goto LABEL_72;
    }
  }
  return v12;
}
