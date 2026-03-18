/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180127920 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18019A960 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18019AF04 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18019BB94 (-IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18019BBE8 (--1-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18019BDF0 (-IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18020CD34 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  __int64 v4; // rax
  unsigned int v7; // r14d
  __int64 *v8; // rcx
  float v9; // xmm14_4
  float v10; // xmm13_4
  _QWORD *v11; // rdi
  __int64 v12; // rax
  bool (__fastcall *v13)(__int64, int); // rax
  char v14; // al
  int v15; // ecx
  int v16; // r9d
  float v17; // xmm15_4
  __int64 v18; // rbx
  __int16 v19; // r14
  char v20; // r12
  _QWORD *v21; // rax
  CMILRefCountImpl *v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  __m128 v41; // xmm1
  __m128 v42; // xmm1
  struct D2D_RECT_F v43; // xmm0
  int v44; // xmm0_4
  int v45; // ecx
  int v46; // r9d
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  _BYTE *v51; // rcx
  unsigned int v52; // r11d
  _BYTE *v53; // r9
  _BYTE *v54; // r8
  _BYTE *v55; // r10
  float v56; // xmm5_4
  int v57; // xmm12_4
  float v58; // xmm11_4
  __int64 v59; // r15
  __int64 v60; // r13
  float v61; // xmm0_4
  unsigned int i; // ebx
  float v63; // xmm7_4
  __int64 v64; // rax
  float v65; // xmm6_4
  bool v66; // zf
  float v67; // xmm9_4
  float v68; // xmm4_4
  float v69; // xmm10_4
  float v70; // xmm2_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  int v73; // eax
  int v74; // edx
  int v75; // edx
  int v76; // eax
  int v77; // edx
  int v78; // r9d
  struct D2D_MATRIX_3X2_F *v79; // r9
  float *v80; // rax
  float v81; // xmm0_4
  float v82; // xmm14_4
  bool v83; // cc
  float v84; // xmm0_4
  float v85; // xmm0_4
  float v86; // xmm12_4
  float v87; // xmm14_4
  float v89; // xmm7_4
  float v90; // xmm9_4
  float v91; // xmm2_4
  float v92; // xmm1_4
  __m128 v93; // xmm13
  float v94; // xmm11_4
  float v95; // xmm6_4
  float v96; // xmm9_4
  __m128 v97; // xmm15
  float v98; // xmm5_4
  float v99; // xmm10_4
  float v100; // xmm7_4
  float v101; // xmm4_4
  float v102; // xmm12_4
  float v103; // xmm0_4
  float v104; // xmm14_4
  __m128 v105; // xmm15
  __m128 v106; // xmm15
  __m128 v107; // xmm15
  __m128 v108; // xmm13
  __m128 v109; // xmm13
  float v110; // xmm1_4
  float v111; // xmm14_4
  float v112; // xmm0_4
  __m128 v113; // xmm13
  struct D2D_RECT_F v114; // xmm0
  int (*v115)(const struct CDrawListBrush *, void *); // rax
  __m128 v116; // xmm13
  int v117; // eax
  float v118; // xmm2_4
  float v119; // xmm1_4
  __int64 v120; // rdx
  struct D2D_RECT_F v121; // xmm0
  int v122; // r9d
  struct D2D_MATRIX_3X2_F *v123; // r9
  __int64 v124; // rax
  volatile signed __int32 **v125; // rcx
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  float v139; // xmm0_4
  float v140; // xmm0_4
  float v141; // xmm5_4
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  int v165; // eax
  float v166; // xmm1_4
  __m128 v167; // xmm3
  __int64 v168; // rax
  __m128 v169; // xmm2
  char v170; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v171; // [rsp+4Ch] [rbp-BCh] BYREF
  float v172; // [rsp+54h] [rbp-B4h]
  float v173; // [rsp+58h] [rbp-B0h]
  struct D2D_RECT_F v174; // [rsp+68h] [rbp-A0h] BYREF
  float v175; // [rsp+78h] [rbp-90h]
  float v176; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v177; // [rsp+80h] [rbp-88h]
  struct D2D_RECT_F v178; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v179; // [rsp+98h] [rbp-70h]
  unsigned int v180; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v181[48]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v182[20]; // [rsp+D0h] [rbp-38h]
  void *v183; // [rsp+E8h] [rbp-20h]
  float v184; // [rsp+F0h] [rbp-18h]
  float v185; // [rsp+F4h] [rbp-14h]
  __int128 v186; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v187; // [rsp+108h] [rbp+0h]
  __int128 v188; // [rsp+118h] [rbp+10h]
  __int128 v189; // [rsp+128h] [rbp+20h]
  int v190; // [rsp+138h] [rbp+30h]
  int (*v191)(const struct CDrawListBrush *, void *); // [rsp+150h] [rbp+48h]
  __int128 v192; // [rsp+158h] [rbp+50h] BYREF
  __int128 v193; // [rsp+168h] [rbp+60h]
  __int128 v194; // [rsp+178h] [rbp+70h]
  __int128 v195; // [rsp+188h] [rbp+80h]
  int v196; // [rsp+198h] [rbp+90h]
  struct D2D_RECT_F v197; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v198; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v199; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v200; // [rsp+1C0h] [rbp+B8h]
  _BYTE **v201; // [rsp+1C8h] [rbp+C0h]
  _BYTE v202[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE *v203; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v204; // [rsp+1F0h] [rbp+E8h]
  _QWORD *v205; // [rsp+1F8h] [rbp+F0h]
  _BYTE v206[24]; // [rsp+200h] [rbp+F8h] BYREF
  _QWORD v207[3]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v208[24]; // [rsp+230h] [rbp+128h] BYREF
  _QWORD v209[3]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v210[24]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v211; // [rsp+278h] [rbp+170h] BYREF

  v4 = *((_QWORD *)this + 14);
  v183 = a4;
  v191 = a3;
  v7 = 0;
  if ( *((_QWORD *)this + 15) == v4
    && *((_QWORD *)this + 38) == *((_QWORD *)this + 37)
    && *((_QWORD *)this + 61) == *((_QWORD *)this + 60) )
  {
    v164 = *((_QWORD *)this + 9);
    *(_OWORD *)(v164 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v164 + 24) = *((_QWORD *)this + 3);
    v165 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
    v7 = v165;
    if ( v165 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v165, 0x90u, 0LL);
    return v7;
  }
  v8 = (__int64 *)*((_QWORD *)this + 9);
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0LL;
  v12 = *v8;
  v177 = 0LL;
  v171 = 0LL;
  v170 = 0;
  v13 = *(bool (__fastcall **)(__int64, int))(v12 + 8);
  if ( v13 == CSurfaceDrawListBrush::IsOfType )
  {
    v14 = CSurfaceDrawListBrush::IsOfType((__int64)v8, 2);
  }
  else if ( (char *)v13 == (char *)CPrimitiveGroupDrawListBrush::IsOfType )
  {
    v14 = CPrimitiveGroupDrawListBrush::IsOfType(v8, 2LL);
  }
  else
  {
    v14 = v13((__int64)v8, 2);
  }
  v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v14 )
  {
    v18 = *((_QWORD *)this + 9);
    v19 = *(_WORD *)(v18 + 80);
    v20 = *(_BYTE *)(v18 + 82);
    v21 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
    v11 = v21;
    if ( !v21 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xA2u, 0LL);
      return v7;
    }
    *((_DWORD *)v21 + 2) = 1065353216;
    *(_QWORD *)((char *)v21 + 12) = 0LL;
    *(_QWORD *)((char *)v21 + 20) = 1065353216LL;
    *((_DWORD *)v21 + 7) = 0;
    *((_BYTE *)v21 + 52) = 0;
    *v21 = &CSurfaceDrawListBrush::`vftable';
    v22 = *(CMILRefCountImpl **)(v18 + 56);
    v21[7] = v22;
    if ( v22 )
    {
      v23 = *(void (**)(void))(*(_QWORD *)v22 + 8LL);
      if ( (char *)v23 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v22);
      else
        v23();
    }
    v24 = *(_QWORD *)(v18 + 64);
    v11[8] = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    *((_BYTE *)v11 + 72) = *(_BYTE *)(v18 + 72);
    *((_WORD *)v11 + 40) = v19;
    *((_BYTE *)v11 + 82) = v20;
    *(_QWORD *)((char *)v11 + 92) = 0LL;
    *(_QWORD *)((char *)v11 + 108) = 0LL;
    *(_QWORD *)((char *)v11 + 84) = 1065353216LL;
    *(_QWORD *)((char *)v11 + 100) = 1065353216LL;
    *((_DWORD *)v11 + 29) = 1065353216;
    *((_DWORD *)v11 + 36) = 0;
    *(_OWORD *)(v11 + 15) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v7 = 0;
    if ( !CSurfaceDrawListBrush::IsBoundless((CSurfaceDrawListBrush *)v18) )
      *(_OWORD *)(v11 + 15) = *(_OWORD *)(v18 + 120);
    *(_OWORD *)(v11 + 1) = *(_OWORD *)((char *)this + 8);
    v11[3] = *((_QWORD *)this + 3);
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(
        (CSurfaceDrawListBrush *)v11,
        (const struct D2D_VECTOR_2F *)this + 7);
    if ( *(_BYTE *)(v18 + 144) )
    {
      v25 = *((_DWORD *)a2 + 74);
      v170 = 1;
      v190 = 0;
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 1);
        v27 = *((_QWORD *)a2 + 36);
        v28 = *(_OWORD *)(68 * v26 + v27 + 16);
        v186 = *(_OWORD *)(68 * v26 + v27);
        v29 = *(_OWORD *)(68 * v26 + v27 + 32);
        v187 = v28;
        v30 = *(_OWORD *)(68 * v26 + v27 + 48);
        v190 = *(_DWORD *)(68 * v26 + v27 + 64);
      }
      else
      {
        v186 = _xmm;
        v29 = _xmm;
        v187 = _xmm;
        v30 = *(__int128 *)&_xmm.r;
        BYTE1(v190) = BYTE1(v190) & 0xC0 | 0x29;
        LOBYTE(v190) = -86;
      }
      v31 = *((float *)this + 4);
      v32 = *((float *)this + 5);
      v33 = *((float *)this + 3);
      v34 = *((float *)this + 6);
      v35 = *((float *)this + 7);
      v189 = v30;
      v36 = *((float *)this + 2);
      v188 = v29;
      *(_OWORD *)&v181[24] = 0LL;
      *(_QWORD *)&v182[12] = 0x28083F800000LL;
      v37 = (__m128)*(unsigned __int64 *)v181;
      *(_DWORD *)&v182[8] = 0;
      v37.m128_f32[0] = v36;
      *(_QWORD *)&v181[40] = 1065353216LL;
      v38 = *(__m128 *)&v181[16];
      v38.m128_f32[0] = v31;
      v39 = _mm_shuffle_ps(v37, v37, 225);
      v40 = _mm_shuffle_ps(v38, v38, 225);
      v39.m128_f32[0] = v33;
      v40.m128_f32[0] = v32;
      *(__m128 *)&v181[16] = _mm_shuffle_ps(v40, v40, 225);
      v196 = 10248;
      v193 = *(_OWORD *)&v181[16];
      v41 = *(__m128 *)v182;
      *(__m128 *)v181 = _mm_shuffle_ps(v39, v39, 225);
      v41.m128_f32[0] = v34;
      v42 = _mm_shuffle_ps(v41, v41, 225);
      v192 = *(_OWORD *)v181;
      v42.m128_f32[0] = v35;
      *(__m128 *)v182 = _mm_shuffle_ps(v42, v42, 225);
      v195 = *(_OWORD *)v182;
      v194 = *(_OWORD *)&v181[32];
      CMILMatrix::Multiply((CMILMatrix *)&v192, (const struct CMILMatrix *)&v186);
      v190 = v196;
      v186 = v192;
      v187 = v193;
      v188 = v194;
      v43 = (struct D2D_RECT_F)*((_OWORD *)this + 2);
      v189 = v195;
      v178 = v43;
      if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&v186) )
      {
        v9 = sqrtf_0((float)(*(float *)&v186 * *(float *)&v186) + (float)(*((float *)&v186 + 1) * *((float *)&v186 + 1)));
        v177 = __PAIR64__(
                 LODWORD(v9),
                 COERCE_UNSIGNED_INT(sqrtf_0((float)(*(float *)&v187 * *(float *)&v187) + (float)(*((float *)&v187 + 1)
                                                                                                * *((float *)&v187 + 1)))));
        v10 = *(float *)&v177;
      }
      else
      {
        *(_QWORD *)v181 = v186;
        *(_DWORD *)&v181[8] = HIDWORD(v186);
        *(_QWORD *)&v181[12] = v187;
        *(_QWORD *)&v181[24] = v189;
        *(_DWORD *)&v181[20] = HIDWORD(v187);
        *(_DWORD *)&v181[32] = HIDWORD(v189);
        Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v181, (float *)&v171 + 1, (float *)&v171, &v178.left);
        v9 = *((float *)&v171 + 1);
        v10 = *(float *)&v171;
        v177 = v171;
      }
      *((_BYTE *)v11 + 146) = 1;
    }
  }
  v44 = *((_DWORD *)this + 10);
  v199 = v202;
  v200 = v202;
  v201 = &v203;
  v203 = v206;
  v204 = v206;
  v205 = v207;
  CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    v15,
    (_DWORD)this + 112,
    (unsigned int)&v199,
    v16,
    v44,
    LODWORD(FLOAT_1_1920929eN7));
  CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    v45,
    (_DWORD)this + 296,
    (unsigned int)&v203,
    v46,
    *((_DWORD *)this + 11),
    LODWORD(FLOAT_1_1920929eN7));
  v209[0] = v210;
  v209[1] = v210;
  v209[2] = &v211;
  v207[0] = v208;
  v207[1] = v208;
  v207[2] = v209;
  v48 = (v204 - v203) >> 2;
  if ( v48 == -1
    || !v203 && v48
    || (*(_QWORD *)&v178.left = (v204 - v203) >> 2, (*(_QWORD *)&v178.right = v203) == 0LL) && v48
    || (v49 = (v200 - v199) >> 2, v49 == -1)
    || !v199 && v49
    || (*(_QWORD *)&v174.left = (v200 - v199) >> 2, (*(_QWORD *)&v174.right = v199) == 0LL) && v49 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (_DWORD)this + 112,
    v47,
    (unsigned int)&v174,
    (unsigned int)&v178,
    (__int64)v209,
    (__int64)v207,
    LODWORD(FLOAT_1_1920929eN7));
  v51 = v200;
  v52 = 1;
  v53 = v199;
  v54 = v204;
  v55 = v203;
  v56 = FLOAT_0_0000011920929;
  v57 = _xmm;
  v58 = FLOAT_0_5;
  v59 = v209[0];
  while ( 1 )
  {
    v60 = v52;
    v180 = v52;
    if ( v52 >= (unsigned __int64)((v54 - v55) >> 2) )
    {
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        v207,
        v50,
        v54,
        v53);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        v209,
        v142,
        v143,
        v144);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        &v203,
        v145,
        v146,
        v147);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        &v199,
        v148,
        v149,
        v150);
      if ( v11 )
        goto LABEL_108;
      return v7;
    }
    v61 = *(float *)&v55[4 * v52 - 4] - *(float *)&v55[4 * v52];
    v179 = v52 - 1;
    if ( v56 < COERCE_FLOAT(LODWORD(v61) & v57) )
      break;
LABEL_87:
    ++v52;
  }
  for ( i = 1; ; ++i )
  {
    v50 = i;
    if ( i >= (unsigned __int64)((v51 - v53) >> 2) )
    {
      v52 = v180;
      goto LABEL_87;
    }
    v63 = *(float *)&v53[4 * i];
    v64 = i - 1;
    v65 = *(float *)&v53[4 * v64];
    if ( v56 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - v63) & v57) )
    {
      v66 = *((_BYTE *)this + 569) == 0;
      v67 = *(float *)&v55[4 * v60];
      v68 = *(float *)(v59 + 4 * v64);
      v69 = *(float *)&v55[4 * v179];
      v70 = *(float *)(v59 + 4LL * i);
      v178.left = *(FLOAT *)&v53[4 * v64];
      v178.top = v69;
      v71 = *(float *)(v207[0] + 4LL * v179);
      v72 = *(float *)(v207[0] + 4 * v60);
      v53 = v199;
      v174.top = v71;
      v174.bottom = v72;
      v178.right = v63;
      v178.bottom = v67;
      v174.left = v68;
      v174.right = v70;
      if ( v66
        || (float)(*((float *)this + 138) - v65) > v56
        || (float)(*((float *)this + 139) - v69) > v56
        || (float)(v63 - *((float *)this + 140)) > v56
        || (float)(v67 - *((float *)this + 141)) > v56 )
      {
        break;
      }
    }
LABEL_68:
    v56 = FLOAT_0_0000011920929;
    v10 = *(float *)&v177;
    v9 = *((float *)&v177 + 1);
  }
  if ( i == 1 )
    v73 = *((_DWORD *)this + 12) & 0x3000000;
  else
    v73 = 0;
  if ( v179 )
    v74 = 0;
  else
    v74 = *((_DWORD *)this + 12) & 3;
  v75 = v73 | v74;
  if ( i == ((v51 - v199) >> 2) - 1 )
    v76 = *((_DWORD *)this + 12) & 0x300;
  else
    v76 = 0;
  v77 = v76 | v75;
  if ( v60 == ((v54 - v55) >> 2) - 1 )
    v78 = *((_DWORD *)this + 12) & 0x30000;
  else
    v78 = 0;
  v79 = (struct D2D_MATRIX_3X2_F *)(v77 | (unsigned int)v78);
  if ( *((_BYTE *)this + 569) && (_DWORD)v79 != 50529027 )
  {
    v141 = *((float *)this + 139);
    if ( v69 >= v141 && *((float *)this + 141) >= v67 )
    {
      if ( v65 == *((float *)this + 140) )
        v79 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v79 | 0x3000000);
      if ( v63 == *((float *)this + 138) )
        v79 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v79 | 0x300);
    }
    if ( v65 >= *((float *)this + 138) && *((float *)this + 140) >= v63 )
    {
      if ( v69 == *((float *)this + 141) )
        v79 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v79 | 3);
      if ( v67 == v141 )
        v79 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v79 | 0x30000);
    }
  }
  if ( !v11 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v68 - v70) & v57) <= 0.0009765625 )
    {
      v118 = (float)(v70 + v68) * v58;
      v174.left = v118 - 0.00048828125;
      v174.right = v118 + 0.00048828125;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v71 - v72) & v57) <= 0.0009765625 )
    {
      v119 = (float)(v72 + v71) * v58;
      v174.top = v119 - 0.00048828125;
      v174.bottom = v119 + 0.00048828125;
    }
    v198 = 0LL;
    v197 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v174, &v178, &v197, v79);
    v120 = *((_QWORD *)this + 9);
    v121 = v174;
    *(_BYTE *)(v120 + 52) = 1;
    *(struct D2D_RECT_F *)(v120 + 32) = v121;
    *(_DWORD *)(v120 + 48) = v122;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v181,
      (const struct D2D1::Matrix3x2F *)&v197,
      (CNineGridDrawListBrush *)((char *)this + 8));
    v124 = *((_QWORD *)this + 9);
    *(_QWORD *)&v121.left = *(_QWORD *)&v181[16];
    *(_OWORD *)(v124 + 8) = *(_OWORD *)v181;
    *(_QWORD *)(v124 + 24) = *(_QWORD *)&v121.left;
    if ( *((_BYTE *)this + 64) )
    {
      v198 = 0LL;
      v197 = 0LL;
      D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v178, &v174, &v197, v123);
      v166 = *((float *)this + 15);
      v167 = (__m128)*((unsigned int *)this + 14);
      v168 = *((_QWORD *)this + 9);
      v169 = v167;
      v169.m128_f32[0] = v167.m128_f32[0] * v197.left;
      v167.m128_f32[0] = v167.m128_f32[0] * v197.top;
      *(_BYTE *)(v168 + 64) = 1;
      v169.m128_f32[0] = (float)(v169.m128_f32[0] + (float)(v166 * v197.right)) + *(float *)&v198;
      v167.m128_f32[0] = (float)(v167.m128_f32[0] + (float)(v166 * v197.bottom)) + *((float *)&v198 + 1);
      *(_QWORD *)(v168 + 56) = _mm_unpacklo_ps(v169, v167).m128_u64[0];
    }
    v125 = (volatile signed __int32 **)*((_QWORD *)this + 9);
    if ( (char *)v191 == (char *)lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
      v126 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_(v125, (unsigned int *)v183);
    else
      v126 = ((__int64 (__fastcall *)(volatile signed __int32 **, void *))v191)(v125, v183);
    v7 = v126;
    if ( v126 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v126, 0x1BFu, 0LL);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        v207,
        v127,
        v128,
        v129);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        v209,
        v130,
        v131,
        v132);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        &v203,
        v133,
        v134,
        v135);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        &v199,
        v136,
        v137,
        v138);
      return v7;
    }
    goto LABEL_67;
  }
  v80 = (float *)*((_QWORD *)this + 9);
  if ( v170 )
  {
    if ( (float)(v70 - v68) <= v58 )
    {
      v82 = FLOAT_0_000081380211;
    }
    else
    {
      v174.left = v68;
      v174.right = v70;
      v81 = (float)((float)(v63 - v65) / (float)(v70 - v68)) * v9;
      v82 = FLOAT_0_000081380211;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v81 - v17) & v57) >= 0.000081380211 )
      {
        v83 = v68 <= v80[8];
        v174.left = v68;
        v174.right = v70;
        if ( v83 )
          v84 = 0.0;
        else
          v84 = v58;
        v68 = v84 + v68;
        if ( v80[10] <= v70 )
          v85 = 0.0;
        else
          v85 = v58;
        v70 = v70 - v85;
      }
    }
    if ( (float)(v72 - v71) > v58 )
    {
      v174.top = v71;
      v174.bottom = v72;
      if ( v82 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v67 - v69) / (float)(v72 - v71)) * v10) - v17) & v57) )
      {
        v83 = v71 <= v80[9];
        v174.top = v71;
        v174.bottom = v72;
        if ( v83 )
          v139 = 0.0;
        else
          v139 = v58;
        v71 = v139 + v71;
        if ( v80[11] <= v72 )
          v140 = 0.0;
        else
          v140 = v58;
        v72 = v72 - v140;
      }
    }
  }
  v86 = 0.0;
  v171 = 0LL;
  v175 = 0.0;
  v87 = 0.0;
  v172 = 0.0;
  v173 = 0.0;
  v176 = 0.0;
  if ( v65 == v68 && v69 == v71 && v63 == v70 && v67 == v72 )
  {
    v171 = 0LL;
    v86 = v17;
    v172 = 0.0;
    v87 = 0.0;
    v173 = v17;
    v176 = 0.0;
  }
  else
  {
    v89 = v63 - v65;
    v90 = v67 - v69;
    if ( v89 == 0.0 && v90 == 0.0 )
      goto LABEL_63;
    v91 = (float)(v70 - v68) / v89;
    v92 = (float)(v72 - v71) / v90;
    v86 = v91 + 0.0;
    v87 = (float)(v92 * 0.0) + 0.0;
    v172 = (float)(v91 * 0.0) + 0.0;
    *(float *)&v171 = v87;
    v173 = v92 + 0.0;
    *((float *)&v171 + 1) = (float)((float)(COERCE_FLOAT(LODWORD(v69) ^ _xmm) * v92)
                                  + (float)(COERCE_FLOAT(LODWORD(v65) ^ _xmm) * 0.0))
                          + v71;
    v176 = (float)((float)(COERCE_FLOAT(LODWORD(v65) ^ _xmm) * v91) + (float)(COERCE_FLOAT(LODWORD(v69) ^ _xmm) * 0.0))
         + v68;
  }
  v175 = v86;
LABEL_63:
  v93 = (__m128)*((unsigned int *)v80 + 22);
  v94 = v80[24];
  v95 = v80[21];
  v96 = v80[25];
  v97 = (__m128)LODWORD(v95);
  v98 = v80[26];
  v99 = v80[27];
  v100 = v80[28];
  v101 = v80[29];
  v97.m128_f32[0] = v95 * v86;
  v102 = v80[22];
  v185 = v93.m128_f32[0];
  v103 = v96 * v87;
  v97.m128_f32[0] = (float)(v97.m128_f32[0] + (float)(v94 * v87)) + (float)(v99 * 0.0);
  v104 = v80[23];
  v105 = _mm_shuffle_ps(v97, v97, 225);
  v184 = v95;
  v105.m128_f32[0] = (float)((float)(v102 * v175) + v103) + (float)(v100 * 0.0);
  v106 = _mm_shuffle_ps(v105, v105, 198);
  v106.m128_f32[0] = (float)((float)(v104 * v175) + (float)(v98 * *(float *)&v171)) + (float)(v101 * 0.0);
  v107 = _mm_shuffle_ps(v106, v106, 39);
  v93.m128_f32[0] = (float)((float)(v93.m128_f32[0] * v172) + (float)(v96 * v173)) + (float)(v100 * 0.0);
  v107.m128_f32[0] = (float)((float)(v95 * v172) + (float)(v94 * v173)) + (float)(v99 * 0.0);
  v108 = _mm_shuffle_ps(v93, v93, 225);
  v108.m128_f32[0] = (float)((float)(v104 * v172) + (float)(v98 * v173)) + (float)(v101 * 0.0);
  v109 = _mm_shuffle_ps(v108, v108, 198);
  *(__m128 *)v181 = _mm_shuffle_ps(v107, v107, 57);
  v110 = (float)((float)(v95 * v176) + (float)(v94 * *((float *)&v171 + 1))) + v99;
  v111 = (float)(v104 * v176) + (float)(v98 * *((float *)&v171 + 1));
  v112 = (float)((float)(v185 * v176) + (float)(v96 * *((float *)&v171 + 1))) + v100;
  *(_OWORD *)((char *)v11 + 84) = *(_OWORD *)v181;
  v109.m128_f32[0] = v110;
  v113 = _mm_shuffle_ps(v109, v109, 39);
  v113.m128_f32[0] = v112;
  v114 = v178;
  v115 = v191;
  v116 = _mm_shuffle_ps(v113, v113, 57);
  *(__m128 *)((char *)v11 + 100) = v116;
  *((float *)v11 + 29) = v111 + v101;
  *((_BYTE *)v11 + 52) = 1;
  *((_DWORD *)v11 + 12) = (_DWORD)v79;
  *((struct D2D_RECT_F *)v11 + 2) = v114;
  *(__m128 *)&v181[16] = v116;
  if ( (char *)v115 == (char *)lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
    v117 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator()(0LL, v11, (__int64)v183);
  else
    v117 = ((__int64 (__fastcall *)(_QWORD *, void *))v115)(v11, v183);
  v7 = v117;
  if ( v117 >= 0 )
  {
    v58 = FLOAT_0_5;
    v57 = _xmm;
    v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
LABEL_67:
    v51 = v200;
    v53 = v199;
    v54 = v204;
    v55 = v203;
    v59 = v209[0];
    goto LABEL_68;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v117, 0x18Eu, 0LL);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
    v207,
    v152,
    v153,
    v154);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
    v209,
    v155,
    v156,
    v157);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
    &v203,
    v158,
    v159,
    v160);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
    &v199,
    v161,
    v162,
    v163);
LABEL_108:
  CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v11, 1);
  return v7;
}
