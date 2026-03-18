/*
 * XREFs of ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4
 * Callers:
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5A94 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401B8EE8 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1400C71CC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x14015C564 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x14015CA68 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401D4054 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1402280BC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x140265600 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x140311D4C (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GrepSetDIBitsToDeviceInternalImpl(
        XDCOBJ *this,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        _QWORD *a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        int a14,
        void *a15)
{
  __int64 v15; // r11
  LONG v16; // r15d
  int v18; // r14d
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // rsi
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r12d
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rdx
  ULONG v32; // ecx
  unsigned int v34; // r13d
  unsigned int v35; // ecx
  __int64 v36; // rsi
  unsigned int v37; // ebx
  __int64 v38; // r8
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  LONG v42; // r10d
  LONG v43; // r9d
  LONG v44; // ecx
  LONG v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r15
  void *v48; // rax
  _DWORD *v49; // rbx
  __int64 v50; // rdi
  int IsPalDefault; // eax
  _QWORD *v52; // r8
  int Palette; // eax
  __int64 v54; // r12
  _DWORD *XlateObject; // rax
  int v56; // r13d
  __int64 v57; // rax
  unsigned int v58; // eax
  unsigned __int64 v59; // rdx
  __int64 v60; // r11
  __int64 v61; // r10
  __int64 v62; // rsi
  __int64 v63; // rdi
  LONG left; // edx
  int right; // ecx
  int top; // r9d
  int bottom; // r8d
  LONG v68; // r13d
  LONG v69; // eax
  LONG v70; // r10d
  __int64 v71; // rdi
  LONG v72; // r11d
  LONG v73; // r12d
  int v74; // eax
  int v75; // r10d
  int v76; // r11d
  int v77; // esi
  int v78; // esi
  LONG v79; // ecx
  LONG v80; // edx
  struct REGION *v82; // rdx
  struct ECLIPOBJ *v83; // rdx
  XDCOBJ *v84; // r10
  LONG v85; // esi
  int v86; // r8d
  struct _RECTL v87; // xmm1
  int v88; // r11d
  LONG v89; // edx
  LONG v90; // r12d
  LONG v91; // r13d
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ecx
  int v97; // ecx
  LONG v98; // r10d
  int v99; // eax
  int v100; // edx
  int v101; // esi
  __m128i v102; // xmm0
  bool v103; // cc
  __m128i v104; // xmm1
  LONG v105; // ecx
  int v106; // eax
  LONG v107; // r11d
  int v108; // eax
  LONG v109; // eax
  LONG v110; // edx
  LONG v111; // r8d
  signed int v112; // ecx
  struct _RECTL v113; // xmm3
  LONG v114; // eax
  LONG v115; // ecx
  struct _RECTL v116; // xmm0
  XDCOBJ *v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // r9
  __int64 v120; // rax
  int v121; // ecx
  int v122; // ecx
  int v123; // eax
  Gre::Base *v124; // rcx
  int v125; // eax
  unsigned int v126; // edx
  _BYTE *v127; // rcx
  char *v128; // rdx
  char v129; // al
  int v130; // eax
  __int64 v131; // rax
  XDCOBJ *v132; // r13
  struct REGION *v133; // rdx
  struct ECLIPOBJ *v134; // rdx
  __int64 v135; // rax
  __int16 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r8
  int v139; // r10d
  int v140; // eax
  _DWORD *v141; // rax
  _QWORD *v142; // rax
  _DWORD *v143; // rax
  float v144; // xmm2_4
  struct _CLIPOBJ *v145; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v146; // [rsp+30h] [rbp-D0h]
  __int64 v147; // [rsp+38h] [rbp-C8h]
  __int64 v148; // [rsp+40h] [rbp-C0h]
  unsigned int v149; // [rsp+60h] [rbp-A0h]
  unsigned int v150; // [rsp+64h] [rbp-9Ch]
  unsigned int v151; // [rsp+68h] [rbp-98h]
  int v153; // [rsp+70h] [rbp-90h]
  __int64 v154; // [rsp+78h] [rbp-88h]
  int v155; // [rsp+80h] [rbp-80h]
  unsigned int v156; // [rsp+84h] [rbp-7Ch]
  int v157; // [rsp+84h] [rbp-7Ch]
  LONG v158; // [rsp+84h] [rbp-7Ch]
  int v159; // [rsp+88h] [rbp-78h]
  LONG v160; // [rsp+88h] [rbp-78h]
  int v161; // [rsp+88h] [rbp-78h]
  int v162; // [rsp+8Ch] [rbp-74h]
  unsigned int v163; // [rsp+90h] [rbp-70h]
  signed int v164; // [rsp+90h] [rbp-70h]
  int v165; // [rsp+94h] [rbp-6Ch]
  unsigned int v166; // [rsp+98h] [rbp-68h]
  unsigned int v167; // [rsp+9Ch] [rbp-64h]
  unsigned int v168; // [rsp+A0h] [rbp-60h]
  void *v170; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v171; // [rsp+D0h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v173; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v174; // [rsp+F8h] [rbp-8h]
  __int64 v175; // [rsp+100h] [rbp+0h]
  __int64 v176; // [rsp+108h] [rbp+8h]
  _QWORD *v177; // [rsp+110h] [rbp+10h] BYREF
  XDCOBJ *v178; // [rsp+118h] [rbp+18h]
  __int64 v179; // [rsp+120h] [rbp+20h] BYREF
  int v180; // [rsp+128h] [rbp+28h]
  __int64 v181; // [rsp+130h] [rbp+30h] BYREF
  char v182; // [rsp+138h] [rbp+38h]
  int v183; // [rsp+13Ch] [rbp+3Ch]
  _DWORD *v184; // [rsp+140h] [rbp+40h] BYREF
  _QWORD *v185; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v186; // [rsp+150h] [rbp+50h] BYREF
  int v187; // [rsp+158h] [rbp+58h]
  int v188; // [rsp+15Ch] [rbp+5Ch]
  struct _RECTL v189; // [rsp+160h] [rbp+60h] BYREF
  int v190; // [rsp+170h] [rbp+70h] BYREF
  int v191; // [rsp+174h] [rbp+74h]
  LONG v192; // [rsp+178h] [rbp+78h] BYREF
  LONG v193; // [rsp+17Ch] [rbp+7Ch]
  __int64 v194; // [rsp+180h] [rbp+80h] BYREF
  __int64 v195; // [rsp+188h] [rbp+88h]
  __int64 v196; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v197; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v198; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v199; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v200; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v201; // [rsp+1E0h] [rbp+E0h]
  int v202; // [rsp+1E8h] [rbp+E8h]
  _QWORD v203[14]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v204; // [rsp+260h] [rbp+160h] BYREF
  struct _RECTL v205; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v206[4]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v207; // [rsp+284h] [rbp+184h]
  _BYTE v208[4]; // [rsp+320h] [rbp+220h] BYREF
  struct _RECTL v209; // [rsp+324h] [rbp+224h] BYREF
  unsigned int v210; // [rsp+470h] [rbp+370h]

  v15 = *(_QWORD *)this;
  v16 = a2;
  v18 = 1;
  v170 = a15;
  v19 = *(_QWORD *)(v15 + 976);
  v178 = this;
  v20 = *(_DWORD *)(v19 + 108);
  v177 = a10;
  if ( (v20 & 1) != 0 )
    v16 = a4 + a2 - 1;
  v194 = 0LL;
  if ( !a11 )
    goto LABEL_190;
  if ( !*a10 )
    goto LABEL_190;
  if ( a12 > 2 )
    goto LABEL_190;
  v21 = a13;
  if ( a13 < 0x28 )
    goto LABEL_190;
  v22 = *a11;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_190;
  v162 = a11[1];
  if ( v162 <= 0 )
    goto LABEL_190;
  v23 = a11[2];
  v165 = v23;
  if ( !v23 )
    goto LABEL_190;
  v24 = a11[4];
  v25 = *((unsigned __int16 *)a11 + 7);
  v156 = a11[8];
  Src[0] = (char *)a11 + v22;
  v173 = 0LL;
  v174 = 0LL;
  v176 = 0LL;
  v175 = 0LL;
  v163 = v24;
  if ( v23 < 0 )
  {
    LODWORD(v176) = 1;
    if ( v24 > 0xC )
      goto LABEL_190;
    v130 = 7225;
    if ( !_bittest(&v130, v24) )
      goto LABEL_190;
    v23 = -v23;
    v165 = v23;
  }
  v168 = 0;
  v167 = 0;
  v166 = 0;
  v159 = 0;
  v195 = 24LL;
  if ( v24 == 3 )
  {
    if ( a13 >= 0x34 )
    {
      v58 = 0;
      if ( a12 != 1 )
        v58 = a12;
      a12 = v58;
      if ( (_DWORD)v25 == 16 )
      {
        LODWORD(v173) = 4;
      }
      else
      {
        if ( (_DWORD)v25 != 32 )
          goto LABEL_190;
        LODWORD(v173) = 6;
      }
      v168 = a11[10];
      v167 = a11[11];
      v59 = v25 * (unsigned int)v162;
      v166 = a11[12];
      Src[0] = a11 + 10;
      v27 = 0;
      v151 = 0;
      v150 = 512;
      v28 = 2;
      if ( v59 <= 0xFFFFFFFF && (int)v59 + 31 >= (unsigned int)v59 )
      {
        v30 = a9;
        v149 = a9;
        v31 = a9 * (unsigned __int64)(((unsigned int)(v59 + 31) >> 3) & 0x1FFFFFFC);
        if ( v31 <= 0xFFFFFFFF )
        {
          v21 = a13;
          v155 = a8;
          goto LABEL_37;
        }
        HIDWORD(v174) = -1;
      }
LABEL_27:
      v32 = 534;
LABEL_28:
      EngSetLastError(v32);
      return 0LL;
    }
LABEL_190:
    v32 = 87;
    goto LABEL_28;
  }
  if ( v24 )
  {
    if ( v24 == 10 )
    {
      if ( !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
        goto LABEL_190;
      if ( (_DWORD)v25 != 1 )
      {
        if ( (_DWORD)v25 != 4 )
        {
          if ( (_DWORD)v25 != 8 )
          {
            if ( (_DWORD)v25 != 32 )
              goto LABEL_190;
            LODWORD(v173) = 6;
            v27 = 0;
            v150 = 512;
            v28 = 16;
LABEL_187:
            v151 = v27;
            goto LABEL_22;
          }
          goto LABEL_218;
        }
        goto LABEL_217;
      }
LABEL_185:
      LODWORD(v173) = 1;
      v27 = 2;
LABEL_186:
      v28 = 1;
      v150 = 1024;
      goto LABEL_187;
    }
    if ( v24 != 2 )
    {
      if ( v24 != 12 )
      {
        if ( v24 != 1 )
        {
          if ( v24 != 11 )
          {
            if ( v24 == 4 )
            {
              LODWORD(v173) = 9;
            }
            else
            {
              if ( v24 != 5 )
                goto LABEL_190;
              LODWORD(v173) = 10;
            }
            v27 = 0;
            v150 = 512;
            v28 = 8;
            v30 = a9;
            v149 = a9;
LABEL_36:
            LODWORD(v31) = a11[5];
            v155 = 0;
            v151 = v27;
            goto LABEL_37;
          }
          if ( !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
            goto LABEL_190;
          v23 = v165;
        }
        if ( (_DWORD)v25 != 8 )
          goto LABEL_190;
        LODWORD(v173) = 8;
        v27 = 256;
LABEL_35:
        v159 = 1;
        v30 = v23;
        v149 = v23;
        v28 = 1;
        v150 = 1024;
        goto LABEL_36;
      }
      if ( !v15 || !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
        goto LABEL_190;
      v23 = v165;
    }
    if ( (_DWORD)v25 != 4 )
      goto LABEL_190;
    LODWORD(v173) = 7;
    v27 = 16;
    goto LABEL_35;
  }
  switch ( (_DWORD)v25 )
  {
    case 1:
      goto LABEL_185;
    case 4:
LABEL_217:
      LODWORD(v173) = 2;
      v27 = 16;
      goto LABEL_186;
    case 8:
LABEL_218:
      LODWORD(v173) = 3;
      v27 = 256;
      goto LABEL_186;
  }
  v26 = 0;
  v27 = 0;
  if ( a12 != 1 )
    v26 = a12;
  v151 = 0;
  a12 = v26;
  v150 = 512;
  if ( (_DWORD)v25 == 16 )
  {
    LODWORD(v173) = 4;
    v28 = 2;
    v168 = 31744;
    v167 = 992;
    v166 = 31;
    goto LABEL_203;
  }
  if ( (_DWORD)v25 == 24 )
  {
    LODWORD(v173) = 5;
    v28 = 8;
LABEL_203:
    a12 = v26;
    goto LABEL_22;
  }
  if ( (_DWORD)v25 != 32 )
    goto LABEL_190;
  LODWORD(v173) = 6;
  v28 = 8;
LABEL_22:
  v29 = v25 * (unsigned int)v162;
  if ( v29 > 0xFFFFFFFF || (int)v29 + 31 < (unsigned int)v29 )
    goto LABEL_27;
  v30 = a9;
  v149 = a9;
  v31 = a9 * (unsigned __int64)(((unsigned int)(v29 + 31) >> 3) & 0x1FFFFFFC);
  if ( v31 > 0xFFFFFFFF )
  {
    HIDWORD(v174) = -1;
    goto LABEL_27;
  }
  v155 = a8;
LABEL_37:
  v210 = v21 - v22;
  v34 = v27;
  HIDWORD(v174) = v31;
  if ( v156 && v156 <= v27 )
    v34 = v156;
  if ( v177[1] - v177[2] < (unsigned __int64)(unsigned int)v31 )
    goto LABEL_190;
  v35 = v165;
  HIDWORD(v173) = v162;
  *(_QWORD *)&v204.left = *((_QWORD *)this + 2);
  if ( v163 - 4 > 1 )
    v35 = v30;
  LODWORD(v174) = v35;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
    goto LABEL_190;
  v36 = *(_QWORD *)(v15 + 48);
  v193 = a3;
  v192 = v16;
  if ( v163 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage(this, v163) || v139 || v170) )
    v149 = 0;
  if ( a14 )
  {
    DC::QuickInitXform(v15, &v196, 516LL);
    v57 = v196;
    if ( (*(_BYTE *)(v196 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v196, (__int64)&v192, 1LL);
      v16 = v192;
      a3 = v193;
      v57 = v196;
    }
    if ( v149 && a11[4] - 4 <= 1 )
    {
      v37 = (*(_BYTE *)(v57 + 32) & 1) != 0 ? v149 : 0;
      v149 = v37;
    }
    else
    {
      v37 = v149;
    }
  }
  else
  {
    v37 = v149;
  }
  v38 = *(_QWORD *)this;
  v39 = a4;
  v40 = a5;
  v190 = a4;
  v41 = *(_DWORD *)(v38 + 520);
  v191 = a5;
  if ( (v41 & 1) != 0 && (v41 & 2) == 0 )
  {
    v198 = *(_QWORD *)(v38 + 524);
    EPOINTL::vScale((EPOINTL *)&v190, (const struct POINTFL *)&v198);
    v40 = v191;
    v39 = v190;
  }
  v42 = a3;
  v43 = v39 + v16;
  v205.left = v16;
  v44 = v43;
  v205.top = a3;
  v205.right = v39 + v16;
  v45 = v40 + a3;
  v205.bottom = v40 + a3;
  if ( v16 > v43 )
  {
    v44 = v16;
    v205.left = v43;
    v205.right = v16;
    v16 = v43;
  }
  if ( a3 > v40 + a3 )
  {
    v45 = a3;
    v205.top = v40 + a3;
    v205.bottom = a3;
    v42 = v40 + a3;
  }
  if ( v42 == v45 || v16 == v44 || !v37 )
    return v37;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(this, (struct ERECTL *)&v205);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v203);
  v201 = 0LL;
  v200 = 0LL;
  v202 = 0;
  v203[0] = 0LL;
  memset(&v203[10], 0, 24);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v200, this, 0) )
  {
    v46 = *(_QWORD *)this;
    v47 = *(_QWORD *)(*(_QWORD *)this + 496LL);
    *(_QWORD *)&v171.left = v47;
    if ( v47 )
    {
      v48 = v170;
      v49 = 0LL;
      if ( !v170 )
      {
        v48 = *(void **)(*(_QWORD *)(v46 + 976) + 248LL);
        v170 = v48;
      }
      v157 = *(_DWORD *)(v46 + 120);
      if ( (v157 & 0x10000000) != 0 && (!v48 || v163 - 10 > 2) )
        v157 = v157 & 0xFFFFFFF | 0x20000000;
      v50 = *(_QWORD *)(v47 + 128);
      v180 = 0;
      v179 = 0LL;
      v185 = *(_QWORD **)(v46 + 88);
      IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v185);
      v52 = v185;
      if ( !IsPalDefault )
        *(_QWORD *)(v47 + 176) = *v185;
      v153 = 1;
      v154 = 0LL;
      v184 = 0LL;
      if ( a12 )
      {
        if ( a12 == 1 )
        {
          if ( v210 >= 2 * (unsigned __int64)v34 )
          {
            if ( !(unsigned int)EXLATEOBJ::bMakeXlate(&v184, Src[0], v52, v47, v34, v151) )
            {
              v54 = 0LL;
              v153 = 0;
              v49 = v184;
              goto LABEL_267;
            }
            v49 = v184;
            v154 = (__int64)v184;
            if ( *(_DWORD *)(*(_QWORD *)&v204.left + 3072LL) && (*(_DWORD *)(v36 + 40) & 1) != 0 )
            {
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v179, v28, v151, 0LL, v168, v167, v166, v150, 1) )
              {
                v138 = *(_QWORD *)(v47 + 128);
                if ( !v138 )
                  v138 = *(_QWORD *)(v36 + 1792);
                XEPALOBJ::vGetEntriesFrom(&v179, v185, v138, Src[0], v34);
                v56 = 1;
              }
              else
              {
                v56 = 0;
              }
            }
            else
            {
              v56 = 0;
            }
LABEL_89:
            v54 = (__int64)v49;
            goto LABEL_90;
          }
        }
        else
        {
          v140 = *(_DWORD *)(v47 + 96);
          if ( v140 == (_DWORD)v173 || v140 == 2 && (_DWORD)v173 == 7 || v140 == 3 && (_DWORD)v173 == 8 )
          {
            v56 = 0;
            v54 = *(_QWORD *)&v204.left + 4552LL;
            v154 = *(_QWORD *)&v204.left + 4552LL;
            goto LABEL_90;
          }
        }
      }
      else
      {
        Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v179, v28, v151, 0LL, v168, v167, v166, v150, 1);
        v54 = 0LL;
        if ( !Palette )
        {
LABEL_88:
          v153 = 0;
          v56 = 0;
          goto LABEL_89;
        }
        if ( !v34 )
        {
LABEL_65:
          LODWORD(v148) = 0xFFFFFF;
          LODWORD(v147) = 0;
          LODWORD(v146) = 0;
          XlateObject = CreateXlateObject(v170, v157, v179, v50, v185, v185, v146, v147, v148, 0);
          v184 = XlateObject;
          v49 = XlateObject;
          if ( XlateObject )
          {
            v56 = 0;
            v54 = (__int64)XlateObject;
            v154 = (__int64)XlateObject;
LABEL_90:
            v181 = 0LL;
            v182 = 0;
            v183 = 0;
            SURFMEM::bCreateDIB(
              (SURFMEM *)&v181,
              (struct _DEVBITMAPINFO *)&v173,
              (void *)(v177[2] + *v177),
              0LL,
              0,
              0LL,
              0LL,
              0,
              1,
              0,
              0);
            if ( v153 && v181 )
            {
              *(_DWORD *)(v181 + 92) = 0;
              if ( (v202 & 1) == 0 )
                goto LABEL_167;
              v60 = *(_QWORD *)v178;
              v61 = *(_DWORD *)(*(_QWORD *)v178 + 40LL) & 1LL;
              v62 = *(int *)(*(_QWORD *)v178 + 8 * v61 + 1016);
              if ( (unsigned __int64)(v62 + v205.left + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_167;
              if ( (unsigned __int64)(v62 + v205.right + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_167;
              v63 = *(int *)(v60 + 8 * v61 + 1020);
              if ( (unsigned __int64)(v63 + v205.top + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v63 + v205.bottom + 0x80000000LL) > 0xFFFFFFFF )
              {
                goto LABEL_167;
              }
              left = v62 + v205.left;
              v205.left += v62;
              right = *(_DWORD *)(v60 + 8 * v61 + 1016) + v205.right;
              v205.right = right;
              top = *(_DWORD *)(v60 + 8 * v61 + 1020) + v205.top;
              v205.top = top;
              bottom = *(_DWORD *)(v60 + 8 * v61 + 1020) + v205.bottom;
              v205.bottom = bottom;
              if ( v56 )
              {
                v131 = v179;
                if ( v179 )
                {
                  INC_SHARE_REF_CNT(v179);
                  v131 = v179;
                }
                *(_QWORD *)(v181 + 128) = v131;
                bottom = v205.bottom;
                right = v205.right;
                top = v205.top;
                left = v205.left;
              }
              v68 = a6;
              v69 = v165 - a5 - a7;
              v70 = a6 + a4;
              v71 = *(_QWORD *)(v47 + 48);
              v72 = v165 - a7;
              v204.left = a6;
              v204.top = v69;
              v204.right = a6 + a4;
              v204.bottom = v165 - a7;
              if ( v159 )
              {
                v132 = v178;
                XDCOBJ::prgnEffRao((DC **)v178);
                XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v208);
                XCLIPOBJ::vSetup((XCLIPOBJ *)v208, v133, (const struct ERECTL *)&v205, 0);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v209) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)v132 + 36LL) & 0xE0) != 0 )
                  {
                    v197 = v209;
                    XDCOBJ::vAccumulateTight(v132, v134, (struct ERECTL *)&v197);
                  }
                  v135 = v181;
                  ++*(_DWORD *)(v47 + 92);
                  if ( bClipSrcDstRectsAndValidate(
                         (struct _SURFOBJ *)(v47 + 24),
                         (struct _SURFOBJ *)((v135 + 24) & -(__int64)(v135 != 0)),
                         v132,
                         0LL,
                         v145,
                         &v205,
                         &v204) )
                  {
                    if ( (unsigned int)DC::bDpiScaleTransform(*(DC **)v132) )
                    {
                      if ( (v136 & 2) != 0 )
                        (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))(v71 + 2840))(
                          v47 + 24,
                          (v181 + 24) & -(__int64)(v181 != 0),
                          0LL,
                          v208,
                          v54,
                          v137,
                          v137,
                          &v205,
                          &v204,
                          v137,
                          3);
                      else
                        ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))EngStretchBlt)(
                          v47 + 24,
                          (v181 + 24) & -(__int64)(v181 != 0),
                          0LL,
                          v208,
                          v54,
                          v137,
                          v137,
                          &v205,
                          &v204,
                          v137,
                          3);
                    }
                    else
                    {
                      v177 = *(_QWORD **)&v204.left;
                      if ( (v136 & 0x400) != 0 )
                        (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))(v71 + 2832))(
                          v47 + 24,
                          (v181 + 24) & -(__int64)(v181 != 0),
                          v208,
                          v54,
                          &v205,
                          &v177);
                      else
                        ((void (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))EngCopyBits)(
                          v47 + 24,
                          (v181 + 24) & -(__int64)(v181 != 0),
                          v208,
                          v54,
                          &v205,
                          &v177);
                    }
                  }
                }
                goto LABEL_167;
              }
              v73 = v165 - v155 - v149;
              v189 = v204;
              if ( a6 < 0 )
                v68 = v194;
              v204.left = v68;
              if ( v73 > v69 )
                v69 = v165 - v155 - v149;
              v204.top = v69;
              if ( v162 < v70 )
                v70 = v162;
              v204.right = v70;
              if ( v165 - v155 < v72 )
                v72 = v165 - v155;
              v204.bottom = v72;
              if ( v70 < v68 )
              {
                v204.left = v70;
                goto LABEL_167;
              }
              if ( v72 < v69 )
                v69 = v72;
              v204.top = v69;
              if ( v69 == v72 || v68 == v70 )
                goto LABEL_167;
              v74 = v204.right - v189.right;
              v75 = v204.top - v189.top;
              v76 = v204.bottom - v189.bottom;
              LODWORD(Src[0]) = v68 - v189.left;
              LODWORD(Src[1]) = v204.right - v189.right;
              HIDWORD(Src[0]) = v204.top - v189.top;
              HIDWORD(Src[1]) = v204.bottom - v189.bottom;
              v77 = *(_DWORD *)(*(_QWORD *)v178 + 520LL);
              if ( (v77 & 1) == 0 || (v77 & 2) != 0 )
              {
                v78 = v68 - v189.left;
              }
              else
              {
                v194 = *(_QWORD *)(*(_QWORD *)v178 + 524LL);
                ERECTL::vScale((ERECTL *)Src, (const struct POINTFL *)&v194);
                bottom = v205.bottom;
                right = v205.right;
                top = v205.top;
                left = v205.left;
                v76 = HIDWORD(Src[1]);
                v74 = (int)Src[1];
                v75 = HIDWORD(Src[0]);
                v78 = (int)Src[0];
              }
              v79 = v74 + right;
              v80 = v78 + left;
              v205.left = v80;
              v205.right = v79;
              v205.top = v75 + top;
              v205.bottom = v76 + bottom;
              if ( v75 + top == v76 + bottom || v80 == v79 )
                goto LABEL_167;
              XDCOBJ::prgnEffRao((DC **)v178);
              XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v206);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v206, v82, (const struct ERECTL *)&v205, 0);
              if ( (_DWORD)v207 == DWORD2(v207) || DWORD1(v207) == HIDWORD(v207) )
                goto LABEL_167;
              v84 = v178;
              if ( (*(_DWORD *)(*(_QWORD *)v178 + 36LL) & 0xE0) != 0 )
              {
                v199 = v207;
                XDCOBJ::vAccumulateTight(v178, v83, (struct ERECTL *)&v199);
                v84 = v178;
              }
              if ( v163 - 4 <= 1 )
              {
                v85 = v165 - v155 - v149;
                v204.bottom += v73 - v204.top;
                v204.top = v85;
              }
              else
              {
                v204.bottom -= v73;
                v85 = v204.top - v73;
                v204.top -= v73;
              }
              ++*(_DWORD *)(v47 + 92);
              v86 = 0;
              v87 = v205;
              v88 = 0;
              v89 = v204.left;
              v189 = v205;
              v160 = v204.left;
              v186 = 0LL;
              if ( *(int *)(v47 + 112) < 0 )
              {
                v141 = *(_DWORD **)(v47 + 48);
                if ( v141 )
                {
                  if ( (v141[10] & 0x20000) != 0 )
                  {
                    v86 = v141[644];
                    v88 = v141[645];
                    v186 = __PAIR64__(v88, v86);
                  }
                }
              }
              v90 = 0;
              v187 = v86 + *(_DWORD *)(v47 + 56);
              v91 = 0;
              v188 = v88 + *(_DWORD *)(v47 + 60);
              v92 = v181 + 112;
              if ( !v181 )
                v92 = 88LL;
              if ( *(int *)v92 < 0 )
              {
                v142 = (_QWORD *)(v181 + 48);
                if ( !v181 )
                  v142 = (_QWORD *)v195;
                v143 = (_DWORD *)*v142;
                if ( v143 && (v143[10] & 0x20000) != 0 )
                {
                  v90 = v143[644];
                  v91 = v143[645];
                }
              }
              v93 = v181 + 56;
              if ( !v181 )
                v93 = 32LL;
              v158 = v90 + *(_DWORD *)v93;
              v94 = v181 + 60;
              if ( !v181 )
                v94 = 36LL;
              v164 = v91 + *(_DWORD *)v94;
              v95 = *(_QWORD *)v84;
              v96 = *(_DWORD *)(*(_QWORD *)v84 + 520LL);
              if ( (v96 & 1) != 0 && (v96 & 2) == 0 )
              {
                v195 = *(_QWORD *)(v95 + 524);
                v144 = 1.0 / *(float *)(v95 + 528);
                *(float *)&v170 = 1.0 / *(float *)&v195;
                *((float *)&v170 + 1) = v144;
                ERECTL::vScale((ERECTL *)&v186, (const struct POINTFL *)&v170);
                ERECTL::vScale((ERECTL *)&v189, (const struct POINTFL *)&v170);
                v88 = HIDWORD(v186);
                v86 = v186;
                v87 = v189;
                v89 = v160;
              }
              v97 = _mm_cvtsi128_si32((__m128i)v87);
              v171 = v87;
              v98 = v87.top;
              v99 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v87, 4));
              v161 = v89 - v97;
              v100 = v97;
              v101 = v85 - v99;
              v102 = _mm_srli_si128((__m128i)v87, 8);
              v103 = v86 <= v97;
              v104 = _mm_srli_si128((__m128i)v87, 12);
              v105 = v171.bottom;
              if ( !v103 )
                v100 = v86;
              v103 = v88 <= v99;
              v106 = _mm_cvtsi128_si32(v102);
              if ( !v103 )
                v98 = v88;
              v107 = v171.right;
              v103 = v187 < v106;
              v108 = _mm_cvtsi128_si32(v104);
              if ( v103 )
                v107 = v187;
              if ( v188 < v108 )
                v105 = v188;
              if ( v107 < v100 )
              {
                v100 = v107;
              }
              else if ( v105 < v98 )
              {
                v98 = v105;
              }
              v109 = v98 + v101;
              v110 = v161 + v100;
              v111 = v161 + v107;
              v112 = v101 + v105;
              if ( v90 > v110 )
                v110 = v90;
              v171.left = v110;
              if ( v91 > v109 )
                v109 = v91;
              v171.top = v109;
              if ( v158 < v111 )
                v111 = v158;
              v171.right = v111;
              if ( v164 < v112 )
                v112 = v164;
              v171.bottom = v112;
              if ( v111 < v110 )
              {
                v110 = v111;
                v171.left = v111;
              }
              else
              {
                if ( v112 < v109 )
                  v109 = v112;
                v171.top = v109;
              }
              v113 = v171;
              v171.left = v110 - v161;
              v114 = v109 - v101;
              v171.right = v111 - v161;
              v115 = v112 - v101;
              v171.top = v114;
              v171.bottom = v115;
              v116 = v171;
              v189 = v171;
              v197 = v113;
              if ( v110 - v161 >= v111 - v161 || v114 >= v115 )
                goto LABEL_167;
              v117 = v178;
              if ( (unsigned int)DC::bDpiScaleTransform(*(DC **)v178) )
              {
                *(_QWORD *)&v171.left = *(_QWORD *)(v118 + 524);
                ERECTL::vScale((ERECTL *)&v189, (const struct POINTFL *)&v171);
                v119 = v181;
                v116 = v189;
              }
              v120 = *(_QWORD *)v117;
              v204 = v113;
              v205 = v116;
              v121 = *(_DWORD *)(v120 + 520);
              if ( (v121 & 1) == 0 || (v121 & 2) != 0 )
                v18 = 0;
              v122 = *(_DWORD *)(v47 + 112);
              if ( v18 )
              {
                v123 = (v122 & 2) != 0
                     ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))(v71 + 2840))(
                         v47 + 24,
                         (v119 + 24) & -(__int64)(v119 != 0),
                         0LL,
                         v206,
                         v154,
                         0LL,
                         0LL,
                         &v205,
                         &v204,
                         0LL,
                         3)
                     : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))EngStretchBlt)(
                         v47 + 24,
                         (v119 + 24) & -(__int64)(v119 != 0),
                         0LL,
                         v206,
                         v154,
                         0LL,
                         0LL,
                         &v205,
                         &v204,
                         0LL,
                         3);
              }
              else
              {
                v177 = *(_QWORD **)&v197.left;
                v123 = (v122 & 0x400) != 0
                     ? (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))(v71 + 2832))(
                         v47 + 24,
                         (v119 + 24) & -(__int64)(v119 != 0),
                         v206,
                         v154,
                         &v205,
                         &v177)
                     : ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))EngCopyBits)(
                         v47 + 24,
                         (v119 + 24) & -(__int64)(v119 != 0),
                         v206,
                         v154,
                         &v205,
                         &v177);
              }
              if ( v123 )
                goto LABEL_167;
            }
            v149 = 0;
LABEL_167:
            SURFMEM::~SURFMEM((SURFMEM *)&v181);
            if ( v49 )
            {
              v125 = v49[9];
              if ( v125 >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v124) + 8 * v49[9] + 1072);
              }
              else if ( v125 == -1 )
              {
                FreeThreadBufferWithTag(v49);
              }
            }
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v179);
            v37 = v149;
            goto LABEL_172;
          }
          v153 = 0;
LABEL_267:
          v56 = 0;
          goto LABEL_90;
        }
        if ( v210 >= 4 * v34 )
        {
          if ( v163 - 10 <= 2 )
          {
            if ( v34 > *(_DWORD *)(v179 + 28) )
              v34 = *(_DWORD *)(v179 + 28);
            memmove(*(void **)(v179 + 112), Src[0], 4LL * v34);
          }
          else
          {
            v126 = *(_DWORD *)(v179 + 28);
            v127 = *(_BYTE **)(v179 + 112);
            if ( v34 <= v126 || (v34 = *(_DWORD *)(v179 + 28), v126) )
            {
              v128 = (char *)Src[0] + 1;
              do
              {
                v127[3] = 0;
                v127[2] = *(v128 - 1);
                *v127 = v128[1];
                v127 += 4;
                v129 = *v128;
                v128 += 4;
                *(v127 - 3) = v129;
                --v34;
              }
              while ( v34 );
              v47 = *(_QWORD *)&v171.left;
            }
          }
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v179);
          goto LABEL_65;
        }
      }
      EngSetLastError(0x57u);
      goto LABEL_88;
    }
  }
LABEL_172:
  DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v200);
  return v37;
}
