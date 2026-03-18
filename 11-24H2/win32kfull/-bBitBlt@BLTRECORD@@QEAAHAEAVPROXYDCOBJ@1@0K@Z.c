/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x140015998
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x1400158E8 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464 (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1400D3F30 (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1400D4898 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(BLTRECORD *this, DC **a2, struct SURFACE **a3, char a4)
{
  const struct ERECTL *v4; // rdi
  int v6; // eax
  int v8; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // r13d
  DC *v14; // rax
  int v16; // r14d
  int v17; // ecx
  DC *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int32 *v21; // r14
  __int32 v22; // edx
  int v23; // ecx
  struct SURFACE *v24; // rdi
  struct SURFACE *v25; // rax
  int v26; // r9d
  char v27; // cl
  __int64 v28; // rcx
  int v29; // r11d
  __int64 v30; // rax
  int v31; // r8d
  __int32 v32; // r9d
  int v33; // edx
  __int32 v34; // eax
  __int64 v35; // rcx
  __int32 v36; // r10d
  int v37; // r11d
  int v38; // r8d
  __int32 v39; // eax
  int v40; // eax
  int v41; // eax
  struct REGION *v42; // rdx
  __m128i v43; // xmm1
  __int32 v44; // edx
  unsigned __int64 v45; // xmm0_8
  int v46; // r8d
  int v47; // r12d
  __int64 v48; // rsi
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rcx
  bool v53; // cf
  __m128i *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _BYTE *v57; // r8
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  DC *v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int (*v67)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v68; // rbx
  int (*v69)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rdi
  struct SURFACE *v70; // rax
  __int64 v71; // r11
  struct REGION *v72; // rdx
  int v73; // ecx
  int v74; // edx
  int v75; // r8d
  SURFACE *v76; // rbx
  int (*v77)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v78; // edi
  __int64 v79; // rsi
  int (*v80)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r14
  struct SURFACE *v81; // rax
  __int64 v82; // r8
  int (*v83)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  int v86; // r9d
  struct ECLIPOBJ *v87; // rdx
  int v88; // ecx
  int v89; // r10d
  __int64 v90; // r11
  int v91; // edi
  int v92; // r13d
  __int64 v93; // rax
  struct ECLIPOBJ *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // r9d
  int v98; // r10d
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  __int64 v102; // rcx
  struct REGION *v103; // rdx
  __m128i v104; // xmm1
  unsigned __int64 v105; // xmm0_8
  int v106; // edx
  __int32 v107; // r8d
  __int32 v108; // ecx
  __int32 v109; // edx
  __int32 v110; // eax
  __int32 v111; // eax
  int v112; // esi
  __int64 v113; // rdi
  int (*v114)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbx
  struct SURFACE *v115; // rax
  __int64 v116; // r11
  int v117; // r9d
  int v118; // ecx
  __int64 v119; // r10
  int v120; // ecx
  int v121; // ecx
  int v122; // r8d
  int v123; // r9d
  __int64 v124; // r10
  int v125; // r11d
  int v126; // edi
  struct ECLIPOBJ *v127; // rdx
  __int64 v128; // rax
  __m128i *v129; // [rsp+28h] [rbp-D8h]
  char *v130; // [rsp+30h] [rbp-D0h]
  char *v131; // [rsp+38h] [rbp-C8h]
  __int64 v132; // [rsp+40h] [rbp-C0h]
  char *v133; // [rsp+48h] [rbp-B8h]
  int v134; // [rsp+50h] [rbp-B0h]
  __m128i v135; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v136; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v137[4]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v138; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v139[4]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v140; // [rsp+124h] [rbp+24h] BYREF

  v4 = (BLTRECORD *)((char *)this + 128);
  v6 = *((_DWORD *)this + 32);
  v8 = *((_DWORD *)this + 34);
  if ( v6 > v8 )
  {
    *(_DWORD *)v4 = v8;
    *((_DWORD *)v4 + 2) = v6;
  }
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 3);
  if ( v11 > v12 )
  {
    *((_DWORD *)v4 + 1) = v12;
    *((_DWORD *)v4 + 3) = v11;
  }
  v13 = 0;
  if ( !(unsigned int)DC::bTightenRao(*a2) )
    return 0LL;
  v14 = *a2;
  if ( !*((_QWORD *)*a2 + 62) )
    return 1LL;
  v16 = a4 & 0xD4;
  if ( v16 )
  {
    if ( !*a3 || !*((_QWORD *)*a3 + 62) )
      return 1LL;
  }
  v17 = *((_DWORD *)v14 + 9);
  if ( (v17 & 0xE0) != 0 )
  {
    if ( (v17 & 0x20) != 0 )
    {
      if ( *(_DWORD *)v4 < *((_DWORD *)v14 + 266) )
        *((_DWORD *)v14 + 266) = *(_DWORD *)v4;
      v58 = *((_DWORD *)v4 + 1);
      if ( v58 < *((_DWORD *)v14 + 267) )
        *((_DWORD *)v14 + 267) = v58;
      v59 = *((_DWORD *)v4 + 2);
      if ( v59 > *((_DWORD *)v14 + 268) )
        *((_DWORD *)v14 + 268) = v59;
      v60 = *((_DWORD *)v4 + 3);
      if ( v60 > *((_DWORD *)v14 + 269) )
        *((_DWORD *)v14 + 269) = v60;
    }
    v61 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x80u) != 0 )
    {
      if ( *(_DWORD *)v4 < *((_DWORD *)v61 + 274) )
        *((_DWORD *)v61 + 274) = *(_DWORD *)v4;
      v62 = *((_DWORD *)v4 + 1);
      if ( v62 < *((_DWORD *)v61 + 275) )
        *((_DWORD *)v61 + 275) = v62;
      v63 = *((_DWORD *)v4 + 2);
      if ( v63 > *((_DWORD *)v61 + 276) )
        *((_DWORD *)v61 + 276) = v63;
      v64 = *((_DWORD *)v4 + 3);
      if ( v64 > *((_DWORD *)v61 + 277) )
        *((_DWORD *)v61 + 277) = v64;
    }
  }
  v18 = *a2;
  v19 = *((_DWORD *)*a2 + 10) & 1;
  *(_DWORD *)v4 += *((_DWORD *)*a2 + 2 * v19 + 254);
  *((_DWORD *)v4 + 2) += *((_DWORD *)v18 + 2 * v19 + 254);
  *((_DWORD *)v4 + 1) += *((_DWORD *)v18 + 2 * v19 + 255);
  *((_DWORD *)v4 + 3) += *((_DWORD *)v18 + 2 * v19 + 255);
  v20 = *(_QWORD *)(*((_QWORD *)this + 6) + 48LL);
  if ( !v16 )
  {
    XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v137);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v137, v72, v4, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v138) )
      return 1LL;
    if ( *((int *)this + 40) < 0 )
    {
      v73 = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = *((_DWORD *)this + 44);
      *((_DWORD *)this + 44) = v73;
    }
    if ( *((int *)this + 41) < 0 )
    {
      v88 = *((_DWORD *)this + 43);
      *((_DWORD *)this + 43) = *((_DWORD *)this + 45);
      *((_DWORD *)this + 45) = v88;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v117 = *((_DWORD *)this + 42);
      if ( v117 < 0 )
        goto LABEL_90;
      v118 = *((_DWORD *)this + 43);
      if ( v118 < 0 )
        goto LABEL_90;
      if ( v74 < 0 )
        v74 = -v74;
      v119 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v119 + 56) - v117 < v74 )
        goto LABEL_90;
      if ( v75 < 0 )
        v75 = -v75;
      if ( *(_DWORD *)(v119 + 60) - v118 < v75 )
        goto LABEL_90;
      *((_DWORD *)this + 42) = v117 + v138.m128i_i32[0] - *((_DWORD *)this + 32);
      *((_DWORD *)this + 43) = v118 + v138.m128i_i32[1] - *((_DWORD *)this + 33);
    }
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v94 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
      if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v94]) & 0xE8) == 0
        || (v95 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v95 + 120) & 0x100) == 0 )
      {
        v135 = v138;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v94, (struct ERECTL *)&v135);
      }
    }
    ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
    v76 = (SURFACE *)*((_QWORD *)this + 6);
    v77 = SURFACE::pfnBitBlt(v76);
    v78 = *((_DWORD *)this + 48);
    v79 = *((_QWORD *)this + 10);
    v80 = v77;
    v81 = BLTRECORD::pSurfMskOut(this);
    v134 = v78;
    v133 = (char *)this + 184;
    v132 = v79;
    v131 = (char *)this + 168;
    v130 = 0LL;
    v129 = (__m128i *)((char *)this + 128);
    v82 = ((unsigned __int64)v81 + 24) & -(__int64)(v81 != 0LL);
    v83 = v80;
    v84 = ((unsigned __int64)v76 + 24) & -(__int64)(v76 != 0LL);
    v85 = 0LL;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, char *, char *, __int64, char *, int))v83)(
             v84,
             v85,
             v82,
             v137,
             0LL,
             v129,
             v130,
             v131,
             v132,
             v133,
             v134);
  }
  v21 = (__int32 *)((char *)this + 160);
  v22 = *((_DWORD *)this + 40);
  v23 = *((_DWORD *)this + 41);
  if ( v22 >= *((_DWORD *)this + 38) )
    v22 = *((_DWORD *)this + 38);
  *v21 = v22;
  if ( v23 >= *((_DWORD *)this + 39) )
    v23 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 41) = v23;
  if ( *((_DWORD *)this + 38) > v22 )
  {
    v120 = *((_DWORD *)this + 42);
    *((_DWORD *)this + 42) = *((_DWORD *)this + 44);
    *((_DWORD *)this + 44) = v120;
  }
  if ( *((_DWORD *)this + 39) > *((_DWORD *)this + 41) )
  {
    v121 = *((_DWORD *)this + 43);
    *((_DWORD *)this + 43) = *((_DWORD *)this + 45);
    *((_DWORD *)this + 45) = v121;
  }
  v24 = a3[14];
  if ( !v24 )
    v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)a3);
  v25 = a2[14];
  if ( !v25 )
    v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)a2);
  if ( v24 == v25 )
  {
    v96 = *((_QWORD *)this + 7);
    v97 = 0;
    v98 = 0;
    v99 = *(_QWORD *)(v96 + 48);
    if ( v99 && v96 == *(_QWORD *)(v99 + 2544) && _bittest((const signed __int32 *)(v99 + 40), 0x11u) )
    {
      v97 = *(_DWORD *)(v99 + 2576);
      v98 = *(_DWORD *)(v99 + 2580);
    }
    v100 = *((_DWORD *)this + 32) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 254) - *v21;
    *((_DWORD *)this + 38) = v100;
    v101 = *((_DWORD *)this + 33) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 255) - *((_DWORD *)this + 41);
    v136.m128i_i32[0] = v100 + v97;
    *((_DWORD *)this + 39) = v101;
    v102 = *((_QWORD *)this + 6);
    v136.m128i_i32[1] = v101 + v98;
    v136.m128i_i32[2] = v97 + v100 + *(_DWORD *)(v102 + 56);
    v136.m128i_i32[3] = v98 + v101 + *(_DWORD *)(v102 + 60);
    ERECTL::operator*=(&v136, (char *)this + 128);
    XDCOBJ::prgnEffRao((XDCOBJ *)a2);
    XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v137);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v137, v103, (const struct ERECTL *)&v136, 0);
    v104 = v138;
    v105 = _mm_srli_si128(v138, 8).m128i_u64[0];
    v136 = v138;
    if ( v138.m128i_i32[0] == (_DWORD)v105 || v138.m128i_i32[1] == HIDWORD(v105) )
      return 1LL;
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      v122 = *((_DWORD *)this + 42);
      if ( v122 < 0 )
        goto LABEL_90;
      v123 = *((_DWORD *)this + 43);
      if ( v123 < 0 )
        goto LABEL_90;
      v124 = *((_QWORD *)this + 8);
      v125 = *((_DWORD *)this + 32);
      if ( *(_DWORD *)(v124 + 56) - v122 < *((_DWORD *)this + 34) - v125 )
        goto LABEL_90;
      v126 = *((_DWORD *)this + 33);
      if ( *(_DWORD *)(v124 + 60) - v123 < *((_DWORD *)this + 35) - v126 )
        goto LABEL_90;
      *((_DWORD *)this + 42) = v122 + v106 - v125;
      *((_DWORD *)this + 43) = v123 + _mm_cvtsi128_si32(_mm_srli_si128(v104, 4)) - v126;
    }
    if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
    {
      v127 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
      if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v127]) & 0xE8) == 0
        || (v128 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v128 + 120) & 0x100) == 0 )
      {
        v135 = v104;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v127, (struct ERECTL *)&v135);
      }
    }
    v107 = v136.m128i_i32[0];
    v108 = v136.m128i_i32[0] - *((_DWORD *)this + 38);
    v109 = v136.m128i_i32[1];
    v110 = v136.m128i_i32[1];
    *v21 = v108;
    v111 = v110 - *((_DWORD *)this + 39);
    *((_DWORD *)this + 41) = v111;
    if ( v108 >= v107 )
      v136.m128i_i32[2] += v108 - v107;
    else
      v136.m128i_i32[0] = v108;
    if ( v111 >= v109 )
      v136.m128i_i32[3] += v111 - v109;
    else
      v136.m128i_i32[1] = v111;
    ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
    v112 = *((_DWORD *)this + 48);
    v113 = *((_QWORD *)this + 6);
    if ( v112 == 52428 )
    {
      if ( (*(_DWORD *)(v113 + 112) & 0x400) != 0 )
        v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2832);
      else
        v49 = EngCopyBits;
      v57 = v137;
      v55 = (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL);
      v56 = (v113 + 24) & -(__int64)(v113 != 0);
      v54 = &v138;
      v51 = 0LL;
      return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v49)(
               v56,
               v55,
               v57,
               v51,
               v54,
               (char *)this + 160);
    }
    v114 = SURFACE::pfnBitBlt(*((SURFACE **)this + 6));
    v115 = BLTRECORD::pSurfMskOut(this);
    v134 = v112;
    v133 = (char *)this + 184;
    v132 = v116;
    v131 = (char *)this + 168;
    v130 = (char *)this + 160;
    v82 = ((unsigned __int64)v115 + 24) & -(__int64)(v115 != 0LL);
    v85 = (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL);
    v84 = (v113 + 24) & -(__int64)(v113 != 0);
    v129 = &v138;
    v83 = v114;
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, _QWORD, __m128i *, char *, char *, __int64, char *, int))v83)(
             v84,
             v85,
             v82,
             v137,
             0LL,
             v129,
             v130,
             v131,
             v132,
             v133,
             v134);
  }
  v26 = *((_DWORD *)*a2 + 9);
  if ( (v26 & 0x200) == 0 || !v20 || (v27 = 1, !_bittest((const signed __int32 *)(v20 + 40), 0x11u)) )
    v27 = 0;
  if ( *((_QWORD *)*a2 + 6) != *((_QWORD *)*a3 + 6)
    && (v26 & 0x4000) == 0
    && !_bittest((const signed __int32 *)*a3 + 9, 0xEu)
    && !v27
    && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a2) + 50)
     || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a2) + 3))
    && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a3) + 50)
     || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff((BLTRECORD::PROXYDCOBJ *)a3) + 3)) )
  {
    goto LABEL_90;
  }
  v28 = *((_QWORD *)this + 7);
  v29 = 0;
  v30 = *(_QWORD *)(v28 + 48);
  if ( v30 && v28 == *(_QWORD *)(v30 + 2544) && _bittest((const signed __int32 *)(v30 + 40), 0x11u) )
  {
    v29 = *(_DWORD *)(v30 + 2576);
    v13 = *(_DWORD *)(v30 + 2580);
  }
  v31 = *((_DWORD *)this + 32) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 254) - *v21;
  *((_DWORD *)this + 38) = v31;
  v32 = v29 + v31;
  v33 = *((_DWORD *)this + 33) - *((_DWORD *)*a3 + 2 * (*((_DWORD *)*a3 + 10) & 1) + 255) - *((_DWORD *)this + 41);
  *((_DWORD *)this + 39) = v33;
  v34 = *((_DWORD *)this + 32);
  v35 = *((_QWORD *)this + 7);
  v136.m128i_i32[0] = v32;
  v36 = v33 + v13;
  v136.m128i_i32[1] = v33 + v13;
  v37 = v31 + *(_DWORD *)(v35 + 56) + v29;
  v136.m128i_i32[2] = v37;
  v38 = v33 + v13 + *(_DWORD *)(v35 + 60);
  if ( v34 > v32 )
    v32 = v34;
  v39 = *((_DWORD *)this + 33);
  v136.m128i_i32[0] = v32;
  if ( v39 > v36 )
    v36 = v39;
  v40 = *((_DWORD *)this + 34);
  v136.m128i_i32[1] = v36;
  if ( v40 < v37 )
    v37 = v40;
  v41 = *((_DWORD *)this + 35);
  v136.m128i_i32[2] = v37;
  if ( v41 < v38 )
    v38 = v41;
  v136.m128i_i32[3] = v38;
  if ( v37 < v32 )
  {
    v136.m128i_i32[0] = v37;
  }
  else
  {
    if ( v38 < v36 )
      v36 = v38;
    v136.m128i_i32[1] = v36;
  }
  XDCOBJ::prgnEffRao((XDCOBJ *)a2);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v139);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v139, v42, (const struct ERECTL *)&v136, 0);
  v43 = v140;
  v44 = v140.m128i_i32[0];
  v45 = _mm_srli_si128(v140, 8).m128i_u64[0];
  v136 = v140;
  if ( v140.m128i_i32[0] == (_DWORD)v45 || v140.m128i_i32[1] == HIDWORD(v45) )
    return 1LL;
  v46 = _mm_cvtsi128_si32(_mm_srli_si128(v140, 4));
  if ( (*((_DWORD *)this + 49) & 0x10000) == 0 || !*((_QWORD *)this + 8) )
    goto LABEL_45;
  v86 = *((_DWORD *)this + 42);
  if ( v86 >= 0 )
  {
    v89 = *((_DWORD *)this + 43);
    if ( v89 >= 0 )
    {
      v90 = *((_QWORD *)this + 8);
      v91 = *((_DWORD *)this + 32);
      if ( *(_DWORD *)(v90 + 56) - v86 >= *((_DWORD *)this + 34) - v91 )
      {
        v92 = *((_DWORD *)this + 33);
        if ( *(_DWORD *)(v90 + 60) - v89 >= *((_DWORD *)this + 35) - v92 )
        {
          *((_DWORD *)this + 42) = v86 + v140.m128i_i32[0] - v91;
          *((_DWORD *)this + 43) = v89 + v46 - v92;
LABEL_45:
          *v21 = v44 - *((_DWORD *)this + 38);
          *((_DWORD *)this + 41) = v46 - *((_DWORD *)this + 39);
          if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
          {
            v87 = (struct ECLIPOBJ *)(unsigned __int8)*((_DWORD *)this + 48);
            if ( ((gajRop3[*((unsigned __int8 *)this + 193)] | gajRop3[(_QWORD)v87]) & 0xE8) == 0
              || (v93 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v93 + 120) & 0x100) == 0 )
            {
              v135 = v43;
              XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v87, (struct ERECTL *)&v135);
            }
          }
          if ( (*((_DWORD *)*a3 + 9) & 1) != 0 )
          {
            v65 = *((_DWORD *)this + 38);
            v136.m128i_i32[0] -= v65;
            v136.m128i_i32[2] -= v65;
            v66 = *((_DWORD *)this + 39);
            v136.m128i_i32[1] -= v66;
            v136.m128i_i32[3] -= v66;
          }
          ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
          v47 = *((_DWORD *)this + 48);
          v48 = *((_QWORD *)this + 6);
          if ( v47 != 52428 )
          {
            v67 = SURFACE::pfnBitBlt(*((SURFACE **)this + 6));
            v68 = *((_QWORD *)this + 9);
            v69 = v67;
            v70 = BLTRECORD::pSurfMskOut(this);
            return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, _BYTE *, __int64, __m128i *, char *, char *, __int64, char *, int))v69)(
                     (v48 + 24) & -(__int64)(v48 != 0),
                     (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL),
                     ((unsigned __int64)v70 + 24) & -(__int64)(v70 != 0LL),
                     v139,
                     v68,
                     &v140,
                     (char *)this + 160,
                     (char *)this + 168,
                     v71,
                     (char *)this + 184,
                     v47);
          }
          if ( (*(_DWORD *)(v48 + 112) & 0x400) != 0 )
            v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2832);
          else
            v49 = EngCopyBits;
          v50 = *((_QWORD *)this + 7);
          v51 = *((_QWORD *)this + 9);
          v52 = v50 + 24;
          v53 = v50 != 0;
          v54 = &v140;
          v55 = v52 & -(__int64)v53;
          v56 = (v48 + 24) & -(__int64)(v48 != 0);
          v57 = v139;
          return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, char *))v49)(
                   v56,
                   v55,
                   v57,
                   v51,
                   v54,
                   (char *)this + 160);
        }
      }
    }
  }
LABEL_90:
  EngSetLastError(0x57u);
  return 0LL;
}
