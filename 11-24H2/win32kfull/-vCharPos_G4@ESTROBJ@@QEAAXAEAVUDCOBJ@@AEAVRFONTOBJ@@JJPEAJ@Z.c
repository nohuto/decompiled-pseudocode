/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1400AC4A0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1400AB4C8 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct UDCOBJ *a2, struct RFONTOBJ *a3, LONG a4, LONG a5, int *a6)
{
  int v6; // ebx
  __int64 v10; // rax
  float v11; // xmm7_4
  float v12; // xmm10_4
  float v13; // xmm8_4
  float v14; // xmm11_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  float v18; // xmm6_4
  int v19; // ecx
  int v20; // r13d
  __int64 v21; // r14
  struct _GLYPHPOS *v22; // r8
  __int64 v23; // rsi
  unsigned __int16 *v24; // r9
  unsigned int v25; // edx
  unsigned int v26; // r12d
  POINTL *v27; // r11
  int v28; // eax
  unsigned int v29; // ecx
  signed int v30; // r13d
  int v31; // r12d
  __int64 v32; // rdx
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  int v35; // r9d
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  int v40; // edx
  __m128i v41; // xmm0
  __int64 v42; // r8
  int v43; // edx
  signed int v44; // r12d
  int v45; // r9d
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  int *v49; // r10
  int v50; // r13d
  __m128i v51; // xmm0
  signed int v52; // edx
  int v53; // r8d
  int v54; // r9d
  int v55; // ecx
  int v56; // ecx
  signed int v57; // ecx
  __int64 v58; // r8
  signed int v59; // edx
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  int v66; // r9d
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rax
  POINTL *v70; // r11
  int v71; // ecx
  int v72; // r9d
  unsigned int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // r9d
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  __m128i v84; // xmm2
  __int64 v85; // rdx
  __m128i v86; // xmm0
  int v87; // r9d
  unsigned int v88; // r8d
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __m128i v92; // xmm1
  __m128i v93; // xmm0
  int v94; // r9d
  unsigned int v95; // r8d
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // r9d
  unsigned int v99; // r8d
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // r8d
  unsigned int v103; // ecx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int128 v107; // xmm0
  __m128i v108; // xmm0
  int v109; // r8d
  unsigned int v110; // edx
  __int64 v111; // rax
  __int64 v112; // rax
  __m128i v113; // xmm0
  int v114; // r8d
  unsigned int v115; // edx
  __int64 v116; // rax
  __int64 v117; // rax
  int v119; // [rsp+48h] [rbp-C0h] BYREF
  int v120; // [rsp+4Ch] [rbp-BCh]
  signed int v121; // [rsp+50h] [rbp-B8h]
  __int128 v122; // [rsp+58h] [rbp-B0h]
  int v123; // [rsp+68h] [rbp-A0h] BYREF
  int v124; // [rsp+6Ch] [rbp-9Ch]
  signed int v125; // [rsp+70h] [rbp-98h]
  int v126; // [rsp+74h] [rbp-94h]
  int v127; // [rsp+78h] [rbp-90h]
  float v128; // [rsp+7Ch] [rbp-8Ch] BYREF
  float v129; // [rsp+80h] [rbp-88h] BYREF
  int v130; // [rsp+84h] [rbp-84h]
  int v131; // [rsp+88h] [rbp-80h]
  signed int v132; // [rsp+8Ch] [rbp-7Ch]
  POINTL *p_ptl; // [rsp+90h] [rbp-78h]
  _BOOL8 v134; // [rsp+98h] [rbp-70h]
  _BOOL8 v135; // [rsp+A0h] [rbp-68h]
  int v136; // [rsp+A8h] [rbp-60h] BYREF
  int *v137; // [rsp+B0h] [rbp-58h]
  int v138; // [rsp+188h] [rbp+80h]

  v6 = 0;
  v10 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v11 = *(float *)(v10 + 440);
    v12 = *(float *)(v10 + 448);
    v13 = *(float *)(v10 + 452);
    v14 = *(float *)(v10 + 432);
    v15 = *(float *)(v10 + 436);
    v16 = *(float *)(v10 + 412);
    v17 = *(float *)(v10 + 416);
    v18 = *(float *)(v10 + 420);
    v128 = v12;
    v129 = v13;
    v134 = v11 == 16.0;
    v135 = v18 == 16.0;
    v19 = *(_DWORD *)(v10 + 308);
    v20 = 0x7FFFFFFF;
    LODWORD(v21) = 0;
    v22 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    LODWORD(v23) = 0;
    v24 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v130 = *(_DWORD *)(v10 + 312);
    v22->ptl.x = a4;
    p_ptl = &v22->ptl;
    v22->ptl.y = a5;
    v25 = *(_DWORD *)this;
    v26 = 0x80000000;
    v121 = 0x80000000;
    *((_QWORD *)&v122 + 1) = 0x7FFFFFFF80000000LL;
    v125 = 0x80000000;
    v120 = 0x7FFFFFFF;
    v124 = v19;
    v123 = 0;
    v126 = 0x7FFFFFFF;
    *(_QWORD *)&v122 = 0x800000007FFFFFFFuLL;
    v138 = 0;
    v127 = 0;
    v119 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v25, v22, v24, &v119, a2, this) )
    {
      if ( v119 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      v119 = 0;
      if ( *(_DWORD *)this )
      {
        v27 = p_ptl;
        v28 = 0x7FFFFFFF;
        v29 = 0x80000000;
        do
        {
          v132 = v29;
          v137 = (int *)v27[-1];
          v131 = v20;
          v30 = v26;
          v31 = v28;
          vGenWidths(&v123, &v136, (struct EFLOAT *)&v129, (struct EFLOAT *)&v128, v137[3], v137[6], v137[7], v124);
          LODWORD(v32) = 0;
          v33 = (__m128i)COERCE_UNSIGNED_INT((float)(v23 + v123));
          v34 = v33;
          *(float *)v34.m128i_i32 = *(float *)v33.m128i_i32 * v13;
          v35 = _mm_cvtsi128_si32(v34);
          v36 = (unsigned __int8)(v35 >> 23);
          if ( v36 <= 0x9E )
          {
            v37 = v35 & 0x7FFFFFLL | 0x800000;
            v38 = v36 < 0x76 ? v37 >> (118 - (unsigned __int8)v36) : v37 << ((unsigned __int8)v36 - 118);
            v32 = (v38 + 0x80000000LL) >> 32;
            if ( v35 < 0 )
              LODWORD(v32) = -(int)v32;
          }
          v39 = v32 + v21;
          v40 = v120;
          v41 = (__m128i)COERCE_UNSIGNED_INT((float)(v23 + v123));
          LODWORD(v42) = 0;
          if ( v39 + v130 < v120 )
            v40 = v39 + v130;
          HIDWORD(v122) = v40;
          v43 = v39 + v130;
          if ( v39 + v130 >= v31 )
            v43 = v31;
          v44 = v125;
          *(float *)v41.m128i_i32 = *(float *)v33.m128i_i32 * v12;
          v45 = _mm_cvtsi128_si32(v41);
          v120 = v43;
          if ( v39 + v124 > v125 )
            v44 = v39 + v124;
          DWORD1(v122) = v44;
          v26 = v39 + v124;
          if ( v39 + v124 <= v30 )
            v26 = v30;
          v46 = (unsigned __int8)(v45 >> 23);
          v125 = v26;
          if ( v46 <= 0x9E )
          {
            v47 = v45 & 0x7FFFFFLL | 0x800000;
            v48 = v46 < 0x76 ? v47 >> (118 - (unsigned __int8)v46) : v47 << ((unsigned __int8)v46 - 118);
            v42 = (v48 + 0x80000000LL) >> 32;
            if ( v45 < 0 )
              LODWORD(v42) = -(int)v42;
          }
          v49 = v137;
          v50 = v126;
          v51 = (__m128i)COERCE_UNSIGNED_INT((float)(v23 + v123));
          *(float *)v51.m128i_i32 = *(float *)v33.m128i_i32 * v14;
          v52 = v121;
          v53 = v42 - v137[3] / 2;
          v54 = _mm_cvtsi128_si32(v51);
          v55 = v53 + v137[4] - 4;
          if ( v55 < v126 )
            v50 = v53 + v137[4] - 4;
          LODWORD(v122) = v50;
          v20 = v55;
          if ( v55 >= v131 )
            v20 = v131;
          v56 = v137[5] + 4;
          v126 = v20;
          v57 = v53 + v56;
          LODWORD(v58) = 0;
          if ( v57 > v121 )
            v52 = v57;
          DWORD2(v122) = v52;
          v59 = v57;
          if ( v57 <= v132 )
            v59 = v132;
          v121 = v59;
          v60 = (unsigned __int8)(v54 >> 23);
          if ( v60 <= 0x9E )
          {
            v61 = v54 & 0x7FFFFFLL | 0x800000;
            v62 = v60 < 0x76 ? v61 >> (118 - (unsigned __int8)v60) : v61 << ((unsigned __int8)v60 - 118);
            v58 = (v62 + 0x80000000LL) >> 32;
            if ( v54 < 0 )
              LODWORD(v58) = -(int)v58;
          }
          LODWORD(v63) = 0;
          v64 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v21);
          v65 = v64;
          *(float *)v65.m128i_i32 = *(float *)v64.m128i_i32 * v16;
          v66 = _mm_cvtsi128_si32(v65);
          v67 = (unsigned __int8)(v66 >> 23);
          if ( v67 <= 0x9E )
          {
            v68 = v66 & 0x7FFFFFLL | 0x800000;
            v69 = v67 < 0x76 ? v68 >> (118 - (unsigned __int8)v67) : v68 << ((unsigned __int8)v67 - 118);
            v63 = (v69 + 0x80000000LL) >> 32;
            if ( v66 < 0 )
              LODWORD(v63) = -(int)v63;
          }
          v70 = p_ptl;
          *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 * v15;
          v71 = v58 + v63 - v137[13] / 2;
          LODWORD(v58) = 0;
          v72 = _mm_cvtsi128_si32(v33);
          p_ptl->x = a4 + v71;
          v73 = (unsigned __int8)(v72 >> 23);
          if ( v73 <= 0x9E )
          {
            v74 = v72 & 0x7FFFFFLL | 0x800000;
            v75 = v73 < 0x76 ? v74 >> (118 - (unsigned __int8)v73) : v74 << ((unsigned __int8)v73 - 118);
            v58 = (v75 + 0x80000000LL) >> 32;
            if ( v72 < 0 )
              LODWORD(v58) = -(int)v58;
          }
          *(float *)v64.m128i_i32 = *(float *)v64.m128i_i32 * v17;
          LODWORD(v76) = 0;
          v77 = _mm_cvtsi128_si32(v64);
          v78 = (unsigned __int8)(v77 >> 23);
          if ( v78 <= 0x9E )
          {
            v79 = v77 & 0x7FFFFFLL | 0x800000;
            v80 = v78 < 0x76 ? v79 >> (118 - (unsigned __int8)v78) : v79 << ((unsigned __int8)v78 - 118);
            v76 = (v80 + 0x80000000LL) >> 32;
            if ( v77 < 0 )
              LODWORD(v76) = -(int)v76;
          }
          v81 = v127;
          v70->y = a5 + v58 + v76 - v49[15] / 2;
          v82 = a6[1] + v138;
          v83 = *a6 + v81;
          v127 = v83;
          v138 = v82;
          if ( v134 )
          {
            LODWORD(v23) = 16 * v83;
          }
          else
          {
            LODWORD(v23) = 0;
            v108 = (__m128i)COERCE_UNSIGNED_INT((float)v83);
            *(float *)v108.m128i_i32 = *(float *)v108.m128i_i32 * v11;
            v109 = _mm_cvtsi128_si32(v108);
            v110 = (unsigned __int8)(v109 >> 23);
            if ( v110 <= 0x9E )
            {
              v111 = v109 & 0x7FFFFF | 0x800000LL;
              v112 = v110 < 0x76 ? v111 >> (118 - (unsigned __int8)v110) : v111 << ((unsigned __int8)v110 - 118);
              v23 = (v112 + 0x80000000LL) >> 32;
              if ( v109 < 0 )
                LODWORD(v23) = -(int)v23;
            }
          }
          if ( v135 )
          {
            LODWORD(v21) = 16 * v82;
          }
          else
          {
            LODWORD(v21) = 0;
            v113 = (__m128i)COERCE_UNSIGNED_INT((float)v82);
            *(float *)v113.m128i_i32 = *(float *)v113.m128i_i32 * v18;
            v114 = _mm_cvtsi128_si32(v113);
            v115 = (unsigned __int8)(v114 >> 23);
            if ( v115 <= 0x9E )
            {
              v116 = v114 & 0x7FFFFF | 0x800000LL;
              v117 = v115 < 0x76 ? v116 >> (118 - (unsigned __int8)v115) : v116 << ((unsigned __int8)v115 - 118);
              v21 = (v117 + 0x80000000LL) >> 32;
              if ( v114 < 0 )
                LODWORD(v21) = -(int)v21;
            }
          }
          v27 = v70 + 3;
          v28 = v120;
          v29 = v121;
          ++v119;
          p_ptl = v27;
          a6 += 2;
          *(_QWORD *)&v122 = __PAIR64__(v26, v20);
          *((_QWORD *)&v122 + 1) = __PAIR64__(v120, v121);
        }
        while ( (unsigned int)v119 < *(_DWORD *)this );
      }
      v84 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v23);
      LODWORD(v85) = 0;
      v86 = v84;
      *(float *)v86.m128i_i32 = *(float *)v84.m128i_i32 * v14;
      v87 = _mm_cvtsi128_si32(v86);
      v88 = (unsigned __int8)(v87 >> 23);
      if ( v88 <= 0x9E )
      {
        v89 = v87 & 0x7FFFFFLL | 0x800000;
        v90 = v88 < 0x76 ? v89 >> (118 - (unsigned __int8)v88) : v89 << ((unsigned __int8)v88 - 118);
        v85 = (v90 + 0x80000000LL) >> 32;
        if ( v87 < 0 )
          LODWORD(v85) = -(int)v85;
      }
      LODWORD(v91) = 0;
      v92 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v21);
      v93 = v92;
      *(float *)v93.m128i_i32 = *(float *)v92.m128i_i32 * v16;
      v94 = _mm_cvtsi128_si32(v93);
      v95 = (unsigned __int8)(v94 >> 23);
      if ( v95 <= 0x9E )
      {
        v96 = v94 & 0x7FFFFFLL | 0x800000;
        v97 = v95 < 0x76 ? v96 >> (118 - (unsigned __int8)v95) : v96 << ((unsigned __int8)v95 - 118);
        v91 = (v97 + 0x80000000LL) >> 32;
        if ( v94 < 0 )
          LODWORD(v91) = -(int)v91;
      }
      *(float *)v84.m128i_i32 = *(float *)v84.m128i_i32 * v15;
      *((_DWORD *)this + 20) = v91 + v85;
      LODWORD(v85) = 0;
      v98 = _mm_cvtsi128_si32(v84);
      v99 = (unsigned __int8)(v98 >> 23);
      if ( v99 <= 0x9E )
      {
        v100 = v98 & 0x7FFFFFLL | 0x800000;
        v101 = v99 < 0x76 ? v100 >> (118 - (unsigned __int8)v99) : v100 << ((unsigned __int8)v99 - 118);
        v85 = (v101 + 0x80000000LL) >> 32;
        if ( v98 < 0 )
          LODWORD(v85) = -(int)v85;
      }
      *(float *)v92.m128i_i32 = *(float *)v92.m128i_i32 * v17;
      v102 = _mm_cvtsi128_si32(v92);
      v103 = (unsigned __int8)(v102 >> 23);
      if ( v103 <= 0x9E )
      {
        v104 = v102 & 0x7FFFFFLL | 0x800000;
        if ( v103 < 0x76 )
          v105 = v104 >> (118 - (unsigned __int8)v103);
        else
          v105 = v104 << ((unsigned __int8)v103 - 118);
        v106 = (v105 + 0x80000000LL) >> 32;
        if ( v102 < 0 )
          LODWORD(v106) = -(int)v106;
        v6 = v106;
      }
      v107 = v122;
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v6 + v85;
      *((_OWORD *)this + 6) = v107;
    }
  }
}
