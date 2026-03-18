/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400ACFE4 (-GrepGetTextExtentExW@@YAHAEAVUDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400C0454 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1400ABF7C (-vCharPos_G1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1400AC4A0 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AE350 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400AE8F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1400AFBC0 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1400C0CA0 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1401A7AA8 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1401C4130 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x14020F96C (-bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140229114 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        __m128i *a2,
        unsigned int a3,
        struct UDCOBJ *a4,
        struct RFONTOBJ *a5,
        struct EXFORMOBJ *a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        LONG a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  struct RFONTOBJ *v18; // rsi
  struct EXFORMOBJ *v19; // r9
  __int64 v22; // r12
  __m128i v23; // xmm6
  float v24; // xmm7_4
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  const unsigned __int16 *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  _DWORD *v36; // rcx
  int v37; // edx
  int v38; // r11d
  char v39; // bp
  LONG v40; // r10d
  unsigned int v41; // r13d
  int v42; // ebx
  __int64 v43; // rdx
  LONG v44; // ebx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  __m128i *v52; // rdx
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  int *v55; // rcx
  unsigned __int64 v56; // rax
  unsigned int v57; // ebx
  int v58; // r8d
  int v59; // eax
  int v60; // ecx
  int *v61; // rdx
  __int64 v62; // rcx
  int v63; // edx
  unsigned int v64; // edx
  int v65; // ecx
  float v66; // xmm1_4
  _DWORD *v67; // r11
  unsigned int v68; // r12d
  unsigned int v69; // eax
  __int64 v70; // r15
  __int64 v71; // rcx
  __m128i v72; // xmm0
  int v73; // r9d
  unsigned int v74; // r8d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  __m128i v78; // xmm0
  int v79; // r9d
  unsigned int v80; // r10d
  __int64 v81; // rax
  __int64 v82; // rax
  __m128i v83; // xmm0
  int v84; // r9d
  unsigned int v85; // r10d
  __int64 v86; // rax
  __int64 v87; // rax
  __m128i v88; // xmm0
  int v89; // r9d
  unsigned int v90; // r10d
  __int64 v91; // rax
  __int64 v92; // rax
  _DWORD *v93; // r11
  __int64 v94; // rbx
  __int64 v95; // r8
  __m128i v96; // xmm0
  int v97; // r9d
  unsigned int v98; // r10d
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __m128i v102; // xmm0
  int v103; // r9d
  unsigned int v104; // r8d
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // edx
  int v108; // r8d
  int v109; // eax
  __int64 v110; // rax
  int v111; // r8d
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rax
  int v115; // eax
  int v116; // edx
  _DWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rdx
  int v120; // r13d
  ERECTL *v121; // r8
  int v122; // ebx
  int v123; // r9d
  int v124; // ecx
  int v125; // edx
  __int64 v126; // r8
  int v127; // ecx
  int v128; // edx
  __int64 v129; // r8
  unsigned __int64 v130; // rax
  __int64 v131; // r8
  __m128i v132; // xmm0
  int v133; // r9d
  unsigned int v134; // ecx
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  unsigned __int64 v139; // rax
  int *v140; // rax
  int v141; // [rsp+50h] [rbp-68h]
  LONG v142; // [rsp+C0h] [rbp+8h]

  v18 = a5;
  v19 = a6;
  v22 = a3;
  v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v24 = **(float **)a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  v25 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v25;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 120LL) + 16LL);
  if ( v26 )
  {
    if ( (*(_DWORD *)(v26 + 4) & 0x10) != 0 )
    {
      v25 |= 0x80u;
      *((_DWORD *)this + 1) = v25;
    }
    *((_DWORD *)this + 31) = a18;
    *((_DWORD *)this + 2) = 0;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 5) = a2;
    *(_QWORD *)((char *)this + 116) = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)a5 + 84LL) & 4) != 0 )
    {
      *((_DWORD *)this + 1) = v25 | 0x100;
      v27 = *(_QWORD *)(*(_QWORD *)a5 + 120LL);
      v28 = *(unsigned __int8 *)(*(_QWORD *)(v27 + 32) + 108LL);
      v29 = _mm_cvtsi32_si128(v28);
      v30 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v29, v29), 0);
      if ( (*(_DWORD *)(*(_QWORD *)(v27 + 16) + 4LL) & 2) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v27 + 32) + 108LL) )
        {
          v31 = (const unsigned __int16 *)a2 + a3;
          v32 = a3;
          v33 = 0LL;
          if ( a2 > (__m128i *)v31 )
            v32 = 0LL;
          if ( v32 >= 0x20 )
          {
            v139 = (unsigned int)v32 & 0xFFFFFFE0;
            do
            {
              v33 += 32LL;
              *a2 = _mm_sub_epi16(_mm_loadu_si128(a2), v30);
              a2[1] = _mm_sub_epi16(_mm_loadu_si128(a2 + 1), v30);
              a2[2] = _mm_sub_epi16(_mm_loadu_si128(a2 + 2), v30);
              a2[3] = _mm_sub_epi16(_mm_loadu_si128(a2 + 3), v30);
              a2 += 4;
            }
            while ( v33 < v139 );
          }
          for ( ; a2 < (__m128i *)v31; a2 = (__m128i *)((char *)a2 + 2) )
            a2->m128i_i16[0] -= v28;
        }
      }
    }
    v34 = *(_QWORD *)(*(_QWORD *)a5 + 104LL);
    if ( (*(_DWORD *)(v34 + 1808) & 0x40000) != 0 )
      *((_DWORD *)this + 58) |= 0x100u;
    v35 = (__int64)a17;
    if ( !a17 )
    {
      v35 = AllocFreeTmpBuffer((30 * (_DWORD)v22 + 7) & 0xFFFFFFF8);
      if ( !v35 )
        return;
      *((_DWORD *)this + 58) |= 1u;
      v19 = a6;
    }
    *((_QWORD *)this + 8) = v35;
    v36 = *(_DWORD **)a5;
    v37 = *(_DWORD *)(*(_QWORD *)a5 + 208LL);
    if ( v37 != 1 || (v36[181] & 4) != 0 )
      v38 = a9;
    else
      v38 = v36[97];
    v39 = a15;
    v40 = a14;
    v41 = a13;
    v141 = v38;
    if ( (a15 & 0x18) != 0 )
    {
      if ( (a15 & 0x18) == 8 )
      {
        v41 = a13 - v36[82];
        v40 = a14 - v36[83];
      }
    }
    else
    {
      v41 = a13 - v36[80];
      v40 = a14 - v36[81];
    }
    v142 = v40;
    if ( a10 && a7 && v37 == 1 && (v36[181] & 4) == 0 )
    {
      v51 = *(_DWORD *)(v34 + 40);
      v42 = a8;
      if ( (v51 & 1) != 0 )
      {
        v52 = a7;
        if ( a8 )
        {
          v140 = &a7->m128i_i32[2 * (_DWORD)v22];
          if ( a7 < (__m128i *)v140 )
          {
            do
            {
              v52->m128i_i32[0] += a10;
              v52 = (__m128i *)((char *)v52 + 8);
            }
            while ( v52 < (__m128i *)v140 );
          }
        }
        else
        {
          v53 = 0LL;
          v54 = (int)v22;
          v55 = &a7->m128i_i32[v54];
          v56 = (unsigned __int64)(v54 * 4) >> 2;
          if ( a7 > (__m128i *)v55 )
            v56 = 0LL;
          if ( v56 >= 0x10 )
          {
            v130 = v56 & 0xFFFFFFFFFFFFFFF0uLL;
            do
            {
              v53 += 16LL;
              *v52 = _mm_add_epi32(v23, _mm_loadu_si128(v52));
              v52[1] = _mm_add_epi32(v23, _mm_loadu_si128(v52 + 1));
              v52[2] = _mm_add_epi32(v23, _mm_loadu_si128(v52 + 2));
              v52[3] = _mm_add_epi32(v23, _mm_loadu_si128(v52 + 3));
              v52 += 4;
            }
            while ( v53 < v130 );
          }
          for ( ; v52 < (__m128i *)v55; v52 = (__m128i *)((char *)v52 + 4) )
            v52->m128i_i32[0] += a10;
        }
      }
    }
    else
    {
      v42 = a8;
    }
    v43 = *(_QWORD *)a5;
    if ( v38 | *(_DWORD *)(*(_QWORD *)a5 + 388LL)
      || (*(_BYTE *)(*(_QWORD *)v19 + 32LL) & 1) == 0
      || *(float *)(*(_QWORD *)v19 + 12LL) < 0.0
      || v24 < 0.0 )
    {
      if ( v42 )
      {
        if ( v38 != *(_DWORD *)(v43 + 428) && !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, v19, v38) )
          return;
        *((_DWORD *)this + 58) |= 8u;
        v44 = v142;
        ESTROBJ::vCharPos_G4(this, a4, a5, v41, v142, a7->m128i_i32);
      }
      else if ( v38 == *(_DWORD *)(*(_QWORD *)a5 + 388LL) )
      {
        if ( a7 )
          ESTROBJ::vCharPos_G1(this, a4, a5, v41, v40, a7->m128i_i32, a16);
        else
          ESTROBJ::vCharPos_G2(this, a4, a5, v41, v40, a10, a11, a12, a16);
        v44 = v142;
      }
      else
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapement(a5, v19, v38) )
          return;
        *((_DWORD *)this + 58) |= 8u;
        *((_DWORD *)this + 1) |= 0x200u;
        v44 = v142;
        ESTROBJ::vCharPos_G3(this, a4, a5, v41, v142, a10, a11, a12, a7->m128i_i32, a16);
      }
      v45 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 11) = v45;
      v46 = HIDWORD(v45);
      if ( (a15 & 6) != 0 )
      {
        if ( (a15 & 6) == 6 )
        {
          LODWORD(v45) = (int)v45 / 2;
          v116 = 0;
          LODWORD(v46) = (int)v46 / 2;
          v115 = 0;
        }
        else
        {
          v115 = -HIDWORD(v45);
          v116 = -(int)v45;
        }
        *((_DWORD *)this + 20) = v116;
        *((_DWORD *)this + 21) = v115;
        if ( (_DWORD)v22 )
        {
          v117 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
          v118 = v22;
          do
          {
            *(v117 - 1) -= v45;
            *v117 -= v46;
            v117 += 6;
            --v118;
          }
          while ( v118 );
        }
        v41 -= v45;
        v44 -= v46;
      }
      v47 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 18) = v41;
      *((_DWORD *)this + 19) = v44;
      if ( (_DWORD)v22 )
      {
        v48 = v47 + 20;
        v49 = v22;
        do
        {
          v50 = *(_DWORD *)(v48 - 4);
          v48 += 24LL;
          *(_DWORD *)(v48 - 28) = (v50 + 8) >> 4;
          *(_DWORD *)(v48 - 24) = (*(_DWORD *)(v48 - 24) + 8) >> 4;
          --v49;
        }
        while ( v49 );
      }
    }
    else
    {
      if ( a7 )
      {
        if ( v42 )
        {
          if ( (a15 & 0xA0) != 0 )
          {
            if ( !(unsigned int)RFONTOBJ::bCalcEscapement(a5, v19, v38) )
              return;
            *((_DWORD *)this + 58) |= 8u;
            v19 = a6;
            v40 = v142;
          }
          ESTROBJ::vCharPos_H4(this, a4, a5, v41, v40, a7, LODWORD(v24), *(_DWORD *)(*(_QWORD *)v19 + 12LL));
          v57 = 0;
        }
        else
        {
          ESTROBJ::vCharPos_H1(this, a4, a5, v41, v40, a7, LODWORD(v24));
          v57 = 0;
        }
      }
      else if ( !*(_DWORD *)(v43 + 304) || a11 | a10 )
      {
        v57 = 0;
        ESTROBJ::vCharPos_H3(this, a4, a5, v41, v40, a10, a11, a12, LODWORD(v24), 0LL);
      }
      else
      {
        ESTROBJ::vCharPos_H2(this, a4, a5, v41, v40, LODWORD(v24));
        v57 = 0;
      }
      v58 = *((_DWORD *)this + 20);
      v59 = *((_DWORD *)this + 21);
      *((_DWORD *)this + 22) = v58;
      *((_DWORD *)this + 23) = v59;
      v60 = a15 & 6;
      if ( (a15 & 6) != 0 )
      {
        v107 = v58;
        if ( v60 == 6 )
          v107 = v58 / 2;
        v108 = -v58;
        v109 = 0;
        if ( v60 != 6 )
          v109 = v108;
        *((_DWORD *)this + 20) = v109;
        v110 = *((_QWORD *)this + 8);
        v111 = (v107 + 8) >> 4;
        v112 = v110 + 24;
        *(_DWORD *)(v110 + 16) -= v111;
        v41 = 16 * *(_DWORD *)(v110 + 16);
        if ( !*((_DWORD *)this + 2) && (_DWORD)v22 != 1 )
        {
          v113 = (unsigned int)(v22 - 1);
          do
          {
            v114 = v112;
            v112 += 24LL;
            *(_DWORD *)(v114 + 16) -= v111;
            --v113;
          }
          while ( v113 );
        }
      }
      v61 = a16;
      if ( a16 )
      {
        v65 = *((_DWORD *)this + 2);
        v66 = *(float *)(*(_QWORD *)a5 + 404LL);
        if ( !v65 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
        {
          v67 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
          v68 = v22 - 1;
          if ( v68 >= 4 )
          {
            v69 = ((v68 - 4) >> 2) + 1;
            v70 = v69;
            v57 = 4 * v69;
            do
            {
              LODWORD(v71) = 0;
              v72 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * v67[4] - v41));
              *(float *)v72.m128i_i32 = *(float *)v72.m128i_i32 * v66;
              v73 = _mm_cvtsi128_si32(v72);
              v74 = (unsigned __int8)(v73 >> 23);
              if ( v74 <= 0x9E )
              {
                v75 = v73 & 0x7FFFFF | 0x800000LL;
                v76 = v74 < 0x76 ? v75 >> (118 - (unsigned __int8)v74) : v75 << ((unsigned __int8)v74 - 118);
                v71 = (v76 + 0x80000000LL) >> 32;
                if ( v73 < 0 )
                  LODWORD(v71) = -(int)v71;
              }
              *v61 = v71;
              LODWORD(v77) = 0;
              v78 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * v67[10] - v41));
              *(float *)v78.m128i_i32 = *(float *)v78.m128i_i32 * v66;
              v79 = _mm_cvtsi128_si32(v78);
              v80 = (unsigned __int8)(v79 >> 23);
              if ( v80 <= 0x9E )
              {
                v81 = v79 & 0x7FFFFF | 0x800000LL;
                v82 = v80 < 0x76 ? v81 >> (118 - (unsigned __int8)v80) : v81 << ((unsigned __int8)v80 - 118);
                v77 = (v82 + 0x80000000LL) >> 32;
                if ( v79 < 0 )
                  LODWORD(v77) = -(int)v77;
              }
              v61[1] = v77;
              LODWORD(v77) = 0;
              v83 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * v67[16] - v41));
              *(float *)v83.m128i_i32 = *(float *)v83.m128i_i32 * v66;
              v84 = _mm_cvtsi128_si32(v83);
              v85 = (unsigned __int8)(v84 >> 23);
              if ( v85 <= 0x9E )
              {
                v86 = v84 & 0x7FFFFF | 0x800000LL;
                v87 = v85 < 0x76 ? v86 >> (118 - (unsigned __int8)v85) : v86 << ((unsigned __int8)v85 - 118);
                v77 = (v87 + 0x80000000LL) >> 32;
                if ( v84 < 0 )
                  LODWORD(v77) = -(int)v77;
              }
              v61[2] = v77;
              LODWORD(v77) = 0;
              v88 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * v67[22] - v41));
              *(float *)v88.m128i_i32 = *(float *)v88.m128i_i32 * v66;
              v89 = _mm_cvtsi128_si32(v88);
              v90 = (unsigned __int8)(v89 >> 23);
              if ( v90 <= 0x9E )
              {
                v91 = v89 & 0x7FFFFF | 0x800000LL;
                v92 = v90 < 0x76 ? v91 >> (118 - (unsigned __int8)v90) : v91 << ((unsigned __int8)v90 - 118);
                v77 = (v92 + 0x80000000LL) >> 32;
                if ( v89 < 0 )
                  LODWORD(v77) = -(int)v77;
              }
              v61[3] = v77;
              v67 += 24;
              v61 += 4;
              --v70;
            }
            while ( v70 );
            v18 = a5;
          }
          if ( v57 < v68 )
          {
            v93 = v67 + 4;
            v94 = v68 - v57;
            do
            {
              LODWORD(v95) = 0;
              v96 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * *v93 - v41));
              *(float *)v96.m128i_i32 = *(float *)v96.m128i_i32 * v66;
              v97 = _mm_cvtsi128_si32(v96);
              v98 = (unsigned __int8)(v97 >> 23);
              if ( v98 <= 0x9E )
              {
                v99 = v97 & 0x7FFFFF | 0x800000LL;
                v100 = v98 < 0x76 ? v99 >> (118 - (unsigned __int8)v98) : v99 << ((unsigned __int8)v98 - 118);
                v95 = (v100 + 0x80000000LL) >> 32;
                if ( v97 < 0 )
                  LODWORD(v95) = -(int)v95;
              }
              *v61 = v95;
              v93 += 6;
              ++v61;
              --v94;
            }
            while ( v94 );
            v39 = a15;
          }
          LODWORD(v101) = 0;
          v102 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(((v41 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v41));
          *(float *)v102.m128i_i32 = *(float *)v102.m128i_i32 * v66;
          v103 = _mm_cvtsi128_si32(v102);
          v104 = (unsigned __int8)(v103 >> 23);
          if ( v104 <= 0x9E )
          {
            v105 = v103 & 0x7FFFFF | 0x800000LL;
            v106 = v104 < 0x76 ? v105 >> (118 - (unsigned __int8)v104) : v105 << ((unsigned __int8)v104 - 118);
            v101 = (v106 + 0x80000000LL) >> 32;
            if ( v103 < 0 )
              LODWORD(v101) = -(int)v101;
          }
          *v61 = v101;
        }
        else
        {
          LODWORD(v131) = 0;
          v132 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v65));
          *(float *)v132.m128i_i32 = *(float *)v132.m128i_i32 * v66;
          v133 = _mm_cvtsi128_si32(v132);
          v134 = (unsigned __int8)(v133 >> 23);
          if ( v134 <= 0x9E )
          {
            v135 = v133 & 0x7FFFFF | 0x800000LL;
            v136 = v134 < 0x76 ? v135 >> (118 - (unsigned __int8)v134) : v135 << ((unsigned __int8)v134 - 118);
            v131 = (v136 + 0x80000000LL) >> 32;
            if ( v133 < 0 )
              LODWORD(v131) = -(int)v131;
          }
          v137 = 0;
          if ( (_DWORD)v22 )
          {
            v138 = v22;
            do
            {
              v137 += v131;
              *v61++ = v137;
              --v138;
            }
            while ( v138 );
          }
        }
      }
      v62 = *((_QWORD *)this + 8);
      v44 = v142;
      *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v62 + 16);
      *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v62 + 20);
    }
    if ( (v39 & 0xA0) != 0 )
    {
      *((_DWORD *)this + 58) |= v39 & 0xA0;
      v119 = *(_QWORD *)v18;
      if ( !(v141 | *(_DWORD *)(*(_QWORD *)v18 + 388LL) | a8) && (*(_BYTE *)(*(_QWORD *)a6 + 32LL) & 1) != 0 )
      {
        v120 = (int)(v41 + 8) >> 4;
        v121 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
        v122 = (v44 + 8) >> 4;
        v123 = (*((_DWORD *)this + 22) + 8) >> 4;
        if ( (v39 & 0x20) != 0 )
        {
          v124 = v120 + *(_DWORD *)(v119 + 272);
          *(_DWORD *)v121 = v124;
          *((_DWORD *)v121 + 2) = v124 + v123;
          v125 = v122 + *(_DWORD *)(*(_QWORD *)v18 + 276LL);
          *((_DWORD *)v121 + 1) = v125;
          *((_DWORD *)v121 + 3) = v125 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
          ERECTL::vOrder(v121);
          ++*((_DWORD *)this + 32);
          v119 = *(_QWORD *)v18;
          v121 = (ERECTL *)(v126 + 16);
        }
        if ( v39 < 0 )
        {
          v127 = v120 + *(_DWORD *)(v119 + 280);
          *(_DWORD *)v121 = v127;
          *((_DWORD *)v121 + 2) = v123 + v127;
          v128 = v122 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
          *((_DWORD *)v121 + 1) = v128;
          *((_DWORD *)v121 + 3) = v128 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
          ERECTL::vOrder(v121);
          ++*((_DWORD *)this + 32);
          v121 = (ERECTL *)(v129 + 16);
        }
        *(_QWORD *)v121 = 0LL;
        *((_QWORD *)v121 + 1) = 0LL;
      }
    }
    v63 = *((_DWORD *)this + 58);
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
      v64 = v63 | 0x200;
    else
      v64 = v63 & 0xFFFFFDFF;
    *((_DWORD *)this + 58) = v64;
  }
}
