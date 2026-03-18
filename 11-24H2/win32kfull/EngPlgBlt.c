/*
 * XREFs of EngPlgBlt @ 0x140141960
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1401412F0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1402FDA70 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x1403058F8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305B58 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140141924 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1401431A0 (-vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x140143350 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngEraseSurface @ 0x1401DA350 (EngEraseSurface.c)
 *     ?vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E9E0 (-vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031ED80 (-vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  RECTL *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  BOOL v14; // ebx
  PVOID *p_pvScan0; // r9
  BOOL v16; // edi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // r9
  char v21; // r13
  Gre::Base *v22; // rcx
  LONG v23; // eax
  unsigned __int64 v24; // r12
  struct SURFACE *v25; // r13
  int v26; // eax
  rotate *v27; // rax
  rotate *v28; // r14
  struct rotate::_PLGDDA *v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  void (*v32)(rotate *__hidden, struct rotate::_PLGRUN *, struct rotate::_PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  __int64 v33; // rcx
  LONG top; // edx
  struct _CLIPOBJ *v35; // r8
  POINTL *v36; // rcx
  __int64 v37; // rax
  struct rotate::_PLGDDA *v38; // rdx
  int v39; // r12d
  __int64 v40; // r15
  FIX v41; // edx
  FIX v42; // eax
  struct _RECTL *v43; // r9
  struct SURFACE *v44; // r13
  int v46; // r9d
  __int64 v47; // rdx
  LONG v48; // r13d
  LONG v49; // r11d
  LONG v50; // r12d
  LONG v51; // r14d
  LONG v52; // r10d
  LONG v53; // r9d
  LONG v54; // edx
  LONG v55; // r8d
  int v56; // eax
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned __int64 v58; // rdx
  ULONG v59; // r8d
  LONG v60; // ecx
  LONG v61; // eax
  int v62; // r9d
  int v63; // r10d
  int v64; // r8d
  int v65; // edx
  int (*v66)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r11
  __int64 v67; // r8
  unsigned __int64 v68; // rcx
  BOOL (__stdcall *v69)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v70; // r8
  unsigned __int64 v71; // rcx
  struct _POINTFIX *v72; // [rsp+20h] [rbp-508h]
  COLORADJUSTMENT *v73; // [rsp+28h] [rbp-500h]
  char v74; // [rsp+60h] [rbp-4C8h]
  char v75; // [rsp+61h] [rbp-4C7h]
  ULONG v76; // [rsp+64h] [rbp-4C4h]
  LONG v77; // [rsp+64h] [rbp-4C4h]
  struct REGION *v78; // [rsp+68h] [rbp-4C0h] BYREF
  __int64 v79; // [rsp+70h] [rbp-4B8h] BYREF
  int v80; // [rsp+78h] [rbp-4B0h]
  struct _CLIPOBJ *v81; // [rsp+80h] [rbp-4A8h]
  BOOL (__stdcall *v82)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+88h] [rbp-4A0h]
  struct REGION *v83; // [rsp+90h] [rbp-498h] BYREF
  POINTFIX *v84; // [rsp+98h] [rbp-490h] BYREF
  POINTL *v85; // [rsp+A0h] [rbp-488h]
  __int64 v86; // [rsp+A8h] [rbp-480h] BYREF
  LONG v87; // [rsp+B0h] [rbp-478h]
  LONG v88; // [rsp+B4h] [rbp-474h]
  POINTFIX v89; // [rsp+B8h] [rbp-470h] BYREF
  struct REGION *v90; // [rsp+C0h] [rbp-468h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v91; // [rsp+C8h] [rbp-460h]
  PVOID *v92; // [rsp+D0h] [rbp-458h]
  POINTFIX *v93; // [rsp+D8h] [rbp-450h]
  rotate *v94; // [rsp+E0h] [rbp-448h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-440h] BYREF
  char v96; // [rsp+F0h] [rbp-438h]
  int v97; // [rsp+F4h] [rbp-434h]
  unsigned __int64 v98; // [rsp+F8h] [rbp-430h] BYREF
  char v99; // [rsp+100h] [rbp-428h]
  int v100; // [rsp+104h] [rbp-424h]
  __int64 v101; // [rsp+108h] [rbp-420h]
  RECTL *v102; // [rsp+110h] [rbp-418h]
  struct SURFACE *v103; // [rsp+118h] [rbp-410h]
  __int64 v104; // [rsp+120h] [rbp-408h] BYREF
  struct _CLIPOBJ *v105; // [rsp+128h] [rbp-400h]
  struct _SURFOBJ *v106; // [rsp+130h] [rbp-3F8h]
  struct _SURFOBJ *v107; // [rsp+138h] [rbp-3F0h]
  struct rotate::_PLGRUN *(*const near *v108)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+140h] [rbp-3E8h]
  unsigned __int64 v109; // [rsp+148h] [rbp-3E0h] BYREF
  char v110; // [rsp+150h] [rbp-3D8h]
  int v111; // [rsp+154h] [rbp-3D4h]
  struct _CLIPOBJ *v112; // [rsp+160h] [rbp-3C8h]
  unsigned __int64 v113; // [rsp+168h] [rbp-3C0h]
  __int64 v114; // [rsp+170h] [rbp-3B8h] BYREF
  int v115; // [rsp+178h] [rbp-3B0h] BYREF
  LONG right; // [rsp+17Ch] [rbp-3ACh]
  LONG bottom; // [rsp+180h] [rbp-3A8h]
  int v118; // [rsp+184h] [rbp-3A4h]
  __int64 v119; // [rsp+188h] [rbp-3A0h]
  int v120; // [rsp+190h] [rbp-398h]
  int v121; // [rsp+194h] [rbp-394h]
  int *p_x; // [rsp+198h] [rbp-390h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp-388h]
  __int64 v124; // [rsp+1A8h] [rbp-380h]
  __int16 v125; // [rsp+1B0h] [rbp-378h]
  _DWORD v126[4]; // [rsp+1B8h] [rbp-370h] BYREF
  __int64 v127; // [rsp+1C8h] [rbp-360h]
  int v128; // [rsp+1D0h] [rbp-358h]
  int v129; // [rsp+1D4h] [rbp-354h]
  _QWORD v130[3]; // [rsp+1D8h] [rbp-350h] BYREF
  char v131[8]; // [rsp+1F0h] [rbp-338h] BYREF
  __int64 v132; // [rsp+1F8h] [rbp-330h]
  RECTL v133; // [rsp+270h] [rbp-2B8h] BYREF
  RECTL v134; // [rsp+280h] [rbp-2A8h] BYREF
  struct _RECTL v135; // [rsp+290h] [rbp-298h] BYREF
  __int128 v136; // [rsp+2A0h] [rbp-288h] BYREF
  struct _RECTL v137; // [rsp+2B0h] [rbp-278h] BYREF
  _BYTE v138[160]; // [rsp+2C0h] [rbp-268h] BYREF
  _BYTE v139[4]; // [rsp+360h] [rbp-1C8h] BYREF
  char v140[156]; // [rsp+364h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+400h] [rbp-128h] BYREF
  POINTFIX v142; // [rsp+4A0h] [rbp-88h] BYREF
  struct rotate::_PLGRUN *(*const near *v143)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+4A8h] [rbp-80h]
  POINTFIX v144; // [rsp+4B0h] [rbp-78h]
  int v145; // [rsp+4B8h] [rbp-70h]
  int v146; // [rsp+4BCh] [rbp-6Ch]
  FIX x; // [rsp+4C0h] [rbp-68h] BYREF
  int y; // [rsp+4C4h] [rbp-64h]
  int v149; // [rsp+4C8h] [rbp-60h] BYREF
  FIX v150; // [rsp+4CCh] [rbp-5Ch]
  __int64 v151; // [rsp+4D0h] [rbp-58h]
  int v152; // [rsp+4D8h] [rbp-50h]
  FIX v153; // [rsp+4DCh] [rbp-4Ch]

  v103 = (struct SURFACE *)pco;
  v106 = psoSrc;
  v107 = psoTrg;
  *(_QWORD *)&v137.left = pco;
  v81 = (struct _CLIPOBJ *)pxlo;
  v93 = pptfx;
  v11 = prcl;
  v78 = (struct REGION *)prcl;
  v85 = pptl;
  v76 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v98 = v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v14 = 0;
  p_pvScan0 = &psoMsk[-1].pvScan0;
  if ( !psoMsk )
    p_pvScan0 = 0LL;
  v92 = p_pvScan0;
  v80 = 0;
  if ( iMode != 4 || p_pvScan0 )
  {
    v74 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 1;
    v74 = 1;
  }
  if ( iMode - 1 > 3 )
    return 0;
  v17 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0;
  v18 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0;
  ERECTL::vOrder((ERECTL *)prcl);
  if ( v19 < 3 && !v20 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
  {
    v21 = 1;
    v75 = 1;
  }
  else
  {
    v21 = 0;
    v75 = 0;
    if ( v19 < 3 )
      v19 = 3;
    v76 = v19;
  }
  v104 = *(_QWORD *)(v12 + 48);
  v114 = *(_QWORD *)(v13 + 48);
  v95 = 0LL;
  v96 = 0;
  v97 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v138);
  v134 = 0LL;
  v79 = 0LL;
  v105 = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v90);
  v22 = (Gre::Base *)*(unsigned int *)(v13 + 60);
  v23 = *(_DWORD *)(v13 + 56);
  *(_QWORD *)&v133.left = 0LL;
  v133.right = v23;
  v133.bottom = (int)v22;
  v91 = Gre::Base::Globals(v22);
  if ( v114 && v13 == *(_QWORD *)(v114 + 2544) && (*(_DWORD *)(v114 + 40) & 0x20000) != 0 )
    ERECTL::bOffsetAdd((ERECTL *)&v133, (const struct _POINTL *)(v114 + 2576), 0);
  if ( !v21 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v74 )
  {
    v24 = v12;
    v113 = v12;
    v84 = v93;
    v25 = v103;
    v83 = v103;
    v82 = EngCopyBits;
LABEL_20:
    PDEVOBJ::vSync((PDEVOBJ *)&v114, v106, 0LL, 0);
    ERECTL::operator*=(&v133.left, &v11->left);
    if ( v133.left == v133.right || (v26 = 0, v133.top == v133.bottom) )
      v26 = 1;
    if ( v26 )
    {
      v14 = 1;
      goto LABEL_65;
    }
    v109 = 0LL;
    v110 = 0;
    v111 = 0;
    v136 = 0LL;
    if ( *(_WORD *)(v13 + 100) || (unsigned int)(*(_DWORD *)(v13 + 96) - 7) <= 1 )
    {
      v150 = 0;
      v153 = 0;
      y = v133.right - v133.left + 1;
      v149 = v133.bottom - v133.top + 1;
      v151 = 0LL;
      x = *(_DWORD *)(v24 + 96);
      v152 = *(_DWORD *)(v13 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v109, (struct _DEVBITMAPINFO *)&x, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v109 )
        goto LABEL_145;
      DWORD2(v136) = v133.right - v133.left;
      HIDWORD(v136) = v133.bottom - v133.top;
      if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
        v82 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v114 + 2832);
      v73 = (COLORADJUSTMENT *)&v133;
      v72 = (struct _POINTFIX *)&v136;
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, struct _CLIPOBJ *))v82)(
        (v109 + 24) & -(__int64)(v109 != 0),
        v13 + 24,
        0LL,
        v81);
      LODWORD(v136) = v11->left - v133.left;
      DWORD1(v136) = v11->top - v133.top;
      DWORD2(v136) = v11->right - v133.left;
      HIDWORD(v136) = v11->bottom - v133.top;
      v13 = v109;
      v81 = 0LL;
      v112 = 0LL;
      v102 = (RECTL *)&v136;
      v133.right -= v133.left;
      v133.bottom -= v133.top;
      *(_QWORD *)&v133.left = 0LL;
    }
    else
    {
      v112 = v81;
      v102 = v11;
    }
    v107 = (struct _SURFOBJ *)v13;
    v130[0] = *(_QWORD *)(v24 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)v130, (struct _SURFOBJ *)(v24 + 24), 0LL, 0);
    v27 = (rotate *)Win32AllocPoolZInit(396LL, 1650946119LL);
    v28 = v27;
    v130[1] = v27;
    if ( !v27 )
    {
LABEL_64:
      SURFMEM::~SURFMEM((SURFMEM *)&v109);
      v14 = v80;
LABEL_65:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v90);
      SURFMEM::~SURFMEM((SURFMEM *)&v95);
      return v14;
    }
    if ( !(unsigned int)rotate::bInitPlgDDA(v27, (struct rotate::_PLGDDA *)&v133, v102, (struct _RECTL *)v84, v72) )
      goto LABEL_99;
    v108 = (&rotate::apfnRead)[*(unsigned int *)(v13 + 96)];
    v130[2] = v108;
    v30 = rotate::lSizeDDA(v28, v29);
    v31 = v30 * (unsigned __int64)(unsigned int)(v133.right - v133.left + 2);
    if ( v31 > 0xFFFFFFFF || !(_DWORD)v31 )
      goto LABEL_63;
    if ( v75 )
    {
      *(_DWORD *)v28 = 1;
      v32 = funcs_140141ECD[v76 - 1];
    }
    else
    {
      *(_DWORD *)v28 = 0;
      v32 = (void (*)(rotate *__hidden, struct rotate::_PLGRUN *, struct rotate::_PLGRUN *, struct SURFACE *, struct _CLIPOBJ *))(&rotate::apfnWrite)[*(unsigned int *)(v24 + 96)];
    }
    v89 = (POINTFIX)v32;
    v91 = (struct Gre::Base::SESSION_GLOBALS *)v32;
    v94 = (rotate *)PALLOCMEM(v31, 1650946119LL);
    if ( !v94 )
      goto LABEL_63;
    top = v133.top;
    v77 = v133.top;
    v101 = *(_QWORD *)(v13 + 80) + *(_DWORD *)(v13 + 88) * v133.top;
    v106 = 0LL;
    if ( !v92 )
    {
      v85 = 0LL;
      goto LABEL_35;
    }
    if ( !(unsigned int)bUMPDSecurityGateEx(v33, (unsigned int)v133.top) || v85 )
    {
      LODWORD(v106) = v133.left + v85->x - v102->left;
      top = v133.top;
      v77 = v133.top;
      v85 = (POINTL *)((char *)v92[10] + *((_DWORD *)v92 + 22) * (v133.top + v85->y - v102->top));
LABEL_35:
      v35 = v81;
      if ( v81 )
      {
        if ( (v81->rclBounds.left & 1) != 0 )
          v35 = 0LL;
        v81 = v35;
        v112 = v35;
      }
      if ( !v25 || !*((_BYTE *)v25 + 20) )
      {
        v60 = *(_DWORD *)(v24 + 60);
        v61 = *(_DWORD *)(v24 + 56);
        *(_QWORD *)&v135.left = 0LL;
        v135.right = v61;
        v135.bottom = v60;
        RGNOBJ::vSet((RGNOBJ *)&v90, &v135);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v138, v90, (const struct ERECTL *)&v135, 1);
        v25 = (struct SURFACE *)v138;
        v83 = (struct REGION *)v138;
        top = v133.top;
        v77 = v133.top;
        v35 = v81;
      }
      if ( *((_DWORD *)v25 + 1) >= *((_DWORD *)v25 + 3) || *((_DWORD *)v25 + 2) >= *((_DWORD *)v25 + 4) )
      {
        Win32FreePool(v94);
        goto LABEL_63;
      }
      v36 = v85;
      while ( 1 )
      {
        LODWORD(v82) = top;
        if ( top >= v133.bottom )
          break;
        *(_OWORD *)((char *)v28 + 68) = *(_OWORD *)((char *)v28 + 4);
        *(_OWORD *)((char *)v28 + 84) = *(_OWORD *)((char *)v28 + 20);
        *(_OWORD *)((char *)v28 + 100) = *(_OWORD *)((char *)v28 + 36);
        *(_OWORD *)((char *)v28 + 116) = *(_OWORD *)((char *)v28 + 52);
        LODWORD(v73) = v133.left;
        v37 = ((__int64 (__fastcall *)(rotate *, rotate *, __int64, POINTL *, struct _CLIPOBJ *, COLORADJUSTMENT *, LONG, _DWORD))v108)(
                v28,
                v94,
                v101,
                v36,
                v35,
                v73,
                v133.right,
                (_DWORD)v106);
        ((void (__fastcall *)(rotate *, __int64, unsigned __int64, struct SURFACE *))v91)(v94, v37, v24, v25);
        rotate::vAdvYDDA(v28, v38);
        v101 += *(int *)(v13 + 88);
        v36 = v85;
        if ( v85 )
        {
          v36 = (POINTL *)((char *)v85 + *((int *)v92 + 22));
          v85 = v36;
        }
        top = ++v77;
        v35 = v81;
      }
      Win32FreePool(v94);
      if ( v24 != v12 )
      {
        v39 = 0;
        v86 = 0LL;
        LOBYTE(v87) = 0;
        v88 = 0;
        v40 = 0LL;
        if ( *((_DWORD *)v78 + 2) - *(_DWORD *)v78 == v133.right
          && *((_DWORD *)v78 + 3) - *((_DWORD *)v78 + 1) == v133.bottom )
        {
          v39 = 1;
        }
        else
        {
          v118 = 0;
          v121 = 0;
          right = v134.right + 1;
          bottom = v134.bottom + 1;
          v119 = 0LL;
          v115 = 1;
          v120 = *(_DWORD *)(v12 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v86, (struct _DEVBITMAPINFO *)&v115, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( v86 )
          {
            v98 = 0LL;
            v99 = 0;
            v100 = 0;
            right = v133.right;
            bottom = v133.bottom;
            v119 = 0LL;
            v115 = 1;
            v120 = *(_DWORD *)(v12 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v98, (struct _DEVBITMAPINFO *)&v115, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
            if ( v98 )
            {
              if ( v83 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v83, &v134);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v83, (struct ERECTL *)&v134);
                if ( EngEraseSurface((SURFOBJ *)((v86 + 24) & -(__int64)(v86 != 0)), &v134, 0) )
                {
                  if ( EngEraseSurface((SURFOBJ *)((v98 + 24) & -(__int64)(v98 != 0)), &v133, 0xFFFFFFFF)
                    && EngPlgBlt(
                         (SURFOBJ *)((v86 + 24) & -(__int64)(v86 != 0)),
                         (SURFOBJ *)((v98 + 24) & -(__int64)(v98 != 0)),
                         0LL,
                         &pcoa,
                         0LL,
                         0LL,
                         0LL,
                         v84,
                         v102,
                         0LL,
                         3u) )
                  {
                    v40 = v86;
                    v39 = 1;
                  }
                }
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
            SURFMEM::~SURFMEM((SURFMEM *)&v98);
          }
        }
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v131);
        if ( !v39 )
          goto LABEL_62;
        if ( !v132 )
          goto LABEL_62;
        x = v93->x;
        y = v93->y;
        v149 = v93[1].x;
        v150 = v93[1].y;
        v41 = v93[2].x;
        LODWORD(v151) = v41 + v149 - x;
        v42 = v93[2].y;
        HIDWORD(v151) = v42 + v150 - y;
        v152 = v41;
        v153 = v42;
        p_x = &x;
        v123 = 1LL;
        v124 = 0LL;
        v125 = 0;
        if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v131, 0LL, &p_x) )
          goto LABEL_62;
        p_x = &v149;
        v123 = 3LL;
        v124 = 0LL;
        v125 = 0;
        if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v131, 0LL, &p_x, 3LL) )
          goto LABEL_62;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84, (struct EPATHOBJ *)v131, 1LL, v43);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
        if ( v84 && v78 )
        {
          v44 = v103;
          if ( v103 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)&v78, (struct RGNOBJ *)&v84, (struct SURFACE *)((char *)v103 + 56), 8u) )
            {
LABEL_57:
              v137 = *(struct _RECTL *)((char *)v78 + 52);
              if ( !v44 || bIntersect(&v137, (const struct _RECTL *)((char *)v44 + 4), &v137) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v139, v78, (struct ERECTL *)&v137);
                if ( !ERECTL::bEmpty((ERECTL *)v140) )
                {
                  v62 = v79 + v134.left;
                  v134.left += v79;
                  v63 = HIDWORD(v79) + v134.top;
                  v134.top += HIDWORD(v79);
                  v64 = v79 + v134.right;
                  v134.right += v79;
                  v65 = HIDWORD(v79) + v134.bottom;
                  v134.bottom += HIDWORD(v79);
                  v79 = 0LL;
                  ++*(_DWORD *)(v12 + 92);
                  if ( v74 )
                  {
                    *(_QWORD *)&v135.left = 0LL;
                    v135.right = v64 - v62;
                    v135.bottom = v65 - v63;
                    v89 = 0LL;
                    if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                      v69 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v104 + 2840);
                    else
                      v69 = EngStretchBlt;
                    v70 = v40 + 24;
                    if ( !v40 )
                      v70 = 0LL;
                    v71 = v12 + 24;
                    if ( !v12 )
                      v71 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, _BYTE *, struct _CLIPOBJ *, _QWORD, POINTFIX *, RECTL *, struct _RECTL *, __int64 *, int))v69)(
                      v71,
                      (v95 + 24) & ((unsigned __int128)-(__int128)v95 >> 64),
                      v70,
                      v139,
                      v105,
                      0LL,
                      &v89,
                      &v134,
                      &v135,
                      &v79,
                      4);
                  }
                  else
                  {
                    v66 = SURFACE::pfnBitBlt((SURFACE *)v12);
                    v67 = v40 + 24;
                    if ( !v40 )
                      v67 = 0LL;
                    v68 = v12 + 24;
                    if ( !v12 )
                      v68 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, _BYTE *, struct _CLIPOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v66)(
                      v68,
                      (v95 + 24) & -(__int64)(v95 != 0),
                      v67,
                      v139,
                      v105,
                      &v134,
                      &v79,
                      &v79,
                      0LL,
                      0LL,
                      v40 != 0 ? 43724 : 52428);
                  }
                }
              }
              v80 = 1;
            }
          }
          else if ( RGNOBJ::bCopy((RGNOBJ *)&v78, (struct RGNOBJ *)&v84) )
          {
            goto LABEL_57;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84);
LABEL_62:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v131);
        SURFMEM::~SURFMEM((SURFMEM *)&v86);
LABEL_63:
        Win32FreePool(v28);
        goto LABEL_64;
      }
LABEL_99:
      v80 = 1;
      goto LABEL_63;
    }
    Win32FreePool(v94);
    Win32FreePool(v28);
LABEL_145:
    SURFMEM::~SURFMEM((SURFMEM *)&v109);
    goto LABEL_65;
  }
  v89 = *v93;
  v142 = v89;
  v108 = (struct rotate::_PLGRUN *(*const near *)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))v93[1];
  v143 = v108;
  v144 = v93[2];
  v145 = (_DWORD)v108 + v144.x - v89.x;
  v146 = v93[1].y + v93[2].y - v93->y;
  v46 = ((int)v108 <= v145) ^ ((int)v108 > v89.x);
  v47 = (SHIDWORD(v108) <= v146) ^ (unsigned int)(SHIDWORD(v108) > v89.y);
  if ( *(&v142.x + 2 * v46) > *(&v142.x + 2 * (v46 ^ 3LL)) )
    v46 ^= 3u;
  if ( *(&v142.y + 2 * v47) > *(&v142.y + 2 * ((unsigned int)v47 ^ 3LL)) )
    v47 = (unsigned int)v47 ^ 3;
  v48 = (*(&v142.x + 2 * v46) >> 4) - 1;
  v134.left = v48;
  v49 = (*(&v142.y + 2 * v47) >> 4) - 1;
  v134.top = v49;
  v50 = ((*(&v142.x + 2 * (v46 ^ 3LL)) + 15) >> 4) + 1;
  v134.right = v50;
  v51 = ((*(&v142.y + 2 * ((unsigned int)v47 ^ 3LL)) + 15) >> 4) + 1;
  v134.bottom = v51;
  v52 = *(_DWORD *)(v12 + 60);
  v53 = *(_DWORD *)(v12 + 56);
  v54 = 0;
  v86 = 0LL;
  v55 = 0;
  v87 = v53;
  v88 = v52;
  if ( v104 && v12 == *(_QWORD *)(v104 + 2544) && (*(_DWORD *)(v104 + 40) & 0x20000) != 0 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v86, (const struct _POINTL *)(v104 + 2576), 0);
    v52 = v88;
    v53 = v87;
    v55 = HIDWORD(v86);
    v54 = v86;
  }
  if ( v54 > v48 )
    v48 = v54;
  v134.left = v48;
  if ( v55 > v49 )
    v49 = v55;
  v134.top = v49;
  if ( v53 < v50 )
    v50 = v53;
  v134.right = v50;
  if ( v52 < v51 )
    v51 = v52;
  v134.bottom = v51;
  if ( v50 < v48 )
  {
    v48 = v50;
    v134.left = v50;
  }
  else
  {
    if ( v51 < v49 )
      v49 = v51;
    v134.top = v49;
  }
  if ( v48 == v50 || (v56 = 0, v49 == v51) )
    v56 = 1;
  if ( !v56 )
  {
    if ( !v75
      && !*(_WORD *)(v12 + 100)
      && !v74
      && (v48 > *((_DWORD *)v78 + 2) || v50 < *(_DWORD *)v78 || v49 > *((_DWORD *)v78 + 3) || v51 < *((_DWORD *)v78 + 1)) )
    {
      v24 = v12;
      v113 = v12;
      v84 = v93;
      v25 = v103;
      v83 = v103;
      v82 = EngCopyBits;
LABEL_97:
      v11 = (RECTL *)v78;
      goto LABEL_20;
    }
    v142.x = v89.x - 16 * v48;
    v142.y -= 16 * v49;
    LODWORD(v143) = (_DWORD)v108 - 16 * v48;
    HIDWORD(v143) -= 16 * v49;
    v144.x -= 16 * v48;
    v144.y -= 16 * v49;
    v126[3] = 0;
    v129 = 0;
    v126[1] = v50 - v48 + 1;
    v126[2] = v51 - v49 + 1;
    v127 = 0LL;
    v126[0] = *(_DWORD *)(v12 + 96);
    v128 = *(_DWORD *)(v12 + 112) & 0x40000;
    if ( v75 )
    {
      v126[0] = 1;
    }
    else if ( v74 )
    {
      v126[0] = *(_DWORD *)(v13 + 96);
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v95, (struct _DEVBITMAPINFO *)v126, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v95 )
    {
      v79 = *(_QWORD *)&v134.left;
      if ( v90 )
      {
        *(_QWORD *)&v134.left = 0LL;
        v134.right -= v79;
        v134.bottom -= HIDWORD(v79);
        RGNOBJ::vSet((RGNOBJ *)&v90, &v134);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v138, v90, (const struct ERECTL *)&v134, 1);
        PDEVOBJ::vSync((PDEVOBJ *)&v104, v107, 0LL, 0);
        if ( v92 )
        {
          v82 = EngCopyBits;
          if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v104 + 2832);
          else
            v57 = EngCopyBits;
          v58 = v12 + 24;
          if ( !v12 )
            v58 = 0LL;
          v73 = (COLORADJUSTMENT *)&v79;
          v72 = (struct _POINTFIX *)&v134;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, char *))v57)(
            (v95 + 24) & -(__int64)(v95 != 0),
            v58,
            0LL,
            (char *)v91 + 4552);
        }
        else
        {
          v82 = EngCopyBits;
        }
        if ( !v75 )
          goto LABEL_94;
        v59 = -1;
        if ( v76 != 1 )
          v59 = 0;
        if ( EngEraseSurface((SURFOBJ *)((v95 + 24) & -(__int64)(v95 != 0)), &v134, v59) )
        {
LABEL_94:
          v24 = v95;
          v113 = v95;
          v84 = &v142;
          v25 = (struct SURFACE *)v138;
          v83 = (struct REGION *)v138;
          if ( v75 && *(_DWORD *)(v13 + 96) == 1 || v74 )
          {
            v105 = v81;
            v81 = 0LL;
          }
          else
          {
            v105 = (struct _CLIPOBJ *)((char *)v91 + 4552);
          }
          goto LABEL_97;
        }
      }
    }
    v16 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v90);
  SURFMEM::~SURFMEM((SURFMEM *)&v95);
  return v16;
}
