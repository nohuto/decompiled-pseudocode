/*
 * XREFs of ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801D37F0 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800413C0 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1800416AC (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansi.c)
 *     ??$insert@PEBUD2D_POINT_2F@@X@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_POINT_2F@@@1@V?$basic_iterator@$$CBUD2D_POINT_2F@@@1@PEBUD2D_POINT_2F@@1@Z @ 0x1800417CC (--$insert@PEBUD2D_POINT_2F@@X@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@.c)
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180041960 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800419D4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ??$_Insert_counted_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@_K@Z @ 0x180041AF0 (--$_Insert_counted_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@st.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1801809A8 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRoundedRectangleShape::AddNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1GeometrySink *a2)
{
  __int64 v2; // r13
  CPolygonBuilder *v3; // r15
  CRoundedRectangleShape *v4; // r12
  __int64 v5; // rax
  char **v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // xmm2_4
  float v10; // xmm1_4
  unsigned int v11; // r15d
  float v12; // xmm6_4
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  char v16; // dl
  float *v17; // rax
  int v18; // eax
  __int64 v19; // r8
  float *v20; // rdx
  int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r11
  bool v26; // r12
  float v27; // xmm9_4
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  __int128 v31; // xmm4
  float v32; // xmm12_4
  float v33; // xmm13_4
  __int128 v34; // xmm11
  float v35; // xmm0_4
  __int128 v36; // xmm1
  float v37; // xmm9_4
  __int128 v38; // xmm10
  float v39; // xmm14_4
  float v40; // xmm6_4
  __int128 v41; // xmm7
  float v42; // xmm2_4
  int v43; // xmm4_4
  __int128 v44; // xmm8
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  __m128 v49; // xmm5
  float v50; // xmm3_4
  __m128d v51; // xmm0
  float v52; // xmm7_4
  float v53; // xmm8_4
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rbx
  int *v57; // rdi
  int *v58; // r12
  __int64 v59; // rcx
  float v60; // xmm0_4
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r14
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __int64 v67; // r15
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __m128 v70; // xmm3
  __m128 v71; // xmm4
  __m128 v72; // xmm0
  __m128 v73; // xmm4
  __m128 v74; // xmm4
  __int64 v75; // rax
  void (__fastcall *v76)(struct ID2D1GeometrySink *, __m128 *); // rax
  unsigned __int64 v77; // xmm0_8
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  void (__fastcall *v81)(CPolygonBuilder *__hidden, enum D2D1_FIGURE_END); // rax
  char *v82; // rax
  __int64 v83; // rcx
  int v84; // r11d
  unsigned int v85; // r10d
  char v86; // r14
  __int64 v87; // r8
  _DWORD *v88; // r9
  float v89; // xmm0_4
  __int64 v90; // rax
  float v91; // xmm1_4
  int v92; // xmm1_4
  __int64 v93; // rax
  __int128 v94; // xmm4
  __int128 v95; // xmm1
  __int64 v96; // r13
  char *v97; // r12
  unsigned int *v98; // rcx
  char *v99; // rax
  __int64 v100; // r14
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rdx
  __int64 v103; // r15
  SIZE_T size_of; // rax
  char *v105; // rax
  __int64 v106; // xmm0_8
  char **v107; // r13
  char *v108; // r8
  char *v109; // rdx
  char *v110; // r13
  char *v111; // rcx
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  char *v117; // r8
  __int128 v118; // xmm0
  __int128 v119; // xmm0
  unsigned int v120; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v121; // [rsp+40h] [rbp-C8h] BYREF
  CRoundedRectangleShape *v122; // [rsp+48h] [rbp-C0h]
  __int64 v123; // [rsp+50h] [rbp-B8h]
  struct ID2D1GeometrySink *v124; // [rsp+58h] [rbp-B0h]
  char **v125; // [rsp+60h] [rbp-A8h] BYREF
  char *v126; // [rsp+68h] [rbp-A0h]
  _DWORD v127[6]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v128; // [rsp+A0h] [rbp-68h]
  __int128 v129; // [rsp+A8h] [rbp-60h]
  __int128 v130; // [rsp+B8h] [rbp-50h]
  float v131; // [rsp+C8h] [rbp-40h]
  float v132; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v133; // [rsp+D0h] [rbp-38h]
  __int128 v134; // [rsp+D8h] [rbp-30h]
  __m128 v135; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v136; // [rsp+F8h] [rbp-10h]
  unsigned int v137[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v138[128]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v139[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v140; // [rsp+1C8h] [rbp+C0h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = a2;
  v124 = a2;
  v4 = this;
  v122 = this;
  v123 = v2;
  if ( *(float *)(v2 + 64) <= 0.0 )
  {
    v54 = 20LL;
    v55 = v138;
    v56 = 0LL;
    do
    {
      --v54;
      if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *(v55 - 1) = 0LL;
        *v55 = 0LL;
      }
      ++v55;
    }
    while ( v54 );
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v137);
    v57 = (int *)&unk_180313F14;
    v58 = dword_180313F00;
    while ( 1 )
    {
      v59 = *((_QWORD *)v122 + 2) + 16LL;
      if ( !*(_BYTE *)(*((_QWORD *)v122 + 2) + 68LL) )
        v59 += 8 * v56;
      v60 = *(float *)(v59 + 16);
      v61 = v59 + 16;
      if ( v60 > 0.0 && *(float *)(v61 + 4) > 0.0 )
        break;
      v113 = *(_QWORD *)v3;
      v114 = _mm_unpacklo_ps((__m128)v137[2 * *v58], (__m128)v137[2 * *v58 + 1]).m128_u64[0];
      if ( (_DWORD)v56 )
      {
        (*(void (__fastcall **)(CPolygonBuilder *, unsigned __int64))(v113 + 80))(v3, v114);
LABEL_38:
        v56 = (unsigned int)(v56 + 1);
        ++v58;
        v57 += 4;
        if ( (unsigned int)v56 >= 4 )
        {
          (*(void (__fastcall **)(CPolygonBuilder *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
          return;
        }
      }
      else
      {
        (*(void (__fastcall **)(CPolygonBuilder *, unsigned __int64, _QWORD))(v113 + 40))(v3, v114, 0LL);
        v56 = 1LL;
        ++v58;
        v57 += 4;
      }
    }
    v62 = *(v57 - 1);
    v63 = *v57;
    v64 = v57[1];
    v65 = (__m128)v137[2 * v62];
    v66 = (__m128)v137[2 * v62 + 1];
    v67 = v57[2];
    v68 = *(_QWORD *)v124;
    v69 = _mm_unpacklo_ps(v65, v66).m128_u64[0];
    if ( (_DWORD)v56 )
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v68 + 80))(v124, v69);
    else
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v68 + 40))(v124, v69, 0LL);
    v70 = (__m128)v137[2 * v67 + 1];
    v71 = _mm_shuffle_ps((__m128)v137[2 * v63], (__m128)v137[2 * v63], 225);
    v71.m128_f32[0] = *(float *)&v137[2 * v63 + 1];
    v72 = (__m128)v137[2 * v67];
    v3 = v124;
    v73 = _mm_shuffle_ps(v71, v71, 198);
    v73.m128_f32[0] = *(float *)&v137[2 * v64];
    v74 = _mm_shuffle_ps(v73, v73, 39);
    v75 = *(_QWORD *)v124;
    v74.m128_f32[0] = *(float *)&v137[2 * v64 + 1];
    v135 = _mm_shuffle_ps(v74, v74, 57);
    v76 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __m128 *))(v75 + 88);
    v136 = _mm_unpacklo_ps(v72, v70).m128_u64[0];
    v76(v124, &v135);
    goto LABEL_38;
  }
  v5 = *(_QWORD *)(v2 + 88);
  v6 = (char **)(v2 + 80);
  v125 = (char **)(v2 + 80);
  if ( *(_QWORD *)(v2 + 80) == v5 )
  {
    v7 = 20LL;
    v8 = v138;
    do
    {
      --v7;
      if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      {
        *(v8 - 1) = 0LL;
        *v8 = 0LL;
      }
      ++v8;
    }
    while ( v7 );
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v137);
    v9 = _xmm;
    v10 = FLOAT_0_000099999997;
    v11 = 0;
    v12 = FLOAT_0_25;
    do
    {
      v13 = *((_QWORD *)v4 + 2);
      v14 = v11++;
      v120 = v11;
      v15 = v11 & 3;
      v16 = *(_BYTE *)(v13 + 68);
      if ( v16 )
        v17 = (float *)(v13 + 32);
      else
        v17 = (float *)(v13 + 8 * ((v11 & 3) + 4LL));
      if ( *v17 <= 0.0 || v17[1] <= 0.0 )
        v18 = dword_180313F00[v15];
      else
        v18 = *((_DWORD *)&unk_180313F10 + 4 * v15);
      v19 = v18;
      if ( v16 )
        v20 = (float *)(v13 + 32);
      else
        v20 = (float *)(v13 + 8 * (v14 + 4));
      if ( *v20 <= 0.0 || v20[1] <= 0.0 )
      {
        v96 = dword_180313F00[v14];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v137[2 * v96] - *(float *)&v137[2 * v18]) & v9) > 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v137[2 * v96 + 1] - *(float *)&v137[2 * v18 + 1]) & v9) > 0.0000011920929 )
        {
          v97 = v6[1];
          v98 = (unsigned int *)v6[2];
          if ( v97 == (char *)v98 )
          {
            v99 = *v6;
            v100 = (v97 - *v6) >> 3;
            if ( v100 == 0x1FFFFFFFFFFFFFFFLL )
              std::_Xlength_error("vector too long");
            v101 = ((char *)v98 - v99) >> 3;
            v121 = v100 + 1;
            v102 = v101 >> 1;
            if ( v101 > 0x1FFFFFFFFFFFFFFFLL - (v101 >> 1) )
            {
              v103 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else
            {
              v103 = v101 + v102;
              if ( v101 + v102 < v100 + 1 )
                v103 = v100 + 1;
            }
            size_of = std::_Get_size_of_n<8>(v103);
            v105 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
            v106 = *(_QWORD *)&v137[2 * v96];
            v107 = v125;
            v126 = v105;
            *(_QWORD *)&v105[8 * v100] = v106;
            v108 = v107[1];
            v109 = *v107;
            if ( v97 == v108 )
            {
              memmove_0(v105, v109, v108 - v109);
              v110 = v126;
            }
            else
            {
              memmove_0(v105, v109, v97 - v109);
              v117 = v107[1];
              v110 = v126;
              memmove_0(&v126[8 * v100 + 8], v97, v117 - v97);
            }
            v6 = v125;
            v111 = *v125;
            if ( *v125 )
            {
              v112 = (v125[2] - v111) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v112 >= 0x1000 )
              {
                v112 += 39LL;
                if ( (unsigned __int64)&v111[-*((_QWORD *)v111 - 1) - 8] > 0x1F )
                  _invalid_parameter_noinfo_noreturn();
                v111 = (char *)*((_QWORD *)v111 - 1);
              }
              operator delete(v111, v112);
            }
            v115 = v121;
            v10 = FLOAT_0_000099999997;
            v9 = _xmm;
            *v125 = v110;
            v6[1] = &v110[8 * v115];
            v116 = 8 * v103;
            v11 = v120;
            v6[2] = &v110[v116];
          }
          else
          {
            *(_QWORD *)v97 = *(_QWORD *)&v137[2 * v96];
            v6[1] += 8;
          }
          v4 = v122;
        }
        v2 = v123;
      }
      else
      {
        v21 = (int *)((char *)&unk_180313F10 + 16 * v14);
        v22 = v21[3];
        v23 = *v21;
        v24 = v21[1];
        v25 = v21[2];
        v26 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v137[2 * v22] - *(float *)&v137[2 * v19]) & v9) <= 0.0000011920929
           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v137[2 * v22 + 1] - *(float *)&v137[2 * v19 + 1]) & v9) <= 0.0000011920929;
        v27 = *(float *)(v13 + 64);
        if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
        {
          v129 = 0uLL;
          v130 = 0LL;
          v134 = 0uLL;
          v128 = 0LL;
          v133 = 0LL;
        }
        v28 = *(float *)&v137[2 * v25];
        v29 = *(float *)&v137[2 * v25 + 1];
        LODWORD(v30) = v137[2 * v22 + 1];
        v31 = v137[2 * v24];
        v34 = LODWORD(v30);
        LODWORD(v32) = v137[2 * v23];
        LODWORD(v33) = v137[2 * v23 + 1];
        *(float *)&v34 = v30 - v33;
        *(_QWORD *)&v134 = 1LL;
        *(float *)&v127[4] = v28;
        v41 = v31;
        v35 = (float)(v27 * v27) * v10;
        v36 = v137[2 * v22];
        LODWORD(v22) = 1;
        v37 = fmaxf(v27, 0.0) * 6.0;
        v38 = v36;
        *((float *)&v129 + 3) = v35;
        *(float *)&v38 = *(float *)&v36 - v32;
        v127[2] = v31;
        *(float *)&v127[5] = v29;
        *(float *)&v129 = v37;
        *(float *)v127 = v32;
        v39 = v37 * v12;
        v44 = v137[2 * v24 + 1];
        v127[3] = v44;
        *((float *)&v129 + 2) = v37 * v12;
        *(float *)&v127[1] = v33;
        v40 = *(float *)&v44 + *(float *)&v44;
        v128 = __PAIR64__(LODWORD(v30), v36);
        *(_QWORD *)&v130 = __PAIR64__(LODWORD(v33), LODWORD(v32));
        *(float *)&v41 = (float)((float)(*(float *)&v31 - (float)(v28 + v28)) + *(float *)&v36) * 6.0;
        *(float *)&v44 = (float)(*(float *)&v44 - (float)(v29 + v29)) + v30;
        v42 = v32 - (float)(*(float *)&v31 + *(float *)&v31);
        v43 = _xmm;
        *(float *)&v44 = *(float *)&v44 * 6.0;
        v45 = v42 + v28;
        v46 = v33 - v40;
        v12 = FLOAT_0_25;
        v47 = v45 * 6.0;
        v48 = v46 + v29;
        v49 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        DWORD2(v134) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v50 = v48 * 6.0;
        while ( 1 )
        {
          *((_QWORD *)&v130 + 1) = __PAIR64__(v34, v38);
          v133 = __PAIR64__(LODWORD(v50), LODWORD(v47));
          v132 = *(float *)&v44;
          v131 = *(float *)&v41;
          if ( fmaxf(COERCE_FLOAT(v41 & _xmm), COERCE_FLOAT(v44 & _xmm)) <= v37
            && fmaxf(COERCE_FLOAT(LODWORD(v47) & _xmm), COERCE_FLOAT(LODWORD(v50) & _xmm)) <= v37 )
          {
            break;
          }
          v51 = _mm_cvtps_pd(v49);
          if ( v51.m128d_f64[0] <= 0.001 )
            break;
          v51.m128d_f64[0] = v51.m128d_f64[0] * 0.5;
          v52 = *(float *)&v41 + v47;
          LODWORD(v22) = 2 * v22;
          v53 = *(float *)&v44 + v50;
          v47 = v47 * 0.25;
          v50 = v50 * 0.25;
          *(float *)&v41 = v52 * 0.125;
          *(float *)&v44 = v53 * 0.125;
          v49 = _mm_cvtpd_ps(v51);
          *(float *)&v38 = (float)(*(float *)&v38 - *(float *)&v41) * 0.5;
          *(float *)&v34 = (float)(*(float *)&v34 - *(float *)&v44) * 0.5;
        }
        DWORD2(v134) = v49.m128_i32[0];
        v82 = &v140;
        LODWORD(v134) = v22;
        v83 = 10LL;
        do
        {
          --v83;
          if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
          {
            *((_QWORD *)v82 - 1) = 0LL;
            *(_QWORD *)v82 = 0LL;
          }
          v82 += 8;
        }
        while ( v83 );
        *(float *)v139 = v32;
        v84 = 1;
        *(float *)&v139[1] = v33;
        while ( 1 )
        {
          v85 = 10 - v84;
          v86 = 1;
          LODWORD(v87) = 0;
          v88 = &v139[2 * v84];
          if ( (int)v22 <= 1 )
          {
LABEL_63:
            if ( (unsigned int)v87 < v85 )
            {
              if ( !v26 )
              {
                v92 = HIDWORD(v128);
                v93 = (unsigned int)v87;
                LODWORD(v87) = v87 + 1;
                v88[2 * v93] = v128;
                v88[2 * v93 + 1] = v92;
              }
              v86 = 0;
            }
          }
          else
          {
            while ( (unsigned int)v87 < v85 )
            {
              v89 = *(float *)&v41;
              v90 = (unsigned int)v87;
              v91 = *(float *)&v44;
              v133 = __PAIR64__(v44, v41);
              v32 = v32 + *(float *)&v38;
              *(float *)&v38 = *(float *)&v38 + *(float *)&v41;
              v22 = (unsigned int)(v22 - 1);
              v33 = v33 + *(float *)&v34;
              LODWORD(v134) = v22;
              *(float *)&v34 = *(float *)&v34 + *(float *)&v44;
              v87 = (unsigned int)(v87 + 1);
              *(float *)&v130 = v32;
              *(_QWORD *)((char *)&v130 + 4) = __PAIR64__(v38, LODWORD(v33));
              HIDWORD(v130) = v34;
              *(float *)&v41 = (float)(*(float *)&v41 + *(float *)&v41) - v47;
              v88[2 * v90] = LODWORD(v32);
              v47 = v89;
              v88[2 * v90 + 1] = LODWORD(v33);
              *(float *)&v44 = (float)(*(float *)&v44 + *(float *)&v44) - v50;
              v50 = v91;
              v131 = *(float *)&v41;
              v132 = *(float *)&v44;
              *((float *)&v134 + 1) = *((float *)&v134 + 1) + v49.m128_f32[0];
              if ( fmaxf(COERCE_FLOAT(v41 & v43), COERCE_FLOAT(v44 & v43)) <= v37 || v49.m128_f32[0] <= 0.001 )
              {
                while ( (v22 & 1) == 0 )
                {
                  v94 = v41;
                  v95 = v44;
                  *(float *)&v94 = (float)(*(float *)&v41 + *(float *)&v41) - v47;
                  *(float *)&v95 = (float)(*(float *)&v44 + *(float *)&v44) - v50;
                  if ( v39 < COERCE_FLOAT(LODWORD(v47) & _xmm)
                    || v39 < COERCE_FLOAT(LODWORD(v50) & _xmm)
                    || v39 < COERCE_FLOAT(v94 & _xmm)
                    || v39 < COERCE_FLOAT(v95 & _xmm) )
                  {
                    break;
                  }
                  v47 = v47 * 4.0;
                  v118 = v38;
                  v50 = v50 * 4.0;
                  *(float *)&v118 = *(float *)&v38 + *(float *)&v38;
                  v49.m128_f32[0] = v49.m128_f32[0] * 2.0;
                  v133 = __PAIR64__(LODWORD(v50), LODWORD(v47));
                  LODWORD(v22) = (int)v22 / 2;
                  v38 = v118;
                  v119 = v34;
                  *(float *)&v38 = *(float *)&v38 + *(float *)&v41;
                  *(float *)&v119 = *(float *)&v34 + *(float *)&v34;
                  v41 = v94;
                  *(float *)&v41 = *(float *)&v94 * 4.0;
                  DWORD2(v130) = v38;
                  v34 = v119;
                  v131 = *(float *)&v94 * 4.0;
                  *(float *)&v34 = *(float *)&v119 + *(float *)&v44;
                  v44 = v95;
                  *(float *)&v44 = *(float *)&v95 * 4.0;
                  v132 = *(float *)&v95 * 4.0;
                  HIDWORD(v130) = v34;
                }
                v43 = _xmm;
                DWORD2(v134) = v49.m128_i32[0];
                LODWORD(v134) = v22;
              }
              else
              {
                CBezierFlattener<float,CMilPoint2F>::HalveTheStep(v127, v22, v87);
                v50 = *((float *)&v133 + 1);
                LODWORD(v47) = v133;
                v49.m128_i32[0] = DWORD2(v134);
                LODWORD(v22) = v134;
                v44 = LODWORD(v132);
                v41 = LODWORD(v131);
                v34 = HIDWORD(v130);
                v38 = DWORD2(v130);
                v33 = *((float *)&v130 + 1);
                LODWORD(v32) = v130;
                v39 = *((float *)&v129 + 2);
                v37 = *(float *)&v129;
              }
              if ( (int)v22 <= 1 )
                goto LABEL_63;
            }
          }
          std::vector<CMilPoint2F>::_Insert_counted_range<CMilPoint2F *>(
            v2 + 80,
            *(_QWORD *)(v2 + 88),
            v139,
            (unsigned int)(v87 + v84));
          v84 = 0;
          if ( !v86 )
            break;
          v49.m128_i32[0] = DWORD2(v134);
          LODWORD(v22) = v134;
          v50 = *((float *)&v133 + 1);
          LODWORD(v47) = v133;
          v44 = LODWORD(v132);
          v41 = LODWORD(v131);
          v34 = HIDWORD(v130);
          v38 = DWORD2(v130);
          v33 = *((float *)&v130 + 1);
          LODWORD(v32) = v130;
          v39 = *((float *)&v129 + 2);
          v37 = *(float *)&v129;
          v43 = _xmm;
        }
        v10 = FLOAT_0_000099999997;
        v9 = _xmm;
        v6 = (char **)(v2 + 80);
        v4 = v122;
      }
    }
    while ( v11 < 4 );
    v3 = v124;
  }
  v77 = _mm_unpacklo_ps((__m128)*(unsigned int *)*v6, (__m128)*((unsigned int *)*v6 + 1)).m128_u64[0];
  if ( *(void (__fastcall **)(CPolygonBuilder *__hidden, struct D2D_POINT_2F, enum D2D1_FIGURE_BEGIN))(*(_QWORD *)v3 + 40LL) == CPolygonBuilder::BeginFigure )
  {
    v121 = v77;
    detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear((char *)v3 + 16);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::push_back(
      (char *)v3 + 16,
      &v121);
  }
  else
  {
    (*(void (__fastcall **)(CPolygonBuilder *, unsigned __int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, v77, 0LL);
  }
  v78 = *(_QWORD *)(v2 + 80);
  v79 = (unsigned int)((*(_QWORD *)(v2 + 88) - v78) >> 3) - 1;
  v80 = v78 + 8;
  if ( *(void (__fastcall **)(CPolygonBuilder *__hidden, const struct D2D_POINT_2F *, unsigned int))(*(_QWORD *)v3 + 48LL) == CPolygonBuilder::AddLines )
  {
    v121 = *((_QWORD *)v3 + 3);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::insert<D2D_POINT_2F const *,void>(
      (_DWORD)v3 + 16,
      (unsigned int)&v125,
      (unsigned int)&v121,
      v80,
      v80 + 8 * v79);
  }
  else
  {
    (*(void (__fastcall **)(CPolygonBuilder *, __int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, v80, v79);
  }
  v81 = *(void (__fastcall **)(CPolygonBuilder *__hidden, enum D2D1_FIGURE_END))(*(_QWORD *)v3 + 64LL);
  if ( v81 == CPolygonBuilder::EndFigure )
    CPolygonBuilder::EndFigure(v3, D2D1_FIGURE_END_CLOSED);
  else
    v81(v3, D2D1_FIGURE_END_CLOSED);
}
