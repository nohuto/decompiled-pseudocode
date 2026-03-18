/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180090AD0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x180091438 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180196524 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180196DBC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801974B8 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C37D0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801D1464 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_.c)
 *     ??1?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801DDEFC (--1-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_p.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@Z @ 0x1802546F0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA-A_TAEA.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180290BD0 (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  CRectanglesShape *v4; // r12
  const struct D2D_MATRIX_3X2_F *v5; // rbx
  const struct PrimitiveVertexAttributesDesc *v6; // r14
  unsigned int v9; // esi
  int inserted; // eax
  __m128 v12; // xmm10
  __m128 v13; // xmm8
  __m128 m11_low; // xmm9
  __m128 v15; // xmm9
  __m128 v16; // xmm9
  float v17; // xmm0_4
  __m128 v18; // xmm9
  __int64 v19; // xmm1_8
  char v20; // r13
  float m21; // xmm10_4
  float m11; // xmm5_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  float v25; // xmm8_4
  float v26; // xmm10_4
  float v27; // xmm7_4
  float v28; // xmm9_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  unsigned int v31; // edx
  float v32; // xmm0_4
  bool v33; // cc
  int v34; // eax
  float m22; // xmm0_4
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct D2D_RECT_F *v39; // r9
  unsigned __int64 v40; // rcx
  int *v41; // r8
  __int64 v42; // r10
  _OWORD *v43; // rbx
  _BYTE *v44; // r8
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  struct D2D_RECT_F v47; // xmm0
  FLOAT v48; // xmm1_4
  FLOAT v49; // xmm1_4
  FLOAT dx; // xmm1_4
  __int128 v51; // xmm0
  __int64 v52; // rax
  _BYTE *v53; // rbx
  void *(__fastcall *v54)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  HANDLE ProcessHeap; // rax
  bool v56; // cc
  int v57; // eax
  float m12; // xmm0_4
  int v59; // eax
  int v60; // eax
  __int64 v61; // rax
  _BYTE *v62; // rax
  char v63; // cl
  __int128 v64; // xmm4
  int v65; // xmm5_4
  __m128 v66; // xmm6
  __m128 v67; // xmm7
  __m128 v68; // xmm8
  __m128 v69; // xmm10
  __m128 v70; // xmm3
  __m128 v71; // xmm11
  __m128 v72; // xmm12
  __m128 v73; // xmm13
  float v74; // xmm11_4
  float v75; // xmm8_4
  unsigned __int64 v76; // rax
  unsigned int v77; // ecx
  unsigned __int64 v78; // rdx
  _BYTE *v79; // r9
  __int64 v80; // r8
  __int64 v81; // rdx
  float v82; // xmm6_4
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm15_4
  float v86; // xmm0_4
  __m128 v87; // xmm11
  float v88; // xmm6_4
  float v89; // xmm14_4
  float v90; // xmm4_4
  __m128 v91; // xmm9
  float v92; // xmm12_4
  float v93; // xmm2_4
  __m128 v94; // xmm9
  __m128 v95; // xmm9
  __m128 v96; // xmm9
  __m128 v97; // xmm11
  __m128 v98; // xmm11
  __m128 v99; // xmm11
  char *v100; // rax
  unsigned __int64 v101; // rdx
  __m128 v102; // xmm14
  __m128 v103; // xmm15
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // r10
  _BYTE *v106; // r8
  __int64 v107; // r9
  __int64 v108; // xmm0_8
  unsigned __int64 v109; // rdi
  __int64 v110; // rax
  CShape *v111; // rcx
  int v112; // eax
  const struct CEdgeFlagsMap *v113; // rdx
  FLOAT v114; // xmm1_4
  __int64 v115; // r8
  FLOAT v116; // xmm0_4
  FLOAT v117; // xmm1_4
  FLOAT v118; // xmm0_4
  FLOAT dy; // xmm1_4
  unsigned __int64 v120; // rdi
  void *v121; // rax
  void *v122; // rbx
  void *v123; // rcx
  bool v124; // zf
  __m128 v125; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v126; // [rsp+48h] [rbp-C0h]
  float v127; // [rsp+58h] [rbp-B0h]
  __int64 v128; // [rsp+5Ch] [rbp-ACh]
  __int128 v129; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v130; // [rsp+78h] [rbp-90h]
  FLOAT v131; // [rsp+80h] [rbp-88h]
  FLOAT v132; // [rsp+84h] [rbp-84h]
  int v133; // [rsp+88h] [rbp-80h]
  float v134; // [rsp+98h] [rbp-70h]
  float v135; // [rsp+9Ch] [rbp-6Ch]
  __int64 v136; // [rsp+A0h] [rbp-68h] BYREF
  char v137; // [rsp+A8h] [rbp-60h]
  __int128 v138; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v139; // [rsp+C0h] [rbp-48h]
  _BYTE v140[24]; // [rsp+D0h] [rbp-38h] BYREF
  char v141; // [rsp+E8h] [rbp-20h]
  _DWORD v142[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v143; // [rsp+100h] [rbp-8h]
  FLOAT left; // [rsp+108h] [rbp+0h]
  FLOAT v145; // [rsp+10Ch] [rbp+4h]
  __int64 v146; // [rsp+110h] [rbp+8h]
  __int128 v147; // [rsp+118h] [rbp+10h]
  FLOAT v148; // [rsp+128h] [rbp+20h]
  FLOAT v149; // [rsp+12Ch] [rbp+24h]
  int v150; // [rsp+130h] [rbp+28h]
  __int64 v151; // [rsp+134h] [rbp+2Ch]
  __int128 v152; // [rsp+148h] [rbp+40h] BYREF
  __int64 v153; // [rsp+158h] [rbp+50h]
  __int64 v154; // [rsp+160h] [rbp+58h]
  struct D2D_RECT_F v155; // [rsp+168h] [rbp+60h]
  __int128 v156; // [rsp+178h] [rbp+70h] BYREF
  __int128 v157; // [rsp+188h] [rbp+80h]
  _BYTE v158[24]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v159; // [rsp+1B0h] [rbp+A8h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128 v161; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v162; // [rsp+1E0h] [rbp+D8h]
  LPVOID lpMem; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v164; // [rsp+1F0h] [rbp+E8h]
  char *v165; // [rsp+1F8h] [rbp+F0h]
  _BYTE Src[224]; // [rsp+200h] [rbp+F8h] BYREF
  char v167; // [rsp+2E0h] [rbp+1D8h] BYREF
  struct D2D_RECT_F v168; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v169; // [rsp+2F8h] [rbp+1F0h] BYREF
  _DWORD v170[7]; // [rsp+2FCh] [rbp+1F4h]

  v4 = 0LL;
  v5 = a4;
  v6 = a3;
  v9 = 0;
  if ( (*((_BYTE *)a2 + 24) & 1) == 0
    && (*((float *)a2 + 2) <= *(float *)a2 || *((float *)a2 + 3) <= *((float *)a2 + 1)) )
  {
    return v9;
  }
  v161 = 0LL;
  v162 = 0LL;
  if ( *((_BYTE *)this + 4489) )
  {
    if ( a4 )
    {
      v12 = (__m128)*((unsigned int *)this + 8);
      v5 = (const struct D2D_MATRIX_3X2_F *)&v161;
      v13 = (__m128)*((unsigned int *)this + 9);
      m11_low = (__m128)LODWORD(a4->m11);
      m11_low.m128_f32[0] = (float)(m11_low.m128_f32[0] * v12.m128_f32[0]) + (float)(*((float *)this + 10) * a4->m12);
      v15 = _mm_shuffle_ps(m11_low, m11_low, 225);
      v15.m128_f32[0] = (float)(*((float *)this + 9) * a4->m11) + (float)(*((float *)this + 11) * a4->m12);
      v16 = _mm_shuffle_ps(v15, v15, 198);
      v17 = *((float *)this + 11);
      v16.m128_f32[0] = (float)(*((float *)this + 8) * a4->m21) + (float)(*((float *)this + 10) * a4->m22);
      v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] * a4->dx) + (float)(*((float *)this + 10) * a4->dy))
                      + *((float *)this + 12);
      v18 = _mm_shuffle_ps(v16, v16, 39);
      v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] * a4->dx) + (float)(v17 * a4->dy)) + *((float *)this + 13);
      v18.m128_f32[0] = (float)(*((float *)this + 9) * a4->m21) + (float)(v17 * a4->m22);
      v125 = _mm_shuffle_ps(v18, v18, 57);
      v162 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
      v161 = v125;
      goto LABEL_10;
    }
    v5 = (const struct D2D_MATRIX_3X2_F *)((char *)this + 32);
  }
  if ( !v5 )
    goto LABEL_6;
LABEL_10:
  if ( v5->m11 == 1.0 && v5->m12 == 0.0 && v5->m21 == 0.0 && v5->m22 == 1.0 && v5->dx == 0.0 && v5->dy == 0.0 )
  {
LABEL_6:
    inserted = CDrawListEntryBuilder::InsertWorker(this, a2, a3);
    v9 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x15Cu, 0LL);
    return v9;
  }
  v19 = *(_QWORD *)&v5->m[2][0];
  *(_OWORD *)&matrix.m11 = *(_OWORD *)&v5->m11;
  *(_QWORD *)&matrix.m[2][0] = v19;
  if ( !D2D1InvertMatrix(&matrix) )
    return v9;
  v20 = 0;
  v136 = 0LL;
  v137 = 0;
  v141 = 0;
  v138 = 0LL;
  v139 = 0LL;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v142, v5);
    v111 = *(CShape **)a2;
    *(_QWORD *)&v168.left = 0LL;
    v112 = CShape::CopyShape(v111, (const struct CMILMatrix *)v142, (struct CShape **)&v168);
    v9 = v112;
    if ( v112 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v112, 0x175u, 0LL);
      goto LABEL_122;
    }
    CShapePtr::~CShapePtr((CShapePtr *)&v136);
    v113 = (const struct CEdgeFlagsMap *)*((_QWORD *)a2 + 1);
    v20 = 1;
    v4 = *(CRectanglesShape **)&v168.left;
    v136 = *(_QWORD *)&v168.left;
    v137 = 1;
    if ( v113 )
      CEdgeFlagsMap::Copy((CEdgeFlagsMap *)v140, v113, v5);
    BYTE8(v139) |= 1u;
    *((_QWORD *)&v138 + 1) = v140;
    *(_QWORD *)&v138 = v4;
  }
  else if ( COERCE_FLOAT(LODWORD(v5->m12) & _xmm) < 0.000081380211
         && COERCE_FLOAT(LODWORD(v5->m21) & _xmm) < 0.000081380211
         || COERCE_FLOAT(LODWORD(v5->m11) & _xmm) < 0.000081380211
         && COERCE_FLOAT(LODWORD(v5->m22) & _xmm) < 0.000081380211 )
  {
    m21 = v5->m21;
    m11 = v5->m11;
    v23 = m21 * *((float *)a2 + 1);
    v24 = v5->m11;
    BYTE8(v139) &= ~1u;
    v25 = (float)(v23 + (float)(v24 * *(float *)a2)) + v5->dx;
    v26 = (float)((float)(m21 * *((float *)a2 + 3)) + (float)(m11 * *((float *)a2 + 2))) + v5->dx;
    v27 = (float)((float)(v5->m22 * *((float *)a2 + 1)) + (float)(v5->m12 * *(float *)a2)) + v5->dy;
    v28 = (float)((float)(v5->m22 * *((float *)a2 + 3)) + (float)(v5->m12 * *((float *)a2 + 2))) + v5->dy;
    if ( v26 <= v25 )
      v29 = v26;
    else
      v29 = v25;
    if ( v28 <= v27 )
      v30 = (float)((float)(v5->m22 * *((float *)a2 + 3)) + (float)(v5->m12 * *((float *)a2 + 2))) + v5->dy;
    else
      v30 = (float)((float)(v5->m22 * *((float *)a2 + 1)) + (float)(v5->m12 * *(float *)a2)) + v5->dy;
    if ( v25 <= v26 )
      v25 = v26;
    if ( v27 <= v28 )
      v27 = (float)((float)(v5->m22 * *((float *)a2 + 3)) + (float)(v5->m12 * *((float *)a2 + 2))) + v5->dy;
    v31 = *((_DWORD *)a2 + 4);
    *(_QWORD *)&v138 = __PAIR64__(LODWORD(v30), LODWORD(v29));
    *((_QWORD *)&v138 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v25));
    if ( v31 == 50529027 || !v31 )
    {
      v40 = v31;
    }
    else
    {
      LODWORD(v32) = LODWORD(v5->m12) & _xmm;
      v169 = 0x1000000;
      v170[0] = 0x2000000;
      v170[1] = 1;
      v170[2] = 2;
      v170[3] = 256;
      v170[4] = 512;
      v170[5] = 0x10000;
      v170[6] = 0x20000;
      if ( v32 >= 0.000081380211 || COERCE_FLOAT(LODWORD(v5->m21) & _xmm) >= 0.000081380211 )
      {
        v56 = v5->m21 <= 0.0;
        v57 = 3;
        m12 = v5->m12;
        if ( v5->m21 > 0.0 )
          v57 = 1;
        LODWORD(v168.left) = v57;
        v59 = 1;
        if ( !v56 )
          v59 = 3;
        LODWORD(v168.right) = v59;
        v60 = 2;
        if ( m12 > 0.0 )
          v60 = 0;
        LODWORD(v168.top) = v60;
        v38 = 0;
        if ( m12 > 0.0 )
          v38 = 2;
      }
      else
      {
        v33 = v5->m11 <= 0.0;
        v34 = 2;
        m22 = v5->m22;
        if ( v5->m11 > 0.0 )
          v34 = 0;
        LODWORD(v168.left) = v34;
        v36 = 0;
        if ( !v33 )
          v36 = 2;
        LODWORD(v168.right) = v36;
        v37 = 3;
        if ( m22 > 0.0 )
          v37 = 1;
        LODWORD(v168.top) = v37;
        v38 = 1;
        if ( m22 > 0.0 )
          v38 = 3;
      }
      LODWORD(v168.bottom) = v38;
      v39 = &v168;
      v40 = 0LL;
      v41 = &v169;
      v42 = 4LL;
      do
      {
        if ( (v31 & v170[2 * LODWORD(v39->left) - 1]) != 0 )
          v40 = *v41 | (unsigned int)v40;
        if ( (v31 & v170[2 * LODWORD(v39->left)]) != 0 )
          v40 = v41[1] | (unsigned int)v40;
        v39 = (struct D2D_RECT_F *)((char *)v39 + 4);
        v41 += 2;
        --v42;
      }
      while ( v42 );
    }
    LODWORD(v139) = v40;
  }
  else
  {
    v47 = *(struct D2D_RECT_F *)a2;
    *((_QWORD *)&v156 + 1) = 0LL;
    *(_QWORD *)&v156 = &CRectanglesShape::`vftable';
    v159 = 0LL;
    *(_QWORD *)&v157 = &v158[8];
    *((_QWORD *)&v157 + 1) = &v158[8];
    *(_QWORD *)v158 = &v159;
    v168 = v47;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v156, &v168);
    v48 = v5->m12;
    v142[0] = LODWORD(v5->m11);
    v47.left = v5->m21;
    v151 = 1065353216LL;
    left = v47.left;
    *(FLOAT *)&v142[1] = v48;
    v49 = v5->m22;
    v147 = _xmm;
    v47.left = v5->dy;
    v145 = v49;
    dx = v5->dx;
    v149 = v47.left;
    v148 = dx;
    v143 = 0LL;
    v146 = 0LL;
    v150 = 0;
    WORD2(v151) = 10248;
    *(_QWORD *)&v168.left = 0LL;
    v9 = CShape::CopyShape((CShape *)&v156, (const struct CMILMatrix *)v142, (struct CShape **)&v168);
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x18Fu, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v156);
      CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v140);
      CShapePtr::~CShapePtr((CShapePtr *)&v136);
      return v9;
    }
    CShapePtr::~CShapePtr((CShapePtr *)&v136);
    v114 = v5->m12;
    v4 = *(CRectanglesShape **)&v168.left;
    v20 = 1;
    v115 = *((unsigned int *)a2 + 4);
    *(FLOAT *)&v129 = v5->m11;
    v116 = v5->m21;
    *(_QWORD *)((char *)&v129 + 4) = LODWORD(v114);
    v117 = v5->m22;
    *((FLOAT *)&v129 + 3) = v116;
    v118 = v5->dx;
    v130 = LODWORD(v117);
    dy = v5->dy;
    v131 = v118;
    v132 = dy;
    v136 = *(_QWORD *)&v168.left;
    v137 = 1;
    v133 = 1065353216;
    CEdgeFlagsMap::AddEdgeFlags(v140, a2, v115, &v129, LODWORD(FLOAT_0_000081380211));
    BYTE8(v139) |= 1u;
    *((_QWORD *)&v138 + 1) = v140;
    *(_QWORD *)&v138 = v4;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v156);
  }
  v155 = (struct D2D_RECT_F)0LL;
  v43 = Src;
  lpMem = Src;
  v44 = Src;
  v164 = Src;
  v165 = &v167;
  if ( v6 )
  {
    v45 = *((_QWORD *)v6 + 4);
    if ( v45 )
    {
      v135 = matrix.m12;
      v168.left = matrix.m11;
      v128 = *(_QWORD *)&matrix.m[1][1];
      v134 = matrix.m21;
      v127 = matrix.dy;
      v156 = 0LL;
      v157 = 0LL;
      memset(v158, 0, sizeof(v158));
      if ( v45 > 4 )
      {
        v120 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v40, 4uLL, v45);
        v121 = operator new[](saturated_mul(v120, 0x38uLL));
        v125 = (__m128)(unsigned __int64)v121;
        v122 = v121;
        v126 = 0LL;
        v129 = (unsigned __int64)v121;
        v130 = 0LL;
        std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
          &v125,
          lpMem,
          v164,
          &v129);
        v123 = lpMem;
        v124 = lpMem == Src;
        lpMem = v122;
        if ( v124 )
          v123 = 0LL;
        operator delete(v123);
        v43 = lpMem;
        v44 = lpMem;
        v164 = lpMem;
        v165 = (char *)lpMem + 56 * v120;
      }
      v125.m128_u64[1] = v45;
      v126 = 0LL;
      v46 = 0x6DB6DB6DB6DB6DB7LL * ((v44 - (_BYTE *)v43) >> 3);
      v130 = 0LL;
      v125.m128_u64[0] = (unsigned __int64)v43 + 8 * ((v44 - (_BYTE *)v43) >> 3);
      if ( v125.m128_u64[0] && (v45 & 0x8000000000000000uLL) == 0LL )
      {
        v130 = v45;
        v61 = 0x6DB6DB6DB6DB6DB7LL * ((v44 - (_BYTE *)v43) >> 3);
        if ( v45 < v46 )
          v61 = v45;
        v126 = v45;
        v62 = &v44[-56 * v61];
        if ( v44 != v62 )
        {
          v105 = v126;
          v106 = v44 + 8;
          v107 = 56 * v45 + v125.m128_u64[0] + 8;
          do
          {
            v106 -= 56;
            if ( !v125.m128_u64[0] )
              goto LABEL_55;
            if ( !v105 )
              goto LABEL_55;
            --v105;
            v107 -= 56LL;
            if ( v105 >= v125.m128_u64[1] )
              goto LABEL_55;
            *(_DWORD *)(v107 - 8) = *((_DWORD *)v106 - 2);
            *(_DWORD *)(v107 - 4) = *((_DWORD *)v106 - 1);
            *(_DWORD *)v107 = *(_DWORD *)v106;
            *(_DWORD *)(v107 + 4) = *((_DWORD *)v106 + 1);
            *(_DWORD *)(v107 + 8) = *((_DWORD *)v106 + 2);
            *(_DWORD *)(v107 + 12) = *((_DWORD *)v106 + 3);
            *(_DWORD *)(v107 + 16) = *((_DWORD *)v106 + 4);
            *(_DWORD *)(v107 + 20) = *((_DWORD *)v106 + 5);
            *(_DWORD *)(v107 + 24) = *((_DWORD *)v106 + 6);
            *(_OWORD *)(v107 + 28) = *(_OWORD *)(v106 + 28);
            *(_BYTE *)(v107 + 44) = v106[44];
          }
          while ( v106 - 8 != v62 );
          v44 = v164;
        }
        if ( v46 <= v45 )
          goto LABEL_100;
        v126 = 0LL;
        v125.m128_u64[0] = (unsigned __int64)v43;
        v125.m128_u64[1] = v46;
        v130 = 0LL;
        if ( !v46 || v43 && v46 >= 0 )
        {
          v130 = v46;
          v108 = v46;
          v109 = v46 - v45;
          v126 = v108;
          v110 = std::_Get_unwrapped_n<stdext::checked_array_iterator<PrimitiveUVDesc *> &,__int64>(
                   &v125,
                   -(__int64)v109);
          memmove_0((void *)(v110 - 56 * v109), v43, 56 * v109);
          v44 = v164;
LABEL_100:
          v63 = v158[20];
          v64 = *(_OWORD *)&v158[4];
          v65 = *(_DWORD *)v158;
          v66 = (__m128)HIDWORD(v157);
          v67 = (__m128)DWORD2(v157);
          v68 = (__m128)DWORD1(v157);
          v69 = (__m128)(unsigned int)v157;
          v70 = (__m128)HIDWORD(v156);
          v71 = (__m128)DWORD2(v156);
          v72 = (__m128)DWORD1(v156);
          v73 = (__m128)(unsigned int)v156;
          v164 = &v44[56 * v45];
          if ( v45 < 2 )
            goto LABEL_101;
          v100 = (char *)v43 + 88;
          v101 = ((v45 - 2) >> 1) + 1;
          v102 = _mm_movelh_ps(
                   _mm_unpacklo_ps((__m128)(unsigned int)v156, (__m128)DWORD1(v156)),
                   _mm_unpacklo_ps((__m128)DWORD2(v156), (__m128)HIDWORD(v156)));
          v103 = _mm_movelh_ps(
                   _mm_unpacklo_ps((__m128)(unsigned int)v157, (__m128)DWORD1(v157)),
                   _mm_unpacklo_ps((__m128)DWORD2(v157), (__m128)HIDWORD(v157)));
          v104 = 2 * v101;
          do
          {
            *v43 = v102;
            v43 += 7;
            *(__m128 *)(v100 - 72) = v103;
            *((_DWORD *)v100 - 14) = v65;
            *(_OWORD *)(v100 - 52) = v64;
            *(v100 - 36) = v63;
            *((__m128 *)v100 - 2) = v102;
            *((__m128 *)v100 - 1) = v103;
            *(_DWORD *)v100 = v65;
            *(_OWORD *)(v100 + 4) = v64;
            v100[20] = v63;
            v100 += 112;
            --v101;
          }
          while ( v101 );
          if ( v104 < v45 )
          {
LABEL_101:
            *((_DWORD *)v43 + 8) = v65;
            *v43 = _mm_movelh_ps(_mm_unpacklo_ps(v73, v72), _mm_unpacklo_ps(v71, v70));
            v43[1] = _mm_movelh_ps(_mm_unpacklo_ps(v69, v68), _mm_unpacklo_ps(v67, v66));
            *((_BYTE *)v43 + 52) = v63;
            *(_OWORD *)((char *)v43 + 36) = v64;
          }
          v74 = v127;
          v75 = *((float *)&v128 + 1);
          v76 = *((_QWORD *)v6 + 4);
          v77 = 0;
          if ( v76 )
          {
            v78 = 0LL;
            while ( v78 < v76 )
            {
              v79 = lpMem;
              v80 = 56 * v78;
              v81 = *((_QWORD *)v6 + 5);
              v82 = *(float *)(v80 + v81 + 32);
              v83 = *(float *)(v80 + v81 + 28);
              v84 = *(float *)(v80 + v81 + 24);
              v85 = (float)((float)(*(float *)(v80 + v81 + 8) * v75) + (float)(*(float *)(v80 + v81 + 20) * v74)) + v82;
              v86 = *(float *)(v80 + v81 + 16) * v74;
              v87 = (__m128)*(unsigned int *)(v80 + v81 + 12);
              v88 = v82 * 0.0;
              v89 = (float)((float)(*(float *)(v80 + v81 + 4) * v75) + v86) + v83;
              v90 = v83 * 0.0;
              v91 = (__m128)*(unsigned int *)(v80 + v81 + 16);
              v92 = (float)((float)(*(float *)(v80 + v81) * v75) + (float)(*(float *)(v80 + v81 + 12) * v127)) + v84;
              v93 = v84 * 0.0;
              v91.m128_f32[0] = (float)((float)(v91.m128_f32[0] * *(float *)&v128)
                                      + (float)(*(float *)(v80 + v81 + 4) * v134))
                              + v90;
              v94 = _mm_shuffle_ps(v91, v91, 225);
              v94.m128_f32[0] = (float)((float)(*(float *)(v80 + v81 + 20) * *(float *)&v128)
                                      + (float)(*(float *)(v80 + v81 + 8) * v134))
                              + v88;
              v95 = _mm_shuffle_ps(v94, v94, 198);
              v95.m128_f32[0] = v92;
              v96 = _mm_shuffle_ps(v95, v95, 39);
              v96.m128_f32[0] = v89;
              v87.m128_f32[0] = (float)((float)(v87.m128_f32[0] * v135) + (float)(*(float *)(v80 + v81) * v168.left))
                              + v93;
              v97 = _mm_shuffle_ps(v87, v87, 225);
              v97.m128_f32[0] = (float)((float)(*(float *)(v80 + v81 + 16) * v135)
                                      + (float)(*(float *)(v80 + v81 + 4) * v168.left))
                              + v90;
              v98 = _mm_shuffle_ps(v97, v97, 198);
              v98.m128_f32[0] = (float)((float)(*(float *)(v80 + v81 + 20) * v135)
                                      + (float)(*(float *)(v80 + v81 + 8) * v168.left))
                              + v88;
              v99 = _mm_shuffle_ps(v98, v98, 39);
              v99.m128_f32[0] = (float)((float)(*(float *)(v80 + v81 + 12) * *(float *)&v128)
                                      + (float)(*(float *)(v80 + v81) * v134))
                              + v93;
              *(__m128 *)((char *)lpMem + v80) = _mm_shuffle_ps(v99, v99, 57);
              *(__m128 *)&v79[v80 + 16] = _mm_shuffle_ps(v96, v96, 57);
              *(float *)&v79[v80 + 32] = v85;
              v79[v80 + 52] = *(_BYTE *)(v80 + v81 + 52);
              if ( *(_BYTE *)(v80 + v81 + 52) )
                *(_OWORD *)&v79[v80 + 36] = *(_OWORD *)(v80 + v81 + 36);
              v76 = *((_QWORD *)v6 + 4);
              v78 = ++v77;
              if ( v77 >= v76 )
                goto LABEL_62;
              v75 = *((float *)&v128 + 1);
              v74 = v127;
            }
LABEL_78:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
LABEL_62:
          v51 = *(_OWORD *)v6;
          v153 = *((_QWORD *)v6 + 2);
          v154 = *((_QWORD *)v6 + 3);
          v52 = 0x6DB6DB6DB6DB6DB7LL * ((v164 - (_BYTE *)lpMem) >> 3);
          v152 = v51;
          *(_QWORD *)&v168.left = v52;
          if ( v52 == -1 )
            goto LABEL_78;
          *(_QWORD *)&v168.right = lpMem;
          if ( !lpMem )
          {
            if ( v52 )
              goto LABEL_78;
          }
          v6 = (const struct PrimitiveVertexAttributesDesc *)&v152;
          v155 = v168;
          goto LABEL_65;
        }
      }
LABEL_55:
      _invalid_parameter_noinfo_noreturn();
    }
  }
LABEL_65:
  v9 = CDrawListEntryBuilder::InsertWorker(this, (const struct PrimitiveGeometryDesc *)&v138, v6);
  if ( (v9 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1B2u, 0LL);
    detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::~vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>(&lpMem);
LABEL_122:
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v140);
    CShapePtr::~CShapePtr((CShapePtr *)&v136);
    return v9;
  }
  v53 = lpMem;
  if ( 0x6DB6DB6DB6DB6DB7LL * ((v164 - (_BYTE *)lpMem) >> 3) )
    v164 -= 8 * ((v164 - (_BYTE *)lpMem) >> 3);
  lpMem = 0LL;
  if ( v53 != Src && v53 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v53);
  }
  if ( v141 != -1LL && v141 && v141 != 1LL )
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(v140);
  if ( v20 && v4 )
  {
    v54 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v4;
    if ( v54 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v4);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v4);
    }
    else if ( v54 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v4);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v4);
    }
    else if ( v54 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v4, 1u);
    }
    else
    {
      v54(v4, 1u);
    }
  }
  return v9;
}
