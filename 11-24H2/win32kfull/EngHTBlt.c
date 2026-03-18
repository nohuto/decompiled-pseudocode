/*
 * XREFs of EngHTBlt @ 0x14000C53C
 * Callers:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140126DA0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1402252C4 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14000A568 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x140126408 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140127728 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140127760 (--$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     HT_HalftoneBitmap @ 0x14013C6B8 (HT_HalftoneBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401A23C8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A23F4 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1401A6E7C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401B0C3C (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401BB7B4 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1401C285C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1401C3400 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1401D0990 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 *a7,
        RECTL *a8,
        LONG *a9,
        __int64 *a10,
        int a11,
        __int64 a12)
{
  struct SURFACE *v15; // r8
  struct SURFACE *v16; // r13
  Gre::Base *v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rax
  int v22; // r9d
  bool v23; // zf
  int v24; // esi
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  int v26; // r12d
  LONG v27; // r9d
  LONG cx; // edx
  unsigned __int64 v29; // rcx
  LONG cy; // r8d
  int v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  void *v34; // rax
  Gre::Base *v35; // rcx
  struct tagCOLORADJUSTMENT *v36; // r14
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  struct SURFACE *v39; // rdx
  struct XLATE *v40; // r8
  struct PALETTE *v41; // rax
  __int64 v42; // rbx
  struct PALETTE *v43; // r14
  int v44; // r12d
  unsigned __int16 v45; // dx
  __int64 v46; // r8
  __int128 v47; // xmm0
  int v48; // eax
  struct SURFACE *v49; // rcx
  BYTE iDComplexity; // bl
  CLIPOBJ *v51; // rdx
  LONG *v52; // r13
  int v53; // r11d
  RECTL *p_rclBounds; // rdi
  LONG *v55; // rax
  LONG right; // ecx
  LONG v57; // r9d
  int left; // edx
  LONG v59; // ecx
  int v60; // r10d
  LONG bottom; // eax
  LONG v62; // edx
  int top; // ecx
  LONG v64; // eax
  int v65; // ecx
  int v66; // eax
  XLATEOBJ *v67; // rdi
  __int64 v68; // r12
  _QWORD *v69; // rax
  __int64 v70; // rdx
  Gre::Base *v71; // rcx
  __int64 v72; // rbx
  __int64 *v73; // r12
  __int64 v74; // rdi
  struct Gre::Base::SESSION_GLOBALS *v75; // rax
  SURFOBJ *v76; // r14
  Gre::Base *v77; // rcx
  struct Gre::Base::SESSION_GLOBALS *v78; // rax
  SURFOBJ *v79; // r14
  int v80; // ebx
  __int64 v81; // rcx
  struct _SURFOBJ *v82; // rcx
  __int64 v83; // rax
  _OWORD *v84; // r12
  __int16 v85; // dx
  unsigned int v86; // eax
  Gre::Base *v87; // rcx
  CLIPOBJ *v88; // r14
  struct Gre::Base::SESSION_GLOBALS *v89; // rax
  struct SURFACE *v90; // rax
  SURFOBJ *v91; // rdx
  int v92; // eax
  struct Gre::Base::SESSION_GLOBALS *v93; // rax
  int v94; // ebx
  Gre::Base *v95; // rcx
  struct Gre::Base::SESSION_GLOBALS *v96; // rax
  struct Gre::Base::SESSION_GLOBALS *v98; // rax
  struct Gre::Base::SESSION_GLOBALS *v99; // rax
  int v100; // eax
  CLIPOBJ *v101; // rax
  int v102; // eax
  int v103; // r9d
  Gre::Base *v104; // rcx
  struct Gre::Base::SESSION_GLOBALS *v105; // rax
  Gre::Base *v106; // rcx
  struct Gre::Base::SESSION_GLOBALS *v107; // rax
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  LONG *v109; // rdx
  char v110; // cl
  ULONG iBitmapFormat; // ecx
  int v112; // eax
  int v113; // eax
  _DWORD *v114; // rax
  BOOL (__stdcall *v115)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned int cEntries; // ecx
  _BYTE *v117; // r8
  __int64 v118; // r10
  __int64 v119; // r9
  char v120; // cl
  __int64 v121; // rax
  char *v122; // rdi
  int v123; // esi
  CLIPOBJ *v124; // r13
  int v125; // eax
  unsigned int v126; // r14d
  int v127; // r13d
  int v128; // [rsp+60h] [rbp-A0h]
  BYTE v129; // [rsp+64h] [rbp-9Ch]
  int v130; // [rsp+68h] [rbp-98h]
  __int64 v131; // [rsp+70h] [rbp-90h] BYREF
  RECTL *v132; // [rsp+78h] [rbp-88h] BYREF
  int v133; // [rsp+80h] [rbp-80h] BYREF
  LONG *p_left; // [rsp+88h] [rbp-78h]
  int v135; // [rsp+90h] [rbp-70h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  __int64 *v137; // [rsp+A0h] [rbp-60h] BYREF
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v139; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v140; // [rsp+B8h] [rbp-48h]
  __int64 v141; // [rsp+C0h] [rbp-40h] BYREF
  int v142; // [rsp+C8h] [rbp-38h]
  LONG *v143; // [rsp+D0h] [rbp-30h] BYREF
  char v144; // [rsp+D8h] [rbp-28h]
  int v145; // [rsp+DCh] [rbp-24h]
  __int64 v146; // [rsp+E0h] [rbp-20h] BYREF
  char v147; // [rsp+E8h] [rbp-18h]
  int v148; // [rsp+ECh] [rbp-14h]
  struct tagCOLORADJUSTMENT *v149; // [rsp+F0h] [rbp-10h]
  struct XLATE *v150; // [rsp+F8h] [rbp-8h]
  __int64 v151; // [rsp+100h] [rbp+0h]
  struct SURFACE *v152; // [rsp+108h] [rbp+8h] BYREF
  int v153; // [rsp+110h] [rbp+10h]
  SURFOBJ *psoDest; // [rsp+118h] [rbp+18h]
  SURFOBJ *v155; // [rsp+120h] [rbp+20h]
  __int64 v156; // [rsp+128h] [rbp+28h] BYREF
  __int128 v157; // [rsp+130h] [rbp+30h] BYREF
  __int128 v158; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v159; // [rsp+150h] [rbp+50h]
  __int64 *v160; // [rsp+158h] [rbp+58h]
  __int64 *v161; // [rsp+160h] [rbp+60h]
  __int64 v162; // [rsp+168h] [rbp+68h]
  _DWORD v163[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v164; // [rsp+180h] [rbp+80h]
  int v165; // [rsp+188h] [rbp+88h]
  int v166; // [rsp+18Ch] [rbp+8Ch]
  struct PALETTE *v167; // [rsp+190h] [rbp+90h]
  _DWORD v168[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v169; // [rsp+1A8h] [rbp+A8h]
  int v170; // [rsp+1B0h] [rbp+B0h]
  int v171; // [rsp+1B4h] [rbp+B4h]
  _OWORD v172[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v173; // [rsp+1D8h] [rbp+D8h]
  _OWORD v174[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 *v175; // [rsp+200h] [rbp+100h]
  _OWORD v176[2]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v177; // [rsp+228h] [rbp+128h]
  __int16 v178; // [rsp+230h] [rbp+130h] BYREF
  char v179; // [rsp+233h] [rbp+133h]
  __int128 *v180; // [rsp+238h] [rbp+138h]
  __int128 v181; // [rsp+240h] [rbp+140h]
  RECTL v182; // [rsp+250h] [rbp+150h]
  RECTL rclBounds; // [rsp+260h] [rbp+160h]
  RECTL prclDest; // [rsp+270h] [rbp+170h] BYREF
  __int64 v185; // [rsp+280h] [rbp+180h]
  __int64 v186; // [rsp+288h] [rbp+188h]
  RECTL prclTrg; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v188; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v189[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v150 = a5;
  v149 = a6;
  v137 = a7;
  v132 = a8;
  v160 = a10;
  pco = a4;
  *(_QWORD *)&prclTrg.left = a12;
  v156 = a3;
  v155 = a2;
  psoDest = a1;
  p_left = a9;
  pptlSrc = (POINTL)Gre::Base::Globals((Gre::Base *)a1);
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v140 = v15;
  v16 = (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL));
  v17 = (Gre::Base *)-a3;
  memset(v174, 0, sizeof(v174));
  v18 = 0;
  v19 = (a3 - 24) & -(__int64)(a3 != 0);
  v20 = 0;
  v151 = v19;
  v175 = 0LL;
  v173 = 0LL;
  v177 = 0LL;
  v159 = 0LL;
  memset(v172, 0, sizeof(v172));
  memset(v176, 0, sizeof(v176));
  v158 = 0LL;
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v21 = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
  v131 = v21;
  if ( !v21 )
    return 0LL;
  v22 = 1;
  v23 = (*(_DWORD *)(v21 + 40) & 1) == 0;
  v24 = *(_DWORD *)(v21 + 40) & 1;
  v153 = v24;
  v133 = v24;
  if ( !v23 )
  {
    v25 = Gre::Base::Globals(v17);
    GreAcquireSemaphore<10,>(v25);
    v21 = v131;
    v22 = 1;
    v15 = v140;
  }
  if ( a1->iType )
  {
    v26 = *(_DWORD *)(v21 + 2360);
    if ( v26 )
    {
      switch ( v26 )
      {
        case 2:
          v128 = 2;
          v130 = 2;
          break;
        case 3:
          v130 = 255;
          v128 = 2;
          break;
        case 4:
          v130 = 254;
          v128 = 3;
          break;
        case 5:
          v130 = 253;
          v128 = 4;
          break;
        case 6:
          v130 = 5;
          v128 = 5;
          break;
        case 7:
          v130 = 6;
          v128 = 6;
          break;
        default:
          if ( v24 )
          {
            v98 = Gre::Base::Globals((Gre::Base *)0xFF);
            GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
              GreReleaseSemaphoreExclusiveInternal,
              *(_QWORD *)v98 + 1352LL);
          }
          return 0LL;
      }
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  switch ( *((_DWORD *)v15 + 24) )
  {
    case 1:
      v26 = 0;
      v20 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
LABEL_14:
      v128 = 1;
LABEL_15:
      v130 = v22;
      break;
    case 2:
      v128 = 2;
      v22 = 2;
      v20 = ((a1->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC;
      if ( *(_DWORD *)(v21 + 2360) != 2 )
        v22 = 255;
      v26 = (*(_DWORD *)(v21 + 2360) != 2) + 2;
      goto LABEL_15;
    case 3:
      v26 = 4;
      v130 = 254;
      v20 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
      v128 = 3;
      break;
    case 4:
      v26 = 5;
      v130 = 253;
      v128 = 4;
      v20 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
      break;
    case 5:
      v26 = 6;
      v130 = 5;
      v128 = 5;
      v20 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
      break;
    case 6:
      v26 = 7;
      v20 = 4 * a1->sizlBitmap.cx;
      v130 = 6;
      v128 = 6;
      break;
    default:
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v133);
      return 0LL;
  }
LABEL_16:
  v27 = 0;
  cx = a2->sizlBitmap.cx;
  v29 = 0LL;
  cy = a2->sizlBitmap.cy;
  if ( *p_left > 0 )
    v27 = *p_left;
  v31 = p_left[1];
  v188.left = v27;
  if ( v31 > 0 )
    v29 = (unsigned int)v31;
  v32 = p_left[2];
  v188.top = v29;
  if ( v32 < cx )
    cx = v32;
  v33 = p_left[3];
  v188.right = cx;
  if ( v33 < cy )
    cy = v33;
  v188.bottom = cy;
  if ( cx < v27 )
  {
    v188.left = cx;
  }
  else
  {
    if ( cy < (int)v29 )
      v29 = (unsigned int)cy;
    v188.top = v29;
    if ( (_DWORD)v29 != cy && v27 != cx )
    {
      v34 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v131);
      v36 = v149;
      if ( !v34 && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v131, v149) )
        goto LABEL_186;
      v146 = 0LL;
      v147 = 0;
      v148 = 0;
      if ( v24 )
      {
        v37 = Gre::Base::Globals(v35);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v37 + 1352LL);
      }
      if ( !v16 )
        goto LABEL_196;
      if ( (*(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x1000) != 0 )
      {
        v152 = *(struct SURFACE **)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x30);
        PDEVOBJ::vSync((PDEVOBJ *)&v152, a2, 0LL, 0);
      }
      if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
      {
        iBitmapFormat = a2->iBitmapFormat;
        v163[1] = a2->sizlBitmap.cx;
        v163[2] = a2->sizlBitmap.cy;
        v112 = *(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x40000;
        v163[3] = 0;
        v165 = v112;
        v166 = 0;
        v164 = 0LL;
        if ( iBitmapFormat == 7 )
        {
          v163[0] = 2;
        }
        else if ( iBitmapFormat == 8 )
        {
          v163[0] = 3;
        }
        else
        {
          v163[0] = iBitmapFormat;
        }
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v146, (struct _DEVBITMAPINFO *)v163, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
          || !EngCopyBits(
                (SURFOBJ *)(-(__int64)(v146 != 0) & (v146 + 24)),
                a2,
                0LL,
                (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL),
                &v188,
                (POINTL *)&v188) )
        {
          HTSEMOBJ::vAcquire((HTSEMOBJ *)&v133);
          SURFMEM::~SURFMEM((SURFMEM *)&v146);
LABEL_186:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v133);
          return 0xFFFFFFFFLL;
        }
        v162 = v146;
      }
      else
      {
        v162 = (unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL);
      }
      if ( v24 )
      {
        v38 = Gre::Base::Globals(v35);
        GreAcquireSemaphore<10,>(v38);
      }
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v131) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v131, v36) )
        goto LABEL_196;
      v167 = ppalGetFromXlate(v16, v140, v150, 1u, 1);
      if ( !v167 )
      {
LABEL_197:
        SURFMEM::~SURFMEM((SURFMEM *)&v146);
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v133);
        return v18;
      }
      v41 = ppalGetFromXlate(v16, v39, v40, 2u, 1);
      v42 = v131;
      v43 = v41;
      v142 = 0;
      v141 = 0LL;
      v161 = 0LL;
      if ( v26 == *(_DWORD *)(v131 + 2360) )
      {
        v44 = *(_DWORD *)(v131 + 40) & 0x200;
      }
      else
      {
        if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v141, v26, (struct _GDIINFO *)(v131 + 2120)) )
        {
LABEL_201:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
LABEL_196:
          v18 = -1;
          goto LABEL_197;
        }
        v161 = &v141;
        v100 = XEPALOBJ::bEqualEntries(&v141, v43);
        v42 = v131;
        v44 = v100;
      }
      LODWORD(v139) = v44;
      memset_0(&v178, 0, 0x68uLL);
      v45 = a11;
      v157 = 0LL;
      if ( a11 == 512 )
      {
        v102 = **(_DWORD **)&prclTrg.left;
        if ( (unsigned __int8)**(_DWORD **)&prclTrg.left )
        {
          v45 = 0;
          a11 = 0;
        }
        else
        {
          v103 = 255;
          BYTE1(v157) = BYTE2(**(_DWORD **)&prclTrg.left);
          if ( HIBYTE(v102) == 1 && BYTE2(v102) == 0xFF )
          {
            if ( !(unsigned int)bIsSourceBGRA(v16) )
            {
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
              SURFMEM::~SURFMEM((SURFMEM *)&v146);
              if ( v24 )
              {
                v105 = Gre::Base::Globals(v104);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v105 + 1352LL);
              }
              return 0xFFFFFFFFLL;
            }
            v45 = 512;
            v110 = 4;
          }
          else
          {
            v110 = 1;
          }
          LOBYTE(v157) = v110;
          if ( v43 )
          {
            *((_QWORD *)&v157 + 1) = *((_QWORD *)v43 + 14);
            WORD1(v157) = *((_WORD *)v43 + 14);
            v113 = *((_DWORD *)v43 + 6);
            if ( (v113 & 8) != 0
              || (v113 & 2) != 0
              && (v114 = (_DWORD *)*((_QWORD *)v43 + 14), *v114 == 16711680)
              && v114[1] == 65280
              && v114[2] == v103 )
            {
              LOBYTE(v157) = v110 | 2;
            }
          }
          v180 = &v157;
        }
      }
      v46 = v45;
      v178 = v45;
      v47 = *(_OWORD *)p_left;
      v182 = *v132;
      v185 = *v137;
      v181 = v47;
      v179 = *(_BYTE *)(v42 + 2352);
      if ( v150 )
      {
        v48 = *((_DWORD *)v150 + 18);
        if ( (v48 & 4) != 0 || (v48 & 0x20) == 0 && (v48 & 3) != 0 )
        {
          LOWORD(v46) = v45 | 0x80;
          v178 = v45 | 0x80;
        }
      }
      v49 = v140;
      iDComplexity = 0;
      v51 = pco;
      v52 = (LONG *)v140;
      v152 = v140;
      v143 = 0LL;
      v144 = 0;
      v145 = 0;
      v135 = 0;
      if ( pco )
        iDComplexity = pco->iDComplexity;
      v53 = v128;
      v129 = iDComplexity;
      if ( !psoDest->iType && psoDest->lDelta == v20 && (v128 == 3 || v44) && iDComplexity != 3 )
      {
        if ( psoDest != v155 )
          goto LABEL_74;
        p_rclBounds = v132;
        if ( !(unsigned int)bIntersect(p_left, v132, v46) )
          goto LABEL_74;
        LOWORD(v46) = v178;
        v49 = (struct SURFACE *)v52;
        v53 = v128;
        v51 = pco;
      }
      else
      {
        p_rclBounds = v132;
      }
      v135 = 1;
      if ( iDComplexity )
      {
        v129 = 0;
        v101 = 0LL;
        p_rclBounds = &v51->rclBounds;
        if ( iDComplexity != 1 )
          v101 = v51;
        pco = v101;
      }
      v55 = (LONG *)*((_QWORD *)v49 + 7);
      right = p_rclBounds->right;
      v57 = right;
      left = p_rclBounds->left;
      p_left = v55;
      if ( right <= left )
      {
        v57 = left;
        left = right;
      }
      v59 = 0;
      if ( left >= 0 )
        v59 = left;
      if ( v57 > (int)v55 )
        v57 = (int)v55;
      v60 = v57 - v59;
      if ( v57 - v59 > 0 )
      {
        bottom = p_rclBounds->bottom;
        v62 = bottom;
        prclDest.left = v59;
        top = p_rclBounds->top;
        prclDest.right = v57;
        if ( bottom <= top )
        {
          v62 = top;
          top = bottom;
        }
        v64 = 0;
        if ( top >= 0 )
          v64 = top;
        if ( v62 > SHIDWORD(p_left) )
          v62 = HIDWORD(p_left);
        v65 = v62 - v64;
        if ( v62 - v64 > 0 )
        {
          prclDest.top = v64;
          v66 = v52[28] & 0x40000;
          prclDest.bottom = v62;
          v178 = v46 | 0x10;
          v168[2] = v65;
          v168[3] = 0;
          v171 = 0;
          v168[1] = v60;
          v169 = 0LL;
          v170 = v66;
          v168[0] = v53;
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v143, (struct _DEVBITMAPINFO *)v168, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
LABEL_200:
            SURFMEM::~SURFMEM((SURFMEM *)&v143);
            goto LABEL_201;
          }
          v52 = v143;
          v152 = (struct SURFACE *)v143;
LABEL_74:
          v132 = 0LL;
          v67 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL);
          p_left = (LONG *)(*(_QWORD *)&pptlSrc + 4552LL);
          v68 = *(_QWORD *)&pptlSrc + 4552LL;
          *(_QWORD *)&prclTrg.left = *(_QWORD *)&pptlSrc + 4552LL;
          v137 = 0LL;
          v69 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v131);
          if ( !(_DWORD)v139 )
          {
            LOBYTE(v70) = 8;
            v72 = HmgShareLockCheck(*v69, v70);
            v139 = v72;
            v73 = &v139;
            if ( v161 )
              v73 = v161;
            if ( !v150 || (v74 = *((_QWORD *)v150 + 7)) == 0 )
              v74 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 3768LL);
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v132, 0LL, 0LL, *v73, v43, v74, v74, 0, 0xFFFFFF, 0xFFFFFF, 0) )
            {
              if ( v72 )
                DEC_SHARE_REF_CNT(v72);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v137);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v132);
              SURFMEM::~SURFMEM((SURFMEM *)&v143);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
              SURFMEM::~SURFMEM((SURFMEM *)&v146);
              if ( v24 )
              {
                v107 = Gre::Base::Globals(v106);
                GreReleaseSemaphoreExclusive<10,>(v107);
              }
              return 0xFFFFFFFFLL;
            }
            p_left = &v132->left;
            if ( (v151 || a11 == 512) && v135 )
            {
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v137,
                                    0LL,
                                    0LL,
                                    v43,
                                    *v73,
                                    v74,
                                    v74,
                                    0,
                                    0xFFFFFF,
                                    0xFFFFFF,
                                    0) )
              {
                EPALOBJ::~EPALOBJ((EPALOBJ *)&v139);
LABEL_199:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v137);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v132);
                goto LABEL_200;
              }
              v68 = (__int64)v137;
            }
            else
            {
              v68 = *(_QWORD *)&prclTrg.left;
            }
            if ( v72 )
              DEC_SHARE_REF_CNT(v72);
            v67 = (XLATEOBJ *)p_left;
          }
          if ( v24 )
          {
            v75 = Gre::Base::Globals(v71);
            GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
              GreReleaseSemaphoreExclusiveInternal,
              *(_QWORD *)v75 + 1352LL);
          }
          v76 = psoDest;
          PDEVOBJ::vSync((PDEVOBJ *)&v131, psoDest, 0LL, 0);
          if ( v151 || a11 == 512 )
          {
            if ( v135 )
            {
              prclTrg.right = v52[14];
              prclTrg.bottom = v52[15];
              ++v52[23];
              *(_QWORD *)&prclTrg.left = 0LL;
              v115 = (*((_DWORD *)v140 + 28) & 0x400) != 0
                   ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v131 + 2832)
                   : EngCopyBits;
              if ( !((unsigned int (__fastcall *)(unsigned __int64, SURFOBJ *, _QWORD, __int64, RECTL *, RECTL *))v115)(
                      (unsigned __int64)(v52 + 6) & -(__int64)(v52 != 0LL),
                      v76,
                      0LL,
                      v68,
                      &prclTrg,
                      &prclDest)
                && !EngBitBlt(
                      (SURFOBJ *)((unsigned __int64)(v52 + 6) & -(__int64)(v52 != 0LL)),
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &prclTrg,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      0xFFFFu) )
              {
                HTSEMOBJ::vAcquire((HTSEMOBJ *)&v133);
                goto LABEL_199;
              }
            }
          }
          if ( v24 )
          {
            v78 = Gre::Base::Globals(v77);
            GreAcquireSemaphore<10,>(v78);
          }
          if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v131) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v131, v149) )
            goto LABEL_199;
          v79 = (SURFOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v131);
          v155 = v79;
          v80 = 0;
          v173 = 0LL;
          v81 = v162 + 24;
          if ( !v162 )
            v81 = 0LL;
          if ( !(unsigned int)bSetHTSrcSurfInfo(v81, v167, v172, v150) )
            goto LABEL_118;
          v82 = (struct _SURFOBJ *)(v52 + 6);
          if ( !v52 )
            v82 = 0LL;
          if ( !(unsigned int)bSetHTSurfInfo(v82, (struct _HTSURFACEINFO *)v174, v130) )
            goto LABEL_118;
          v83 = v151;
          if ( v151 )
          {
            if ( !(unsigned int)bSetHTSurfInfo(
                                  (struct _SURFOBJ *)(v151 + 24),
                                  (struct _HTSURFACEINFO *)v176,
                                  *(_DWORD *)(v156 + 72)) )
            {
LABEL_118:
              if ( v173 )
                FreeThreadBufferWithTag();
              v94 = v80 != 0 ? 2 : 0;
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v137);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v132);
              SURFMEM::~SURFMEM((SURFMEM *)&v143);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
              SURFMEM::~SURFMEM((SURFMEM *)&v146);
              if ( v24 )
              {
                v96 = Gre::Base::Globals(v95);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v96 + 1352LL);
              }
              return (unsigned int)(v94 - 1);
            }
            v83 = v151;
          }
          LODWORD(v84) = 0;
          if ( v83 )
          {
            if ( (unsigned int)bUMPDSecurityGateEx() && !v160 )
            {
              if ( v173 )
                FreeThreadBufferWithTag();
              goto LABEL_199;
            }
            v84 = v176;
            v186 = *v160;
          }
          v85 = v178;
          v86 = 256;
          if ( (*(_DWORD *)(v131 + 2364) & 0x100) == 0 )
          {
            v85 = v178 | 2;
            v178 |= 2u;
          }
          v80 = 1;
          if ( v128 == 3 )
          {
            *(_QWORD *)&v158 = 0xFF00010100LL;
            v175 = &v158;
            v159 = v189;
            DWORD2(v158) = 256;
            cEntries = v67->cEntries;
            if ( cEntries > 0x100 || (v86 = v67->cEntries, cEntries) )
            {
              v117 = v189;
              v118 = v86;
              v119 = 0LL;
              do
              {
                v120 = v67->pulXlate[v119++];
                *v117++ = v120;
                --v118;
              }
              while ( v118 );
            }
            v67 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL);
            p_left = (LONG *)(*(_QWORD *)&pptlSrc + 4552LL);
          }
          if ( v129 )
          {
            v178 = v85 | 1;
            if ( v129 != 1 )
            {
              v88 = pco;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
              v121 = AllocFreeTmpBuffer(324LL);
              v122 = (char *)v121;
              if ( !v121 )
              {
                v67 = (XLATEOBJ *)p_left;
                v80 = 0;
                goto LABEL_107;
              }
              v123 = (int)v155;
              v124 = v88;
              v156 = v121;
              do
              {
                v125 = XCLIPOBJ::bEnum((XCLIPOBJ *)v124, 0x144u, v122, 0LL);
                v126 = 0;
                LODWORD(v139) = v125;
                if ( *(_DWORD *)v122 )
                {
                  v127 = (int)v149;
                  do
                  {
                    rclBounds = *(RECTL *)&v122[16 * v126++ + 4];
                    v80 = ((int)HT_HalftoneBitmap(
                                  v123,
                                  v127,
                                  (unsigned int)v172,
                                  (_DWORD)v84,
                                  (__int64)v174,
                                  (__int64)&v178) >= 0) & (unsigned __int8)v80;
                  }
                  while ( v126 < *(_DWORD *)v122 );
                  v125 = v139;
                  v124 = pco;
                }
              }
              while ( v125 && v80 );
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v156);
              v24 = v153;
              v52 = (LONG *)v152;
              v67 = (XLATEOBJ *)p_left;
LABEL_106:
              v88 = pco;
LABEL_107:
              if ( v24 )
              {
                v89 = Gre::Base::Globals(v87);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v89 + 1352LL);
              }
              if ( v135 && v80 )
              {
                v90 = v140;
                pptlSrc = 0LL;
                ++*((_DWORD *)v140 + 23);
                if ( psoDest->iType )
                {
                  if ( (*((_DWORD *)v90 + 28) & 0x400) != 0 )
                    v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v131 + 2832);
                  else
                    v108 = EngCopyBits;
                  v109 = v52 + 6;
                  if ( !v52 )
                    v109 = 0LL;
                  v92 = ((__int64 (__fastcall *)(SURFOBJ *, LONG *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v108)(
                          psoDest,
                          v109,
                          v88,
                          v67,
                          &prclDest,
                          &pptlSrc);
                }
                else
                {
                  v91 = (SURFOBJ *)(v52 + 6);
                  if ( !v52 )
                    v91 = 0LL;
                  v92 = EngCopyBits(psoDest, v91, v88, v67, &prclDest, &pptlSrc);
                }
                v80 = v92;
              }
              if ( v24 )
              {
                v93 = Gre::Base::Globals(v87);
                GreAcquireSemaphore<10,>(v93);
              }
              goto LABEL_118;
            }
            rclBounds = pco->rclBounds;
          }
          v80 = (int)HT_HalftoneBitmap(
                       (_DWORD)v79,
                       (_DWORD)v149,
                       (unsigned int)v172,
                       (_DWORD)v84,
                       (__int64)v174,
                       (__int64)&v178) >= 0;
          goto LABEL_106;
        }
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v143);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
      SURFMEM::~SURFMEM((SURFMEM *)&v146);
    }
  }
  if ( v24 )
  {
    v99 = Gre::Base::Globals((Gre::Base *)v29);
    GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)v99 + 1352LL);
  }
  return 1LL;
}
