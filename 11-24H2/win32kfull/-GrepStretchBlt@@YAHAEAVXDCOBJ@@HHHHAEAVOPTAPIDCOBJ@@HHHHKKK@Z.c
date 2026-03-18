/*
 * XREFs of ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiStretchBlt @ 0x1400D0D00 (NtGdiStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x14000D8A0 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140010370 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140013568 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x140015998 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     GreMovePointer @ 0x1400240B0 (GreMovePointer.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400D2238 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400D22EC (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x14010CBB0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1401742FC (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ?GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z @ 0x1401E36E0 (-GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x140213F34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepStretchBlt(
        DC **a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        struct Gre::Base::SESSION_GLOBALS **a6,
        LONG a7,
        int a8,
        int a9,
        int a10,
        signed int a11,
        unsigned int a12,
        char a13)
{
  unsigned int v13; // r12d
  unsigned int v16; // esi
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  int v19; // eax
  char v20; // r14
  int v21; // ebx
  DC *v22; // rcx
  __int64 v23; // rdx
  Gre::Base *v24; // rcx
  Gre::Base *v25; // rcx
  char v26; // si
  struct Gre::Base::SESSION_GLOBALS *v27; // rbx
  int v28; // ecx
  char v29; // r15
  bool v30; // di
  char v31; // al
  DC *v32; // rcx
  _QWORD *v33; // rdx
  int v34; // r8d
  struct SURFACE *v35; // rax
  HDC *v36; // rdi
  struct Gre::Base::SESSION_GLOBALS *v37; // rbx
  DC *v38; // r9
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  DC *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // r14
  unsigned int v47; // eax
  void *v48; // r9
  Gre::Base *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  unsigned int v59; // r10d
  unsigned int v60; // eax
  struct Gre::Base::SESSION_GLOBALS *v61; // r11
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // r8
  char *XlateObject; // rax
  LONG v66; // r9d
  int v67; // esi
  int v68; // r8d
  int v69; // edx
  LONG x; // r11d
  LONG y; // ebx
  int v72; // r10d
  unsigned int v73; // r9d
  bool v74; // zf
  __int64 v75; // rsi
  struct SURFACE **v76; // rcx
  ULONG v78; // ecx
  DC *v79; // rax
  DC *v80; // rax
  char v81; // bl
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rax
  int v85; // ecx
  char *v86; // r8
  int v87; // r9d
  int v88; // edx
  unsigned int v89; // eax
  __int64 v90; // rcx
  DC *v91; // r8
  SURFACE *v92; // rsi
  SURFACE *v93; // rdi
  HSEMAPHORE v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  SURFACE *v98; // rdi
  DC *v99; // rcx
  SURFACE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  int v104; // eax
  DC *v105; // rcx
  __int64 v106; // r8
  int v107; // edx
  DC *v108; // rcx
  __int64 v109; // r9
  char v110; // [rsp+50h] [rbp-B0h]
  unsigned int v111; // [rsp+54h] [rbp-ACh]
  unsigned int v112; // [rsp+54h] [rbp-ACh]
  unsigned int v113; // [rsp+58h] [rbp-A8h]
  int v114; // [rsp+58h] [rbp-A8h]
  __int64 v115; // [rsp+60h] [rbp-A0h]
  BOOL v116; // [rsp+68h] [rbp-98h]
  LONG v117; // [rsp+6Ch] [rbp-94h]
  int v118; // [rsp+70h] [rbp-90h]
  int v119; // [rsp+74h] [rbp-8Ch]
  unsigned int v120; // [rsp+78h] [rbp-88h]
  int v121; // [rsp+7Ch] [rbp-84h]
  int v123; // [rsp+90h] [rbp-70h]
  unsigned int v124; // [rsp+94h] [rbp-6Ch]
  unsigned int v126; // [rsp+A0h] [rbp-60h]
  int v127; // [rsp+A4h] [rbp-5Ch]
  __int64 v128; // [rsp+A8h] [rbp-58h]
  __int64 v129; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v130; // [rsp+B8h] [rbp-48h] BYREF
  int v131; // [rsp+C0h] [rbp-40h] BYREF
  int v132; // [rsp+C4h] [rbp-3Ch]
  __int64 v133; // [rsp+C8h] [rbp-38h]
  void *v134; // [rsp+D0h] [rbp-30h]
  __int64 v135; // [rsp+D8h] [rbp-28h]
  struct Gre::Base::SESSION_GLOBALS *v136; // [rsp+E8h] [rbp-18h]
  DC *v137[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v138; // [rsp+108h] [rbp+8h]
  DC *v139[14]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v140; // [rsp+1D0h] [rbp+D0h]
  struct SURFACE *v141[14]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v142; // [rsp+250h] [rbp+150h]
  _BYTE v143[112]; // [rsp+260h] [rbp+160h] BYREF
  int v144; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v145[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  struct MATRIX *inited; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct MATRIX *v147; // [rsp+3D8h] [rbp+2D8h]
  __int64 v148; // [rsp+3E0h] [rbp+2E0h]
  __int64 v149; // [rsp+3E8h] [rbp+2E8h]
  __int64 v150; // [rsp+3F0h] [rbp+2F0h]
  __int64 v151; // [rsp+3F8h] [rbp+2F8h]
  struct SURFACE *v152; // [rsp+400h] [rbp+300h]
  __int64 v153; // [rsp+408h] [rbp+308h]
  __int64 v154; // [rsp+410h] [rbp+310h]
  char *v155; // [rsp+418h] [rbp+318h] BYREF
  __int64 v156; // [rsp+420h] [rbp+320h]
  struct _POINTFIX v157; // [rsp+430h] [rbp+330h] BYREF
  struct _POINTL v158; // [rsp+450h] [rbp+350h] BYREF
  int v159; // [rsp+458h] [rbp+358h]
  unsigned int v160; // [rsp+45Ch] [rbp+35Ch]
  LONG v161; // [rsp+460h] [rbp+360h]
  int v162; // [rsp+464h] [rbp+364h]
  LONG v163; // [rsp+468h] [rbp+368h] BYREF
  int v164; // [rsp+46Ch] [rbp+36Ch]
  int v165; // [rsp+470h] [rbp+370h]
  int v166; // [rsp+474h] [rbp+374h]
  __int64 v167; // [rsp+488h] [rbp+388h]
  unsigned int v168; // [rsp+490h] [rbp+390h]
  int v169; // [rsp+494h] [rbp+394h]

  v13 = 0;
  v16 = a11 & 0x40000000;
  v117 = a2;
  v154 = 0LL;
  v169 = 0;
  v17 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v111 = 0;
  v124 = 0;
  v116 = (a11 & 0x40000000) != 0;
  v168 = ((v17 >> 8) | v17 & 0xFF0000) >> 8;
  v19 = (unsigned __int8)gajRop3[(unsigned __int64)v168 >> 8];
  v20 = v19 | gajRop3[(unsigned __int16)(v17 >> 8) >> 8];
  v121 = v19 | (unsigned __int8)gajRop3[(unsigned __int16)(v17 >> 8) >> 8];
  v21 = v20 & 0xD4;
  if ( (v20 & 0xD4) == 0 )
  {
    v18 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8;
    if ( (unsigned __int8)v18 == v18 >> 8 )
    {
      if ( *a1 )
        v13 = GrepPatBlt(a1, a2, a3, a4, a5, v17);
      goto LABEL_121;
    }
  }
  if ( ((gajRop3[(unsigned __int8)v17] | gajRop3[BYTE1(v17)]) & 2) != 0 && v17 != 16711778 && v17 != 66 && *a1 )
    bSpDwmValidateSurface((struct XDCOBJ *)a1, a2, a3, a4, a5);
  if ( OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v141, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v141, a7, a8, a9, a10);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v141);
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v137, a6);
  v22 = *a1;
  if ( *a1 )
  {
    if ( !_bittest((const signed __int32 *)v22 + 9, 0x10u) )
    {
      v23 = *((_QWORD *)v22 + 122);
      if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v22, *(_QWORD *)(v23 + 160));
    }
  }
  if ( !*a1 || _bittest((const signed __int32 *)*a1 + 9, 0x10u) || !OPTAPIDCOBJ::bValid((HDC *)a6) && (v20 & 0xD4) != 0 )
  {
    EngSetLastError(6u);
    if ( (v20 & 0xD4) == 0 || OPTAPIDCOBJ::bValid((HDC *)a6) )
      v13 = 1;
    goto LABEL_120;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v143);
  if ( (v20 & 0xD4) != 0 )
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v143, (struct _ERESOURCE ***)a1, (struct XDCOBJ *)v137);
    Gre::Base::Globals(v24);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v143, (__int64 **)a1);
  }
  if ( (v144 & 1) == 0 )
  {
    v78 = 8;
    goto LABEL_118;
  }
  if ( OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    v25 = (Gre::Base *)*((_QWORD *)*a1 + 6);
    if ( (*((_DWORD *)v25 + 10) & 0x8000) != 0 )
    {
      v26 = 1;
      v27 = Gre::Base::Globals(v25);
      GreAcquireSemaphoreShared<1,>(v27);
    }
    else
    {
      v26 = 0;
      v27 = Gre::Base::Globals(v25);
    }
    if ( v137[0]
      && *((_QWORD *)v137[0] + 62)
      && ((v28 = *((_DWORD *)v137[0] + 9), (v28 & 0x1000) == 0) || (v28 & 0x4000) != 0) )
    {
      v29 = 1;
      v30 = (v144 & 0x800000) != 0;
    }
    else
    {
      v29 = 0;
      v30 = 0;
    }
    v31 = *((_BYTE *)v137[0] + 36) & 1;
    v110 = v31;
    if ( v26 )
    {
      GreReleaseSemaphoreShared<1,>(v27);
      v31 = v110;
    }
    v21 = v20 & 0xD4;
    v16 = a11 & 0x40000000;
  }
  else
  {
    v31 = 0;
    v29 = 0;
    v110 = 0;
    v30 = 0;
  }
  v32 = *a1;
  if ( *a1
    && (v33 = (_QWORD *)((char *)v32 + 496), *((_QWORD *)v32 + 62))
    && ((v34 = *((_DWORD *)v32 + 9), (v34 & 0x1000) == 0) || (v34 & 0x4000) != 0) )
  {
    if ( !v29 )
    {
LABEL_64:
      if ( (*((_DWORD *)v32 + 9) & 0xE0) != 0 )
      {
        DC::QuickInitXform(v32, &v130, 516LL);
        v145[0] = v117;
        v108 = *a1;
        v145[2] = v117 + a4;
        v145[1] = a3;
        v145[3] = a3 + a5;
        if ( DC::bXform(v108, (const struct EXFORMOBJ *)&v130, (struct ERECTL *)v145, v109) )
        {
          ERECTL::vOrder((ERECTL *)v145);
          XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v145);
        }
      }
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v143);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v137);
      v13 = 1;
      goto LABEL_121;
    }
    if ( v30 )
      goto LABEL_30;
  }
  else
  {
    v31 = v110;
    v33 = (_QWORD *)((char *)v32 + 496);
  }
  if ( !*v33 || !v29 )
    goto LABEL_64;
  if ( !v31 )
    goto LABEL_119;
LABEL_30:
  if ( v21 && (v144 & 0x400000) == 0
    || (v35 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1), !(unsigned int)DestSurfaceAccessCheck(v35)) )
  {
    v78 = 5;
LABEL_118:
    EngSetLastError(v78);
LABEL_119:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v143);
LABEL_120:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v137);
LABEL_121:
    BLTRECORD::~BLTRECORD((BLTRECORD *)&inited);
    return v13;
  }
  if ( (unsigned __int8)v168 != BYTE1(v168) || (v36 = (HDC *)a6, v16) && !OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    v78 = 87;
    goto LABEL_118;
  }
  v37 = 0LL;
  if ( OPTAPIDCOBJ::bValid((HDC *)a6) )
    v37 = a6[13];
  if ( (a11 < 0 && (v38 = *a1, (*(_DWORD *)(*((_QWORD *)*a1 + 122) + 108LL) & 1) != 0)
     || (v38 = *a1, (*(_BYTE *)(*((_QWORD *)*a1 + 122) + 108LL) & 9) == 9))
    && v37 != *(struct Gre::Base::SESSION_GLOBALS **)v38 )
  {
    v117 = *(_QWORD *)(*((_QWORD *)v38 + 122) + 308LL) - a4 - v117;
    v124 = DC::dwSetLayout(v38, -1, 0);
    v120 = 0x80000000;
  }
  else
  {
    v120 = 0;
  }
  v134 = 0LL;
  XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
  if ( OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    v40 = Gre::Base::Globals(v39);
    v41 = v137[0];
    v42 = *((_QWORD *)v137[0] + 62);
    if ( v42 )
    {
      if ( v138 )
        v42 = v138;
    }
    else
    {
      v42 = *((_QWORD *)v40 + 533);
    }
    v43 = *(_QWORD *)(v42 + 48);
    v115 = v42;
  }
  else
  {
    v41 = v137[0];
    v43 = 0LL;
    v115 = 0LL;
  }
  v128 = v43;
  LODWORD(v44) = 0;
  v135 = 0LL;
  if ( v16 )
  {
    if ( (*((_DWORD *)v41 + 9) & 1) != 0
      && (v90 = *((_QWORD *)v41 + 6), (*(_DWORD *)(v90 + 40) & 0x80u) == 0)
      && ((v91 = *a1, v90 == *((_QWORD *)*a1 + 6))
       || (v104 = XDCOBJ::bRedirHooked((XDCOBJ *)a1), v41 = v137[0], v104)
       && (v91 = *a1, *((_QWORD *)v137[0] + 6) == *(_QWORD *)(*((_QWORD *)*a1 + 6) + 3512LL)))
      && v43 )
    {
      v92 = 0LL;
      if ( (v121 & 0xD4) != 0 && (*((_DWORD *)v41 + 9) & 0x4000) != 0 && *((_QWORD *)v41 + 62) != *((_QWORD *)v91 + 62) )
      {
        v92 = (SURFACE *)*((_QWORD *)v41 + 62);
        SURFACE::bUnMap(v92);
      }
      v93 = 0LL;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 )
      {
        v93 = (SURFACE *)*((_QWORD *)*a1 + 62);
        SURFACE::bUnMap(v93);
      }
      v94 = *(HSEMAPHORE *)(v43 + 56);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Pointer", v94, 0LL);
      GreAcquireSemaphoreInternal(v94);
      GrepAcquireLockValidate<4>();
      v44 = *(_QWORD *)(v128 + 64);
      v135 = v44;
      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v131);
      if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v96, v95) + 36348) )
        GreMovePointer(*(_QWORD *)(v115 + 48), 0xFFFFFFFFLL, -1, 0);
      SURFACE::vSetIncludeSprites();
      v97 = v133;
      if ( v133 )
      {
        *(_DWORD *)(v133 + 348) = v131;
        *(_DWORD *)(v97 + 352) = v132;
      }
      GrepStretchReMapSurface((struct XDCOBJ *)a1, v93);
      GrepStretchReMapSurface((struct XDCOBJ *)v137, v92);
      v41 = v137[0];
      v36 = (HDC *)a6;
    }
    else
    {
      v116 = 0;
    }
    if ( (*((_DWORD *)v41 + 11) & 1) != 0 || (*((_DWORD *)*a1 + 11) & 1) != 0 )
      goto LABEL_116;
  }
  inited = DC::InitXform(*a1, 0x204u);
  v152 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
  v148 = *((_QWORD *)v152 + 16);
  v149 = *((_QWORD *)*a1 + 11);
  if ( OPTAPIDCOBJ::bValid(v36) )
  {
    v147 = DC::InitXform(v137[0], 0x204u);
    v153 = v115;
    v112 = a12;
    v45 = *(_QWORD *)(v115 + 128);
    v150 = v45;
    v46 = *((_QWORD *)v137[0] + 11);
    v151 = v46;
    if ( a12 != -1 )
      goto LABEL_50;
    v47 = *(_DWORD *)(*((_QWORD *)v137[0] + 122) + 180LL);
  }
  else
  {
    v47 = a12;
    v46 = v151;
    v45 = v150;
  }
  v112 = v47;
LABEL_50:
  if ( (a13 & 1) != 0 )
  {
    v48 = *(void **)(*((_QWORD *)*a1 + 122) + 248LL);
    v134 = v48;
  }
  else
  {
    v48 = 0LL;
  }
  v49 = *a1;
  v50 = v149;
  v51 = v148;
  v52 = *((_QWORD *)*a1 + 122);
  v53 = *((_DWORD *)*a1 + 30);
  v127 = v53;
  v118 = *(_DWORD *)(v52 + 184);
  v123 = *(_DWORD *)(v52 + 176);
  if ( !v45
    && (!v148
     || (*(_DWORD *)(v148 + 24) & 0x800) != 0 && ((v54 = *(_QWORD *)(v149 + 80)) == 0 || v54 == *(_QWORD *)(v149 + 72)))
    || !v148
    && (*(_DWORD *)(v45 + 24) & 0x800) != 0
    && ((v55 = *(_QWORD *)(v149 + 80)) == 0 || v55 == *(_QWORD *)(v149 + 72))
    || v45
    && v148
    && ((v56 = *(_QWORD *)(v45 + 120), v56 != v45) ? (v57 = *(_DWORD *)(v56 + 32)) : (v57 = *(_DWORD *)(v45 + 32)),
        (v58 = *(_QWORD *)(v148 + 120), v58 != v148)
      ? (v49 = (Gre::Base *)*(unsigned int *)(v58 + 32))
      : (v49 = (Gre::Base *)*(unsigned int *)(v148 + 32)),
        v57 == (_DWORD)v49) )
  {
    v155 = (char *)Gre::Base::Globals(v49) + 4552;
    goto LABEL_91;
  }
  v119 = 1;
  if ( (v53 & 7) != 0 && v48 )
  {
    v119 = 0;
  }
  else if ( v45 && v148 )
  {
    v126 = *(_DWORD *)(v45 + 56);
    v129 = v46;
    v136 = Gre::Base::Globals(v49);
    v130 = (HSEMAPHORE)(*(_QWORD *)v136 + 312LL);
    GreAcquireSemaphoreInternal(v130);
    GrepAcquireLockValidate<13>();
    v59 = v126;
    v60 = 0;
    v61 = v136;
    while ( 1 )
    {
      v113 = v60;
      if ( v60 >= 8 )
      {
        v155 = 0LL;
        v114 = 0;
        goto LABEL_84;
      }
      v62 = *(_QWORD *)(v45 + 120);
      v63 = v62 == v45 ? *(_DWORD *)(v45 + 32) : *(_DWORD *)(v62 + 32);
      v64 = 32LL * v59;
      if ( *(_DWORD *)((char *)v61 + v64 + 4304) == v63 )
      {
        v82 = *(_QWORD *)(v51 + 120);
        v83 = v82 == v51 ? *(_DWORD *)(v51 + 32) : *(_DWORD *)(v82 + 32);
        if ( *(_DWORD *)((char *)v61 + v64 + 4308) == v83 )
        {
          v84 = *(_QWORD *)(v50 + 120);
          v85 = v84 == v50 ? *(_DWORD *)(v50 + 32) : *(_DWORD *)(v84 + 32);
          if ( *(_DWORD *)((char *)v61 + v64 + 4316) == v85 )
          {
            v86 = *(char **)((char *)v61 + v64 + 4296);
            v155 = v86;
            v87 = *((_DWORD *)v86 + 19);
            if ( (v87 & 0x6000) == 0 )
            {
              v88 = *((_DWORD *)v86 + 1);
              if ( (v88 & 4) == 0 && (*((_DWORD *)v86 + 19) & 0x100) == 0 )
                break;
              if ( (v88 & 4) != 0 && v112 == *((_DWORD *)v86 + 6) )
              {
                v89 = XEPALOBJ::ulTime((XEPALOBJ *)&v129);
                if ( *((_DWORD *)v61 + 8 * v59 + 1078) == v89 )
                  break;
              }
              if ( (v87 & 0x100) != 0 && v118 == *((_DWORD *)v86 + 7) && v123 == *((_DWORD *)v86 + 8) )
                break;
            }
          }
        }
      }
      v59 = ((_BYTE)v59 + 1) & 7;
      v60 = v113 + 1;
    }
    _InterlockedIncrement((volatile signed __int32 *)v61 + 8 * v59 + 1072);
    *(_DWORD *)(v45 + 56) = v59;
    v114 = 1;
LABEL_84:
    SEMOBJ<13>::vUnlock(&v130);
    if ( v114 )
      goto LABEL_91;
  }
  XlateObject = (char *)CreateXlateObject(v134, v127, v45, v51, v46, v50, v118, v123, v112, 0);
  v155 = XlateObject;
  if ( !XlateObject )
  {
LABEL_115:
    v111 = 0;
LABEL_116:
    v75 = v115;
    goto LABEL_107;
  }
  if ( v119 && v45 && v51 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
    EXLATEOBJ::vAddToCache((Gre::Base *)&v155, v45, v51, v46, v50);
LABEL_91:
  v169 |= 2u;
  if ( (v121 & 0xE8) != 0 )
  {
    v105 = *a1;
    v156 = (__int64)*a1 + 1200;
    v106 = *((_QWORD *)v105 + 122);
    v107 = *(_DWORD *)(v106 + 152);
    if ( (v107 & 1) != 0 || (*((_DWORD *)v105 + 79) & 1) != 0 )
    {
      *(_DWORD *)(v106 + 152) = v107 & 0xFFFFFFFE;
      *((_DWORD *)*a1 + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush(v156, *a1, *((_QWORD *)*a1 + 17), v149, v148, v152, 1);
    }
    v167 = *((_QWORD *)*a1 + 149);
  }
  else
  {
    v156 = 0LL;
  }
  v154 = 0LL;
  if ( (*((_BYTE *)v147 + 32) & 1) == 0 )
    goto LABEL_124;
  v66 = a7;
  v67 = a8;
  v68 = a7 + a9;
  v69 = a8 + a10;
  v165 = a7 + a9;
  v166 = a8 + a10;
  v163 = a7;
  v164 = a8;
  if ( (*((_BYTE *)v147 + 32) & 0x43) != 0x43 )
  {
    if ( (unsigned int)bCvtPts1((__int64)v147, (__int64)&v163, 2LL) )
    {
      v66 = v163;
      v69 = v166;
      v68 = v165;
      v67 = v164;
      a7 = v163;
      goto LABEL_97;
    }
LABEL_124:
    EngSetLastError(0x57u);
    goto LABEL_115;
  }
LABEL_97:
  if ( (v121 & 0xD4) != 0 && (v67 == v69 || v66 == v68) )
  {
    v111 = 1;
    goto LABEL_116;
  }
  x = v117;
  y = a3;
  v72 = v117 + a4;
  v73 = a3 + a5;
  v74 = (*((_BYTE *)inited + 32) & 1) == 0;
  v158.x = v117;
  v158.y = a3;
  v159 = v117 + a4;
  if ( v74 )
  {
    v162 = a3 + a5;
    v160 = a3;
    v161 = v117;
    EXFORMOBJ::bXform((EXFORMOBJ *)&inited, &v158, &v157, 3uLL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v139, a6);
    v80 = *a1;
    v75 = v115;
    v140 = v115;
    v81 = *(_BYTE *)(*((_QWORD *)v80 + 122) + 215LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v141, a1);
    v142 = 0LL;
    v111 = BLTRECORD::bRotate(
             (BLTRECORD *)&inited,
             (struct BLTRECORD::PROXYDCOBJ *)v141,
             (struct BLTRECORD::PROXYDCOBJ *)v139,
             v121,
             v81);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v141);
    goto LABEL_123;
  }
  v160 = a3 + a5;
  if ( (*((_BYTE *)inited + 32) & 0x43) != 0x43 )
  {
    if ( (unsigned int)bCvtPts1((__int64)inited, (__int64)&v158, 2LL) )
    {
      v69 = v166;
      v68 = v165;
      v67 = v164;
      v73 = v160;
      v72 = v159;
      y = v158.y;
      x = v158.x;
      a7 = v163;
      goto LABEL_102;
    }
    goto LABEL_124;
  }
LABEL_102:
  if ( *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL) == 4 || v68 - a7 != v72 - x || v69 - v67 != v73 - y )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v139, a6);
    v79 = *a1;
    v75 = v115;
    v140 = v115;
    v111 = BLTRECORD::bStretch(
             (BLTRECORD *)&inited,
             (struct XDCOBJ *)a1,
             (struct BLTRECORD::PROXYDCOBJ *)v139,
             v121,
             *(_BYTE *)(*((_QWORD *)v79 + 122) + 215LL));
LABEL_123:
    v76 = v139;
    goto LABEL_106;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v141, a6);
  v75 = v115;
  v142 = v115;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v139, a1);
  v140 = 0LL;
  v111 = BLTRECORD::bBitBlt((BLTRECORD *)&inited, v139, v141, v121);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v139);
  v76 = v141;
LABEL_106:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v76);
LABEL_107:
  if ( v120 )
    DC::dwSetLayout(*a1, -1, v124);
  if ( v116 )
  {
    SURFACE::vClearIncludeSprites();
    v98 = 0LL;
    if ( (v121 & 0xD4) != 0
      && (*((_DWORD *)v137[0] + 11) & 1) == 0
      && (*((_DWORD *)v137[0] + 9) & 0x4000) != 0
      && v75 != *((_QWORD *)*a1 + 62)
      && (*(_DWORD *)(v75 + 112) & 0x800) != 0 )
    {
      v98 = (SURFACE *)*((_QWORD *)v137[0] + 62);
      SURFACE::bUnMap(v98);
    }
    v99 = *a1;
    v100 = 0LL;
    if ( (*((_DWORD *)*a1 + 11) & 1) == 0 && (*((_DWORD *)v99 + 9) & 0x4000) != 0 )
    {
      v100 = (SURFACE *)*((_QWORD *)v99 + 62);
      SURFACE::bUnMap(v100);
    }
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)&v131);
    if ( (a13 & 2) == 0 || !*(_DWORD *)(W32GetUserSessionState(v102, v101) + 36348) )
      GreMovePointer(*(_QWORD *)(v75 + 48), (unsigned int)v44, SHIDWORD(v135), 0);
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v128 + 56));
    v103 = v133;
    if ( v133 )
    {
      *(_DWORD *)(v133 + 348) = v131;
      *(_DWORD *)(v103 + 352) = v132;
    }
    GrepStretchReMapSurface((struct XDCOBJ *)a1, v100);
    GrepStretchReMapSurface((struct XDCOBJ *)v137, v98);
  }
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v143);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v137);
  BLTRECORD::~BLTRECORD((BLTRECORD *)&inited);
  return v111;
}
