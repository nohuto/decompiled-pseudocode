/*
 * XREFs of ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x1800164C0 (-Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180075110 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180077080 (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180078A10 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079178 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800792E0 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AB9B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2C70 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B4A00 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800C6490 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBBB0 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801B2190 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1801F9DF4 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuClipToScope(
        CScopedClipStack *this,
        const struct CShape *a2,
        const struct CShape *a3,
        __m128 *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6,
        struct CCpuClipAntialiasSink *a7,
        bool *a8)
{
  __int64 v8; // r12
  char v9; // r13
  const struct CShape *v10; // rsi
  __int64 v13; // rax
  float left; // xmm10_4
  __m128 *v17; // r10
  __int32 v18; // r11d
  __m128 v19; // xmm0
  __m128 v20; // xmm7
  __m128 v21; // xmm15
  __m128 v22; // xmm6
  char v23; // al
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  __m128 v27; // xmm8
  __int64 v28; // r10
  float *v29; // r10
  char v30; // r11
  __m128 *v31; // r10
  float *v32; // r10
  __int64 v33; // rcx
  __m128 *v34; // r10
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm3
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm1
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  char v45; // cl
  unsigned int v46; // xmm1_4
  float v47; // xmm13_4
  float v48; // xmm11_4
  __int64 v49; // rax
  bool (__fastcall *v50)(CRoundedRectangleShape *__hidden); // rax
  const struct D2D_RECT_F *BaseRect; // rax
  bool IsEmpty; // al
  __int64 v53; // rax
  bool (__fastcall *v54)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // r15d
  const struct CShape *v59; // rdx
  __int64 v60; // rax
  __int64 (__fastcall *v61)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  struct D2D_RECT_F *v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rbx
  __int64 v65; // rdx
  float top; // xmm8_4
  float right; // xmm9_4
  float bottom; // xmm7_4
  FLOAT v69; // xmm0_4
  FLOAT v70; // xmm0_4
  __int64 v71; // rax
  int v72; // ebx
  unsigned int v73; // eax
  int TightBounds; // eax
  char v75; // r15
  __int64 v76; // rax
  enum D2D1_ANTIALIAS_MODE v77; // r13d
  int v78; // r14d
  float v79; // xmm10_4
  int v80; // eax
  float v81; // xmm8_4
  int v82; // eax
  float v83; // xmm9_4
  int v84; // eax
  float v85; // xmm7_4
  __int64 v86; // rdx
  __m128 v87; // xmm6
  float v88; // xmm3_4
  float v89; // xmm2_4
  __m128 v90; // xmm6
  float v91; // xmm1_4
  __m128 v92; // xmm6
  float v93; // xmm0_4
  __m128 v94; // xmm6
  unsigned int v95; // eax
  float v96; // xmm9_4
  float v97; // xmm10_4
  __m128 v98; // xmm3
  float v99; // xmm4_4
  float v100; // xmm5_4
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // eax
  unsigned int v104; // r14d
  __int64 v105; // rbx
  void *(__fastcall ***v106)(CPolygonShape *__hidden, unsigned int); // rdi
  CRectanglesShape *v107; // rcx
  void *(__fastcall *v108)(CPolygonShape *__hidden, unsigned int); // r8
  bool *v109; // rax
  int v111; // r14d
  float v112; // xmm10_4
  int v113; // eax
  float v114; // xmm8_4
  int v115; // eax
  float v116; // xmm9_4
  int v117; // eax
  float v118; // xmm7_4
  __int64 v119; // rbx
  bool v120; // zf
  CCpuClipAntialiasSinkContext **v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rcx
  int v124; // eax
  unsigned int v125; // ebx
  __int64 v126; // rdx
  unsigned int v127; // eax
  float v128; // xmm9_4
  float v129; // xmm11_4
  float v130; // xmm0_4
  float v131; // xmm12_4
  float v132; // xmm5_4
  float v133; // xmm4_4
  float v134; // xmm2_4
  __m128 v135; // xmm6
  float v136; // xmm1_4
  float v137; // xmm13_4
  float v138; // xmm15_4
  float v139; // xmm6_4
  float v140; // xmm3_4
  float v141; // xmm11_4
  __int32 v142; // xmm9_4
  __int32 v143; // xmm7_4
  float v144; // xmm4_4
  float v145; // xmm3_4
  float v146; // xmm12_4
  float v147; // xmm10_4
  float v148; // xmm8_4
  float v149; // xmm5_4
  char v150; // cl
  char v151; // dl
  float v152; // xmm8_4
  float v153; // xmm7_4
  float v154; // xmm0_4
  float v155; // xmm9_4
  float v156; // xmm3_4
  __m128 v157; // xmm15
  float v158; // xmm5_4
  float v159; // xmm12_4
  __m128 v160; // xmm8
  __m128 v161; // xmm15
  float v162; // xmm3_4
  __m128 v163; // xmm6
  __m128 v164; // xmm7
  __m128 v165; // xmm7
  __m128 v166; // xmm6
  __m128 v167; // xmm6
  void *(__fastcall *v168)(CPolygonShape *__hidden, unsigned int); // r8
  __int64 v169; // rax
  CCachedVisualImage *v170; // rcx
  void (*v171)(void); // rax
  char *v172; // rbx
  __int64 v173; // rax
  CPathData *v174; // rcx
  void (*v175)(void); // rax
  _QWORD *Value; // rbx
  HANDLE v177; // rax
  HANDLE ProcessHeap; // rax
  float v179; // xmm1_4
  float v180; // xmm8_4
  float v181; // xmm0_4
  float v182; // xmm9_4
  float v183; // xmm6_4
  float v184; // xmm5_4
  float v185; // xmm7_4
  __m128 v186; // xmm15
  __m128 v187; // xmm15
  __m128 v188; // xmm15
  __m128 v189; // xmm15
  __m128 v190; // xmm7
  __m128 v191; // xmm15
  __m128 v192; // xmm7
  __m128 v193; // xmm15
  __m128 v194; // xmm7
  unsigned int v195; // r14d
  void *v196; // rax
  float v197; // xmm2_4
  float v198; // xmm4_4
  float v199; // xmm5_4
  float v200; // xmm3_4
  CThreadContext *v201; // rax
  CThreadContext *v202; // rax
  __int64 v203; // r15
  int v204; // eax
  bool IsRectangles; // al
  int v206; // eax
  char v207; // [rsp+38h] [rbp-D0h]
  char v208; // [rsp+39h] [rbp-CFh]
  __m128 v209; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v210; // [rsp+58h] [rbp-B0h]
  _BYTE v211[20]; // [rsp+78h] [rbp-90h]
  char v212; // [rsp+98h] [rbp-70h]
  unsigned int v213; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID lpMem[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v215; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v216; // [rsp+C8h] [rbp-40h]
  __m128 v217; // [rsp+D8h] [rbp-30h]
  __m128 v218; // [rsp+E8h] [rbp-20h]
  __int32 v219; // [rsp+F8h] [rbp-10h]
  bool *v220; // [rsp+108h] [rbp+0h]
  _OWORD v221[4]; // [rsp+118h] [rbp+10h] BYREF
  struct D2D_RECT_F v222; // [rsp+158h] [rbp+50h] BYREF
  struct CCpuClipAntialiasSinkContext *v223[2]; // [rsp+168h] [rbp+60h] BYREF
  char v224; // [rsp+178h] [rbp+70h]
  struct D2D_POINT_2F v225[2]; // [rsp+188h] [rbp+80h] BYREF
  void *retaddr; // [rsp+2A0h] [rbp+198h]

  v8 = 0LL;
  v9 = 0;
  v225[0] = (struct D2D_POINT_2F)a7;
  v10 = 0LL;
  v220 = a8;
  v13 = *((_QWORD *)this + 1);
  v219 = 0;
  v208 = 0;
  left = 0.0;
  if ( !a4 )
  {
    v215 = *(__m128 *)(v13 - 84);
    v216 = *(__m128 *)(v13 - 68);
    v217 = *(__m128 *)(v13 - 52);
    v218 = *(__m128 *)(v13 - 36);
    v219 = *(_DWORD *)(v13 - 20);
    goto LABEL_21;
  }
  v17 = (__m128 *)(v13 - 84);
  if ( &v215 == (__m128 *)(v13 - 84) )
  {
    v18 = a4[4].m128_i32[0];
    v19 = a4[2];
    v20 = *a4;
    v209 = *a4;
    *(__m128 *)&v210.m256i_u64[2] = v19;
    *(_DWORD *)&v211[16] = v18;
    v21 = a4[1];
    v22 = a4[3];
    *(__m128 *)v210.m256i_i8 = v21;
    *(__m128 *)v211 = v22;
    *(__m128 *)v223 = v19;
    if ( (char)((_BYTE)v18 << 6) >> 6 == 1 )
    {
      v27 = *(__m128 *)v223;
      LODWORD(v24) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
      v26 = v22.m128_f32[0];
      LODWORD(v25) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    }
    else
    {
      if ( (char)((_BYTE)v18 << 6) >> 6 < 0
        || (v23 = CMILMatrix::IsTranslate<1>(&v209),
            v24 = *(float *)&v211[8],
            v25 = *(float *)&v211[4],
            v26 = *(float *)v211,
            v23)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v211 - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v211[4] - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v211[8] - 0.0) & _xmm) < 0.000081380211 )
      {
        v20 = *v17;
        *(_DWORD *)&v211[16] = v17[4].m128_i32[0];
        v21 = v17[1];
        v27 = v17[2];
        v22 = v17[3];
        goto LABEL_20;
      }
      v22 = *(__m128 *)v211;
      v27 = *(__m128 *)&v210.m256i_u64[2];
      v21 = *(__m128 *)v210.m256i_i8;
      v20 = v209;
      v211[16] = v211[16] & 0xFC | 1;
    }
    if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(v17) )
      goto LABEL_20;
    if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(v28) )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v209) )
      {
        if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v31) )
        {
          if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v209)
            && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v34) )
          {
            v152 = v34->m128_f32[0];
            v153 = v34[1].m128_f32[0];
            v154 = v34->m128_f32[1];
            v155 = v34[1].m128_f32[1];
            v156 = *(float *)v210.m256i_i32 * v34->m128_f32[0];
            *(_QWORD *)&v211[12] = 0x28083F800000LL;
            v209.m128_u64[1] = 0LL;
            *(_OWORD *)&v210.m256i_u64[1] = 0uLL;
            v157 = *(__m128 *)v210.m256i_i8;
            v210.m256i_i32[7] = 0;
            v158 = *(float *)v211 * v152;
            v159 = (float)(v209.m128_f32[1] * v153) + (float)(v209.m128_f32[0] * v152);
            v157.m128_f32[0] = (float)(*(float *)&v210.m256i_i32[1] * v153) + v156;
            v160 = _mm_shuffle_ps(*(__m128 *)&v210.m256i_u64[2], *(__m128 *)&v210.m256i_u64[2], 210);
            v161 = _mm_shuffle_ps(v157, v157, 225);
            v162 = *(float *)&v211[4] * v153;
            v163 = *(__m128 *)v211;
            v161.m128_f32[0] = (float)(*(float *)&v210.m256i_i32[1] * v155) + (float)(*(float *)v210.m256i_i32 * v154);
            v164 = (__m128)v209.m128_u64[0];
            v164.m128_f32[0] = v159;
            v165 = _mm_shuffle_ps(v164, v164, 225);
            v160.m128_f32[0] = *(float *)&v210.m256i_i32[6] * v34[2].m128_f32[2];
            v21 = _mm_shuffle_ps(v161, v161, 225);
            v165.m128_f32[0] = (float)(v209.m128_f32[1] * v155) + (float)(v209.m128_f32[0] * v154);
            v27 = _mm_shuffle_ps(v160, v160, 201);
            v20 = _mm_shuffle_ps(v165, v165, 225);
            v163.m128_f32[0] = (float)(v162 + v158) + v34[3].m128_f32[0];
            v166 = _mm_shuffle_ps(v163, v163, 225);
            v166.m128_f32[0] = (float)((float)(*(float *)&v211[4] * v155) + (float)(*(float *)v211 * v154))
                             + v34[3].m128_f32[1];
            v167 = _mm_shuffle_ps(v166, v166, 198);
            v167.m128_f32[0] = (float)(*(float *)&v211[8] * v34[2].m128_f32[2]) + v34[3].m128_f32[2];
            v22 = _mm_shuffle_ps(v167, v167, 201);
            goto LABEL_19;
          }
          v35 = v34[1];
          v36 = *(__m128 *)&v210.m256i_u64[2];
          v37 = *(__m128 *)v211;
          v221[0] = *v34;
          v38 = v34[2];
          v221[1] = v35;
          v39 = v34[3];
          v221[2] = v38;
          v38.m128_u64[1] = v209.m128_u64[1];
          v221[3] = v39;
          v40 = *(__m128 *)v210.m256i_i8;
          *(double *)v38.m128_u64 = DirectX::XMMatrixMultiply(v33, v221);
          v22 = v37;
          *(_DWORD *)&v211[16] = 0;
          v27 = v36;
          v21 = v40;
          v20 = v38;
LABEL_20:
          v216 = v21;
          v219 = *(_DWORD *)&v211[16];
          v215 = v20;
          v217 = v27;
          v218 = v22;
          goto LABEL_21;
        }
        v136 = *v32;
        v137 = v32[12];
        v138 = v32[13];
        v139 = v32[10];
        v140 = v32[5];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v32 - 1.0) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v140 - 1.0) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v139 - 1.0) & _xmm) >= 0.000081380211 )
        {
          v141 = v209.m128_f32[1] * v140;
          *(float *)&v142 = *(float *)&v210.m256i_i32[1] * v140;
          *(float *)&v143 = *(float *)&v210.m256i_i32[5] * v140;
          v144 = *(float *)&v211[4] * v140;
          v145 = *(float *)&v211[8];
          v146 = v209.m128_f32[0] * v136;
          v147 = *(float *)v210.m256i_i32 * v136;
          v148 = *(float *)&v210.m256i_i32[4] * v136;
          v149 = *(float *)v211 * v136;
          v209.m128_f32[0] = v209.m128_f32[0] * v136;
          *(float *)v210.m256i_i32 = *(float *)v210.m256i_i32 * v136;
          *(float *)&v210.m256i_i32[4] = *(float *)&v210.m256i_i32[4] * v136;
          *(float *)v211 = *(float *)v211 * v136;
          v209.m128_f32[1] = v141;
          v210.m256i_i32[1] = v142;
          v210.m256i_i32[5] = v143;
          *(float *)&v211[4] = v144;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v139 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v209.m128_f32[2] = v209.m128_f32[2] * v139;
            v145 = *(float *)&v211[8] * v139;
            *(float *)&v210.m256i_i32[6] = *(float *)&v210.m256i_i32[6] * v139;
            *(float *)&v210.m256i_i32[2] = *(float *)&v210.m256i_i32[2] * v139;
            *(float *)&v211[8] = *(float *)&v211[8] * v139;
          }
          v150 = v211[16] & 0xCC;
          v211[16] &= 0xCCu;
        }
        else
        {
          v150 = v211[16];
          v145 = *(float *)&v211[8];
          v144 = *(float *)&v211[4];
          v149 = *(float *)v211;
          v143 = v210.m256i_i32[5];
          v148 = *(float *)&v210.m256i_i32[4];
          v142 = v210.m256i_i32[1];
          v147 = *(float *)v210.m256i_i32;
          v141 = v209.m128_f32[1];
          v146 = v209.m128_f32[0];
        }
        if ( COERCE_FLOAT(LODWORD(v137) & _xmm) < 0.000081380211
          && COERCE_FLOAT(LODWORD(v138) & _xmm) < 0.000081380211
          && COERCE_FLOAT((_DWORD)v32[14] & _xmm) < 0.000081380211 )
        {
LABEL_235:
          v22 = *(__m128 *)v211;
          v27 = *(__m128 *)&v210.m256i_u64[2];
          v21 = *(__m128 *)v210.m256i_i8;
          v20 = v209;
          goto LABEL_19;
        }
        v151 = v211[17];
        if ( (char)(4 * v211[17]) >> 6 == 1 )
          goto LABEL_231;
        if ( (char)(4 * v211[17]) >> 6 < 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v210.m256i_i32[7] & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            goto LABEL_231;
LABEL_233:
          v200 = v145 + v32[14];
          v199 = v149 + v137;
          v198 = v144 + v138;
          goto LABEL_234;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v210.m256i_i32[3] & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(v209.m128_i32[3] & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)&v211[12] & _xmm))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          v151 = v211[17] | 0x30;
          v211[17] |= 0x30u;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v210.m256i_i32[7] & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
            goto LABEL_233;
        }
        else
        {
          v151 = v211[17] & 0xCF | 0x10;
        }
LABEL_231:
        v197 = v32[14];
        v211[17] = v151 & 0xF3;
        v209.m128_f32[0] = v146 + (float)(v209.m128_f32[3] * v137);
        v209.m128_f32[2] = v209.m128_f32[2] + (float)(v209.m128_f32[3] * v197);
        v209.m128_f32[1] = v141 + (float)(v209.m128_f32[3] * v138);
        *(float *)v210.m256i_i32 = v147 + (float)(*(float *)&v210.m256i_i32[3] * v137);
        *(float *)&v210.m256i_i32[1] = *(float *)&v142 + (float)(*(float *)&v210.m256i_i32[3] * v138);
        *(float *)&v210.m256i_i32[2] = *(float *)&v210.m256i_i32[2] + (float)(*(float *)&v210.m256i_i32[3] * v197);
        *(float *)&v210.m256i_i32[5] = *(float *)&v143 + (float)(*(float *)&v210.m256i_i32[7] * v138);
        *(float *)&v210.m256i_i32[4] = v148 + (float)(*(float *)&v210.m256i_i32[7] * v137);
        *(float *)&v210.m256i_i32[6] = *(float *)&v210.m256i_i32[6] + (float)(*(float *)&v210.m256i_i32[7] * v197);
        v198 = v144 + (float)(*(float *)&v211[12] * v138);
        v199 = v149 + (float)(*(float *)&v211[12] * v137);
        v200 = v145 + (float)(*(float *)&v211[12] * v197);
LABEL_234:
        *(float *)&v211[8] = v200;
        v211[16] = v150 & 0xFC;
        *(float *)&v211[4] = v198;
        *(float *)v211 = v199;
        goto LABEL_235;
      }
      v128 = *(float *)v211;
      v22 = v31[3];
      v129 = *(float *)&v211[4];
      LODWORD(v130) = *(_DWORD *)v211 & _xmm;
      *(_DWORD *)&v211[16] = v31[4].m128_i32[0];
      v131 = *(float *)&v211[8];
      v20 = *v31;
      v21 = v31[1];
      v27 = v31[2];
      *(__m128 *)v211 = v22;
      if ( v130 < 0.000081380211
        && COERCE_FLOAT(LODWORD(v129) & _xmm) < 0.000081380211
        && COERCE_FLOAT(LODWORD(v131) & _xmm) < 0.000081380211 )
      {
        goto LABEL_20;
      }
      LODWORD(v132) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
      LODWORD(v133) = _mm_shuffle_ps(v27, v27, 255).m128_u32[0];
      *(float *)v211 = *(float *)v211
                     + (float)((float)((float)(v21.m128_f32[0] * v129) + (float)(v20.m128_f32[0] * v128))
                             + (float)(v27.m128_f32[0] * v131));
      *(float *)&v211[4] = *(float *)&v211[4]
                         + (float)((float)((float)(_mm_shuffle_ps(v21, v21, 85).m128_f32[0] * v129)
                                         + (float)(_mm_shuffle_ps(v20, v20, 85).m128_f32[0] * v128))
                                 + (float)(_mm_shuffle_ps(v27, v27, 85).m128_f32[0] * v131));
      LODWORD(v134) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
      *(float *)&v211[8] = *(float *)&v211[8]
                         + (float)((float)((float)(_mm_shuffle_ps(v21, v21, 170).m128_f32[0] * v129)
                                         + (float)(_mm_shuffle_ps(v20, v20, 170).m128_f32[0] * v128))
                                 + (float)(_mm_shuffle_ps(v27, v27, 170).m128_f32[0] * v131));
      if ( (char)(4 * v211[17]) >> 6 != 1 )
      {
        if ( (char)(4 * v211[17]) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(LODWORD(v134) & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(LODWORD(v132) & _xmm) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)&v211[12] & _xmm))
                            - 1.0) & _xmm) >= 0.000081380211 )
            goto LABEL_161;
          v211[17] |= 0x30u;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v133) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            goto LABEL_161;
        }
        else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v133) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        {
          goto LABEL_161;
        }
        v211[16] &= 0xFCu;
        v22 = *(__m128 *)v211;
        goto LABEL_20;
      }
LABEL_161:
      *(_DWORD *)&v211[16] = 0;
      v135 = _mm_shuffle_ps(*(__m128 *)v211, *(__m128 *)v211, 147);
      v135.m128_f32[0] = *(float *)&v211[12]
                       + (float)((float)((float)(v134 * v129) + (float)(v132 * v128)) + (float)(v133 * v131));
      v22 = _mm_shuffle_ps(v135, v135, 57);
      goto LABEL_20;
    }
    v96 = v29[12];
    v46 = *((unsigned int *)v29 + 13);
    v97 = v29[14];
    v213 = v46;
    if ( COERCE_FLOAT(LODWORD(v96) & _xmm) < 0.000081380211
      && COERCE_FLOAT(v46 & _xmm) < 0.000081380211
      && COERCE_FLOAT(LODWORD(v97) & _xmm) < 0.000081380211 )
    {
      goto LABEL_19;
    }
    v45 = v211[17];
    v98 = _mm_shuffle_ps(v27, v27, 255);
    *(__m128 *)v223 = v98;
    LODWORD(v99) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    LODWORD(v100) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    if ( (char)(4 * v211[17]) >> 6 != 1 )
    {
      if ( (char)(4 * v211[17]) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(LODWORD(v99) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(LODWORD(v100) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)&v211[12] & _xmm))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          v45 = v211[17] | 0x30;
          v211[17] |= 0x30u;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v98.m128_i32[0] & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
          {
            v46 = v213;
LABEL_17:
            v47 = v26 + v96;
            v48 = v24 + v97;
LABEL_18:
            *(float *)v211 = v47;
            *(float *)&v211[8] = v48;
            v211[16] = v30 & 0xFC;
            *(float *)&v211[4] = v25 + *(float *)&v46;
            v22 = *(__m128 *)v211;
LABEL_19:
            left = 0.0;
            goto LABEL_20;
          }
        }
        else
        {
          v45 = v211[17] & 0xCF | 0x10;
        }
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v98.m128_i32[0] & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
      {
        goto LABEL_17;
      }
    }
    v179 = v100 * v29[13];
    v211[17] = v45 & 0xF3;
    v180 = v209.m128_f32[2] + (float)(v100 * v29[14]);
    v181 = v100 * v96;
    v182 = v209.m128_f32[1] + v179;
    v183 = *(float *)&v210.m256i_i32[1] + (float)(v99 * v29[13]);
    v184 = *(float *)&v210.m256i_i32[2] + (float)(v99 * v29[14]);
    v185 = *(float *)v210.m256i_i32 + (float)(v99 * v29[12]);
    *(float *)&v46 = *(float *)&v211[12] * v29[13];
    v48 = v24 + (float)(*(float *)&v211[12] * v29[14]);
    v186 = *(__m128 *)&v210.m256i_u64[2];
    v186.m128_f32[0] = *(float *)&v210.m256i_i32[4] + (float)(v98.m128_f32[0] * v29[12]);
    v187 = _mm_shuffle_ps(v186, v186, 225);
    v47 = v26 + (float)(*(float *)&v211[12] * v29[12]);
    v187.m128_f32[0] = *(float *)&v210.m256i_i32[5] + (float)(v98.m128_f32[0] * v29[13]);
    v188 = _mm_shuffle_ps(v187, v187, 198);
    v188.m128_f32[0] = *(float *)&v210.m256i_i32[6] + (float)(*(float *)v223 * v29[14]);
    *(__m128 *)v223 = _mm_shuffle_ps(v188, v188, 201);
    v189 = *(__m128 *)v210.m256i_i8;
    v189.m128_f32[0] = v185;
    v190 = v209;
    v190.m128_f32[0] = v209.m128_f32[0] + v181;
    v191 = _mm_shuffle_ps(v189, v189, 225);
    v192 = _mm_shuffle_ps(v190, v190, 225);
    v191.m128_f32[0] = v183;
    v192.m128_f32[0] = v182;
    v193 = _mm_shuffle_ps(v191, v191, 198);
    v194 = _mm_shuffle_ps(v192, v192, 198);
    v193.m128_f32[0] = v184;
    v194.m128_f32[0] = v180;
    v21 = _mm_shuffle_ps(v193, v193, 201);
    v27 = *(__m128 *)v223;
    v20 = _mm_shuffle_ps(v194, v194, 201);
    goto LABEL_18;
  }
  v41 = *a4;
  v42 = a4[1];
  v219 = a4[4].m128_i32[0];
  v215 = v41;
  v43 = a4[2];
  v216 = v42;
  v44 = a4[3];
  v217 = v43;
  v218 = v44;
  CMILMatrix::Multiply((CMILMatrix *)&v215, (const struct CMILMatrix *)v17);
LABEL_21:
  v49 = *((_QWORD *)this + 1);
  if ( v49 != *(_QWORD *)this && *(_QWORD *)(v49 - 176) )
    v8 = *(_QWORD *)(*((_QWORD *)this + 244) - 24LL);
  v207 = 0;
  v50 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v50 == CRoundedRectangleShape::IsEmpty )
  {
    BaseRect = (const struct D2D_RECT_F *)CRoundedRectangleGeometryData::GetBaseRect(
                                            *((_QWORD *)a2 + 2) + 16LL,
                                            (__int64)v223);
    IsEmpty = ::IsEmpty(BaseRect);
  }
  else if ( v50 == CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty(a2);
  }
  else if ( v50 == CShape::IsEmpty )
  {
    IsEmpty = CShape::IsEmpty(a2);
  }
  else
  {
    IsEmpty = v50(a2);
  }
  if ( IsEmpty )
    goto LABEL_46;
  v53 = *(_QWORD *)a2;
  *(float *)&v213 = 0.0;
  v54 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v53 + 64);
  if ( v54 == CRoundedRectangleShape::IsRectangles )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)a2 + 2) + 16LL)) )
      goto LABEL_29;
  }
  else
  {
    if ( v54 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(a2, &v213);
    }
    else if ( v54 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(a2, &v213);
    }
    else
    {
      IsRectangles = v54(a2, &v213);
    }
    if ( !IsRectangles || v213 != 1 )
      goto LABEL_29;
  }
  if ( (char)v219 >> 6 != 1 )
  {
    if ( (char)v219 >> 6 < 0 )
    {
LABEL_46:
      v207 = 1;
      ++v8;
      goto LABEL_29;
    }
    if ( (char)(4 * BYTE1(v219)) >> 6 != 1 )
    {
      if ( (char)(4 * BYTE1(v219)) >> 6 < 0 )
      {
LABEL_147:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v215.m128_f32[1] - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v216.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
        {
          v207 = 1;
          LOBYTE(v219) = v219 | 0xC0;
          ++v8;
          goto LABEL_29;
        }
        goto LABEL_148;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(v216.m128_i32[3] & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(v215.m128_i32[3] & _xmm) * 61440.0))
                                + COERCE_FLOAT(v218.m128_i32[3] & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        BYTE1(v219) |= 0x30u;
        goto LABEL_147;
      }
      BYTE1(v219) = BYTE1(v219) & 0xCF | 0x10;
    }
LABEL_148:
    LOBYTE(v219) = v219 & 0x3F | 0x40;
  }
  if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(&v215) )
    goto LABEL_46;
LABEL_29:
  lpMem[0] = 0LL;
  if ( a3 )
  {
    v55 = CShape::CopyShape(a3, 0LL, (struct CShape **)lpMem);
    v58 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x162u, 0LL);
      goto LABEL_179;
    }
    goto LABEL_31;
  }
  v71 = *((_QWORD *)this + 1);
  if ( v71 == *(_QWORD *)this || !*(_QWORD *)(v71 - 176) )
  {
    v206 = CShape::CopyShape(a2, (const struct CMILMatrix *)a4, (struct CShape **)lpMem);
    v58 = v206;
    if ( v206 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v206, 0x171u, 0LL);
      goto LABEL_179;
    }
  }
  else
  {
    *(_QWORD *)&v222.left = *(_QWORD *)(*((_QWORD *)this + 244) - 40LL);
    v58 = CShape::TryOptimizedCombinePaths(*(_QWORD *)&v222.left, 0LL, a2, a4, 1, lpMem);
    if ( v58 < 0 )
    {
      v73 = 456;
      v72 = v58;
      goto LABEL_53;
    }
    v59 = (const struct CShape *)lpMem[0];
    if ( lpMem[0] )
      goto LABEL_32;
    v72 = CShape::D2DCombine(*(_QWORD *)&v222.left, 0LL, a2, a4, 1, lpMem);
    v58 = v72;
    if ( v72 < 0 )
    {
      v73 = 467;
LABEL_53:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, v73, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x16Cu, 0LL);
      goto LABEL_179;
    }
  }
LABEL_31:
  v59 = (const struct CShape *)lpMem[0];
LABEL_32:
  v9 = 1;
  v212 = 1;
  v10 = v59;
  if ( !a6 )
    goto LABEL_33;
  v119 = *((_QWORD *)this + 1);
  v120 = *(_QWORD *)(v119 - 16) == 0LL;
  v121 = (CCpuClipAntialiasSinkContext **)(v119 - 16);
  *(_QWORD *)&v222.left = v119 - 16;
  if ( v120 )
  {
    v223[0] = (struct CCpuClipAntialiasSinkContext *)(v119 - 16);
    v223[1] = 0LL;
    v224 = 1;
    v58 = CCpuClipAntialiasSinkContext::Create(&v223[1]);
    if ( v224 )
    {
      v122 = *(_QWORD *)v223[0];
      *(_QWORD *)v223[0] = v223[1];
      if ( v122 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v122 + 8LL))(v122);
    }
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x17Fu, 0LL);
      goto LABEL_179;
    }
    v123 = *(_QWORD *)(v119 - 16);
    *(_OWORD *)(v123 + 904) = *(_OWORD *)(v119 - 84);
    *(_OWORD *)(v123 + 920) = *(_OWORD *)(v119 - 68);
    *(_OWORD *)(v123 + 936) = *(_OWORD *)(v119 - 52);
    *(_OWORD *)(v123 + 952) = *(_OWORD *)(v119 - 36);
    *(_DWORD *)(v123 + 968) = *(_DWORD *)(v119 - 20);
    v59 = (const struct CShape *)lpMem[0];
    v121 = *(CCpuClipAntialiasSinkContext ***)&v222.left;
  }
  v124 = CCpuClipAntialiasSinkContext::PushSink(*v121, v59, *(struct CCpuClipAntialiasSink **)v225);
  v58 = v124;
  if ( v124 >= 0 )
  {
    v208 = 1;
LABEL_33:
    v60 = *(_QWORD *)a2;
    v222 = 0LL;
    v61 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(v60 + 48);
    if ( (char *)v61 == (char *)&CRectanglesShape::GetTightBounds )
    {
      v62 = (struct D2D_RECT_F *)*((_QWORD *)a2 + 2);
      v63 = (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v62) >> 4;
      if ( v63 )
      {
        v64 = 1LL;
        v222 = *v62;
        if ( v63 > 1 )
        {
          v203 = 1LL;
          do
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v222.left, &v62[v203].left);
            v62 = (struct D2D_RECT_F *)*((_QWORD *)a2 + 2);
            ++v203;
            ++v64;
          }
          while ( v64 < (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v62) >> 4 );
        }
        if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(&v215) )
        {
          if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(&v215, v65, v56, v57) )
          {
            left = v222.left + v218.m128_f32[0];
            top = v222.top + v218.m128_f32[1];
            right = v222.right + v218.m128_f32[0];
            bottom = v222.bottom + v218.m128_f32[1];
            v222.left = v222.left + v218.m128_f32[0];
            v222.top = v222.top + v218.m128_f32[1];
            v222.right = v222.right + v218.m128_f32[0];
            v222.bottom = v222.bottom + v218.m128_f32[1];
            goto LABEL_59;
          }
          if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v215) )
          {
            left = (float)(v215.m128_f32[0] * v222.left) + v218.m128_f32[0];
            top = (float)(v216.m128_f32[1] * v222.top) + v218.m128_f32[1];
            right = (float)(v215.m128_f32[0] * v222.right) + v218.m128_f32[0];
            bottom = (float)(v216.m128_f32[1] * v222.bottom) + v218.m128_f32[1];
            v222.left = left;
            v222.top = top;
            v222.right = right;
            v222.bottom = bottom;
            if ( v215.m128_f32[0] <= 0.0 || v216.m128_f32[1] <= 0.0 )
            {
              v69 = left;
              if ( left > right )
              {
                v222.left = right;
                left = right;
                right = v69;
                v222.right = v69;
              }
              v70 = top;
              if ( top > bottom )
              {
                v222.top = bottom;
                top = bottom;
                bottom = v70;
                v222.bottom = v70;
              }
            }
            goto LABEL_59;
          }
          CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)&v215, &v222, v225);
          v223[0] = (struct CCpuClipAntialiasSinkContext *)4;
          v223[1] = (struct CCpuClipAntialiasSinkContext *)v225;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
            &v222,
            v223);
        }
      }
    }
    else
    {
      if ( v61 == CRoundedRectangleShape::GetTightBounds )
      {
        TightBounds = CRoundedRectangleShape::GetTightBounds(a2, &v222, (CMILMatrix *)&v215);
      }
      else if ( (char *)v61 == (char *)CRegionShape::GetTightBounds )
      {
        TightBounds = CRegionShape::GetTightBounds(a2, &v222, &v215);
      }
      else
      {
        TightBounds = v61(a2, &v222, (CMILMatrix *)&v215);
      }
      if ( TightBounds < 0 )
      {
        if ( TightBounds != -2003304438 )
          ModuleFailFastForHRESULT(TightBounds, retaddr);
        bottom = 0.0;
        v222.left = 0.0;
        right = 0.0;
        v222.bottom = 0.0;
        top = 0.0;
        v222.right = 0.0;
        v222.top = 0.0;
LABEL_59:
        v75 = v207;
        if ( !v207 )
        {
          if ( COERCE_FLOAT(LODWORD(left) & _xmm) < 8388608.0 )
            left = (float)(int)floorf_0(left);
          v222.left = left;
          if ( COERCE_FLOAT(LODWORD(top) & _xmm) < 8388608.0 )
            top = (float)(int)floorf_0(top);
          v222.top = top;
          if ( COERCE_FLOAT(LODWORD(right) & _xmm) < 8388608.0 )
            right = (float)(int)ceilf_0(right);
          v222.right = right;
          if ( COERCE_FLOAT(LODWORD(bottom) & _xmm) < 8388608.0 )
            bottom = (float)(int)ceilf_0(bottom);
          v222.bottom = bottom;
        }
        v76 = *((_QWORD *)this + 1);
        if ( v76 != *(_QWORD *)this && *(_QWORD *)(v76 - 168) )
        {
          v77 = a5;
          if ( a5 == D2D1_ANTIALIAS_MODE_ALIASED )
          {
            v78 = 0x7FFFFFFF;
            v79 = left - 0.5;
            if ( v79 < -2147483600.0 )
            {
              v80 = 0x80000000;
            }
            else if ( v79 >= 2147483600.0 )
            {
              v80 = 0x7FFFFFFF;
            }
            else
            {
              v80 = (int)ceilf_0(v79);
            }
            v81 = top - 0.5;
            left = (float)v80;
            if ( v81 < -2147483600.0 )
            {
              v82 = 0x80000000;
            }
            else if ( v81 >= 2147483600.0 )
            {
              v82 = 0x7FFFFFFF;
            }
            else
            {
              v82 = (int)ceilf_0(v81);
            }
            v83 = right - 0.5;
            top = (float)v82;
            if ( v83 < -2147483600.0 )
            {
              v84 = 0x80000000;
            }
            else if ( v83 >= 2147483600.0 )
            {
              v84 = 0x7FFFFFFF;
            }
            else
            {
              v84 = (int)ceilf_0(v83);
            }
            v85 = bottom - 0.5;
            right = (float)v84;
            if ( v85 < -2147483600.0 )
            {
              v78 = 0x80000000;
            }
            else if ( v85 < 2147483600.0 )
            {
              v78 = (int)ceilf_0(v85);
            }
            bottom = (float)v78;
          }
          v86 = *((unsigned int *)this + 600);
          *(_OWORD *)&v225[0].x = 0LL;
          if ( (_DWORD)v86 )
            v87 = *(__m128 *)(*((_QWORD *)this + 299) + 16LL * (unsigned int)(v86 - 1));
          else
            v87 = (__m128)_xmm;
          *(__m128 *)&v225[0].x = v87;
          v88 = v87.m128_f32[0];
          if ( left > v87.m128_f32[0] )
          {
            v88 = left;
            v87.m128_f32[0] = left;
            *(__m128 *)&v225[0].x = v87;
          }
          v89 = _mm_shuffle_ps(v87, v87, 85).m128_f32[0];
          if ( top > v89 )
          {
            v89 = top;
            v90 = _mm_shuffle_ps(*(__m128 *)&v225[0].x, *(__m128 *)&v225[0].x, 225);
            v90.m128_f32[0] = top;
            v87 = _mm_shuffle_ps(v90, v90, 225);
            *(__m128 *)&v225[0].x = v87;
          }
          v91 = _mm_shuffle_ps(v87, v87, 170).m128_f32[0];
          if ( v91 > right )
          {
            v91 = right;
            v92 = _mm_shuffle_ps(*(__m128 *)&v225[0].x, *(__m128 *)&v225[0].x, 210);
            v92.m128_f32[0] = right;
            v87 = _mm_shuffle_ps(v92, v92, 201);
            *(__m128 *)&v225[0].x = v87;
          }
          v93 = _mm_shuffle_ps(v87, v87, 255).m128_f32[0];
          if ( v93 > bottom )
          {
            v93 = bottom;
            v94 = _mm_shuffle_ps(*(__m128 *)&v225[0].x, *(__m128 *)&v225[0].x, 147);
            v94.m128_f32[0] = bottom;
            v87 = _mm_shuffle_ps(v94, v94, 57);
            *(__m128 *)&v225[0].x = v87;
          }
          if ( v91 <= v88 || v93 <= v89 )
          {
            v225[1] = 0LL;
            v225[0] = 0LL;
            v87 = 0u;
          }
          if ( (_DWORD)v86 != *((_DWORD *)this + 601) )
            goto LABEL_98;
          v204 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
                   (char *)this + 2392,
                   v86,
                   v56,
                   v57,
                   (char *)this + 2392);
          v58 = v204;
          if ( v204 >= 0 )
          {
            v75 = v207;
LABEL_98:
            *(__m128 *)(*((_QWORD *)this + 299) + 16LL * *((unsigned int *)this + 600)) = v87;
            v95 = *((_DWORD *)this + 603);
            if ( v95 <= ++*((_DWORD *)this + 600) )
              v95 = *((_DWORD *)this + 600);
            *((_DWORD *)this + 603) = v95;
LABEL_117:
            v104 = 0;
            ++*(_QWORD *)(*((_QWORD *)this + 1) - 168LL);
            detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((char *)this + 1944);
            ++*(_QWORD *)(*((_QWORD *)this + 1) - 176LL);
            v105 = *((_QWORD *)this + 244);
            if ( *(_BYTE *)(v105 - 32) )
            {
              v106 = *(void *(__fastcall ****)(CPolygonShape *__hidden, unsigned int))(v105 - 40);
              if ( v106 )
              {
                v107 = *(CRectanglesShape **)(v105 - 40);
                v108 = **v106;
                if ( v108 == CRectanglesShape::`scalar deleting destructor' )
                {
                  CRectanglesShape::~CRectanglesShape(v107);
                  CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v106);
                }
                else if ( v108 == CRoundedRectangleShape::`vector deleting destructor' )
                {
                  CRoundedRectangleShape::~CRoundedRectangleShape(v107);
                  CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v106);
                }
                else if ( v108 == CPolygonShape::`scalar deleting destructor' )
                {
                  CPolygonShape::`scalar deleting destructor'(v107, 1u);
                }
                else
                {
                  (**v106)(v107, 1u);
                }
              }
            }
            *(_QWORD *)(v105 - 40) = v10;
            *(_BYTE *)(v105 - 32) = 1;
            *(_BYTE *)(v105 - 4) = a6;
            v109 = v220;
            *(_QWORD *)(v105 - 24) = v8;
            *(_QWORD *)(v105 - 16) = 0LL;
            *(_DWORD *)(v105 - 8) = v77;
            *v109 = v75;
            return v104;
          }
          wil::details::in1diag3::Return_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x83,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)(unsigned int)v204);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x31u, 0LL);
          v127 = 517;
          goto LABEL_155;
        }
        v77 = a5;
        if ( a5 == D2D1_ANTIALIAS_MODE_ALIASED )
        {
          v111 = 0x7FFFFFFF;
          v112 = left - 0.5;
          if ( v112 < -2147483600.0 )
          {
            v113 = 0x80000000;
          }
          else if ( v112 >= 2147483600.0 )
          {
            v113 = 0x7FFFFFFF;
          }
          else
          {
            v113 = (int)ceilf_0(v112);
          }
          v114 = top - 0.5;
          *(float *)v223 = (float)v113;
          if ( v114 < -2147483600.0 )
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
          v116 = right - 0.5;
          *((float *)v223 + 1) = (float)v115;
          if ( v116 < -2147483600.0 )
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
          v118 = bottom - 0.5;
          *(float *)&v223[1] = (float)v117;
          if ( v118 < -2147483600.0 )
          {
            v111 = 0x80000000;
          }
          else if ( v118 < 2147483600.0 )
          {
            v111 = (int)ceilf_0(v118);
          }
          *((float *)&v223[1] + 1) = (float)v111;
        }
        else
        {
          v223[0] = (struct CCpuClipAntialiasSinkContext *)__PAIR64__(LODWORD(top), LODWORD(left));
          v223[1] = (struct CCpuClipAntialiasSinkContext *)__PAIR64__(LODWORD(bottom), LODWORD(right));
        }
        v101 = *((unsigned int *)this + 600);
        v102 = *((unsigned int *)this + 601);
        if ( (_DWORD)v101 != (_DWORD)v102 )
        {
LABEL_114:
          *(_OWORD *)(*((_QWORD *)this + 299) + 16LL * *((unsigned int *)this + 600)) = *(_OWORD *)v223;
          v103 = *((_DWORD *)this + 603);
          if ( v103 <= ++*((_DWORD *)this + 600) )
            v103 = *((_DWORD *)this + 600);
          *((_DWORD *)this + 603) = v103;
          goto LABEL_117;
        }
        v125 = 2 * v102;
        if ( (unsigned __int64)(2 * v102) <= 0xFFFFFFFF )
        {
          if ( v125 <= 8 )
            v125 = 8;
          v195 = 16 * v101;
          if ( (unsigned __int64)(16 * v101) <= 0xFFFFFFFF )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v125 <= 0x10 )
            {
              v58 = -2147024809;
            }
            else
            {
              v196 = MIDL_user_allocate(16LL * v125);
              v225[0] = (struct D2D_POINT_2F)v196;
              if ( v196 )
              {
                memcpy_0(v196, *((const void **)this + 299), v195);
                operator delete(*((void **)this + 299));
                *((struct D2D_POINT_2F *)this + 299) = v225[0];
                *((_DWORD *)this + 601) = v125;
                goto LABEL_114;
              }
              v58 = -2147024882;
            }
            v126 = 104LL;
LABEL_154:
            wil::details::in1diag3::Return_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)v126,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)(unsigned int)v58);
            wil::details::in1diag3::Return_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x83,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)(unsigned int)v58);
            v127 = 513;
LABEL_155:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, v127, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1A9u, 0LL);
            v9 = v212;
            if ( v208 )
              detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(*(_QWORD *)(*((_QWORD *)this + 1) - 16LL) + 16LL);
            goto LABEL_179;
          }
          v126 = 101LL;
        }
        else
        {
          v126 = 98LL;
        }
        v58 = -2147024362;
        goto LABEL_154;
      }
    }
    left = v222.left;
    top = v222.top;
    right = v222.right;
    bottom = v222.bottom;
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v124, 0x187u, 0LL);
LABEL_179:
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)this + 1944);
  v104 = v58;
  if ( v9 && v10 )
  {
    v168 = **(void *(__fastcall ***)(CPolygonShape *__hidden, unsigned int))v10;
    if ( v168 == CRectanglesShape::`scalar deleting destructor' )
    {
      *(_QWORD *)v10 = &CRectanglesShape::`vftable';
      v169 = (__int64)(*((_QWORD *)v10 + 3) - *((_QWORD *)v10 + 2)) >> 4;
      if ( v169 )
        *((_QWORD *)v10 + 3) -= 16 * v169;
      v170 = (CCachedVisualImage *)*((_QWORD *)v10 + 7);
      if ( v170 )
      {
        v171 = *(void (**)(void))(*(_QWORD *)v170 + 16LL);
        if ( (char *)v171 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v170);
        else
          v171();
        *((_QWORD *)v10 + 7) = 0LL;
      }
      v172 = (char *)*((_QWORD *)v10 + 2);
      v173 = (__int64)(*((_QWORD *)v10 + 3) - (_QWORD)v172) >> 4;
      if ( v173 )
        *((_QWORD *)v10 + 3) -= 16 * v173;
      *((_QWORD *)v10 + 2) = 0LL;
      if ( v172 == (char *)v10 + 40 )
        v172 = 0LL;
      if ( v172 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v172);
      }
      v174 = (CPathData *)*((_QWORD *)v10 + 1);
      if ( v174 )
      {
        *((_QWORD *)v10 + 1) = 0LL;
        v175 = *(void (**)(void))(*(_QWORD *)v174 + 16LL);
        if ( (char *)v175 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
          CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v174);
        else
          v175();
      }
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v201 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v201 || (v202 = CThreadContext::CThreadContext(v201), (Value = v202) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v202);
      }
      if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
      {
        *(_QWORD *)v10 = Value[7];
        ++*((_DWORD *)Value + 13);
        Value[7] = v10;
      }
      else
      {
        v177 = GetProcessHeap();
        HeapFree(v177, 0, v10);
      }
    }
    else if ( v168 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v10);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v10);
    }
    else if ( v168 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v10, 1u);
    }
    else
    {
      (**(void (__fastcall ***)(void *, __int64))v10)(v10, 1LL);
    }
  }
  return v104;
}
