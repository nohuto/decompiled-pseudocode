/*
 * XREFs of cjIFIMetricsToOTMW @ 0x1400BD614
 * Callers:
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BEB94 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1400BF0E4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BF214 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRIC.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1400ECA58 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct UDCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r11
  unsigned int *v15; // r14
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // r14
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 *v24; // r14
  __int64 v25; // r11
  __int64 v26; // rbx
  __int64 result; // rax
  float v28; // xmm3_4
  float v29; // xmm2_4
  int v30; // ecx
  int v31; // ecx
  __m128i v32; // xmm0
  int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  __m128i v39; // xmm0
  int v40; // r8d
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  __m128i v46; // xmm0
  int v47; // r8d
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // ecx
  __m128i v53; // xmm0
  int v54; // r8d
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  __m128i v60; // xmm0
  int v61; // r8d
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ecx
  __m128i v67; // xmm0
  int v68; // r8d
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // ecx
  __m128i v74; // xmm0
  int v75; // r8d
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  __m128i v81; // xmm0
  int v82; // r8d
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // ecx
  __m128i v88; // xmm0
  int v89; // r8d
  unsigned int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // ecx
  __m128i v95; // xmm0
  int v96; // r8d
  unsigned int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // ecx
  __m128i v102; // xmm0
  int v103; // r8d
  unsigned int v104; // edx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // ecx
  __m128i v109; // xmm0
  int v110; // r8d
  unsigned int v111; // edx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // ecx
  __m128i v116; // xmm0
  int v117; // r8d
  unsigned int v118; // edx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // ecx
  __m128i v123; // xmm0
  int v124; // r8d
  unsigned int v125; // edx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  int v129; // ecx
  __m128i v130; // xmm0
  int v131; // r8d
  unsigned int v132; // edx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // ecx
  __m128i v137; // xmm0
  int v138; // r8d
  unsigned int v139; // edx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  int v143; // ecx
  __m128i v144; // xmm0
  int v145; // r8d
  unsigned int v146; // edx
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  int v150; // ecx
  __m128i v151; // xmm0
  int v152; // r8d
  unsigned int v153; // edx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  int v157; // ecx
  __m128i v158; // xmm0
  int v159; // r8d
  unsigned int v160; // edx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // ecx
  __m128i v165; // xmm0
  int v166; // r8d
  unsigned int v167; // edx
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  int v171; // ecx
  __m128i v172; // xmm0
  int v173; // r8d
  unsigned int v174; // edx
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  int v178; // ecx
  __m128i v179; // xmm0
  int v180; // r8d
  unsigned int v181; // edx
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  int v185; // ecx
  __m128i v186; // xmm0
  int v187; // r8d
  unsigned int v188; // edx
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __m128i v192; // xmm0
  int v193; // r8d
  unsigned int v194; // edx
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  int v198; // eax
  __m128i v199; // xmm0
  int v200; // r8d
  int v201; // edx
  unsigned int v202; // ecx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __m128i v206; // xmm1
  int v207; // r8d
  unsigned int v208; // edx
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  float v212; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v213[12]; // [rsp+24h] [rbp-84h] BYREF
  __int64 v214; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 v215; // [rsp+46h] [rbp-62h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v214, a5, a3, a4);
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return 0LL;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v10 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v11 = v214;
    a2[21] = *(_DWORD *)(v214 + 140);
    a2[22] = *(_DWORD *)(v11 + 136);
    a2[24] = *(__int16 *)(v11 + 56);
    a2[25] = *(__int16 *)(v11 + 70);
    a2[26] = *(__int16 *)(v11 + 72);
    a2[27] = *(__int16 *)(v11 + 74);
    a2[30] = *(_DWORD *)(v11 + 144);
    a2[31] = *(_DWORD *)(v11 + 148);
    a2[32] = *(_DWORD *)(v11 + 152);
    a2[33] = *(_DWORD *)(v11 + 156);
    a2[34] = *(__int16 *)(v11 + 64);
    a2[35] = *(__int16 *)(v11 + 66);
    a2[36] = *(__int16 *)(v11 + 68);
    a2[38] = *(__int16 *)(v11 + 84);
    a2[39] = *(__int16 *)(v11 + 86);
    a2[40] = *(__int16 *)(v11 + 88);
    a2[41] = *(__int16 *)(v11 + 90);
    a2[42] = *(__int16 *)(v11 + 92);
    a2[43] = *(__int16 *)(v11 + 94);
    a2[44] = *(__int16 *)(v11 + 96);
    a2[45] = *(__int16 *)(v11 + 98);
    a2[46] = *(__int16 *)(v11 + 104);
    a2[47] = *(__int16 *)(v11 + 106);
    a2[48] = *(__int16 *)(v11 + 100);
    a2[49] = *(__int16 *)(v11 + 102);
    a2[29] = *(__int16 *)(v11 + 82);
    v12 = *(__int16 *)(v11 + 80);
  }
  else
  {
    v28 = *(float *)(v10 + 212);
    v29 = *(float *)(v10 + 216);
    if ( v28 == v29 || v29 == 0.0 )
    {
      v11 = v214;
      a2[21] = *(_DWORD *)(v214 + 140);
      v30 = *(_DWORD *)(v11 + 136);
    }
    else
    {
      v11 = v214;
      v206 = (__m128i)*(unsigned int *)(v10 + 212);
      v30 = 0;
      a2[21] = *(_DWORD *)(v214 + 140);
      *(float *)v206.m128i_i32 = (float)(v28 / v29) * (float)*(int *)(v11 + 136);
      v207 = _mm_cvtsi128_si32(v206);
      v208 = (unsigned __int8)(v207 >> 23);
      if ( v208 <= 0x9E )
      {
        v209 = v207 & 0x7FFFFFLL | 0x800000;
        v210 = v208 < 0x76 ? v209 >> (118 - (unsigned __int8)v208) : v209 << ((unsigned __int8)v208 - 118);
        v211 = (v210 + 0x80000000LL) >> 32;
        v30 = -(int)v211;
        if ( v207 >= 0 )
          v30 = v211;
      }
    }
    a2[22] = v30;
    v31 = 0;
    a2[24] = *(__int16 *)(v11 + 56);
    v32 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 70));
    *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 * v29;
    v33 = _mm_cvtsi128_si32(v32);
    v34 = (unsigned __int8)(v33 >> 23);
    if ( v34 <= 0x9E )
    {
      v35 = v33 & 0x7FFFFFLL | 0x800000;
      v36 = v34 < 0x76 ? v35 >> (118 - (unsigned __int8)v34) : v35 << ((unsigned __int8)v34 - 118);
      v37 = (v36 + 0x80000000LL) >> 32;
      v31 = -(int)v37;
      if ( v33 >= 0 )
        v31 = v37;
    }
    a2[25] = v31;
    v38 = 0;
    v39 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 72));
    *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * v29;
    v40 = _mm_cvtsi128_si32(v39);
    v41 = (unsigned __int8)(v40 >> 23);
    if ( v41 <= 0x9E )
    {
      v42 = v40 & 0x7FFFFFLL | 0x800000;
      v43 = v41 < 0x76 ? v42 >> (118 - (unsigned __int8)v41) : v42 << ((unsigned __int8)v41 - 118);
      v44 = (v43 + 0x80000000LL) >> 32;
      v38 = -(int)v44;
      if ( v40 >= 0 )
        v38 = v44;
    }
    a2[26] = v38;
    v45 = 0;
    v46 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 74));
    *(float *)v46.m128i_i32 = *(float *)v46.m128i_i32 * v29;
    v47 = _mm_cvtsi128_si32(v46);
    v48 = (unsigned __int8)(v47 >> 23);
    if ( v48 <= 0x9E )
    {
      v49 = v47 & 0x7FFFFFLL | 0x800000;
      v50 = v48 < 0x76 ? v49 >> (118 - (unsigned __int8)v48) : v49 << ((unsigned __int8)v48 - 118);
      v51 = (v50 + 0x80000000LL) >> 32;
      v45 = -(int)v51;
      if ( v47 >= 0 )
        v45 = v51;
    }
    a2[27] = v45;
    v52 = 0;
    v53 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 148));
    *(float *)v53.m128i_i32 = *(float *)v53.m128i_i32 * v29;
    v54 = _mm_cvtsi128_si32(v53);
    v55 = (unsigned __int8)(v54 >> 23);
    if ( v55 <= 0x9E )
    {
      v56 = v54 & 0x7FFFFFLL | 0x800000;
      v57 = v55 < 0x76 ? v56 >> (118 - (unsigned __int8)v55) : v56 << ((unsigned __int8)v55 - 118);
      v58 = (v57 + 0x80000000LL) >> 32;
      v52 = -(int)v58;
      if ( v54 >= 0 )
        v52 = v58;
    }
    a2[31] = v52;
    v59 = 0;
    v60 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 144));
    *(float *)v60.m128i_i32 = *(float *)v60.m128i_i32 * v28;
    v61 = _mm_cvtsi128_si32(v60);
    v62 = (unsigned __int8)(v61 >> 23);
    if ( v62 <= 0x9E )
    {
      v63 = v61 & 0x7FFFFFLL | 0x800000;
      v64 = v62 < 0x76 ? v63 >> (118 - (unsigned __int8)v62) : v63 << ((unsigned __int8)v62 - 118);
      v65 = (v64 + 0x80000000LL) >> 32;
      v59 = -(int)v65;
      if ( v61 >= 0 )
        v59 = v65;
    }
    a2[30] = v59;
    v66 = 0;
    v67 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 156));
    *(float *)v67.m128i_i32 = *(float *)v67.m128i_i32 * v29;
    v68 = _mm_cvtsi128_si32(v67);
    v69 = (unsigned __int8)(v68 >> 23);
    if ( v69 <= 0x9E )
    {
      v70 = v68 & 0x7FFFFFLL | 0x800000;
      v71 = v69 < 0x76 ? v70 >> (118 - (unsigned __int8)v69) : v70 << ((unsigned __int8)v69 - 118);
      v72 = (v71 + 0x80000000LL) >> 32;
      v66 = -(int)v72;
      if ( v68 >= 0 )
        v66 = v72;
    }
    a2[33] = v66;
    v73 = 0;
    v74 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 152));
    *(float *)v74.m128i_i32 = *(float *)v74.m128i_i32 * v28;
    v75 = _mm_cvtsi128_si32(v74);
    v76 = (unsigned __int8)(v75 >> 23);
    if ( v76 <= 0x9E )
    {
      v77 = v75 & 0x7FFFFFLL | 0x800000;
      v78 = v76 < 0x76 ? v77 >> (118 - (unsigned __int8)v76) : v77 << ((unsigned __int8)v76 - 118);
      v79 = (v78 + 0x80000000LL) >> 32;
      v73 = -(int)v79;
      if ( v75 >= 0 )
        v73 = v79;
    }
    a2[32] = v73;
    v80 = 0;
    v81 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 64));
    *(float *)v81.m128i_i32 = *(float *)v81.m128i_i32 * v29;
    v82 = _mm_cvtsi128_si32(v81);
    v83 = (unsigned __int8)(v82 >> 23);
    if ( v83 <= 0x9E )
    {
      v84 = v82 & 0x7FFFFFLL | 0x800000;
      v85 = v83 < 0x76 ? v84 >> (118 - (unsigned __int8)v83) : v84 << ((unsigned __int8)v83 - 118);
      v86 = (v85 + 0x80000000LL) >> 32;
      v80 = -(int)v86;
      if ( v82 >= 0 )
        v80 = v86;
    }
    a2[34] = v80;
    v87 = 0;
    v88 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 66));
    *(float *)v88.m128i_i32 = *(float *)v88.m128i_i32 * v29;
    v89 = _mm_cvtsi128_si32(v88);
    v90 = (unsigned __int8)(v89 >> 23);
    if ( v90 <= 0x9E )
    {
      v91 = v89 & 0x7FFFFFLL | 0x800000;
      v92 = v90 < 0x76 ? v91 >> (118 - (unsigned __int8)v90) : v91 << ((unsigned __int8)v90 - 118);
      v93 = (v92 + 0x80000000LL) >> 32;
      v87 = -(int)v93;
      if ( v89 >= 0 )
        v87 = v93;
    }
    a2[35] = v87;
    v94 = 0;
    v95 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 68));
    *(float *)v95.m128i_i32 = *(float *)v95.m128i_i32 * v29;
    v96 = _mm_cvtsi128_si32(v95);
    v97 = (unsigned __int8)(v96 >> 23);
    if ( v97 <= 0x9E )
    {
      v98 = v96 & 0x7FFFFFLL | 0x800000;
      v99 = v97 < 0x76 ? v98 >> (118 - (unsigned __int8)v97) : v98 << ((unsigned __int8)v97 - 118);
      v100 = (v99 + 0x80000000LL) >> 32;
      v94 = -(int)v100;
      if ( v96 >= 0 )
        v94 = v100;
    }
    a2[36] = v94;
    v101 = 0;
    v102 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 84));
    *(float *)v102.m128i_i32 = *(float *)v102.m128i_i32 * v28;
    v103 = _mm_cvtsi128_si32(v102);
    v104 = (unsigned __int8)(v103 >> 23);
    if ( v104 <= 0x9E )
    {
      v105 = v103 & 0x7FFFFFLL | 0x800000;
      v106 = v104 < 0x76 ? v105 >> (118 - (unsigned __int8)v104) : v105 << ((unsigned __int8)v104 - 118);
      v107 = (v106 + 0x80000000LL) >> 32;
      v101 = -(int)v107;
      if ( v103 >= 0 )
        v101 = v107;
    }
    a2[38] = v101;
    v108 = 0;
    v109 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 86));
    *(float *)v109.m128i_i32 = *(float *)v109.m128i_i32 * v29;
    v110 = _mm_cvtsi128_si32(v109);
    v111 = (unsigned __int8)(v110 >> 23);
    if ( v111 <= 0x9E )
    {
      v112 = v110 & 0x7FFFFFLL | 0x800000;
      v113 = v111 < 0x76 ? v112 >> (118 - (unsigned __int8)v111) : v112 << ((unsigned __int8)v111 - 118);
      v114 = (v113 + 0x80000000LL) >> 32;
      v108 = -(int)v114;
      if ( v110 >= 0 )
        v108 = v114;
    }
    a2[39] = v108;
    v115 = 0;
    v116 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 88));
    *(float *)v116.m128i_i32 = *(float *)v116.m128i_i32 * v28;
    v117 = _mm_cvtsi128_si32(v116);
    v118 = (unsigned __int8)(v117 >> 23);
    if ( v118 <= 0x9E )
    {
      v119 = v117 & 0x7FFFFFLL | 0x800000;
      v120 = v118 < 0x76 ? v119 >> (118 - (unsigned __int8)v118) : v119 << ((unsigned __int8)v118 - 118);
      v121 = (v120 + 0x80000000LL) >> 32;
      v115 = -(int)v121;
      if ( v117 >= 0 )
        v115 = v121;
    }
    a2[40] = v115;
    v122 = 0;
    v123 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 90));
    *(float *)v123.m128i_i32 = *(float *)v123.m128i_i32 * v29;
    v124 = _mm_cvtsi128_si32(v123);
    v125 = (unsigned __int8)(v124 >> 23);
    if ( v125 <= 0x9E )
    {
      v126 = v124 & 0x7FFFFFLL | 0x800000;
      v127 = v125 < 0x76 ? v126 >> (118 - (unsigned __int8)v125) : v126 << ((unsigned __int8)v125 - 118);
      v128 = (v127 + 0x80000000LL) >> 32;
      v122 = -(int)v128;
      if ( v124 >= 0 )
        v122 = v128;
    }
    a2[41] = v122;
    v129 = 0;
    v130 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 84));
    *(float *)v130.m128i_i32 = *(float *)v130.m128i_i32 * v28;
    v131 = _mm_cvtsi128_si32(v130);
    v132 = (unsigned __int8)(v131 >> 23);
    if ( v132 <= 0x9E )
    {
      v133 = v131 & 0x7FFFFFLL | 0x800000;
      v134 = v132 < 0x76 ? v133 >> (118 - (unsigned __int8)v132) : v133 << ((unsigned __int8)v132 - 118);
      v135 = (v134 + 0x80000000LL) >> 32;
      v129 = -(int)v135;
      if ( v131 >= 0 )
        v129 = v135;
    }
    a2[42] = v129;
    v136 = 0;
    v137 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 86));
    *(float *)v137.m128i_i32 = *(float *)v137.m128i_i32 * v29;
    v138 = _mm_cvtsi128_si32(v137);
    v139 = (unsigned __int8)(v138 >> 23);
    if ( v139 <= 0x9E )
    {
      v140 = v138 & 0x7FFFFFLL | 0x800000;
      v141 = v139 < 0x76 ? v140 >> (118 - (unsigned __int8)v139) : v140 << ((unsigned __int8)v139 - 118);
      v142 = (v141 + 0x80000000LL) >> 32;
      v136 = -(int)v142;
      if ( v138 >= 0 )
        v136 = v142;
    }
    a2[43] = v136;
    v143 = 0;
    v144 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 96));
    *(float *)v144.m128i_i32 = *(float *)v144.m128i_i32 * v28;
    v145 = _mm_cvtsi128_si32(v144);
    v146 = (unsigned __int8)(v145 >> 23);
    if ( v146 <= 0x9E )
    {
      v147 = v145 & 0x7FFFFFLL | 0x800000;
      v148 = v146 < 0x76 ? v147 >> (118 - (unsigned __int8)v146) : v147 << ((unsigned __int8)v146 - 118);
      v149 = (v148 + 0x80000000LL) >> 32;
      v143 = -(int)v149;
      if ( v145 >= 0 )
        v143 = v149;
    }
    a2[44] = v143;
    v150 = 0;
    v151 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 98));
    *(float *)v151.m128i_i32 = *(float *)v151.m128i_i32 * v29;
    v152 = _mm_cvtsi128_si32(v151);
    v153 = (unsigned __int8)(v152 >> 23);
    if ( v153 <= 0x9E )
    {
      v154 = v152 & 0x7FFFFFLL | 0x800000;
      v155 = v153 < 0x76 ? v154 >> (118 - (unsigned __int8)v153) : v154 << ((unsigned __int8)v153 - 118);
      v156 = (v155 + 0x80000000LL) >> 32;
      v150 = -(int)v156;
      if ( v152 >= 0 )
        v150 = v156;
    }
    a2[45] = v150;
    v157 = 0;
    v158 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 104));
    *(float *)v158.m128i_i32 = *(float *)v158.m128i_i32 * v29;
    v159 = _mm_cvtsi128_si32(v158);
    v160 = (unsigned __int8)(v159 >> 23);
    if ( v160 <= 0x9E )
    {
      v161 = v159 & 0x7FFFFFLL | 0x800000;
      v162 = v160 < 0x76 ? v161 >> (118 - (unsigned __int8)v160) : v161 << ((unsigned __int8)v160 - 118);
      v163 = (v162 + 0x80000000LL) >> 32;
      v157 = -(int)v163;
      if ( v159 >= 0 )
        v157 = v163;
    }
    a2[46] = v157;
    v164 = 0;
    v165 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 106));
    *(float *)v165.m128i_i32 = *(float *)v165.m128i_i32 * v29;
    v166 = _mm_cvtsi128_si32(v165);
    v167 = (unsigned __int8)(v166 >> 23);
    if ( v167 <= 0x9E )
    {
      v168 = v166 & 0x7FFFFFLL | 0x800000;
      v169 = v167 < 0x76 ? v168 >> (118 - (unsigned __int8)v167) : v168 << ((unsigned __int8)v167 - 118);
      v170 = (v169 + 0x80000000LL) >> 32;
      v164 = -(int)v170;
      if ( v166 >= 0 )
        v164 = v170;
    }
    a2[47] = v164;
    v171 = 0;
    v172 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 100));
    *(float *)v172.m128i_i32 = *(float *)v172.m128i_i32 * v29;
    v173 = _mm_cvtsi128_si32(v172);
    v174 = (unsigned __int8)(v173 >> 23);
    if ( v174 <= 0x9E )
    {
      v175 = v173 & 0x7FFFFFLL | 0x800000;
      v176 = v174 < 0x76 ? v175 >> (118 - (unsigned __int8)v174) : v175 << ((unsigned __int8)v174 - 118);
      v177 = (v176 + 0x80000000LL) >> 32;
      v171 = -(int)v177;
      if ( v173 >= 0 )
        v171 = v177;
    }
    a2[48] = v171;
    v178 = 0;
    v179 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 102));
    *(float *)v179.m128i_i32 = *(float *)v179.m128i_i32 * v29;
    v180 = _mm_cvtsi128_si32(v179);
    v181 = (unsigned __int8)(v180 >> 23);
    if ( v181 <= 0x9E )
    {
      v182 = v180 & 0x7FFFFFLL | 0x800000;
      v183 = v181 < 0x76 ? v182 >> (118 - (unsigned __int8)v181) : v182 << ((unsigned __int8)v181 - 118);
      v184 = (v183 + 0x80000000LL) >> 32;
      v178 = -(int)v184;
      if ( v180 >= 0 )
        v178 = v184;
    }
    a2[49] = v178;
    v185 = 0;
    v186 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 82));
    *(float *)v186.m128i_i32 = *(float *)v186.m128i_i32 * v29;
    v187 = _mm_cvtsi128_si32(v186);
    v188 = (unsigned __int8)(v187 >> 23);
    if ( v188 <= 0x9E )
    {
      v189 = v187 & 0x7FFFFFLL | 0x800000;
      v190 = v188 < 0x76 ? v189 >> (118 - (unsigned __int8)v188) : v189 << ((unsigned __int8)v188 - 118);
      v191 = (v190 + 0x80000000LL) >> 32;
      v185 = -(int)v191;
      if ( v187 >= 0 )
        v185 = v191;
    }
    a2[29] = v185;
    v12 = 0;
    v192 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 80));
    *(float *)v192.m128i_i32 = *(float *)v192.m128i_i32 * v29;
    v193 = _mm_cvtsi128_si32(v192);
    v194 = (unsigned __int8)(v193 >> 23);
    if ( v194 <= 0x9E )
    {
      v195 = v193 & 0x7FFFFFLL | 0x800000;
      v196 = v194 < 0x76 ? v195 >> (118 - (unsigned __int8)v194) : v195 << ((unsigned __int8)v194 - 118);
      v197 = (v196 + 0x80000000LL) >> 32;
      v12 = -(int)v197;
      if ( v193 >= 0 )
        v12 = v197;
    }
  }
  a2[28] = v12;
  v13 = *(_DWORD *)(v11 + 32);
  a2[23] = v13;
  if ( !v13 )
  {
    v198 = *(_DWORD *)(v11 + 140);
    if ( v198 <= 0 || *(_DWORD *)(v11 + 136) )
    {
      v212 = 0.0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v198)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-*(_DWORD *)(v11 + 136))),
        &v212,
        v213);
      v199 = (__m128i)LODWORD(v212);
      v200 = 0;
      *(float *)v199.m128i_i32 = v212 * 10.0;
      v201 = _mm_cvtsi128_si32(v199);
      v202 = (unsigned __int8)(v201 >> 23);
      if ( v202 <= 0x9E )
      {
        v203 = v201 & 0x7FFFFFLL | 0x800000;
        v204 = v202 < 0x76 ? v203 >> (118 - (unsigned __int8)v202) : v203 << ((unsigned __int8)v202 - 118);
        v205 = (v204 + 0x80000000LL) >> 32;
        v200 = -(int)v205;
        if ( v201 >= 0 )
          v200 = v205;
      }
      a2[23] = v200;
      if ( v200 > 1800 )
        a2[23] = v200 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v11 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v11 + 180);
  a2[19] = v215;
  a2[20] = *(unsigned __int16 *)(v11 + 54);
  a2[37] = *(__int16 *)(v11 + 58);
  if ( a6 )
  {
    v14 = *a2;
    v15 = a2 + 58;
    *((_QWORD *)a2 + 25) = 232LL;
    StringCchCopyW(
      (unsigned __int16 *)a2 + 116,
      (unsigned __int64)(v14 - 232) >> 1,
      (const unsigned __int16 *)(v11 + *(int *)(v11 + 8)));
    v17 = -1LL;
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)v15 + v18) );
    v19 = v18 + 1;
    v20 = (unsigned __int16 *)v15 + v19;
    *((_QWORD *)a2 + 26) = (char *)v20 - (char *)a2;
    StringCchCopyW(v20, v16 - v19, (const unsigned __int16 *)(v11 + *(int *)(v11 + 16)));
    v22 = -1LL;
    do
      ++v22;
    while ( v20[v22] );
    v23 = v22 + 1;
    v24 = &v20[v23];
    *((_QWORD *)a2 + 27) = (char *)v24 - (char *)a2;
    StringCchCopyW(v24, v21 - v23, (const unsigned __int16 *)(v11 + *(int *)(v11 + 12)));
    do
      ++v17;
    while ( v24[v17] );
    v26 = v17 + 1;
    *((_QWORD *)a2 + 28) = (char *)&v24[v26] - (char *)a2;
    StringCchCopyW(&v24[v26], v25 - v26, (const unsigned __int16 *)(v11 + *(int *)(v11 + 20)));
    return *a2;
  }
  else
  {
    *((_QWORD *)a2 + 25) = 0LL;
    result = 232LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 28) = 0LL;
  }
  return result;
}
