/*
 * XREFs of ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1401858D0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140059708 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x14015C564 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401749C8 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401B8D54 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1401DB594 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1402280BC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x140311D2C (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GreStretchDIBitsInternalImpl(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        __int64 a15)
{
  unsigned int v16; // esi
  unsigned int v17; // r13d
  char v18; // r14
  __int64 v19; // r14
  unsigned int v20; // ecx
  DC *v21; // r9
  __int64 v22; // r8
  int v23; // r15d
  BOOL v24; // ebx
  int v25; // ecx
  unsigned int v26; // r8d
  __int64 v27; // r10
  unsigned int v28; // r11d
  int v29; // ebx
  __int64 v30; // r15
  int v31; // r12d
  unsigned int v32; // r14d
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // edi
  unsigned __int64 v38; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // rdi
  DC *v43; // r11
  int v44; // r8d
  int v45; // edx
  int v46; // r9d
  char v47; // cl
  Gre::Base *v48; // rcx
  int v49; // eax
  void *v50; // r8
  bool v51; // zf
  Gre::Base *v52; // rcx
  __int64 v54; // rcx
  LONG v55; // r8d
  unsigned int v56; // edi
  int v57; // eax
  int v58; // r9d
  int v59; // ecx
  char v60; // bl
  int v61; // edx
  struct REGION *v62; // rdx
  struct ECLIPOBJ *v63; // rdx
  _DWORD *v64; // r8
  __int64 v65; // rax
  int v66; // r14d
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r11
  char *v68; // r9
  unsigned int v69; // edx
  int v70; // ecx
  unsigned int v71; // eax
  ULONG v72; // ecx
  struct Gre::Base::SESSION_GLOBALS *v73; // r13
  __int64 v74; // r13
  __int64 v75; // rbx
  _DWORD *XlateObject; // r15
  unsigned int v77; // edx
  unsigned int v78; // edi
  DC *v79; // rdx
  __int64 v80; // rdx
  int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // r8d
  int v84; // r12d
  int v85; // r14d
  HDC CompatibleDC; // rax
  unsigned int v87; // ebx
  HDC v88; // r15
  __int64 DIBitmapReal; // rax
  __int64 v90; // rdi
  int v91; // eax
  int v92; // ecx
  int v93; // ebx
  __int64 v94; // rcx
  unsigned __int64 v95; // rdx
  unsigned int v96; // r8d
  __int64 v97; // r8
  __int64 v98; // [rsp+30h] [rbp-D0h]
  int v99[2]; // [rsp+38h] [rbp-C8h]
  __int64 v100; // [rsp+40h] [rbp-C0h]
  __int64 v101; // [rsp+48h] [rbp-B8h]
  unsigned int v102; // [rsp+80h] [rbp-80h]
  unsigned int v103; // [rsp+84h] [rbp-7Ch]
  unsigned int v104; // [rsp+88h] [rbp-78h]
  unsigned int v105; // [rsp+8Ch] [rbp-74h]
  char v106; // [rsp+90h] [rbp-70h]
  unsigned int v107; // [rsp+94h] [rbp-6Ch]
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  int v109; // [rsp+A8h] [rbp-58h]
  unsigned int v110; // [rsp+ACh] [rbp-54h]
  int v111; // [rsp+B0h] [rbp-50h]
  unsigned int v112; // [rsp+B4h] [rbp-4Ch]
  __int128 v113; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-38h]
  unsigned int v115; // [rsp+D8h] [rbp-28h]
  unsigned int v116; // [rsp+DCh] [rbp-24h]
  unsigned int v117; // [rsp+E0h] [rbp-20h]
  int v118; // [rsp+E4h] [rbp-1Ch]
  int v119; // [rsp+E8h] [rbp-18h]
  int v120; // [rsp+ECh] [rbp-14h]
  DC *v121; // [rsp+F0h] [rbp-10h] BYREF
  char v122; // [rsp+F8h] [rbp-8h]
  int v123; // [rsp+FCh] [rbp-4h]
  __int64 v124; // [rsp+100h] [rbp+0h]
  int v125[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v126; // [rsp+110h] [rbp+10h] BYREF
  int v127; // [rsp+118h] [rbp+18h]
  void *Src; // [rsp+120h] [rbp+20h]
  __int64 v129; // [rsp+128h] [rbp+28h] BYREF
  char v130; // [rsp+130h] [rbp+30h]
  int v131; // [rsp+134h] [rbp+34h]
  __int64 v132; // [rsp+138h] [rbp+38h] BYREF
  DC *v133[3]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v134; // [rsp+158h] [rbp+58h]
  _OWORD v135[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  HDC v136[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v137; // [rsp+1E8h] [rbp+E8h]
  int v138; // [rsp+260h] [rbp+160h] BYREF
  int v139; // [rsp+264h] [rbp+164h]
  int v140; // [rsp+268h] [rbp+168h]
  int v141; // [rsp+26Ch] [rbp+16Ch]
  struct Gre::Base::SESSION_GLOBALS *v142; // [rsp+270h] [rbp+170h] BYREF
  int v143; // [rsp+278h] [rbp+178h]
  int v144; // [rsp+27Ch] [rbp+17Ch]
  RECTL prclDest; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v146[4]; // [rsp+290h] [rbp+190h] BYREF
  RECTL v147; // [rsp+294h] [rbp+194h] BYREF
  _BYTE v148[96]; // [rsp+330h] [rbp+230h] BYREF

  v16 = 0;
  v17 = a12;
  pptlSrc = (POINTL)a10;
  v124 = a15;
  v120 = a3;
  v119 = a4;
  v18 = gajRop3[BYTE2(a13)];
  v125[0] = a2;
  v112 = a12;
  v142 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v133, (HDC)a1, v142);
  if ( !v133[0] )
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v133);
    return 0LL;
  }
  if ( (v18 & 0xD4) == 0 )
  {
    v71 = GrepPatBlt(v133, v125[0], v120, v119, a5, a13);
LABEL_108:
    v16 = v71;
    goto LABEL_95;
  }
  if ( !a11 )
    goto LABEL_95;
  if ( !**(_QWORD **)&pptlSrc )
    goto LABEL_95;
  if ( a12 > 2 )
    goto LABEL_95;
  if ( a14 < 0xC )
    goto LABEL_95;
  v19 = *a11;
  LODWORD(v121) = v19;
  if ( a14 < (unsigned int)v19 || (unsigned int)v19 < 0x28 || (int)a11[1] <= 0 || !a11[2] )
    goto LABEL_95;
  v118 = *(unsigned __int8 *)(*((_QWORD *)v133[0] + 122) + 215LL);
  DC::QuickInitXform(v133[0], &v132, 516LL);
  v20 = a11[4];
  v21 = v133[0];
  v22 = v132;
  if ( v20 - 4 <= 1 )
  {
    if ( v20 == 4 )
    {
      if ( (*((_DWORD *)v133[0] + 19) & 1) == 0 || *((_DWORD *)v133[0] + 8) == 1 )
        goto LABEL_95;
    }
    else if ( v20 != 5 || !(unsigned int)XDCOBJ::bSupportsPNG((XDCOBJ *)v133) )
    {
      goto LABEL_95;
    }
    if ( BYTE2(a13) != 204 || (*(_BYTE *)(v22 + 32) & 1) == 0 || a12 || v124 )
      goto LABEL_95;
  }
  if ( v119 != a8 )
  {
    v23 = a7;
    goto LABEL_14;
  }
  v69 = a9;
  if ( a5 == a9 && a9 > 0 )
  {
    v23 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v118 != 4 && (*(_DWORD *)(v22 + 32) & 2) != 0 )
    {
      v70 = -a11[2];
      if ( (int)a11[2] > 0 )
        v70 = a11[2];
      if ( a9 >= v70 )
        v69 = v70;
      v71 = GrepSetDIBitsToDeviceInternalImpl(
              (XDCOBJ *)v133,
              v125[0],
              v120,
              v119,
              a5,
              a6,
              a7,
              a7,
              v69,
              *(_QWORD **)&pptlSrc,
              a11,
              a12,
              a14,
              1,
              (void *)v124);
      goto LABEL_108;
    }
  }
  else
  {
    v23 = a7;
  }
LABEL_14:
  v24 = 0;
  if ( a12 == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v136);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v136, (struct XDCOBJ *)v133, 0) )
    {
      v94 = *((_QWORD *)v133[0] + 62);
      if ( v94 )
        v24 = *(_DWORD *)(v94 + 96) == 1;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ(v136);
    v21 = v133[0];
    v22 = v132;
  }
  if ( BYTE2(a13) != 204 || (*(_BYTE *)(v22 + 32) & 1) == 0 || v24 )
  {
    v84 = a11[2];
    if ( v84 <= 0 )
      v85 = v23;
    else
      v85 = v84 - v23 - a9;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v146, (struct XDCOBJ *)v133);
    CompatibleDC = GrepCreateCompatibleDC((struct OPTAPIDCOBJ *)v146);
    v87 = a11[4];
    v88 = CompatibleDC;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v148);
    if ( v87 - 1 > 1 )
      DIBitmapReal = GrepCreateDIBitmapReal(
                       (OPTAPIDCOBJ *)v146,
                       4,
                       *(__int64 **)&pptlSrc,
                       a11,
                       a12,
                       a14,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    else
      DIBitmapReal = GrepCreateDIBitmapComp(
                       (struct OPTAPIDCOBJ *)v146,
                       a11[1],
                       a11[2],
                       *(_QWORD *)&pptlSrc,
                       (__int64)a11,
                       a12,
                       a14,
                       v124);
    v90 = DIBitmapReal;
    if ( v88 && DIBitmapReal )
    {
      GreSelectBitmap(v88, DIBitmapReal);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v136, v88);
      v93 = GrepStretchBlt(
              (struct XDCOBJ *)v133,
              v125[0],
              v120,
              v119,
              a5,
              (struct OPTAPIDCOBJ *)v136,
              a6,
              v85,
              a8,
              a9,
              a13,
              0xFFFFFFu,
              1u);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v136);
      GrepDeleteDC(v88, 0x400000LL);
      GreDeleteObject(v90);
      if ( v93 )
        v16 = v84;
    }
    else
    {
      GrepDeleteDC(v88, 0x400000LL);
      GreDeleteObject(v90);
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v148);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v146);
    goto LABEL_95;
  }
  v25 = a11[2];
  v26 = a11[4];
  v27 = a11[1];
  v28 = a11[8];
  v29 = 0;
  v30 = *((unsigned __int16 *)a11 + 7);
  v31 = 1;
  Src = (char *)a11 + v19;
  v32 = 0;
  v114 = 0LL;
  v104 = v26;
  v113 = 0LL;
  v111 = v27;
  v33 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v110 = v28;
  v102 = 0;
  if ( v25 < 0 )
    v33 = 1;
  v103 = 0;
  DWORD2(v114) = v33;
  v34 = -v25;
  v117 = 0;
  v116 = 0;
  v115 = 0;
  if ( v25 >= 0 )
    v34 = v25;
  v109 = 0;
  v105 = v34;
  if ( v26 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v82 = 0;
      if ( a12 != 1 )
        v82 = a12;
      v112 = v82;
      v17 = v82;
      if ( (_DWORD)v30 == 16 )
      {
        LODWORD(v113) = 4;
      }
      else if ( (_DWORD)v30 == 32 )
      {
        LODWORD(v113) = 6;
      }
      else
      {
        EngSetLastError(0x57u);
        v21 = v133[0];
        v31 = 0;
        LODWORD(v27) = v111;
      }
      v117 = a11[10];
      v32 = 512;
      v95 = v30 * (unsigned int)v27;
      v116 = a11[11];
      v96 = a11[12];
      Src = a11 + 10;
      v115 = v96;
      v102 = 0;
      v103 = 2;
      if ( v95 > 0xFFFFFFFF || (int)v95 + 31 < (unsigned int)v95 )
        goto LABEL_115;
      v37 = v105;
      v38 = v105 * (unsigned __int64)(((unsigned int)(v95 + 31) >> 3) & 0x1FFFFFFC);
      if ( v38 <= 0xFFFFFFFF )
      {
        v39 = 2;
        v40 = 0;
        goto LABEL_38;
      }
      goto LABEL_114;
    }
    goto LABEL_192;
  }
  if ( v26 )
  {
    if ( v26 != 10 )
    {
      if ( v26 != 2 )
      {
        if ( v26 != 12 )
        {
          if ( v26 == 1 )
            goto LABEL_236;
          if ( v26 != 11 )
          {
            if ( v26 == 4 )
            {
              LODWORD(v113) = 9;
            }
            else
            {
              if ( v26 != 5 )
                goto LABEL_192;
              LODWORD(v113) = 10;
            }
            LODWORD(v38) = a11[5];
            v39 = 8;
            v103 = 8;
            v40 = 0;
            v102 = 0;
            v32 = 512;
            HIDWORD(v113) = v38;
            v37 = v34;
            goto LABEL_41;
          }
          if ( v21 && (unsigned int)DC::bIsCMYKColor(v21) )
          {
LABEL_236:
            if ( (_DWORD)v30 != 8 )
            {
              EngSetLastError(0x57u);
              v21 = v133[0];
              v31 = 0;
            }
            LODWORD(v38) = a11[5];
            LODWORD(v113) = 8;
            v32 = 1024;
            v29 = 1;
            v102 = 256;
            v103 = 1;
            HIDWORD(v113) = v38;
          }
          else
          {
            EngSetLastError(0x57u);
            v21 = v133[0];
            v31 = 0;
            LODWORD(v38) = HIDWORD(v113);
          }
          v40 = v102;
          v37 = v105;
          v109 = v29;
          v39 = v103;
          goto LABEL_39;
        }
        if ( !v21 || !(unsigned int)DC::bIsCMYKColor(v21) )
          goto LABEL_192;
      }
      if ( (_DWORD)v30 != 4 )
      {
        EngSetLastError(0x57u);
        v21 = v133[0];
        v31 = 0;
      }
      LODWORD(v38) = a11[5];
      v40 = 16;
      v37 = v105;
      v32 = 1024;
      LODWORD(v113) = 7;
      v102 = 16;
      v39 = 1;
      v103 = 1;
      v109 = 1;
      goto LABEL_38;
    }
    if ( !v21 || !(unsigned int)DC::bIsCMYKColor(v21) )
      goto LABEL_192;
    switch ( (_DWORD)v30 )
    {
      case 1:
        v102 = 2;
        LODWORD(v113) = 1;
        v103 = 1;
        goto LABEL_111;
      case 4:
        LODWORD(v113) = 2;
        v102 = 16;
        break;
      case 8:
        LODWORD(v113) = 3;
        v102 = 256;
        break;
      case 0x20:
        v103 = 16;
        goto LABEL_33;
      default:
LABEL_192:
        v72 = 87;
        goto LABEL_116;
    }
    v103 = 1;
    goto LABEL_111;
  }
  switch ( (_DWORD)v30 )
  {
    case 1:
      LODWORD(v113) = 1;
      v102 = 2;
LABEL_110:
      v103 = 1;
LABEL_111:
      v32 = 1024;
      goto LABEL_34;
    case 4:
      LODWORD(v113) = 2;
      v102 = 16;
      goto LABEL_110;
    case 8:
      LODWORD(v113) = 3;
      v102 = 256;
      goto LABEL_110;
  }
  v35 = 0;
  if ( a12 != 1 )
    v35 = a12;
  v112 = v35;
  v17 = v35;
  if ( (_DWORD)v30 == 24 )
  {
    LODWORD(v113) = 5;
    v103 = 8;
LABEL_176:
    v102 = 0;
    v32 = 512;
    v112 = v35;
    goto LABEL_34;
  }
  if ( (_DWORD)v30 == 16 )
  {
    LODWORD(v113) = 4;
    v117 = 31744;
    v116 = 992;
    v115 = 31;
    v103 = 2;
    goto LABEL_176;
  }
  if ( (_DWORD)v30 != 32 )
    goto LABEL_192;
  v103 = 8;
LABEL_33:
  v102 = 0;
  v32 = 512;
  LODWORD(v113) = 6;
LABEL_34:
  v36 = v30 * v27;
  if ( (unsigned __int64)(v30 * v27) > 0xFFFFFFFF || v36 + 31 < v36 )
    goto LABEL_115;
  v37 = v105;
  v38 = v105 * (unsigned __int64)(((v36 + 31) >> 3) & 0x1FFFFFFC);
  if ( v38 > 0xFFFFFFFF )
  {
LABEL_114:
    HIDWORD(v113) = -1;
LABEL_115:
    v72 = 534;
LABEL_116:
    EngSetLastError(v72);
    goto LABEL_95;
  }
  v39 = v103;
  v40 = v102;
LABEL_38:
  HIDWORD(v113) = v38;
LABEL_39:
  if ( !v31 )
    goto LABEL_95;
  LODWORD(v27) = v111;
  v26 = v104;
  v28 = v110;
LABEL_41:
  v107 = a14 - (_DWORD)v121;
  v41 = v124;
  if ( !v124 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)v21 + 122) + 248LL);
    v124 = v41;
  }
  v111 = *((_DWORD *)v21 + 30);
  if ( (v111 & 0x10000000) != 0 && (!v41 || v26 - 10 > 2) )
    v111 = v111 & 0xFFFFFFF | 0x20000000;
  *(_QWORD *)((char *)&v113 + 4) = __PAIR64__(v37, v27);
  if ( v28 )
  {
    v83 = v40;
    if ( v28 <= v40 )
      v83 = v28;
    v110 = v83;
  }
  else
  {
    v110 = v40;
  }
  if ( *(_QWORD *)(*(_QWORD *)&pptlSrc + 8LL) - *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL) < (unsigned __int64)(unsigned int)v38 )
    goto LABEL_192;
  v42 = *((_QWORD *)v21 + 6);
  v138 = v125[0];
  v140 = v125[0] + v119;
  v139 = v120;
  v141 = v120 + a5;
  DC::QuickInitXform(v21, v125, 516LL);
  v43 = v133[0];
  v121 = v133[0];
  if ( (*(_BYTE *)(*(_QWORD *)v125 + 32LL) & 0x43) == 0x43 )
    goto LABEL_50;
  if ( (unsigned int)bCvtPts1(*(__int64 *)v125, (__int64)&v138, 2LL) )
  {
    v43 = v133[0];
LABEL_50:
    v44 = v138;
    v45 = v140;
    if ( (*(_BYTE *)(*((_QWORD *)v121 + 122) + 108LL) & 1) != 0 )
    {
      v44 = v138 + 1;
      v45 = v140 + 1;
      ++v138;
      ++v140;
    }
    if ( v44 == v45 || (v46 = v139, v139 == v141) )
    {
      v16 = a9;
      goto LABEL_95;
    }
    v47 = 0;
    v106 = 0;
    if ( v44 > v45 )
    {
      v138 = v45;
      v140 = v44;
      if ( (*(_BYTE *)(*((_QWORD *)v43 + 122) + 108LL) & 1) == 0 )
      {
        v138 = v45 + 1;
        v140 = v44 + 1;
      }
      v47 = 1;
      v106 = 1;
    }
    if ( v139 > v141 )
    {
      v139 = v141 + 1;
      v141 = v46 + 1;
      v106 = v47 ^ 2;
    }
    v127 = 0;
    v126 = 0LL;
    if ( !v17 )
      v31 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v126, v39, v40, 0LL, v117, v116, v115, v32, 1) != 0 ? v31 : 0;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v136);
    if ( !v31 || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v136, (struct XDCOBJ *)v133, 0) )
      goto LABEL_94;
    Gre::Base::Globals(v48);
    v49 = *(_DWORD *)(*((_QWORD *)v133[0] + 6) + 40LL) & 0x8000;
    *(_QWORD *)&v114 = 0LL;
    DWORD2(v114) |= 8 * v49;
    v129 = 0LL;
    v130 = 0;
    v131 = 0;
    v50 = (void *)(**(_QWORD **)&pptlSrc + *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL));
    if ( v109 )
    {
      v121 = 0LL;
      v122 = 0;
      v135[0] = v113;
      v123 = 0;
      v135[1] = v114;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v121, (struct _DEVBITMAPINFO *)v135, v50, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
        && (LODWORD(v113) = ((_DWORD)v113 != 7) + 2,
            SURFMEM::bCreateDIB((SURFMEM *)&v129, (struct _DEVBITMAPINFO *)&v113, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) )
      {
        *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v113 + 4);
        *(_QWORD *)&prclDest.left = 0LL;
        pptlSrc = 0LL;
        EngCopyBits(
          (SURFOBJ *)((v129 + 24) & -(__int64)(v129 != 0)),
          (SURFOBJ *)(((unsigned __int64)v121 + 24) & -(__int64)(v121 != 0LL)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      else
      {
        v31 = 0;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v121);
      v51 = v31 == 0;
    }
    else
    {
      v51 = SURFMEM::bCreateDIB((SURFMEM *)&v129, (struct _DEVBITMAPINFO *)&v113, v50, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) == 0;
    }
    if ( v51 )
    {
LABEL_93:
      SURFMEM::~SURFMEM((SURFMEM *)&v129);
LABEL_94:
      DEVLOCKOBJ::~DEVLOCKOBJ(v136);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v126);
      goto LABEL_95;
    }
    v73 = Gre::Base::Globals(v52);
    if ( *((_QWORD *)v133[0] + 62) )
    {
      v74 = v134;
      if ( !v134 )
        v74 = *((_QWORD *)v133[0] + 62);
    }
    else
    {
      v74 = *((_QWORD *)v73 + 533);
    }
    v75 = *(_QWORD *)(v74 + 128);
    XlateObject = 0LL;
    v121 = (DC *)*((_QWORD *)v133[0] + 11);
    pptlSrc = 0LL;
    v109 = 0;
    if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v121) )
      *(_QWORD *)(v74 + 176) = *(_QWORD *)v121;
    if ( v112 )
    {
      if ( v112 == 1 )
      {
        if ( v107 < 2 * (unsigned __int64)v110
          || !(unsigned int)EXLATEOBJ::bMakeXlate(&pptlSrc, Src, v121, v74, v110, v102) )
        {
          goto LABEL_92;
        }
        XlateObject = (_DWORD *)pptlSrc;
        if ( *((_DWORD *)v142 + 768) && (*(_DWORD *)(v42 + 40) & 1) != 0 )
        {
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v126, v103, v102, 0LL, v117, v116, v115, v32, 1) )
          {
            v97 = *(_QWORD *)(v74 + 128);
            if ( !v97 )
              v97 = *(_QWORD *)(v42 + 1792);
            XEPALOBJ::vGetEntriesFrom(&v126, v121, v97, Src, v110);
            v109 = 1;
          }
          else
          {
            v31 = 0;
          }
        }
        v78 = v104;
      }
      else
      {
        v78 = v104;
        if ( v112 != 2 )
          goto LABEL_130;
        if ( *(_DWORD *)(v74 + 96) != (_DWORD)v113 )
          v31 = 0;
        XlateObject = (_DWORD *)((char *)v142 + 4552);
      }
    }
    else
    {
      v77 = v110;
      if ( v110 )
      {
        if ( v107 < 4 * v110 )
          goto LABEL_92;
        v78 = v104;
        if ( v104 - 10 > 2 )
        {
          XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v126, (struct tagRGBQUAD *)Src, 0, v110);
        }
        else
        {
          if ( v110 > *(_DWORD *)(v126 + 28) )
            v77 = *(_DWORD *)(v126 + 28);
          memmove(*(void **)(v126 + 112), Src, 4LL * v77);
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v126);
        }
        LODWORD(v101) = 0;
        LODWORD(v100) = 0xFFFFFF;
        v99[0] = 0;
        LODWORD(v98) = 0;
        pptlSrc = (POINTL)CreateXlateObject((void *)v124, v111, v126, v75, v121, v121, v98, *(_QWORD *)v99, v100, v101);
        XlateObject = (_DWORD *)pptlSrc;
        if ( !*(_QWORD *)&pptlSrc )
          v31 = 0;
      }
      else
      {
        LODWORD(v101) = 0;
        LODWORD(v100) = 0xFFFFFF;
        v99[0] = 0;
        LODWORD(v98) = 0;
        v78 = v104;
        XlateObject = CreateXlateObject((void *)v124, v111, v126, v75, v121, v121, v98, *(_QWORD *)v99, v100, v101);
        pptlSrc = (POINTL)XlateObject;
        if ( !XlateObject )
          v31 = 0;
      }
    }
    if ( v31 )
    {
LABEL_130:
      v79 = v133[0];
      if ( (*((_DWORD *)v133[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v133, (struct ERECTL *)&v138);
        v79 = v133[0];
      }
      if ( *((_QWORD *)v79 + 62) && !(unsigned int)DC::bInFullScreen(v79) )
      {
        if ( (v137 & 1) != 0 )
        {
          v54 = *(_DWORD *)(v80 + 40) & 1LL;
          v55 = a6;
          v138 += *(_DWORD *)(v80 + 8 * v54 + 1016);
          v140 += *(_DWORD *)(v80 + 8 * v54 + 1016);
          v139 += *(_DWORD *)(v80 + 8 * v54 + 1020);
          v141 += *(_DWORD *)(v80 + 8 * v54 + 1020);
          LODWORD(v142) = a6;
          if ( v78 == 4 && (BYTE8(v114) & 1) != 0 )
          {
            v58 = a7;
            v57 = a9;
            v56 = v105;
          }
          else
          {
            v56 = v105;
            v57 = a9;
            v58 = v105 - a7 - a9;
          }
          v59 = v58 + v57;
          v60 = v106;
          v61 = a6 + a8;
          HIDWORD(v142) = v58;
          v144 = v58 + v57;
          v143 = a6 + a8;
          if ( a6 > a6 + a8 )
          {
            v55 = v61 + 1;
            v60 = v106 ^ 1;
            v61 = a6 + 1;
            LODWORD(v142) = v55;
            v143 = a6 + 1;
          }
          if ( v58 > v59 )
          {
            v91 = v58;
            v60 ^= 2u;
            v58 = v59 + 1;
            HIDWORD(v142) = v59 + 1;
            v59 = v91 + 1;
            v144 = v91 + 1;
          }
          if ( v61 > 0
            && v59 > 0
            && v58 != v59
            && v55 < *(_DWORD *)(v129 + 56)
            && v58 < *(_DWORD *)(v129 + 60)
            && v55 != v61 )
          {
            XDCOBJ::prgnEffRao(v133);
            XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v146);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v146, v62, (const struct ERECTL *)&v138, 0);
            if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v147) )
            {
              v16 = v56;
            }
            else
            {
              if ( (*((_DWORD *)v133[0] + 9) & 0xE0) != 0 )
              {
                prclDest = v147;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v133, v63, (__m128i *)&prclDest);
              }
              if ( v109 )
              {
                XEPALOBJ::vRefPalette((XEPALOBJ *)&v126);
                *(_QWORD *)(v129 + 128) = v126;
              }
              v64 = XlateObject;
              v65 = *(_QWORD *)(v74 + 48);
              v66 = v118;
              if ( (*(_DWORD *)(v74 + 112) & 2) != 0 )
              {
                v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v65 + 2840);
                if ( (*(_DWORD *)(v65 + 40) & 0x20000) == 0 )
                {
                  if ( v118 == 4 && (*((_BYTE *)v133[0] + 72) & 0x10) == 0 )
                    v67 = EngStretchBlt;
                  if ( (int)v142 < 0
                    || SHIDWORD(v142) < 0
                    || v143 > *(_DWORD *)(v129 + 56)
                    || v144 > *(_DWORD *)(v129 + 60) )
                  {
                    v67 = EngStretchBlt;
                    v64 = XlateObject;
                  }
                }
              }
              else
              {
                v67 = EngStretchBlt;
              }
              if ( (v60 & 1) != 0 )
              {
                v81 = v138;
                v138 = v140;
                v140 = v81;
              }
              if ( (v60 & 2) != 0 )
              {
                v92 = v139;
                v139 = v141;
                v141 = v92;
              }
              ++*(_DWORD *)(v74 + 92);
              v68 = 0LL;
              if ( *((__int16 *)v133[0] + 89) >= 0 )
                v68 = (char *)v133[0] + 176;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, _DWORD *, char *, char *, int *, struct Gre::Base::SESSION_GLOBALS **, _QWORD, int))v67)(
                     v74 + 24,
                     (v129 + 24) & -(__int64)(v129 != 0),
                     0LL,
                     v146,
                     v64,
                     v68,
                     (char *)v133[0] + 1192,
                     &v138,
                     &v142,
                     0LL,
                     v66) )
              {
                v16 = v56;
              }
            }
          }
        }
      }
      else
      {
        v16 = v105;
      }
    }
LABEL_92:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pptlSrc);
    goto LABEL_93;
  }
LABEL_95:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v133);
  return v16;
}
