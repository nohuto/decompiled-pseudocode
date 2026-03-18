/*
 * XREFs of ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 *     NtGdiTransparentBlt @ 0x1401A36C0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140147E70 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x140178E70 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401960E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x1401A4910 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1401A4920 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C6E60 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x140213F34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313080 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403132A0 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313320 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403133B0 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepTransparentBlt(
        struct XDCOBJ *a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        struct XDCOBJ *a6,
        LONG a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  LONG left; // esi
  int top; // r14d
  __int64 v16; // rdx
  char v17; // al
  LONG right; // edx
  LONG bottom; // r8d
  __int64 v20; // r15
  EPOINTFIX *v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rsi
  BOOL v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  __int64 v29; // r15
  struct SURFACE *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r15
  unsigned int v33; // edi
  struct BLTINFO *v34; // rbx
  int v36; // eax
  stretch *v37; // r13
  __int64 v38; // rdi
  int v39; // ebx
  int v40; // r11d
  int v41; // r10d
  int v42; // r8d
  __int64 v43; // rdx
  LONG v44; // r9d
  __int64 v45; // rdi
  int v46; // eax
  int v47; // ebx
  __int64 v48; // rbx
  __int64 v49; // rsi
  struct REGION *v50; // rdx
  struct ECLIPOBJ *v51; // rdx
  Gre::Base *v52; // rdi
  __int64 v53; // rdx
  int inited; // eax
  struct SURFACE *v55; // rbx
  XDCOBJ *v56; // rsi
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  char *v58; // rdx
  ULONG v59; // ecx
  __int32 v60; // eax
  __int32 v61; // eax
  __int64 v62; // rbx
  struct BLTINFO *v63; // rdi
  __int32 *v64; // rcx
  struct SURFACE *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdi
  FIX x; // r9d
  FIX v69; // edi
  FIX v70; // r11d
  int v71; // r8d
  FIX y; // r10d
  int v73; // r11d
  int v74; // edi
  __int64 v75; // rcx
  int v76; // r8d
  int v77; // edx
  ULONG v78; // ecx
  LONG v79; // ecx
  int v80; // r9d
  int v81; // eax
  __int64 *v82; // rax
  bool v83; // zf
  BOOL (__stdcall *v84)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v85; // edx
  __int64 v86; // rdi
  unsigned int v87; // edx
  int *v88; // rdi
  unsigned int v89; // edx
  __int64 k; // rcx
  _BYTE *v91; // r8
  _BYTE *j; // r9
  _BYTE *v93; // rdx
  unsigned __int64 v94; // rcx
  _BYTE *v95; // rdx
  unsigned int v96; // edx
  _WORD *v97; // rdi
  __int64 i; // rcx
  size_t v99; // r8
  int v100; // edx
  SURFOBJ *v101; // rcx
  int v102; // edi
  int v104; // [rsp+68h] [rbp-A0h]
  int NearestIndexFromColorref; // [rsp+68h] [rbp-A0h]
  Gre::Base *v106; // [rsp+80h] [rbp-88h] BYREF
  int v107[2]; // [rsp+88h] [rbp-80h] BYREF
  XDCOBJ *v108; // [rsp+90h] [rbp-78h]
  struct SURFACE *v109; // [rsp+98h] [rbp-70h]
  stretch *v110; // [rsp+A0h] [rbp-68h] BYREF
  char v111; // [rsp+A8h] [rbp-60h]
  int v112; // [rsp+ACh] [rbp-5Ch]
  __int64 v113; // [rsp+B0h] [rbp-58h] BYREF
  char v114; // [rsp+B8h] [rbp-50h]
  int v115; // [rsp+BCh] [rbp-4Ch]
  __int64 v116; // [rsp+C0h] [rbp-48h] BYREF
  __int32 *v117; // [rsp+C8h] [rbp-40h]
  _DWORD v118[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-28h]
  __int64 v120; // [rsp+E8h] [rbp-20h]
  __int64 v121; // [rsp+F0h] [rbp-18h] BYREF
  __int32 *v122; // [rsp+F8h] [rbp-10h]
  __int64 v123; // [rsp+100h] [rbp-8h]
  _DWORD v124[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v125; // [rsp+118h] [rbp+10h]
  int v126; // [rsp+120h] [rbp+18h]
  int v127; // [rsp+124h] [rbp+1Ch]
  _BYTE v128[112]; // [rsp+128h] [rbp+20h] BYREF
  int v129; // [rsp+198h] [rbp+90h]
  __m128i v130; // [rsp+288h] [rbp+180h] BYREF
  RECTL prcl; // [rsp+298h] [rbp+190h] BYREF
  RECTL v132; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v133[4]; // [rsp+2B8h] [rbp+1B0h] BYREF
  RECTL v134; // [rsp+2BCh] [rbp+1B4h] BYREF
  struct _POINTFIX v135; // [rsp+358h] [rbp+250h] BYREF
  FIX v136; // [rsp+360h] [rbp+258h]
  int v137; // [rsp+364h] [rbp+25Ch]
  int v138; // [rsp+368h] [rbp+260h]
  FIX v139; // [rsp+36Ch] [rbp+264h]
  FIX v140; // [rsp+370h] [rbp+268h]
  int v141; // [rsp+374h] [rbp+26Ch]
  __m128i v142; // [rsp+378h] [rbp+270h] BYREF
  LONG v143; // [rsp+388h] [rbp+280h]
  int v144; // [rsp+38Ch] [rbp+284h]
  POINTFIX pptfx; // [rsp+398h] [rbp+290h] BYREF
  Gre::Base *v146; // [rsp+3A0h] [rbp+298h]
  Gre::Base *v147; // [rsp+3A8h] [rbp+2A0h]

  left = a7;
  top = a8;
  v108 = a6;
  v107[0] = a5;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v123 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x10000) != 0
    || ((bSpDwmValidateSurface(a6, a7, a8, a9, a10),
         bSpDwmValidateSurface(a1, a2, a3, a4, v107[0]),
         DC::QuickInitXform(*(_QWORD *)a1, &v116, 516LL),
         DC::QuickInitXform(*(_QWORD *)v108, &v121, 516LL),
         v16 = *(_QWORD *)v108,
         v109 = *(struct SURFACE **)v108,
         (*(_BYTE *)(v121 + 32) & 1) == 0)
     || (*(_BYTE *)(*(_QWORD *)(v16 + 976) + 108LL) & 1) == 0 && (*(float *)v121 < 0.0 || *(float *)(v121 + 12) < 0.0)
      ? (v17 = 1)
      : (v17 = 0),
        v17) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  right = a9 + a7;
  prcl.left = a7;
  bottom = a8 + a10;
  prcl.right = a9 + a7;
  prcl.bottom = a8 + a10;
  prcl.top = a8;
  if ( (*(_BYTE *)(v121 + 32) & 0x43) == 0x43
    || (v36 = bCvtPts1(v121, (__int64)&prcl, 2LL),
        bottom = prcl.bottom,
        right = prcl.right,
        top = prcl.top,
        left = prcl.left,
        v36) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v109 + 122) + 108LL) & 1) != 0 )
    {
      ++left;
      ++right;
      prcl.left = left;
      prcl.right = right;
    }
  }
  if ( left > right )
  {
    prcl.left = right;
    prcl.right = left;
  }
  if ( top > bottom )
  {
    prcl.top = bottom;
    prcl.bottom = top;
  }
  v20 = 4LL;
  v21 = (EPOINTFIX *)&v135;
  v22 = 4LL;
  do
  {
    EPOINTFIX::EPOINTFIX(v21);
    v21 = (EPOINTFIX *)((char *)v21 + 8);
    --v22;
  }
  while ( v22 );
  v23 = *(_QWORD *)a1;
  v24 = (*(_BYTE *)(v116 + 32) & 1) == 0
     || (*(_BYTE *)(*(_QWORD *)(v23 + 976) + 108LL) & 1) == 0 && (*(float *)v116 < 0.0 || *(float *)(v116 + 12) < 0.0);
  v25 = a2 + a4;
  v26 = a3 + v107[0];
  LODWORD(v106) = v24;
  if ( v24 )
  {
    v142.m128i_i32[2] = a2 + a4;
    v144 = a3 + v107[0];
    v142.m128i_i64[0] = __PAIR64__(a3, a2);
    v142.m128i_i32[3] = a3;
    v143 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v116, (const struct _POINTL *)&v142, &v135, 3uLL);
    x = v135.x;
    v69 = v136;
    if ( (*(_BYTE *)(v116 + 32) & 1) != 0 )
    {
      if ( v135.x > v136 )
      {
        x = v135.x + 16;
        v69 = v136 + 16;
        v138 += 16;
        v135.x += 16;
        v136 += 16;
      }
      y = v135.y;
      v70 = v139;
      v71 = v137;
      if ( v135.y > v139 )
      {
        y = v135.y + 16;
        v71 = v137 + 16;
        v70 = v139 + 16;
        v135.y += 16;
        v139 += 16;
        v137 += 16;
      }
    }
    else
    {
      v70 = v139;
      v71 = v137;
      y = v135.y;
    }
    v140 = v69 + v138 - x;
    v141 = v70 + v71 - y;
    v73 = (v69 <= v140) ^ (v69 > x);
    v74 = (v71 <= v141) ^ (v71 > y);
    if ( *(&v135.x + 2 * v73) > *(&v135.x + 2 * (v73 ^ 3LL)) )
      v73 ^= 3u;
    if ( *(&v135.y + 2 * v74) > *(&v135.y + 2 * (v74 ^ 3LL)) )
      v74 ^= 3u;
    v75 = v74 ^ 3LL;
    a3 = (*(&v135.y + 2 * v74) + 15) >> 4;
    a2 = (*(&v135.x + 2 * v73) + 15) >> 4;
    v76 = *(&v135.y + 2 * v75) + 15;
    v77 = *(&v135.x + 2 * (v73 ^ 3LL)) + 15;
    v130.m128i_i32[0] = a2;
    v25 = v77 >> 4;
    v26 = v76 >> 4;
    v130.m128i_i64[1] = __PAIR64__(v26, v25);
    goto LABEL_83;
  }
  v130.m128i_i64[0] = __PAIR64__(a3, a2);
  v130.m128i_i32[2] = a2 + a4;
  v130.m128i_i32[3] = a3 + v107[0];
  if ( (*(_BYTE *)(v116 + 32) & 0x43) == 0x43
    || (v27 = bCvtPts1(v116, (__int64)&v130, 2LL),
        v26 = v130.m128i_i32[3],
        v25 = v130.m128i_i32[2],
        a3 = v130.m128i_i32[1],
        a2 = v130.m128i_i32[0],
        v27) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v23 + 976) + 108LL) & 1) != 0 )
    {
      ++a2;
      ++v25;
      v130.m128i_i32[0] = a2;
      v130.m128i_i32[2] = v25;
    }
  }
  if ( a2 > v25 )
  {
    v61 = a2;
    v130.m128i_i32[0] = v25;
    a2 = v25;
    v130.m128i_i32[2] = v61;
    v25 = v61;
  }
  if ( a3 > v26 )
  {
    v60 = a3;
    a3 = v26;
    v26 = v60;
    v130.m128i_i32[3] = v60;
LABEL_83:
    v130.m128i_i32[1] = a3;
  }
  if ( a3 == v26 || a2 == v25 )
  {
    v33 = 1;
LABEL_43:
    v34 = (struct BLTINFO *)&v142;
    do
    {
      v34 = (struct BLTINFO *)((char *)v34 - 8);
      vSrcCopyDummy(v34);
      --v20;
    }
    while ( v20 );
    return v33;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v130);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v128);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v128, (struct _ERESOURCE ***)a1, v108) )
  {
    v102 = XDCOBJ::bFullScreen(v108);
    v33 = XDCOBJ::bFullScreen(a1) | v102;
    goto LABEL_42;
  }
  v29 = *(_QWORD *)a1;
  v30 = *(struct SURFACE **)(*(_QWORD *)a1 + 496LL);
  v109 = v30;
  if ( !v30
    || (v31 = *((_QWORD *)v30 + 16), v32 = *(_QWORD *)(v29 + 88), !*(_QWORD *)(*(_QWORD *)v108 + 496LL))
    || (v37 = XDCOBJ::pSurfaceEff(v108)) == 0LL )
  {
    v33 = 1;
    v20 = 4LL;
LABEL_42:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v128);
    goto LABEL_43;
  }
  if ( (v129 & 0x400000) == 0 || !(unsigned int)DestSurfaceAccessCheck(v30) )
  {
    v59 = 6;
LABEL_76:
    EngSetLastError(v59);
    v33 = 0;
    goto LABEL_77;
  }
  v38 = *(_QWORD *)a1;
  v39 = 0;
  v40 = prcl.bottom;
  v41 = prcl.right;
  v42 = prcl.top;
  v43 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1;
  v44 = prcl.left;
  v142 = v130;
  v107[0] = *(_DWORD *)(v38 + 8 * v43 + 1016);
  v104 = _mm_cvtsi128_si32(v130);
  if ( (unsigned __int64)(v107[0] + (__int64)v104 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_52;
  v30 = v109;
  if ( (unsigned __int64)(v107[0] + (__int64)v130.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_52;
  v64 = (__int32 *)*(int *)(v38 + 8 * v43 + 1020);
  v117 = v64;
  if ( (unsigned __int64)v64 + v130.m128i_i32[1] + 0x80000000LL > 0xFFFFFFFF )
    goto LABEL_52;
  v30 = v109;
  if ( (unsigned __int64)v117 + v130.m128i_i32[3] + 0x80000000LL > 0xFFFFFFFF )
    goto LABEL_52;
  v130.m128i_i32[0] = v107[0] + v104;
  v130.m128i_i32[2] += *(_DWORD *)(v38 + 8 * v43 + 1016);
  v130.m128i_i32[1] += *(_DWORD *)(v38 + 8 * v43 + 1020);
  v130.m128i_i32[3] += *(_DWORD *)(v38 + 8 * v43 + 1020);
  v65 = *(struct SURFACE **)v108;
  v66 = *(_DWORD *)(*(_QWORD *)v108 + 40LL) & 1;
  v107[0] = *(_DWORD *)(*(_QWORD *)v108 + 8 * v66 + 1016);
  v30 = v109;
  if ( (unsigned __int64)(prcl.left + (__int64)v107[0] + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v107[0] + (__int64)prcl.right + 0x80000000LL) > 0xFFFFFFFF
    || (v67 = *((int *)v65 + 2 * v66 + 255), v30 = v109, (unsigned __int64)(v67 + prcl.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v67 + prcl.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_52:
    v39 = 1;
  }
  else
  {
    v44 = v107[0] + prcl.left;
    prcl.left += v107[0];
    v41 = *((_DWORD *)v65 + 2 * v66 + 254) + prcl.right;
    prcl.right = v41;
    v42 = *((_DWORD *)v65 + 2 * v66 + 255) + prcl.top;
    prcl.top = v42;
    v40 = *((_DWORD *)v65 + 2 * v66 + 255) + prcl.bottom;
    prcl.bottom = v40;
  }
  v45 = *((_QWORD *)v37 + 6);
  if ( *((_WORD *)v37 + 50) == 1 && v45 && (*(_DWORD *)(v45 + 40) & 0x20000) != 0 )
  {
    v79 = *(_DWORD *)(v45 + 2576);
    if ( v44 >= v79 )
    {
      v80 = *(_DWORD *)(v45 + 2580);
      if ( v42 >= v80 && v41 <= *((_DWORD *)v37 + 14) + v79 && v40 <= v80 + *((_DWORD *)v37 + 15) )
      {
        v46 = 0;
        goto LABEL_59;
      }
    }
LABEL_117:
    v46 = 1;
    goto LABEL_59;
  }
  if ( v44 < 0 || v42 < 0 || v41 > *((_DWORD *)v37 + 14) || v40 > *((_DWORD *)v37 + 15) )
    goto LABEL_117;
  v46 = 0;
LABEL_59:
  v47 = v46 | v39;
  if ( v37 == v30 )
  {
    v132 = prcl;
    ERECTL::operator*=(&v132.left, v130.m128i_i32);
    if ( !ERECTL::bEmpty((ERECTL *)&v132) )
      v47 = 1;
  }
  if ( v47 )
  {
    v59 = 87;
    goto LABEL_76;
  }
  v48 = *((_QWORD *)v37 + 16);
  v49 = *(_QWORD *)(*(_QWORD *)v108 + 88LL);
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v48, v49, a11, 1LL);
  XDCOBJ::prgnEffRao((DC **)a1);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v133);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v133, v50, (const struct ERECTL *)&v130, 0);
  if ( !ERECTL::bEmpty((ERECTL *)&v134) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
    {
      v132 = v134;
      XDCOBJ::vAccumulateTight(a1, v51, (__m128i *)&v132);
    }
    v110 = 0LL;
    v111 = 0;
    v112 = 0;
    if ( (GetAppCompatFlags2(1024LL, (__int64)v51) & 0x8000000) != 0 )
    {
      v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL);
      if ( (v81 & 1) != 0 && (v81 & 9) != 9 )
      {
        v117 = (__int32 *)((char *)v37 + 56);
        v118[1] = *((_DWORD *)v37 + 14);
        v122 = (__int32 *)((char *)v37 + 60);
        v118[2] = *((_DWORD *)v37 + 15);
        v118[0] = *((_DWORD *)v37 + 24);
        v82 = (__int64 *)*((_QWORD *)v37 + 16);
        v118[3] = 0;
        v120 = 0LL;
        if ( v82 )
          v119 = *v82;
        else
          v119 = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v110, (struct _DEVBITMAPINFO *)v118, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v110
          || ((v83 = (*((_DWORD *)v37 + 28) & 0x400) == 0,
               *(_QWORD *)&v132.left = 0LL,
               *(_QWORD *)v107 = 0LL,
               v132.right = *v117,
               v132.bottom = *v122,
               v83)
            ? (v84 = EngCopyBits)
            : (v84 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v45 + 2832)),
              !((unsigned int (__fastcall *)(char *, char *, _QWORD, _QWORD, RECTL *, int *))v84)(
                 (char *)v110 + 24,
                 (char *)v37 + 24,
                 0LL,
                 0LL,
                 &v132,
                 v107)
           || (v85 = *((_DWORD *)v110 + 24), (unsigned int)(v85 - 1) > 5)) )
        {
          SURFMEM::~SURFMEM((SURFMEM *)&v110);
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v128);
LABEL_135:
          `vector destructor iterator'(&v135, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
          return 0LL;
        }
        ((void (*)(void))(&stretch::apfnMirror)[v85])();
        v37 = v110;
      }
    }
    v113 = 0LL;
    v114 = 0;
    v115 = 0;
    if ( !(_DWORD)v106 )
      goto LABEL_66;
    v124[1] = v130.m128i_i32[2] - v130.m128i_i32[0];
    v124[2] = v130.m128i_i32[3] - v130.m128i_i32[1];
    v124[0] = *((_DWORD *)v37 + 24);
    v126 = *((_DWORD *)v37 + 28) & 0x40000;
    v124[3] = 0;
    v127 = 0;
    v125 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v113, (struct _DEVBITMAPINFO *)v124, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      v86 = v113;
      v87 = *(_DWORD *)(v113 + 64);
      switch ( *((_DWORD *)v37 + 24) )
      {
        case 1:
          v99 = *(unsigned int *)(v113 + 64);
          if ( NearestIndexFromColorref )
            v100 = 255;
          else
            v100 = 0;
          break;
        case 2:
          v99 = *(unsigned int *)(v113 + 64);
          v100 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
          break;
        case 3:
          v99 = *(unsigned int *)(v113 + 64);
          v100 = NearestIndexFromColorref;
          break;
        default:
          switch ( *((_DWORD *)v37 + 24) )
          {
            case 4:
              v96 = v87 >> 1;
              v97 = *(_WORD **)(v113 + 72);
              if ( v96 )
              {
                for ( i = v96; i; --i )
                  *v97++ = NearestIndexFromColorref;
              }
              break;
            case 5:
              v91 = *(_BYTE **)(v113 + 80);
              for ( j = &v91[*(_DWORD *)(v113 + 60) * *(_DWORD *)(v113 + 88)]; v91 != j; v91 += *(int *)(v86 + 88) )
              {
                v93 = v91;
                v94 = (unsigned __int64)&v91[3 * *(_DWORD *)(v86 + 56) - 2];
                if ( (unsigned __int64)v91 < v94 )
                {
                  do
                  {
                    *v93 = NearestIndexFromColorref;
                    v95 = v93 + 1;
                    *v95++ = BYTE1(NearestIndexFromColorref);
                    *v95 = BYTE2(NearestIndexFromColorref);
                    v93 = v95 + 1;
                  }
                  while ( (unsigned __int64)v93 < v94 );
                  v86 = v113;
                }
              }
              break;
            case 6:
              v88 = *(int **)(v113 + 72);
              v89 = v87 >> 2;
              if ( v89 )
              {
                for ( k = v89; k; --k )
                  *v88++ = NearestIndexFromColorref;
              }
              break;
          }
          goto LABEL_165;
      }
      memset_0(*(void **)(v113 + 72), v100, v99);
LABEL_165:
      `vector constructor iterator'((char *)&pptfx, 8LL, 3LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
      LODWORD(v106) = v135.x - 16 * v142.m128i_i32[0];
      HIDWORD(v106) = v135.y - 16 * v142.m128i_i32[1];
      pptfx = (POINTFIX)v106;
      LODWORD(v106) = v136 - 16 * v142.m128i_i32[0];
      HIDWORD(v106) = v137 - 16 * v142.m128i_i32[1];
      v146 = v106;
      LODWORD(v106) = v138 - 16 * v142.m128i_i32[0];
      HIDWORD(v106) = v139 - 16 * v142.m128i_i32[1];
      v147 = v106;
      if ( v113 )
        v101 = (SURFOBJ *)(v113 + 24);
      else
        v101 = 0LL;
      EngPlgBlt(
        v101,
        (SURFOBJ *)((char *)v37 + 24),
        0LL,
        0LL,
        (XLATEOBJ *)(v123 + 4552),
        0LL,
        0LL,
        &pptfx,
        &prcl,
        0LL,
        3u);
      v37 = (stretch *)v113;
      prcl.left = 0;
      prcl.top = 0;
      prcl.right = v130.m128i_i32[2] - v130.m128i_i32[0];
      prcl.bottom = v130.m128i_i32[3] - v130.m128i_i32[1];
      `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_66:
      v52 = 0LL;
      v53 = *(_QWORD *)a1;
      v106 = 0LL;
      if ( *(_QWORD *)(*(_QWORD *)v108 + 496LL) == *(_QWORD *)(v53 + 496)
        || (inited = EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v106,
                       0LL,
                       0,
                       v48,
                       v31,
                       v49,
                       v32,
                       *(_DWORD *)(*(_QWORD *)(v53 + 976) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v53 + 976) + 176LL),
                       -1,
                       0),
            v52 = v106,
            inited) )
      {
        v55 = v109;
        v56 = v108;
        ++*((_DWORD *)v109 + 23);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 48LL) == *(_QWORD *)(*(_QWORD *)v56 + 48LL)
          || (unsigned int)XDCOBJ::bRedirHooked(a1)
          && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3512LL) == *(_QWORD *)(*(_QWORD *)v56 + 48LL) )
        {
          if ( (*((_DWORD *)v55 + 28) & 0x8000) != 0 )
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v55 + 6) + 3272LL);
          else
            v57 = EngTransparentBlt;
          v58 = (char *)v37 + 24;
          if ( !v37 )
            v58 = 0LL;
          v33 = ((__int64 (__fastcall *)(char *, char *, _BYTE *, Gre::Base *, __m128i *, RECTL *, int, _DWORD))v57)(
                  (char *)v55 + 24,
                  v58,
                  v133,
                  v52,
                  &v130,
                  &prcl,
                  NearestIndexFromColorref,
                  0);
          goto LABEL_74;
        }
        v78 = 87;
      }
      else
      {
        v78 = 6;
      }
      EngSetLastError(v78);
      v33 = 0;
LABEL_74:
      EXLATEOBJ::vAltUnlock(&v106);
      SURFMEM::~SURFMEM((SURFMEM *)&v113);
      SURFMEM::~SURFMEM((SURFMEM *)&v110);
LABEL_77:
      v20 = 4LL;
      goto LABEL_42;
    }
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v113);
    SURFMEM::~SURFMEM((SURFMEM *)&v110);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v128);
    goto LABEL_135;
  }
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v128);
  v62 = 4LL;
  v63 = (struct BLTINFO *)&v142;
  do
  {
    v63 = (struct BLTINFO *)((char *)v63 - 8);
    vSrcCopyDummy(v63);
    --v62;
  }
  while ( v62 );
  return 1LL;
}
