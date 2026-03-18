/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18010D5A0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18010F900 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180126910 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180128F70 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801974B8 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1801A0068 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1801BDF50 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x18022F178 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(CBrushDrawListGenerator *this, __m128 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  int v4; // xmm7_4
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v5; // rsi
  CBrushDrawListGenerator *v6; // r13
  __int64 v7; // r9
  __int64 v8; // rcx
  bool v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // xmm0_4
  __int32 v14; // xmm1_4
  unsigned __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64 *, __m128 *, LPVOID *); // rax
  int v21; // eax
  unsigned __int64 v22; // r13
  __int64 v23; // r8
  void *(__fastcall ***v24)(CRectanglesShape *__hidden, unsigned int); // r12
  unsigned __int64 v25; // r15
  __m128 v26; // xmm0
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  int v35; // eax
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  __m128 v39; // xmm1
  CRegionShape *v40; // rbx
  void *(__fastcall *v41)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  CResource *v44; // rcx
  void (*v45)(void); // rax
  char *v46; // rax
  __int64 v47; // rdi
  void *v48; // rdi
  CPathData *v49; // rcx
  void (*v50)(void); // rax
  _QWORD *Value; // rdi
  HANDLE v52; // rax
  CResource **v53; // rax
  char *v54; // rdi
  __int64 v55; // rbx
  void (*v56)(void); // rax
  __int64 v57; // rbx
  CPathData *v58; // rcx
  void (*v59)(void); // rax
  CRegionShape *v60; // rbx
  void *(__fastcall *v61)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v62; // rdi
  CResource *v63; // rcx
  __int64 (__fastcall *v64)(CResource *); // rax
  char *v65; // r13
  __int64 v66; // rdi
  CPathData *v67; // rcx
  __int64 (__fastcall *v68)(CPathData *); // rax
  _QWORD *v69; // rdi
  HANDLE v70; // rax
  void *(__fastcall ***v71)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v72)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v73; // rdi
  CResource *v74; // rcx
  __int64 (__fastcall *v75)(CResource *); // rax
  void *(__fastcall ***v76)(CRectanglesShape *__hidden, unsigned int); // r12
  __int64 v77; // rdi
  CPathData *v78; // rcx
  __int64 (__fastcall *v79)(CPathData *); // rax
  _QWORD *v80; // rdi
  HANDLE v81; // rax
  bool (__fastcall *v82)(CRectanglesShape *__hidden); // rax
  char v83; // cl
  __int64 v84; // rax
  char v85; // al
  char v86; // r15
  CRegionShape *v87; // r14
  unsigned int v88; // edi
  int v89; // r13d
  __int64 v90; // rbx
  __int64 (__fastcall *v91)(_QWORD, __int64); // rax
  bool (__fastcall *v92)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  int v93; // ecx
  HANDLE v94; // rax
  HANDLE ProcessHeap; // rax
  float v96; // xmm5_4
  const struct D2D_MATRIX_3X2_F *v97; // rdx
  float v98; // xmm7_4
  float v99; // xmm3_4
  float v100; // xmm6_4
  float v101; // xmm10_4
  float v102; // xmm13_4
  float v103; // xmm11_4
  float v104; // xmm8_4
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm10_4
  float v108; // xmm9_4
  float v109; // xmm0_4
  float v110; // xmm13_4
  float v111; // xmm4_4
  float v112; // xmm11_4
  float v113; // xmm2_4
  unsigned int v114; // xmm5_4
  float v115; // xmm0_4
  float v116; // xmm6_4
  float v117; // xmm2_4
  float v118; // xmm10_4
  float v119; // xmm15_4
  float v120; // xmm13_4
  float v121; // xmm7_4
  float v122; // xmm8_4
  __m128 v123; // xmm12
  float v124; // xmm3_4
  float v125; // xmm5_4
  float v126; // xmm0_4
  __m128 v127; // xmm11
  float v128; // xmm3_4
  float v129; // xmm1_4
  float v130; // xmm6_4
  float v131; // xmm4_4
  float v132; // xmm3_4
  float v133; // xmm14_4
  float v134; // xmm9_4
  __m128 v135; // xmm10
  __m128 v136; // xmm10
  __m128 v137; // xmm10
  float v138; // xmm2_4
  int v139; // xmm0_4
  __m128 v140; // xmm10
  __m128 v141; // xmm11
  __m128 v142; // xmm11
  __m128 v143; // xmm11
  int v144; // eax
  unsigned __int8 v145; // cf
  float v146; // xmm4_4
  float v147; // xmm2_4
  float v148; // xmm3_4
  float v149; // xmm13_4
  float v150; // xmm14_4
  float v151; // xmm9_4
  float v152; // xmm7_4
  float v153; // xmm10_4
  float v154; // xmm11_4
  float v155; // xmm6_4
  float v156; // xmm8_4
  float v157; // xmm5_4
  float v158; // xmm0_4
  float v159; // xmm4_4
  float v160; // xmm5_4
  float v161; // xmm1_4
  float v162; // xmm3_4
  __m128 v163; // xmm12
  float v164; // xmm5_4
  float v165; // xmm15_4
  float v166; // xmm2_4
  float v167; // xmm11_4
  float v168; // xmm15_4
  float v169; // xmm4_4
  __m128 v170; // xmm3
  float v171; // xmm0_4
  float v172; // xmm11_4
  float v173; // xmm2_4
  float v174; // xmm4_4
  float v175; // xmm1_4
  float v176; // xmm0_4
  __m128 v177; // xmm12
  __m128 v178; // xmm12
  __m128 v179; // xmm12
  __m128 v180; // xmm3
  __m128 v181; // xmm3
  __m128 v182; // xmm3
  float v183; // xmm0_4
  CRegionShape *v184; // rbx
  int v185; // eax
  void *(__fastcall ***v186)(CRectanglesShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v187)(CRectanglesShape *__hidden, unsigned int); // rax
  void *(__fastcall **v188)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v189; // rdi
  CResource *v190; // rcx
  void (*v191)(void); // rax
  void *(__fastcall ***v192)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v193; // rdi
  void *(__fastcall ***v194)(CRectanglesShape *__hidden, unsigned int); // rdi
  CPathData *v195; // rcx
  void (*v196)(void); // rax
  _QWORD *v197; // rdi
  HANDLE v198; // rax
  CRectanglesShape *v199; // rbx
  CRegionShape *v200; // rax
  void *(__fastcall *v201)(CRectanglesShape *__hidden, unsigned int); // rax
  _QWORD *v202; // rbx
  void *(__fastcall *v203)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v204; // r14
  __int64 v205; // rdi
  CResource *v206; // rcx
  void (*v207)(void); // rax
  void *v208; // r14
  __int64 v209; // rdi
  _QWORD *v210; // rdi
  CPathData *v211; // rcx
  void (*v212)(void); // rax
  _QWORD *v213; // rdi
  HANDLE v214; // rax
  _BYTE *v215; // rbx
  __int64 (__fastcall *v216)(_QWORD, __int64); // rax
  __int64 (__fastcall *v217)(_BYTE *, __int64); // rax
  HANDLE v218; // rax
  HANDLE v219; // rax
  __m128 v220; // xmm3
  __m128 v221; // xmm2
  HANDLE v222; // rax
  HANDLE v223; // rax
  bool IsRectangles; // al
  _QWORD *v225; // rbx
  __int64 (__fastcall *v226)(LPVOID, __m128 *, _QWORD); // rax
  __m128 *v227; // rcx
  unsigned __int64 v228; // rdi
  __int64 v229; // rcx
  __int64 *v230; // rbx
  __int64 *v231; // r14
  int v232; // r11d
  __int64 v233; // rdx
  int v234; // r8d
  int v235; // ecx
  int v236; // eax
  float v237; // xmm10_4
  float v238; // xmm11_4
  float v239; // xmm3_4
  float v240; // xmm8_4
  float v241; // xmm1_4
  float v242; // xmm10_4
  float v243; // xmm2_4
  float v244; // xmm11_4
  bool v245; // zf
  __m128 v246; // xmm2
  __m128 v247; // xmm3
  __m128 v248; // xmm3
  __m128 v249; // xmm3
  __m128 v250; // xmm3
  CDrawListEntryBuilder *v251; // rcx
  int v252; // eax
  _QWORD *v253; // rbx
  void *(__fastcall *v254)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v255; // rdi
  CResource *v256; // rcx
  void (*v257)(void); // rax
  _QWORD *v258; // rsi
  __int64 v259; // rdi
  CPathData *v260; // rcx
  void (*v261)(void); // rax
  _DWORD *v262; // rdi
  HANDLE v263; // rax
  int v265; // xmm0_4
  bool v266; // cc
  int v267; // eax
  float v268; // xmm0_4
  int v269; // eax
  int v270; // eax
  int v271; // eax
  LPVOID *v272; // r10
  int *v273; // r9
  __int64 v274; // rdi
  __int64 v275; // rdi
  CResource *v276; // rcx
  void (*v277)(void); // rax
  _QWORD *v278; // rsi
  __int64 v279; // rdi
  CPathData *v280; // rcx
  void (*v281)(void); // rax
  CThreadContext *v282; // rax
  CThreadContext *v283; // rax
  HANDLE v284; // rax
  HANDLE v285; // rax
  void *(__fastcall *v286)(CRectanglesShape *__hidden, unsigned int); // rax
  CThreadContext *v287; // rax
  CThreadContext *v288; // rax
  CThreadContext *v289; // rax
  CThreadContext *v290; // rax
  int v291; // eax
  CThreadContext *v292; // rax
  CThreadContext *v293; // rax
  CThreadContext *v294; // rax
  CThreadContext *v295; // rax
  CThreadContext *v296; // rax
  CThreadContext *v297; // rax
  CThreadContext *v298; // rax
  bool v299; // cc
  int v300; // eax
  float v301; // xmm0_4
  int v302; // eax
  int v303; // eax
  unsigned int v304; // xmm1_4
  __int32 v305; // xmm0_4
  unsigned int v306; // xmm1_4
  unsigned int v307; // xmm0_4
  __int64 v308; // rax
  int v309; // eax
  __int64 v310; // rdi
  CResource *v311; // rcx
  void (*v312)(void); // rax
  _QWORD *v313; // rsi
  __int64 v314; // rdi
  CPathData *v315; // rcx
  void (*v316)(void); // rax
  HANDLE v317; // rax
  CThreadContext *v318; // rax
  CThreadContext *v319; // rax
  __int64 v320; // r14
  struct CShape *v321; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v322; // [rsp+48h] [rbp-C0h]
  LPVOID v323; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v324; // [rsp+60h] [rbp-A8h]
  __int64 v325; // [rsp+68h] [rbp-A0h]
  unsigned int v326; // [rsp+88h] [rbp-80h] BYREF
  LPVOID lpMem; // [rsp+90h] [rbp-78h] BYREF
  CRegionShape *v328; // [rsp+98h] [rbp-70h]
  float v329; // [rsp+A0h] [rbp-68h]
  float v330; // [rsp+A4h] [rbp-64h]
  __m128 v331; // [rsp+A8h] [rbp-60h] BYREF
  __m256i v332; // [rsp+B8h] [rbp-50h]
  _BYTE v333[20]; // [rsp+D8h] [rbp-30h]
  __m128 v334; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v335; // [rsp+100h] [rbp-8h]
  float v336; // [rsp+110h] [rbp+8h]
  float v337; // [rsp+114h] [rbp+Ch]
  float v338; // [rsp+118h] [rbp+10h]
  CBrushDrawListGenerator *v339; // [rsp+120h] [rbp+18h]
  unsigned __int64 v340; // [rsp+128h] [rbp+20h] BYREF
  LPVOID *v341; // [rsp+130h] [rbp+28h]
  void *v342; // [rsp+138h] [rbp+30h] BYREF
  char v343; // [rsp+140h] [rbp+38h]
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v344; // [rsp+148h] [rbp+40h]
  __m128 v345; // [rsp+158h] [rbp+50h] BYREF
  __m256i v346; // [rsp+168h] [rbp+60h]
  __int128 v347; // [rsp+188h] [rbp+80h]
  int v348; // [rsp+198h] [rbp+90h]
  char v349[72]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v350[24]; // [rsp+1F0h] [rbp+E8h] BYREF
  CRegionShape *v351; // [rsp+208h] [rbp+100h]
  __m128 v352; // [rsp+210h] [rbp+108h]
  __m128 v353; // [rsp+228h] [rbp+120h] BYREF
  void **v354; // [rsp+238h] [rbp+130h] BYREF
  CPathData *v355; // [rsp+240h] [rbp+138h]
  LPVOID v356; // [rsp+248h] [rbp+140h]
  CResource **v357; // [rsp+250h] [rbp+148h]
  CResource **v358; // [rsp+258h] [rbp+150h]
  __m128 v359; // [rsp+260h] [rbp+158h] BYREF
  CResource *v360; // [rsp+270h] [rbp+168h] BYREF
  __m128 v361; // [rsp+278h] [rbp+170h] BYREF
  LPVOID v362; // [rsp+288h] [rbp+180h] BYREF
  int v363; // [rsp+290h] [rbp+188h]
  int v364; // [rsp+294h] [rbp+18Ch]
  __int128 v365; // [rsp+298h] [rbp+190h] BYREF
  __int128 v366; // [rsp+2A8h] [rbp+1A0h]
  int v367; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v368[7]; // [rsp+2BCh] [rbp+1B4h]
  _BYTE v369[224]; // [rsp+2D8h] [rbp+1D0h] BYREF
  void *retaddr; // [rsp+4A0h] [rbp+398h]

  v2 = a2->m128_i64[1];
  v3 = 0;
  v4 = _xmm;
  v5 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2;
  v344 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2;
  v6 = this;
  v339 = this;
  v7 = 1LL;
  if ( !*(_QWORD *)(v2 + 80) )
  {
    v8 = a2[1].m128_i64[0];
    v365 = 0LL;
    v366 = 0LL;
    v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) == 1
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 17) - 1.0) & _xmm) < 0.0000011920929;
    v12 = *((_DWORD *)v5 + 45);
    v11 = 0;
    if ( v12 )
    {
      do
      {
        v215 = (_BYTE *)*((_QWORD *)v5 + v11 + 17);
        if ( v215 )
        {
          v216 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v215 + 8LL);
          if ( v216 != CGeometryOnlyDrawListBrush::IsOfType
            && ((char *)v216 == (char *)&CSurfaceDrawListBrush::IsOfType
             || (unsigned __int8)v216(*((_QWORD *)v5 + v11 + 17), 2LL)) )
          {
            v9 = v9 && CDrawListBitmap::IsOpaque((CDrawListBitmap *)(v215 + 56));
            if ( (_BYTE)v3 || v215[146] )
              LOBYTE(v3) = 1;
          }
          else
          {
            v217 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v215 + 8LL);
            if ( (char *)v217 == (char *)CGeometryOnlyDrawListBrush::IsOfType || !(unsigned __int8)v217(v215, 1LL) )
              v215 = 0LL;
          }
        }
        v10 = v11++;
        *((_QWORD *)&v365 + v10) = v215;
        v12 = *((_DWORD *)v5 + 45);
      }
      while ( v11 < v12 );
      v6 = v339;
    }
    v13 = *((_DWORD *)v5 + 67);
    v14 = *((_DWORD *)v5 + 68);
    v15 = v12;
    v334.m128_i32[3] = *((_DWORD *)v5 + 66);
    v16 = *((_DWORD *)v6 + 13) | ((_BYTE)v3 != 0 ? 0x10 : 0);
    *(_QWORD *)&v335 = (char *)v5 + 24;
    HIDWORD(v335) = *((unsigned __int16 *)v5 + 138);
    v334.m128_u64[0] = __PAIR64__(v13, v12);
    v17 = v16 | v9;
    v18 = (__int64 *)*((_QWORD *)v5 + 2);
    DWORD2(v335) = v17;
    v334.m128_i32[2] = v14;
    v19 = *v18;
    v353.m128_u64[0] = v15;
    v353.m128_u64[1] = (unsigned __int64)&v365;
    v20 = *(__int64 (__fastcall **)(__int64 *, __m128 *, LPVOID *))(v19 + 16);
    lpMem = 0LL;
    if ( (char *)v20 == (char *)CCommonRenderingEffectFactory::CreateRenderingEffect )
    {
      v21 = CCommonRenderingEffectFactory::CreateRenderingEffect(v18, &v353, &lpMem);
    }
    else if ( (char *)v20 == (char *)CBrushRenderingEffectFactory::CreateRenderingEffect )
    {
      v21 = CBrushRenderingEffectFactory::CreateRenderingEffect(v18, &v353, &lpMem);
    }
    else
    {
      v21 = v20(v18, &v353, &lpMem);
    }
    v3 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1F0u, 0LL);
      if ( lpMem )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 8LL))(lpMem);
      return v3;
    }
    CDrawListEntryBuilder::Begin(
      *((CDrawListEntryBuilder **)v5 + 1),
      (const struct DrawListEntryBuilderSetupParams *)&v334,
      (struct CRenderingEffect *)lpMem);
    this = (CBrushDrawListGenerator *)lpMem;
    if ( lpMem )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)lpMem + 8LL))(lpMem);
    v7 = 1LL;
    v3 = 0;
  }
  v22 = *((unsigned int *)v5 + 44);
  v23 = *((unsigned int *)v5 + 47);
  v24 = 0LL;
  lpMem = 0LL;
  v326 = v23;
  v353.m128_u64[0] = v22;
  v353.m128_u64[1] = (unsigned __int64)v5 + 136;
  if ( v5 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && v22 )
  {
LABEL_328:
    ((void (__fastcall *)(CBrushDrawListGenerator *, __m128 *, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      v23,
      v7);
    __debugbreak();
  }
  v361 = v353;
  v25 = 0LL;
  v328 = 0LL;
  while ( 1 )
  {
    if ( v25 >= v22 )
    {
      v24 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v328;
      v60 = 0LL;
      v328 = 0LL;
      goto LABEL_65;
    }
    a2 = *(__m128 **)(v361.m128_u64[1] + 8 * v25);
    if ( a2 )
    {
      if ( a2[3].m128_i8[4] )
        break;
    }
LABEL_63:
    ++v25;
    v7 = 1LL;
  }
  v355 = 0LL;
  v356 = &v359;
  v354 = &CRectanglesShape::`vftable';
  v357 = (CResource **)&v359;
  v358 = &v360;
  v360 = 0LL;
  v26 = a2[2];
  v357 = &v360;
  v348 = 0;
  v353 = v26;
  v359 = v26;
  if ( ((1 << v25) & (unsigned int)v23) != 0 )
  {
    v304 = a2->m128_u32[3];
    v331.m128_i32[0] = a2->m128_i32[2];
    v305 = a2[1].m128_i32[0];
    *(unsigned __int64 *)((char *)v331.m128_u64 + 4) = v304;
    v306 = a2[1].m128_u32[1];
    v331.m128_i32[3] = v305;
    v307 = a2[1].m128_u32[2];
    v332.m256i_i64[0] = v306;
    v332.m256i_i64[1] = __PAIR64__(a2[1].m128_i32[3], v307);
    v332.m256i_i32[4] = 1065353216;
    Matrix3x3::operator*(&v331, &v323, (char *)v5 + 192, 1LL);
    v308 = Matrix3x3::As3DHomogeneous(&v323, v349);
    v345 = *(__m128 *)v308;
    v346 = *(__m256i *)(v308 + 16);
    v347 = *(_OWORD *)(v308 + 48);
    v35 = *(_DWORD *)(v308 + 64);
  }
  else
  {
    v27 = a2->m128_f32[2];
    v28 = a2[1].m128_f32[0];
    v29 = a2[1].m128_f32[1];
    v30 = a2->m128_f32[3];
    v31 = a2[1].m128_f32[2];
    v32 = a2[1].m128_f32[3];
    *(_OWORD *)&v332.m256i_u64[1] = 0LL;
    *(_QWORD *)&v333[12] = 0x28083F800000LL;
    v33 = (__m128)v331.m128_u64[0];
    *(_DWORD *)&v333[8] = 0;
    v332.m256i_i64[3] = 1065353216LL;
    v33.m128_f32[0] = v27;
    v34 = *(__m128 *)v332.m256i_i8;
    v35 = 10248;
    v34.m128_f32[0] = v28;
    v36 = _mm_shuffle_ps(v33, v33, 225);
    v37 = _mm_shuffle_ps(v34, v34, 225);
    v36.m128_f32[0] = v30;
    v37.m128_f32[0] = v29;
    *(__m128 *)v332.m256i_i8 = _mm_shuffle_ps(v37, v37, 225);
    v346 = v332;
    v38 = *(__m128 *)v333;
    v331 = _mm_shuffle_ps(v36, v36, 225);
    v38.m128_f32[0] = v31;
    v345 = v331;
    v39 = _mm_shuffle_ps(v38, v38, 225);
    v39.m128_f32[0] = v32;
    *(__m128 *)v333 = _mm_shuffle_ps(v39, v39, 225);
    v347 = *(_OWORD *)v333;
  }
  v348 = v35;
  if ( !v328 )
  {
    v321 = 0LL;
    LOBYTE(v322) = 1;
    v3 = CShape::CopyShape((CShape *)&v354, (const struct CMILMatrix *)&v345, &v321);
    if ( (_BYTE)v322 )
    {
      v40 = v328;
      v328 = v321;
      if ( v40 )
      {
        v41 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v40;
        if ( v41 == CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v40 = &CRectanglesShape::`vftable';
          v42 = *((_QWORD *)v40 + 2);
          v43 = (*((_QWORD *)v40 + 3) - v42) >> 4;
          if ( v43 )
          {
            v321 = (struct CShape *)((*((_QWORD *)v40 + 3) - v42) >> 4);
            *((_QWORD *)v40 + 3) += -16 * v43;
            v322 = 0LL;
          }
          v44 = (CResource *)*((_QWORD *)v40 + 7);
          if ( v44 )
          {
            v45 = *(void (**)(void))(*(_QWORD *)v44 + 16LL);
            if ( (char *)v45 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v44);
            else
              v45();
            *((_QWORD *)v40 + 7) = 0LL;
          }
          v46 = (char *)*((_QWORD *)v40 + 2);
          v47 = (__int64)(*((_QWORD *)v40 + 3) - (_QWORD)v46) >> 4;
          if ( v47 )
          {
            v321 = (struct CShape *)((__int64)(*((_QWORD *)v40 + 3) - (_QWORD)v46) >> 4);
            *((_QWORD *)v40 + 3) -= 16 * v47;
            v322 = 0LL;
          }
          v48 = v46;
          *((_QWORD *)v40 + 2) = 0LL;
          if ( v46 != (char *)v40 + 40 && v46 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v48);
          }
          v49 = (CPathData *)*((_QWORD *)v40 + 1);
          if ( v49 )
          {
            *((_QWORD *)v40 + 1) = 0LL;
            v50 = *(void (**)(void))(*(_QWORD *)v49 + 16LL);
            if ( (char *)v50 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v49);
            else
              v50();
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v287 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v287 || (v288 = CThreadContext::CThreadContext(v287), (Value = v288) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v288);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *(_QWORD *)v40 = Value[7];
            ++*((_DWORD *)Value + 13);
            Value[7] = v40;
          }
          else
          {
            v52 = GetProcessHeap();
            HeapFree(v52, 0, v40);
          }
        }
        else
        {
          v41(v40, 1u);
        }
      }
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x5Fu, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v354);
      v60 = v328;
      goto LABEL_65;
    }
    v3 = 0;
    goto LABEL_48;
  }
  v184 = v328;
  v341 = &v362;
  v362 = 0LL;
  v342 = 0LL;
  v343 = 1;
  v185 = CShape::TryOptimizedCombinePaths(v328, 0LL, &v354, &v345, v7, &v342);
  v3 = v185;
  if ( v185 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v185, 0x1C8u, 0LL);
  }
  else if ( !v342 )
  {
    v291 = CShape::D2DCombine(v184, a2, &v354, &v345, 1, &v342);
    v3 = v291;
    if ( v291 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v291, 0x1D3u, 0LL);
  }
  if ( v343 )
  {
    v186 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))*v341;
    *v341 = v342;
    if ( v186 )
    {
      v187 = **v186;
      if ( v187 == CRectanglesShape::`scalar deleting destructor' )
      {
        *v186 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
        v188 = v186[2];
        v189 = ((char *)v186[3] - (char *)v188) >> 4;
        if ( v189 )
        {
          v321 = (struct CShape *)(((char *)v186[3] - (char *)v188) >> 4);
          v186[3] -= 2 * v189;
          v322 = 0LL;
        }
        v190 = (CResource *)v186[7];
        if ( v190 )
        {
          v191 = *(void (**)(void))(*(_QWORD *)v190 + 16LL);
          if ( (char *)v191 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v190);
          else
            v191();
          v186[7] = 0LL;
        }
        v192 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v186[2];
        v193 = ((char *)v186[3] - (char *)v192) >> 4;
        if ( v193 )
        {
          v321 = (struct CShape *)(((char *)v186[3] - (char *)v192) >> 4);
          v186[3] -= 2 * v193;
          v322 = 0LL;
        }
        v194 = v192;
        v186[2] = 0LL;
        if ( v192 != v186 + 5 && v192 )
        {
          v223 = GetProcessHeap();
          HeapFree(v223, 0, v194);
        }
        v195 = (CPathData *)v186[1];
        if ( v195 )
        {
          v186[1] = 0LL;
          v196 = *(void (**)(void))(*(_QWORD *)v195 + 16LL);
          if ( (char *)v196 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v195);
          else
            v196();
        }
        v197 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v197 )
        {
          v296 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v296 || (v297 = CThreadContext::CThreadContext(v296), (v197 = v297) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v297);
        }
        if ( *((_DWORD *)v197 + 13) < *((_DWORD *)v197 + 12) )
        {
          *v186 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))v197[7];
          ++*((_DWORD *)v197 + 13);
          v197[7] = v186;
        }
        else
        {
          v198 = GetProcessHeap();
          HeapFree(v198, 0, v186);
        }
      }
      else
      {
        v187((CRectanglesShape *)v186, 1u);
      }
    }
  }
  if ( (v3 & 0x80000000) == 0 )
  {
    v199 = v328;
    v3 = 0;
    v200 = (CRegionShape *)v362;
    v362 = 0LL;
    v328 = v200;
    if ( v199 )
    {
      v201 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v199;
      if ( v201 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v199);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v199);
      }
      else
      {
        v201(v199, 1u);
      }
      v202 = v362;
      if ( v362 )
      {
        v203 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v362;
        if ( v203 == CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v362 = &CRectanglesShape::`vftable';
          v204 = v202[2];
          v205 = (v202[3] - v204) >> 4;
          if ( v205 )
          {
            v321 = (struct CShape *)((v202[3] - v204) >> 4);
            v202[3] += -16 * v205;
            v322 = 0LL;
          }
          v206 = (CResource *)v202[7];
          if ( v206 )
          {
            v207 = *(void (**)(void))(*(_QWORD *)v206 + 16LL);
            if ( (char *)v207 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v206);
            else
              v207();
            v202[7] = 0LL;
          }
          v208 = (void *)v202[2];
          v209 = (__int64)(v202[3] - (_QWORD)v208) >> 4;
          if ( v209 )
          {
            v324 = (__int64)(v202[3] - (_QWORD)v208) >> 4;
            v202[3] -= 16 * v209;
            v323 = v208;
            v325 = 0LL;
          }
          v210 = v208;
          v3 = 0;
          v202[2] = 0LL;
          if ( v210 != v202 + 5 && v210 )
          {
            v222 = GetProcessHeap();
            HeapFree(v222, 0, v210);
          }
          v211 = (CPathData *)v202[1];
          if ( v211 )
          {
            v202[1] = 0LL;
            v212 = *(void (**)(void))(*(_QWORD *)v211 + 16LL);
            if ( (char *)v212 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v211);
            else
              v212();
          }
          v213 = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !v213 )
          {
            v294 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v294 || (v295 = CThreadContext::CThreadContext(v294), (v213 = v295) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v295);
          }
          if ( *((_DWORD *)v213 + 13) < *((_DWORD *)v213 + 12) )
          {
            *v202 = v213[7];
            ++*((_DWORD *)v213 + 13);
            v213[7] = v202;
          }
          else
          {
            v214 = GetProcessHeap();
            HeapFree(v214, 0, v202);
          }
        }
        else
        {
          v203((CRectanglesShape *)v362, 1u);
        }
      }
    }
LABEL_48:
    v53 = v357;
    v354 = &CRectanglesShape::`vftable';
    v54 = (char *)v356;
    v55 = ((char *)v357 - (_BYTE *)v356) >> 4;
    if ( v55 )
    {
      v324 = ((char *)v357 - (_BYTE *)v356) >> 4;
      v53 = &v357[-2 * v55];
      v323 = v356;
      v357 = v53;
      v325 = 0LL;
    }
    if ( v360 )
    {
      v56 = *(void (**)(void))(*(_QWORD *)v360 + 16LL);
      if ( (char *)v56 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v360);
      else
        v56();
      v53 = v357;
      v54 = (char *)v356;
      v360 = 0LL;
    }
    v57 = ((char *)v53 - v54) >> 4;
    if ( v57 )
    {
      v324 = ((char *)v53 - v54) >> 4;
      v323 = v54;
      v357 = &v53[-2 * v57];
      v325 = 0LL;
    }
    v356 = 0LL;
    if ( v54 != (char *)&v359 && v54 )
    {
      v94 = GetProcessHeap();
      HeapFree(v94, 0, v54);
    }
    v58 = v355;
    if ( v355 )
    {
      v355 = 0LL;
      v59 = *(void (**)(void))(*(_QWORD *)v58 + 16LL);
      if ( (char *)v59 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v58);
      else
        v59();
    }
    v23 = v326;
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x6Au, 0LL);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v362);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v354);
  v60 = v328;
LABEL_65:
  if ( v60 )
  {
    v61 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v60;
    if ( v61 == CRectanglesShape::`scalar deleting destructor' )
    {
      *(_QWORD *)v60 = &CRectanglesShape::`vftable';
      v62 = (__int64)(*((_QWORD *)v60 + 3) - *((_QWORD *)v60 + 2)) >> 4;
      if ( v62 )
      {
        v325 = 0LL;
        *((_QWORD *)v60 + 3) += -16 * v62;
      }
      v63 = (CResource *)*((_QWORD *)v60 + 7);
      if ( v63 )
      {
        v64 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v63 + 16LL);
        if ( v64 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v63);
        else
          ((void (__fastcall *)(CResource *, __int64 (__fastcall *)(CResource *), __int64, __int64))v64)(
            v63,
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
            v23,
            v7);
        *((_QWORD *)v60 + 7) = 0LL;
      }
      v65 = (char *)*((_QWORD *)v60 + 2);
      v66 = (__int64)(*((_QWORD *)v60 + 3) - (_QWORD)v65) >> 4;
      if ( v66 )
      {
        *((_QWORD *)v60 + 3) -= 16 * v66;
        v325 = 0LL;
      }
      *((_QWORD *)v60 + 2) = 0LL;
      if ( v65 != (char *)v60 + 40 && v65 )
      {
        v218 = GetProcessHeap();
        HeapFree(v218, 0, v65);
      }
      v67 = (CPathData *)*((_QWORD *)v60 + 1);
      if ( v67 )
      {
        *((_QWORD *)v60 + 1) = 0LL;
        v68 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v67 + 16LL);
        if ( v68 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v67);
        else
          ((void (__fastcall *)(CPathData *, __int64 (__fastcall *)(CPathData *), __int64, __int64))v68)(
            v67,
            CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release,
            v23,
            v7);
      }
      v69 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v69 )
      {
        v289 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v289 || (v290 = CThreadContext::CThreadContext(v289), (v69 = v290) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v290);
      }
      if ( *((_DWORD *)v69 + 13) < *((_DWORD *)v69 + 12) )
      {
        *(_QWORD *)v60 = v69[7];
        ++*((_DWORD *)v69 + 13);
        v69[7] = v60;
      }
      else
      {
        v70 = GetProcessHeap();
        HeapFree(v70, 0, v60);
      }
    }
    else
    {
      ((void (__fastcall *)(CRegionShape *, __int64, __int64, __int64))v61)(v60, 1LL, v23, v7);
    }
  }
  v71 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
  lpMem = v24;
  if ( v71 )
  {
    v72 = **v71;
    if ( v72 == CRectanglesShape::`scalar deleting destructor' )
    {
      *v71 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))&CRectanglesShape::`vftable';
      v73 = ((char *)v71[3] - (char *)v71[2]) >> 4;
      if ( v73 )
        v71[3] -= 2 * v73;
      v74 = (CResource *)v71[7];
      if ( v74 )
      {
        v75 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v74 + 16LL);
        if ( v75 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v74);
        else
          ((void (__fastcall *)(CResource *, __int64 (__fastcall *)(CResource *), __int64, __int64))v75)(
            v74,
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
            v23,
            v7);
        v71[7] = 0LL;
      }
      v76 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v71[2];
      v77 = ((char *)v71[3] - (char *)v76) >> 4;
      if ( v77 )
        v71[3] -= 2 * v77;
      v71[2] = 0LL;
      if ( v76 != v71 + 5 && v76 )
      {
        v219 = GetProcessHeap();
        HeapFree(v219, 0, v76);
      }
      v78 = (CPathData *)v71[1];
      if ( v78 )
      {
        v71[1] = 0LL;
        v79 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v78 + 16LL);
        if ( v79 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v78);
        else
          ((void (__fastcall *)(CPathData *, __int64 (__fastcall *)(CPathData *), __int64, __int64))v79)(
            v78,
            CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release,
            v23,
            v7);
      }
      v80 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !v80 )
      {
        v292 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v292 || (v293 = CThreadContext::CThreadContext(v292), (v80 = v293) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v293);
      }
      if ( *((_DWORD *)v80 + 13) < *((_DWORD *)v80 + 12) )
      {
        *v71 = (void *(__fastcall **)(CRectanglesShape *__hidden, unsigned int))v80[7];
        ++*((_DWORD *)v80 + 13);
        v80[7] = v71;
      }
      else
      {
        v81 = GetProcessHeap();
        HeapFree(v81, 0, v71);
      }
      v24 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    }
    else
    {
      ((void (__fastcall *)(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int), __int64, __int64, __int64))v72)(
        v71,
        1LL,
        v23,
        v7);
      v24 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    }
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x203u, 0LL);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&lpMem);
    return v3;
  }
  v82 = (bool (__fastcall *)(CRectanglesShape *__hidden))(*v24)[2];
  if ( v82 == CRectanglesShape::IsEmpty )
  {
    v83 = 1;
    v84 = ((char *)v24[3] - (char *)v24[2]) >> 4;
    if ( v84 )
    {
      if ( v84 == 1 )
      {
        v85 = IsEmpty((const struct D2D_RECT_F *)v24[2]);
        goto LABEL_109;
      }
      v83 = 0;
    }
  }
  else
  {
    v85 = ((__int64 (__fastcall *)(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int), __m128 *, __int64, __int64))v82)(
            v24,
            a2,
            v23,
            v7);
LABEL_109:
    v24 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    v83 = v85;
  }
  if ( v83 )
  {
    if ( v24 )
    {
      v286 = **v24;
      if ( v286 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v24);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v24);
      }
      else
      {
        ((void (__fastcall *)(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int), __int64, __int64, __int64))v286)(
          v24,
          1LL,
          v23,
          v7);
      }
    }
    return v3;
  }
  v328 = 0LL;
  v340 = 0LL;
  v86 = 1;
  v87 = 0LL;
  memset_0(v369, 0, sizeof(v369));
  v88 = 0;
  v89 = 50529027;
  if ( *((_DWORD *)v5 + 44) )
  {
    do
    {
      v90 = *((_QWORD *)v5 + v88 + 17);
      if ( v90 )
      {
        if ( v86 && *((_DWORD *)v5 + 66) != 1 && *(_BYTE *)(v90 + 52) && *(_DWORD *)(v90 + 48) != 50529027 )
          v86 = 0;
        v91 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v90 + 8LL);
        if ( v91 != CGeometryOnlyDrawListBrush::IsOfType
          && ((char *)v91 == (char *)&CSurfaceDrawListBrush::IsOfType
           || (unsigned __int8)v91(*((_QWORD *)v5 + v88 + 17), 2LL)) )
        {
          v96 = *(float *)(v90 + 8);
          v97 = (const struct D2D_MATRIX_3X2_F *)(56LL * v88);
          *(float *)&v369[(_QWORD)v97] = v96;
          v98 = *(float *)(v90 + 12);
          *(float *)&v369[(_QWORD)v97 + 4] = v98;
          *(_DWORD *)&v369[(_QWORD)v97 + 8] = 0;
          v99 = *(float *)(v90 + 16);
          *(float *)&v369[(_QWORD)v97 + 12] = v99;
          v100 = *(float *)(v90 + 20);
          *(float *)&v369[(_QWORD)v97 + 16] = v100;
          *(_DWORD *)&v369[(_QWORD)v97 + 20] = 0;
          v101 = *(float *)(v90 + 24);
          *(float *)&v369[(_QWORD)v97 + 24] = v101;
          v102 = *(float *)(v90 + 28);
          *(_DWORD *)&v369[(_QWORD)v97 + 32] = 1065353216;
          v103 = v101 * v98;
          v104 = v100 * v101;
          *(float *)&v369[(_QWORD)v97 + 28] = v102;
          v105 = (float)((float)((float)((float)((float)((float)(v99 * v102) * 0.0) + (float)(v100 * v96))
                                       + (float)((float)(v101 * v98) * 0.0))
                               - (float)((float)(v101 * v96) * 0.0))
                       - (float)((float)(v100 * v101) * 0.0))
               - (float)(v99 * v98);
          if ( COERCE_FLOAT(LODWORD(v105) & _xmm) < 0.0000011920929 )
          {
            *(_OWORD *)&v369[56 * v88] = _xmm;
            *(_OWORD *)&v369[56 * v88 + 16] = _xmm;
            v139 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          }
          else
          {
            v106 = 1.0 / v105;
            v107 = v101 * 0.0;
            v108 = (float)((float)(v99 * v102) - v104) * (float)(1.0 / v105);
            v109 = v102 * v96;
            *(float *)&v369[56 * v88 + 24] = v108;
            v110 = v102 * 0.0;
            v111 = (float)((float)(v100 * v96) - (float)(v99 * v98)) * (float)(1.0 / v105);
            *(float *)&v369[56 * v88 + 32] = v111;
            v112 = (float)(v103 - v109) * (float)(1.0 / v105);
            v113 = (float)(v99 * 0.0) - (float)(v96 * 0.0);
            *(float *)&v114 = (float)(v96 - v107) * v106;
            v329 = v111;
            v115 = v100 * 0.0;
            *(float *)&v369[56 * v88 + 16] = *(float *)&v114;
            *(float *)&v369[56 * v88 + 28] = v112;
            v116 = (float)(v100 - v110) * v106;
            v117 = v113 * v106;
            v118 = (float)(v107 - v99) * v106;
            *(float *)&v369[56 * v88] = v116;
            *(float *)&v369[56 * v88 + 12] = v118;
            *(float *)&v369[56 * v88 + 20] = v117;
            *(float *)&v369[56 * v88 + 8] = (float)((float)(v98 * 0.0) - v115) * v106;
            v119 = (float)(v110 - v98) * v106;
            *(float *)&v362 = (float)((float)(v98 * 0.0) - v115) * v106;
            v337 = v112;
            *(float *)&v369[56 * v88 + 4] = v119;
            v120 = *(float *)(v90 + 104);
            v121 = *(float *)(v90 + 92);
            v122 = *(float *)(v90 + 116);
            v123 = (__m128)*(unsigned int *)(v90 + 100);
            v124 = (float)(v108 * v121) + (float)(v112 * v120);
            v326 = v114;
            v125 = *(float *)(v90 + 88);
            v126 = v112;
            v127 = (__m128)*(unsigned int *)(v90 + 96);
            v128 = v124 + (float)(v111 * v122);
            v129 = v111;
            v330 = v116;
            v130 = *(float *)(v90 + 112);
            v131 = *(float *)(v90 + 108);
            *(float *)&v328 = v128;
            v132 = *(float *)(v90 + 84);
            v338 = v117;
            v133 = (float)((float)(v108 * v125) + (float)(v126 * v123.m128_f32[0])) + (float)(v129 * v130);
            v336 = v118;
            v329 = (float)((float)(v108 * v132) + (float)(v337 * v127.m128_f32[0])) + (float)(v329 * v131);
            v134 = v121 * v118;
            v135 = v123;
            v135.m128_f32[0] = (float)((float)(v123.m128_f32[0] * *(float *)&v326) + (float)(v125 * v336))
                             + (float)(v130 * v117);
            v136 = _mm_shuffle_ps(v135, v135, 225);
            v136.m128_f32[0] = (float)(v134 + (float)(v120 * *(float *)&v326)) + (float)(v122 * v117);
            v137 = _mm_shuffle_ps(v136, v136, 198);
            v138 = (float)((float)(v132 * v336) + (float)(v127.m128_f32[0] * *(float *)&v326)) + (float)(v131 * v117);
            v137.m128_f32[0] = v329;
            v139 = (int)v328;
            v140 = _mm_shuffle_ps(v137, v137, 39);
            v140.m128_f32[0] = v133;
            v127.m128_f32[0] = (float)((float)(v127.m128_f32[0] * v119) + (float)(v132 * v330))
                             + (float)(v131 * *(float *)&v362);
            v141 = _mm_shuffle_ps(v127, v127, 225);
            v141.m128_f32[0] = (float)((float)(v123.m128_f32[0] * v119) + (float)(v125 * v330))
                             + (float)(v130 * *(float *)&v362);
            v142 = _mm_shuffle_ps(v141, v141, 198);
            v142.m128_f32[0] = (float)((float)(v120 * v119) + (float)(v121 * v330)) + (float)(v122 * *(float *)&v362);
            v143 = _mm_shuffle_ps(v142, v142, 39);
            v143.m128_f32[0] = v138;
            *(__m128 *)&v369[56 * v88] = _mm_shuffle_ps(v143, v143, 57);
            *(__m128 *)&v369[56 * v88 + 16] = _mm_shuffle_ps(v140, v140, 57);
          }
          v144 = *((_DWORD *)v5 + 47);
          v145 = _bittest(&v144, v88);
          *(_DWORD *)&v369[56 * v88 + 32] = v139;
          if ( v145 )
          {
            v146 = *((float *)v5 + 64);
            v147 = *((float *)v5 + 63);
            v148 = *((float *)v5 + 65);
            v149 = *(float *)&v369[56 * v88 + 8];
            v150 = *(float *)&v369[56 * v88 + 32];
            v151 = *(float *)&v369[56 * v88 + 16];
            v152 = *(float *)&v369[56 * v88 + 4];
            v153 = *(float *)&v369[56 * v88 + 28];
            v154 = *(float *)&v369[56 * v88 + 20];
            v155 = *(float *)&v369[56 * v88 + 12];
            v156 = *(float *)&v369[56 * v88 + 24];
            v330 = (float)((float)(v149 * v147) + (float)(v154 * v146)) + (float)(v150 * v148);
            v157 = (float)(v152 * v147) + (float)(v151 * v146);
            v158 = v155 * v146;
            v159 = *((float *)v5 + 60);
            v160 = v157 + (float)(v153 * v148);
            v161 = v156 * v148;
            v162 = *((float *)v5 + 61);
            v163 = (__m128)LODWORD(v162);
            *(float *)&v362 = v160;
            v164 = *(float *)&v369[56 * v88];
            v165 = v164 * v147;
            v166 = *((float *)v5 + 62);
            v167 = (float)(v154 * v162) + (float)(v149 * v159);
            v168 = (float)(v165 + v158) + v161;
            v163.m128_f32[0] = (float)(v162 * v151) + (float)(v159 * v152);
            v169 = (float)(v159 * v164) + (float)(v162 * v155);
            v170 = (__m128)*((unsigned int *)v5 + 57);
            v171 = v156 * v166;
            v172 = v167 + (float)(v150 * v166);
            v173 = *((float *)v5 + 58);
            v174 = v169 + v171;
            v163.m128_f32[0] = v163.m128_f32[0] + (float)(*((float *)v5 + 62) * v153);
            v175 = *((float *)v5 + 59);
            *(float *)&v328 = (float)((float)(*(float *)&v369[56 * v88 + 20] * v173) + (float)(v149 * v170.m128_f32[0]))
                            + (float)(v150 * v175);
            v176 = v170.m128_f32[0] * v152;
            v177 = _mm_shuffle_ps(v163, v163, 225);
            v177.m128_f32[0] = v172;
            v178 = _mm_shuffle_ps(v177, v177, 198);
            v178.m128_f32[0] = v168;
            v170.m128_f32[0] = (float)((float)(v170.m128_f32[0] * v164) + (float)(v173 * v155)) + (float)(v156 * v175);
            v179 = _mm_shuffle_ps(v178, v178, 39);
            v180 = _mm_shuffle_ps(v170, v170, 225);
            v180.m128_f32[0] = (float)(v176 + (float)(v151 * v173)) + (float)(v153 * v175);
            v181 = _mm_shuffle_ps(v180, v180, 198);
            v181.m128_f32[0] = *(float *)&v328;
            v182 = _mm_shuffle_ps(v181, v181, 39);
            v179.m128_f32[0] = *(float *)&v362;
            v183 = v330;
            v182.m128_f32[0] = v174;
            *(__m128 *)&v369[56 * v88] = _mm_shuffle_ps(v182, v182, 57);
            *(__m128 *)&v369[56 * v88 + 16] = _mm_shuffle_ps(v179, v179, 57);
            *(float *)&v369[56 * v88 + 32] = v183;
          }
          else if ( !v87
                 && *(_BYTE *)(v90 + 147)
                 && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v90 + 8), v97) )
          {
            v87 = (CRegionShape *)&v340;
            v220 = (__m128)*(unsigned int *)(v90 + 136);
            v221 = (__m128)*(unsigned int *)(v90 + 140);
            v221.m128_f32[0] = (float)((float)(v221.m128_f32[0] * *(float *)(v90 + 16))
                                     + (float)(*(float *)(v90 + 136) * *(float *)(v90 + 8)))
                             + *(float *)(v90 + 24);
            v220.m128_f32[0] = (float)((float)(v220.m128_f32[0] * *(float *)(v90 + 12))
                                     + (float)(*(float *)(v90 + 140) * *(float *)(v90 + 20)))
                             + *(float *)(v90 + 28);
            v340 = _mm_unpacklo_ps(v221, v220).m128_u64[0];
          }
          if ( !*(_BYTE *)(v90 + 52)
            || *(_BYTE *)(v90 + 144)
            || *(float *)(v90 + 120) == -3.4028235e38
            && *(float *)(v90 + 124) == -3.4028235e38
            && *(float *)(v90 + 128) == 3.4028235e38
            && *(float *)(v90 + 132) == 3.4028235e38 )
          {
            v369[(_QWORD)v97 + 52] = 0;
          }
          else
          {
            v369[(_QWORD)v97 + 52] = 1;
            *(_OWORD *)&v369[(_QWORD)v97 + 36] = *(_OWORD *)(v90 + 120);
          }
        }
      }
      ++v88;
    }
    while ( v88 < *((_DWORD *)v5 + 44) );
    v24 = (void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    v4 = _xmm;
    v328 = v87;
  }
  BYTE8(v366) = 0;
  v334 = 0LL;
  *(float *)&v326 = 0.0;
  v335 = 0LL;
  v92 = (bool (__fastcall *)(CRoundedRectangleShape *__hidden, unsigned int *))(*v24)[8];
  if ( v92 != CRoundedRectangleShape::IsRectangles )
  {
    if ( v92 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles((CRectanglesShape *)v24, &v326);
    }
    else if ( v92 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles((CRegionShape *)v24, &v326);
    }
    else
    {
      IsRectangles = v92((CRoundedRectangleShape *)v24, &v326);
    }
    if ( IsRectangles && v326 == 1 )
      goto LABEL_212;
LABEL_120:
    BYTE8(v335) |= 1u;
    v334.m128_u64[0] = (unsigned __int64)lpMem;
    if ( v86 )
    {
      if ( !*((_QWORD *)v5 + 3) && !*((_QWORD *)v5 + 5) )
        goto LABEL_238;
      a2 = (__m128 *)*((unsigned int *)v5 + 44);
      v353.m128_u64[0] = (unsigned __int64)a2;
    }
    else
    {
      a2 = (__m128 *)*((unsigned int *)v5 + 44);
      v353.m128_u64[0] = (unsigned __int64)a2;
    }
    v23 = *((unsigned int *)v5 + 47);
    this = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v5 + 136);
    v353.m128_u64[1] = (unsigned __int64)v5 + 136;
    if ( v5 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL || !(_DWORD)a2 )
    {
      v93 = *((_DWORD *)v5 + 66);
      v361 = v353;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        v93,
        (unsigned int)&v361,
        v23,
        (_DWORD)v5 + 192,
        (__int64)&v365);
      v334.m128_u64[1] = (unsigned __int64)&v365;
      goto LABEL_238;
    }
    goto LABEL_328;
  }
  if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v24[2] + 2)) )
    goto LABEL_120;
LABEL_212:
  v225 = lpMem;
  v353 = 0LL;
  v226 = *(__int64 (__fastcall **)(LPVOID, __m128 *, _QWORD))(*(_QWORD *)lpMem + 48LL);
  if ( (char *)v226 != (char *)CRectanglesShape::GetTightBounds )
  {
    v309 = v226(lpMem, &v353, 0LL);
    v3 = v309;
    if ( v309 >= 0 )
      goto LABEL_215;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v309, 0x254u, 0LL);
    if ( SBYTE8(v366) != -1LL && BYTE8(v366) && SBYTE8(v366) != 1LL )
      std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(&v365);
    v253 = lpMem;
    if ( !lpMem )
      return v3;
    v254 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    if ( v254 != CRectanglesShape::`scalar deleting destructor' )
      goto LABEL_372;
    *(_QWORD *)lpMem = &CRectanglesShape::`vftable';
    v310 = (__int64)(v253[3] - v253[2]) >> 4;
    if ( v310 )
      v253[3] += -16 * v310;
    v311 = (CResource *)v253[7];
    if ( v311 )
    {
      v312 = *(void (**)(void))(*(_QWORD *)v311 + 16LL);
      if ( (char *)v312 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v311);
      else
        v312();
      v253[7] = 0LL;
    }
    v313 = (_QWORD *)v253[2];
    v314 = (__int64)(v253[3] - (_QWORD)v313) >> 4;
    if ( v314 )
      v253[3] -= 16 * v314;
    v253[2] = 0LL;
    if ( v313 != v253 + 5 && v313 )
    {
      v317 = GetProcessHeap();
      HeapFree(v317, 0, v313);
    }
    v315 = (CPathData *)v253[1];
    if ( v315 )
    {
      v253[1] = 0LL;
      v316 = *(void (**)(void))(*(_QWORD *)v315 + 16LL);
      if ( (char *)v316 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v315);
      else
        v316();
    }
    v262 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v262 )
    {
      v318 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v318 || (v319 = CThreadContext::CThreadContext(v318), (v262 = v319) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v319);
    }
    if ( v262[13] >= v262[12] )
    {
LABEL_260:
      v263 = GetProcessHeap();
      HeapFree(v263, 0, v253);
      return v3;
    }
LABEL_400:
    *v253 = *((_QWORD *)v262 + 7);
    *((_QWORD *)v262 + 7) = v253;
    ++v262[13];
    return v3;
  }
  v227 = (__m128 *)*((_QWORD *)lpMem + 2);
  if ( *((__m128 **)lpMem + 3) != v227 )
  {
    v228 = 1LL;
    v353 = *v227;
    v229 = *((_QWORD *)lpMem + 2);
    if ( (unsigned __int64)((*((_QWORD *)lpMem + 3) - v229) >> 4) > 1 )
    {
      v320 = 16LL;
      do
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v353, v229 + v320);
        v229 = v225[2];
        v320 += 16LL;
        ++v228;
      }
      while ( v228 < (v225[3] - v229) >> 4 );
    }
  }
LABEL_215:
  v334 = v353;
  if ( v86 )
  {
    if ( *((_DWORD *)v5 + 66) == 1 )
      v89 = 0;
    LODWORD(v335) = v89;
  }
  else
  {
    v230 = (__int64 *)((char *)v5 + 136);
    if ( v5 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && *((_DWORD *)v5 + 44) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v231 = &v230[*((unsigned int *)v5 + 44)];
    v232 = 0;
    if ( v230 != v231 )
    {
      do
      {
        v233 = *v230;
        if ( *v230
          && *(_BYTE *)(v233 + 52)
          && (COERCE_FLOAT(*(_DWORD *)(v233 + 12) & v4) < 0.000081380211
           && COERCE_FLOAT(*(_DWORD *)(v233 + 16) & v4) < 0.000081380211
           || COERCE_FLOAT(*(_DWORD *)(v233 + 8) & v4) < 0.000081380211
           && COERCE_FLOAT(*(_DWORD *)(v233 + 20) & v4) < 0.000081380211) )
        {
          v234 = *(_DWORD *)(v233 + 48);
          if ( v234 == 50529027 || !v234 )
          {
            v235 = *(_DWORD *)(v233 + 48);
          }
          else
          {
            v265 = *(_DWORD *)(v233 + 12) & v4;
            v367 = 0x1000000;
            v368[0] = 0x2000000;
            v368[1] = 1;
            v368[2] = 2;
            v368[3] = 256;
            v368[4] = 512;
            v368[5] = 0x10000;
            v368[6] = 0x20000;
            if ( *(float *)&v265 >= 0.000081380211 || COERCE_FLOAT(*(_DWORD *)(v233 + 16) & v4) >= 0.000081380211 )
            {
              v299 = *(float *)(v233 + 16) <= 0.0;
              v300 = 3;
              v301 = *(float *)(v233 + 12);
              if ( *(float *)(v233 + 16) > 0.0 )
                v300 = 1;
              LODWORD(v362) = v300;
              v302 = 1;
              if ( !v299 )
                v302 = 3;
              v363 = v302;
              v303 = 2;
              if ( v301 > 0.0 )
                v303 = 0;
              HIDWORD(v362) = v303;
              v271 = 0;
              if ( v301 > 0.0 )
                v271 = 2;
            }
            else
            {
              v266 = *(float *)(v233 + 8) <= 0.0;
              v267 = 2;
              v268 = *(float *)(v233 + 20);
              if ( *(float *)(v233 + 8) > 0.0 )
                v267 = 0;
              LODWORD(v362) = v267;
              v269 = 0;
              if ( !v266 )
                v269 = 2;
              v363 = v269;
              v270 = 3;
              if ( v268 > 0.0 )
                v270 = 1;
              HIDWORD(v362) = v270;
              v271 = 1;
              if ( v268 > 0.0 )
                v271 = 3;
            }
            v364 = v271;
            v272 = &v362;
            v235 = 0;
            v273 = &v367;
            v274 = 4LL;
            do
            {
              if ( (v234 & v368[2 * *(unsigned int *)v272 - 1]) != 0 )
                v235 |= *v273;
              if ( (v234 & v368[2 * *(unsigned int *)v272]) != 0 )
                v235 |= v273[1];
              v272 = (LPVOID *)((char *)v272 + 4);
              v273 += 2;
              --v274;
            }
            while ( v274 );
          }
          if ( v235 != v232 )
          {
            v236 = 50331648;
            v237 = (float)((float)(*(float *)(v233 + 32) * *(float *)(v233 + 8))
                         + (float)(*(float *)(v233 + 36) * *(float *)(v233 + 16)))
                 + *(float *)(v233 + 24);
            v4 = _xmm;
            v238 = (float)((float)(*(float *)(v233 + 32) * *(float *)(v233 + 12))
                         + (float)(*(float *)(v233 + 36) * *(float *)(v233 + 20)))
                 + *(float *)(v233 + 28);
            v239 = (float)((float)(*(float *)(v233 + 40) * *(float *)(v233 + 8))
                         + (float)(*(float *)(v233 + 44) * *(float *)(v233 + 16)))
                 + *(float *)(v233 + 24);
            v240 = (float)((float)(*(float *)(v233 + 40) * *(float *)(v233 + 12))
                         + (float)(*(float *)(v233 + 44) * *(float *)(v233 + 20)))
                 + *(float *)(v233 + 28);
            v241 = fminf(v237, v239);
            v242 = fmaxf(v237, v239);
            v243 = fminf(v238, v240);
            v244 = fmaxf(v238, v240);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v353.m128_f32[0] - v241) & _xmm) > 0.0000011920929 )
              v236 = 0;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v353.m128_f32[2] - v242) & _xmm) <= 0.0000011920929 )
              v236 |= 0x300u;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v353.m128_f32[1] - v243) & _xmm) <= 0.0000011920929 )
              v236 |= 3u;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v353.m128_f32[3] - v244) & _xmm) <= 0.0000011920929 )
              v236 |= 0x30000u;
            if ( v236 )
            {
              v232 |= v236 & v235;
              if ( v232 == 50529027 )
                break;
            }
          }
        }
        ++v230;
      }
      while ( v230 != v231 );
      v5 = v344;
    }
    LODWORD(v335) = v232;
  }
LABEL_238:
  v245 = *((_BYTE *)v5 + 277) == 0;
  v353.m128_u64[0] = *((unsigned int *)v5 + 45);
  v353.m128_u64[1] = (unsigned __int64)v369;
  memset(v350, 0, sizeof(v350));
  v352 = v353;
  if ( v245 )
  {
    v246 = (__m128)*((unsigned int *)v339 + 17);
    v247 = v246;
    v247.m128_f32[0] = v246.m128_f32[0] * *((float *)v339 + 14);
    v248 = _mm_shuffle_ps(v247, v247, 225);
    v248.m128_f32[0] = *((float *)v339 + 17) * *((float *)v339 + 15);
    v249 = _mm_shuffle_ps(v248, v248, 198);
    v249.m128_f32[0] = *((float *)v339 + 17) * *((float *)v339 + 16);
    v250 = _mm_shuffle_ps(v249, v249, 39);
    v250.m128_f32[0] = v246.m128_f32[0];
    v361 = _mm_shuffle_ps(v250, v250, 57);
  }
  else
  {
    v361 = *(__m128 *)((char *)v339 + 56);
  }
  v251 = (CDrawListEntryBuilder *)*((_QWORD *)v5 + 1);
  v351 = v328;
  *(__m128 *)v350 = v361;
  v252 = CDrawListEntryBuilder::Insert(
           v251,
           (const struct PrimitiveGeometryDesc *)&v334,
           (const struct PrimitiveVertexAttributesDesc *)v350,
           0LL);
  v3 = v252;
  if ( v252 >= 0 )
  {
    if ( SBYTE8(v366) != -1LL && BYTE8(v366) && SBYTE8(v366) != 1LL )
      std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(&v365);
    v253 = lpMem;
    if ( !lpMem )
      return v3;
    v254 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    if ( v254 != CRectanglesShape::`scalar deleting destructor' )
      goto LABEL_372;
    *(_QWORD *)lpMem = &CRectanglesShape::`vftable';
    v275 = (__int64)(v253[3] - v253[2]) >> 4;
    if ( v275 )
      v253[3] += -16 * v275;
    v276 = (CResource *)v253[7];
    if ( v276 )
    {
      v277 = *(void (**)(void))(*(_QWORD *)v276 + 16LL);
      if ( (char *)v277 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v276);
      else
        v277();
      v253[7] = 0LL;
    }
    v278 = (_QWORD *)v253[2];
    v279 = (__int64)(v253[3] - (_QWORD)v278) >> 4;
    if ( v279 )
      v253[3] -= 16 * v279;
    v253[2] = 0LL;
    if ( v278 != v253 + 5 && v278 )
    {
      v285 = GetProcessHeap();
      HeapFree(v285, 0, v278);
    }
    v280 = (CPathData *)v253[1];
    if ( v280 )
    {
      v253[1] = 0LL;
      v281 = *(void (**)(void))(*(_QWORD *)v280 + 16LL);
      if ( (char *)v281 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v280);
      else
        v281();
    }
    v262 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v262 )
    {
      v282 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v282 || (v283 = CThreadContext::CThreadContext(v282), (v262 = v283) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      goto LABEL_339;
    }
LABEL_259:
    if ( v262[13] >= v262[12] )
      goto LABEL_260;
    goto LABEL_400;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v252, 0x286u, 0LL);
  if ( SBYTE8(v366) != -1LL && BYTE8(v366) && SBYTE8(v366) != 1LL )
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(&v365);
  v253 = lpMem;
  if ( lpMem )
  {
    v254 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))lpMem;
    if ( v254 == CRectanglesShape::`scalar deleting destructor' )
    {
      *(_QWORD *)lpMem = &CRectanglesShape::`vftable';
      v255 = (__int64)(v253[3] - v253[2]) >> 4;
      if ( v255 )
        v253[3] += -16 * v255;
      v256 = (CResource *)v253[7];
      if ( v256 )
      {
        v257 = *(void (**)(void))(*(_QWORD *)v256 + 16LL);
        if ( (char *)v257 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v256);
        else
          v257();
        v253[7] = 0LL;
      }
      v258 = (_QWORD *)v253[2];
      v259 = (__int64)(v253[3] - (_QWORD)v258) >> 4;
      if ( v259 )
        v253[3] -= 16 * v259;
      v253[2] = 0LL;
      if ( v258 != v253 + 5 && v258 )
      {
        v284 = GetProcessHeap();
        HeapFree(v284, 0, v258);
      }
      v260 = (CPathData *)v253[1];
      if ( v260 )
      {
        v253[1] = 0LL;
        v261 = *(void (**)(void))(*(_QWORD *)v260 + 16LL);
        if ( (char *)v261 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v260);
        else
          v261();
      }
      v262 = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( v262 )
        goto LABEL_259;
      v298 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v298 || (v283 = CThreadContext::CThreadContext(v298), (v262 = v283) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
LABEL_339:
      TlsSetValue(CThreadContext::s_dwTlsIndex, v283);
      goto LABEL_259;
    }
LABEL_372:
    v254((CRectanglesShape *)v253, 1u);
  }
  return v3;
}
