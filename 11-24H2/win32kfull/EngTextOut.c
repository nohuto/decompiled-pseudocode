/*
 * XREFs of EngTextOut @ 0x140058790
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140054F70 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     OffTextOut @ 0x1400553EC (OffTextOut.c)
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400573A0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1402FC0A0 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1402FE5A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14030A4E0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400A9F28 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400AB854 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400AB9EC (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1400ABA30 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400ABAFC (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1400ABCF8 (vGetPosInfo.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x140121B88 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x140122468 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1401224D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x140180A64 (--1FRINGERECT@@QEAA@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  STROBJ *v10; // r13
  SURFOBJ *v11; // r15
  __int64 v12; // rdx
  LONG left; // edi
  int v14; // ecx
  LONG top; // r14d
  LONG right; // esi
  int v17; // r12d
  LONG bottom; // ebx
  struct _GLYPHPOS *pgp; // r12
  unsigned int cGlyphs; // r15d
  unsigned int i; // r8d
  struct _GLYPHPOS *v22; // r9
  GLYPHBITS *pgb; // rax
  LONG v24; // r10d
  LONG v25; // r11d
  LONG v26; // r9d
  LONG v27; // eax
  signed __int16 *p_pvScan0; // r15
  FLONG flFontType; // eax
  int iDComplexity; // ecx
  unsigned int v32; // r12d
  FLONG v33; // eax
  int v34; // edx
  unsigned int v35; // r8d
  LONG v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // r12d
  unsigned int v39; // edx
  unsigned __int64 v40; // r13
  char v41; // di
  _DWORD *v42; // rax
  _DWORD *v43; // rbx
  STROBJ *v44; // r11
  unsigned int v45; // esi
  FLONG flAccel; // edx
  int v47; // ecx
  int v48; // eax
  struct _BRUSHOBJ *v49; // r12
  struct _FONTOBJ *v50; // r14
  unsigned int iSolidColor; // r12d
  struct _RECTL *p_rclBkGround; // rdi
  void *v53; // r8
  unsigned __int64 v54; // rdx
  struct _GLYPHPOS *v55; // rsi
  unsigned int v56; // r14d
  int v57; // r12d
  unsigned int v58; // r9d
  struct _FONTOBJ *v59; // r14
  int pwszOrg; // eax
  int v61; // eax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  bool v65; // cf
  void *v66; // r8
  unsigned __int64 v67; // rdx
  struct _SURFOBJ *v68; // r9
  int v69; // edi
  RECTL *v70; // r10
  LONG v71; // edx
  LONG v72; // edi
  int v73; // eax
  LONG v74; // edi
  LONG v75; // r8d
  LONG v76; // ecx
  LONG v77; // r9d
  LONG v78; // edi
  LONG v79; // edx
  int v80; // eax
  __int64 v81; // rax
  unsigned int v82; // r15d
  struct _GLYPHPOS *v83; // r13
  RFONTOBJ *v84; // rcx
  STROBJ *v85; // r9
  CLIPOBJ *v86; // rdi
  unsigned __int8 *v87; // r13
  struct _RECTL *v88; // rbx
  unsigned int v89; // r12d
  int v90; // edi
  struct _FONTOBJ *v91; // rdx
  LONG v92; // r14d
  unsigned int v93; // esi
  int v94; // eax
  bool v95; // zf
  int v96; // edi
  __int64 v97; // rdi
  LONG v98; // ecx
  LONG v99; // r10d
  LONG v100; // edx
  LONG v101; // r9d
  __int64 v102; // r8
  RECTL rclBkGround; // xmm0
  int v104; // ecx
  LONG v105; // ecx
  LONG v106; // r10d
  int v107; // eax
  Gre::Base *v108; // rcx
  struct Gre::Base::SESSION_GLOBALS *v109; // r9
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v111; // r9
  char *v112; // rcx
  __int64 v113; // rdi
  int v114; // eax
  BOOL (__stdcall *v115)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v116; // rdx
  unsigned __int8 *v117; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v118; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v119; // [rsp+40h] [rbp-E0h]
  struct _POINTL *v120; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v121; // [rsp+50h] [rbp-D0h]
  unsigned int v122; // [rsp+60h] [rbp-C0h]
  unsigned int v123; // [rsp+80h] [rbp-A0h]
  char v124; // [rsp+A0h] [rbp-80h]
  unsigned int v125; // [rsp+A4h] [rbp-7Ch] BYREF
  int v126; // [rsp+A8h] [rbp-78h]
  unsigned int v127; // [rsp+ACh] [rbp-74h]
  struct _GLYPHPOS *v128; // [rsp+B0h] [rbp-70h] BYREF
  STROBJ *pstroa; // [rsp+B8h] [rbp-68h]
  ULONG pc; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v131; // [rsp+C4h] [rbp-5Ch]
  int v132; // [rsp+C8h] [rbp-58h]
  struct _FONTOBJ *v133; // [rsp+D0h] [rbp-50h]
  struct _BRUSHOBJ *v134; // [rsp+D8h] [rbp-48h]
  CLIPOBJ *v135; // [rsp+E0h] [rbp-40h]
  struct _RECTL v136; // [rsp+E8h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+F8h] [rbp-28h] BYREF
  struct SURFACE *v138; // [rsp+100h] [rbp-20h]
  struct SURFACE *v139; // [rsp+108h] [rbp-18h] BYREF
  char v140; // [rsp+110h] [rbp-10h]
  int v141; // [rsp+114h] [rbp-Ch]
  RECTL *v142; // [rsp+118h] [rbp-8h]
  SURFOBJ *v143; // [rsp+120h] [rbp+0h]
  struct _POINTL *v144; // [rsp+128h] [rbp+8h]
  struct _BRUSHOBJ *v145; // [rsp+130h] [rbp+10h]
  struct SURFACE *v146; // [rsp+138h] [rbp+18h]
  _DWORD *v147; // [rsp+140h] [rbp+20h]
  struct _RECTL *v148; // [rsp+148h] [rbp+28h]
  unsigned __int8 *v149; // [rsp+150h] [rbp+30h]
  unsigned __int64 v150; // [rsp+158h] [rbp+38h]
  __int128 v151; // [rsp+160h] [rbp+40h] BYREF
  __int128 v152; // [rsp+170h] [rbp+50h]
  int v153; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v154[20]; // [rsp+184h] [rbp+64h] BYREF
  __int128 v155; // [rsp+2D0h] [rbp+1B0h] BYREF
  RECTL v156; // [rsp+2E0h] [rbp+1C0h] BYREF
  signed __int16 *v157; // [rsp+2F0h] [rbp+1D0h] BYREF
  __int64 v158; // [rsp+2F8h] [rbp+1D8h]
  CLIPOBJ *v159; // [rsp+300h] [rbp+1E0h]
  struct _BRUSHOBJ *v160; // [rsp+308h] [rbp+1E8h]
  int v161; // [rsp+310h] [rbp+1F0h]
  _DWORD v162[17]; // [rsp+314h] [rbp+1F4h]
  struct _FONTOBJ *v163; // [rsp+358h] [rbp+238h]
  _BYTE v164[80]; // [rsp+360h] [rbp+240h] BYREF
  struct _RECTL si128; // [rsp+3B0h] [rbp+290h] BYREF
  int v166; // [rsp+3CCh] [rbp+2ACh]

  v10 = pstro;
  v148 = prclExtra;
  v11 = pso;
  v142 = prclOpaque;
  v145 = pboFore;
  v134 = pboOpaque;
  v133 = pfo;
  pstroa = pstro;
  v143 = pso;
  v144 = pptlOrg;
  v135 = pco;
  memset_0(&v153, 0, 0x144uLL);
  left = v10->rclBkGround.left;
  v14 = 0;
  top = v10->rclBkGround.top;
  right = v10->rclBkGround.right;
  v17 = 0;
  bottom = v10->rclBkGround.bottom;
  ppgpos = 0LL;
  pc = 0;
  v131 = 0;
  v127 = 0;
  v155 = 0LL;
  v138 = 0LL;
  v156 = 0LL;
  v136.left = left;
  v136.top = top;
  v136.right = right;
  v136.bottom = bottom;
  if ( !v10->ulCharInc )
  {
    pgp = v10->pgp;
    cGlyphs = v10->cGlyphs;
    v128 = pgp;
    v125 = cGlyphs;
    v126 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&v10[1].cGlyphs = 0LL;
      v14 = 1;
      v126 = 1;
    }
    if ( v14 )
      goto LABEL_67;
    while ( 1 )
    {
      for ( i = 0; i < cGlyphs; ++i )
      {
        v22 = &pgp[i];
        pgb = v22->pgdf->pgb;
        if ( !pgb )
          goto LABEL_21;
        v24 = pgb->ptlOrigin.x + v22->ptl.x;
        v25 = v24 + pgb->sizlBitmap.cx;
        v26 = pgb->ptlOrigin.y + v22->ptl.y;
        v27 = v26 + pgb->sizlBitmap.cy;
        if ( left == right || top == bottom )
        {
          left = v24;
          v136.left = v24;
          top = v26;
          v136.top = v26;
          right = v25;
          v136.right = v25;
LABEL_19:
          v136.bottom = v27;
          bottom = v27;
          continue;
        }
        if ( v24 < left )
          left = v24;
        v136.left = left;
        if ( v26 < top )
        {
          top = v26;
          v136.top = v26;
        }
        if ( v25 > right )
        {
          right = v25;
          v136.right = v25;
        }
        if ( v27 > bottom )
          goto LABEL_19;
      }
      if ( !v126 )
      {
LABEL_21:
        v17 = v127;
        v11 = v143;
        break;
      }
LABEL_67:
      pwszOrg = (int)v10[4].pwszOrg;
      if ( (pwszOrg & 0x1400) != 0 )
      {
        v61 = STROBJ_bEnumLinked((struct ESTROBJ *)v10, &v125, &v128);
        pgp = v128;
        cGlyphs = v125;
        v126 = v61;
        continue;
      }
      cGlyphs = v10->cGlyphs;
      if ( (pwszOrg & 2) != 0 )
      {
        pgp = *(struct _GLYPHPOS **)&v10[1].rclBkGround.top;
        v128 = pgp;
        v126 = 0;
        goto LABEL_115;
      }
      v81 = v10[1].cGlyphs;
      v82 = cGlyphs - v81;
      if ( v82 )
      {
        v83 = (struct _GLYPHPOS *)(*(_QWORD *)&v10[1].rclBkGround.top + 24 * v81);
        v84 = *(RFONTOBJ **)&pstroa[1].ulCharInc;
        if ( v84 && (cGlyphs = RFONTOBJ::cGetGlyphData(v84, v82, v83)) != 0 )
        {
          v85 = pstroa;
          v12 = pstroa[1].cGlyphs;
          if ( (_DWORD)v12 && pstroa->ulCharInc )
            vGetPosInfo(pstroa, v12, &v83->ptl);
          v85[1].cGlyphs += cGlyphs;
          v65 = v85[1].cGlyphs < v85->cGlyphs;
          pgp = v83;
          v128 = v83;
          v10 = v85;
          v126 = v65;
LABEL_115:
          v125 = cGlyphs;
        }
        else
        {
          v10 = pstroa;
          cGlyphs = 0;
          v125 = 0;
          v126 = 0;
        }
      }
      else
      {
        cGlyphs = 0;
        v125 = 0;
        v126 = 0;
      }
    }
  }
  if ( v11 )
    p_pvScan0 = (signed __int16 *)&v11[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v146 = (struct SURFACE *)p_pvScan0;
  if ( (v133->flFontType & 0x10000) != 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, v12);
    if ( CurrentThreadNonPaged && (v63 = *CurrentThreadNonPaged) != 0 && v63 != -8 )
      v64 = *(_QWORD *)(v63 + 296);
    else
      v64 = *((_QWORD *)p_pvScan0 + 13);
    v138 = v64 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v64 + 48LL) + 2544LL) : (struct SURFACE *)p_pvScan0;
    v17 = p_pvScan0[50] != 0 ? 0x10 : 0;
    v65 = _bittest16(p_pvScan0 + 51, 8u);
    v127 = v17;
    if ( v65 )
    {
      v17 |= 0x80u;
      v127 = v17;
    }
  }
  flFontType = v133->flFontType;
  if ( (flFontType & 2) != 0 )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
  iDComplexity = (int)v135;
  if ( v135 )
    iDComplexity = v135->iDComplexity;
  v126 = iDComplexity;
  v125 = -1;
  LODWORD(v128) = v145->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) == 3 && ((unsigned int)bUMPDSecurityGateEx() && !v134 || v134->iSolidColor == -1) )
      return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
    v32 = v17 | 8;
    v127 = v32;
    v33 = v133->flFontType;
    if ( (v33 & 0x10000000) != 0 )
    {
      v34 = v10->rclBkGround.right;
      v127 = v32 | 0x20;
      v35 = 8;
      if ( v34 > 2147483643 )
        return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
      v36 = v10->rclBkGround.left;
      if ( (unsigned int)(v34 - v36 + 4) >= 0x7FFFFFFF )
        return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
      v37 = ((v34 + 4) & 0xFFFFFFFC) - (v36 & 0xFFFFFFFC);
    }
    else if ( (v33 & 0x20000000) != 0 )
    {
      v37 = v131;
      v35 = v131;
    }
    else
    {
      v35 = 4;
      v37 = (((v10->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((v10->rclBkGround.left >> 1) & 0xFFFFFFFC);
    }
  }
  else
  {
    v35 = 1;
    v37 = (int)(((v10->rclBkGround.right + 32) & 0xFFFFFFE0) - (v10->rclBkGround.left & 0xFFFFFFE0)) >> 3;
  }
  v38 = ((v35 * (v10->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC;
  v39 = v38 + (((v35 * (right - v10->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v37;
  v40 = v39 * (unsigned __int64)(unsigned int)(bottom - top);
  v131 = v39;
  v150 = v40;
  if ( v40 > 0xFFFFFFFF )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
  if ( (unsigned int)v40 >= 0x10000 )
  {
    v41 = 0;
    v124 = 0;
    v42 = EngAllocUserMem((unsigned int)v40, 0x6F746547u);
  }
  else
  {
    v41 = 1;
    v124 = 1;
    v42 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v40, 1869899079LL, 32LL);
  }
  v147 = v42;
  v43 = v42;
  if ( !v42 )
    return *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
  v44 = pstroa;
  v45 = v127;
  flAccel = pstroa->flAccel;
  v149 = (unsigned __int8 *)v42 + v131 * (pstroa->rclBkGround.top - top) + v38;
  if ( (flAccel & 0xA) == 2 )
  {
    v47 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v47 = 4;
    v48 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v48 = 2;
    v45 = (pstroa->ulCharInc != 0) | v48 | v47 | v127;
    v127 = v45;
  }
  v95 = p_pvScan0[50] == 0;
  v157 = p_pvScan0;
  if ( v95 )
    v158 = *((_QWORD *)p_pvScan0 + 9);
  else
    v158 = 0LL;
  v49 = v134;
  v50 = v133;
  v159 = v135;
  v160 = v134;
  v163 = v133;
  v161 = 0;
  if ( v142 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v49 )
    {
      if ( v41 )
        FreeThreadBufferWithTag(v43);
      else
        EngFreeUserMem(v43);
      v69 = *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
      FRINGERECT::~FRINGERECT((FRINGERECT *)&v157);
      return v69;
    }
    iSolidColor = v49->iSolidColor;
    v125 = iSolidColor;
    if ( iSolidColor == -1 || (_DWORD)v128 == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)p_pvScan0,
        v50,
        v45,
        v68,
        (struct _SURFOBJ *)v117,
        v135,
        v118,
        v142,
        v119,
        v120,
        v134,
        v144,
        v122);
      v44 = pstroa;
    }
    else
    {
      v44 = pstroa;
      v70 = v142;
      v71 = pstroa->rclBkGround.top;
      v72 = v142->top;
      if ( v71 > v72 )
      {
        v162[4 * v161] = v142->left;
        v162[4 * v161 + 1] = v72;
        v162[4 * v161 + 2] = v70->right;
        v162[4 * v161 + 3] = v71;
        v73 = ++v161;
      }
      else
      {
        v73 = v161;
      }
      v74 = v44->rclBkGround.left;
      v75 = v70->left;
      v76 = v44->rclBkGround.bottom;
      if ( v74 > v70->left )
      {
        v162[4 * v73] = v75;
        v162[4 * v161 + 1] = v71;
        v162[4 * v161 + 2] = v74;
        v162[4 * v161 + 3] = v76;
        v73 = ++v161;
      }
      v77 = v44->rclBkGround.right;
      v78 = v70->right;
      if ( v77 < v78 )
      {
        v162[4 * v73] = v77;
        v162[4 * v161 + 1] = v71;
        v162[4 * v161 + 2] = v78;
        v162[4 * v161 + 3] = v76;
        v73 = ++v161;
      }
      v79 = v70->bottom;
      if ( v76 < v79 )
      {
        v162[4 * v73] = v75;
        v162[4 * v161 + 1] = v76;
        v162[4 * v161 + 2] = v78;
        v41 = v124;
        v162[4 * v161++ + 3] = v79;
      }
      else
      {
        v41 = v124;
      }
    }
  }
  else
  {
    iSolidColor = v125;
  }
  v139 = 0LL;
  v140 = 0;
  v141 = 0;
  v151 = 0LL;
  v152 = 0LL;
  if ( (v45 & 0x10) == 0 )
    goto LABEL_50;
  v92 = v44->rclBkGround.top;
  LODWORD(v151) = *((_DWORD *)p_pvScan0 + 24);
  v93 = v44->rclBkGround.left & ((v45 >> 3) & 4 | 0xFFFFFFF8);
  DWORD1(v151) = v44->rclBkGround.right - v93;
  v95 = (*((_DWORD *)p_pvScan0 + 28) & 0x40000) == 0;
  DWORD2(v151) = v44->rclBkGround.bottom - v92;
  v94 = 1;
  if ( !v95 )
    v94 = 262145;
  *(_QWORD *)&v152 = 0LL;
  DWORD2(v152) = v94;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v139, (struct _DEVBITMAPINFO *)&v151, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v95 = v41 == 0;
LABEL_149:
    if ( v95 )
      EngFreeUserMem(v43);
    else
      FreeThreadBufferWithTag(v43);
    v96 = *(_DWORD *)ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v128, 0LL);
    SURFMEM::~SURFMEM((SURFMEM *)&v139);
    FRINGERECT::~FRINGERECT((FRINGERECT *)&v157);
    return v96;
  }
  v97 = *((_QWORD *)p_pvScan0 + 6);
  v146 = v139;
  v98 = 0;
  v99 = 0;
  if ( p_pvScan0 == *(signed __int16 **)(v97 + 2544) && (*(_DWORD *)(v97 + 40) & 0x20000) != 0 )
  {
    v98 = *(_DWORD *)(v97 + 2576);
    v99 = *(_DWORD *)(v97 + 2580);
  }
  v44 = pstroa;
  v100 = pstroa->rclBkGround.left;
  v101 = pstroa->rclBkGround.top;
  v102 = (unsigned int)pstroa->rclBkGround.right;
  if ( v98 > v100 )
    v100 = v98;
  rclBkGround = pstroa->rclBkGround;
  LODWORD(v155) = v100;
  if ( v99 > v101 )
    v101 = v99;
  v156 = rclBkGround;
  v104 = v143->sizlBitmap.cx + v98;
  DWORD1(v155) = v101;
  if ( v104 < (int)v102 )
    v102 = (unsigned int)v104;
  v105 = v99 + v143->sizlBitmap.cy;
  DWORD2(v155) = v102;
  v106 = pstroa->rclBkGround.bottom;
  if ( v105 < v106 )
    v106 = v105;
  HIDWORD(v155) = v106;
  if ( v126 )
  {
    if ( !(unsigned int)bIntersect(&v155, &v135->rclBounds, v102) )
    {
      v95 = v124 == 0;
      goto LABEL_149;
    }
    v106 = HIDWORD(v155);
    LODWORD(v102) = DWORD2(v155);
    v101 = DWORD1(v155);
    v100 = v155;
    v44 = pstroa;
  }
  v156.top = DWORD1(v155) - v92;
  v156.right = DWORD2(v155) - v93;
  v156.bottom = HIDWORD(v155) - v92;
  v156.left = v100 - v93;
  if ( iSolidColor == -1 && v100 < (int)v102 && v101 < v106 )
  {
    v107 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v164,
      (struct SURFACE *)p_pvScan0,
      v133,
      v107);
    v109 = Gre::Base::Globals(v108);
    if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
      v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v97 + 2832);
    else
      v110 = EngCopyBits;
    v111 = (char *)v109 + 4552;
    v112 = (char *)v139 + 24;
    if ( !v139 )
      v112 = 0LL;
    ((void (__fastcall *)(char *, signed __int16 *, _QWORD, char *, RECTL *, __int128 *))v110)(
      v112,
      p_pvScan0 + 12,
      0LL,
      v111,
      &v156,
      &v155);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v164);
    v44 = pstroa;
    *(_QWORD *)&pstroa[1].cGlyphs = 0LL;
    goto LABEL_51;
  }
LABEL_50:
  *(_QWORD *)&v44[1].cGlyphs = 0LL;
  if ( iSolidColor != -1 )
  {
    v66 = v43;
    v67 = (unsigned __int64)(unsigned int)v40 >> 2;
    if ( v67 )
    {
      if ( ((unsigned __int8)v43 & 4) == 0 )
        goto LABEL_79;
      *v43 = 0;
      if ( --v67 )
      {
        v66 = v43 + 1;
LABEL_79:
        memset(v66, 0, 8 * (v67 >> 1));
        if ( (v67 & 1) != 0 )
          *((_DWORD *)v66 + v67 - 1) = 0;
      }
    }
  }
LABEL_51:
  p_rclBkGround = &v44->rclBkGround;
  v134 = (struct _BRUSHOBJ *)&v44->rclBkGround;
  do
  {
    if ( iSolidColor == -1 )
    {
      v53 = v43;
      v54 = (unsigned __int64)(unsigned int)v40 >> 2;
      if ( v54 )
      {
        if ( ((unsigned __int8)v43 & 4) != 0 )
        {
          *v43 = 0;
          if ( !--v54 )
            goto LABEL_57;
          v53 = v43 + 1;
        }
        memset(v53, 0, 8 * (v54 >> 1));
        p_rclBkGround = (struct _RECTL *)v134;
        if ( (v54 & 1) != 0 )
          *((_DWORD *)v53 + v54 - 1) = 0;
      }
    }
LABEL_57:
    v55 = v44->pgp;
    if ( v55 )
    {
      v56 = v44->cGlyphs;
      v57 = 0;
      pc = v44->cGlyphs;
      ppgpos = v55;
      v132 = 0;
    }
    else
    {
      if ( ((__int64)v44[4].pwszOrg & 2) != 0 )
        v80 = STROBJ_bEnum(v44, &pc, &ppgpos);
      else
        v80 = STROBJ_bEnumCheckBounds(v44, &pc, &ppgpos, &v136);
      v44 = pstroa;
      v56 = pc;
      v57 = v80;
      v55 = ppgpos;
      v132 = v80;
    }
    if ( v56 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v166 = 0;
      switch ( v126 )
      {
        case 0:
          goto LABEL_61;
        case 1:
          si128 = v135->rclBounds;
LABEL_61:
          v58 = v56;
          v59 = v133;
          vExpandAndCopyText(
            (struct SURFACE *)p_pvScan0,
            v133,
            v55,
            v58,
            v149,
            v131,
            v44->ulCharInc,
            v146,
            v138,
            p_rclBkGround,
            v121,
            (int)v128,
            v125,
            v127,
            &si128,
            v148,
            v123,
            v145,
            v144);
          goto LABEL_62;
        case 3:
          v86 = v135;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v135, 0, 0, 4u, 0);
          v87 = v149;
          v88 = (struct _RECTL *)v134;
          v89 = v125;
          do
          {
            v90 = XCLIPOBJ::bEnum((XCLIPOBJ *)v86, 0x134u, (char *)&v153, 0LL);
            v91 = v133;
            v154[v153].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)p_pvScan0,
              v91,
              v55,
              v56,
              v87,
              v131,
              pstroa->ulCharInc,
              v146,
              v138,
              v88,
              v121,
              (int)v128,
              v89,
              v127,
              v154,
              v148,
              v123,
              v145,
              v144);
            v95 = v90 == 0;
            v86 = v135;
          }
          while ( !v95 );
          v43 = v147;
          LODWORD(v40) = v150;
          v57 = v132;
          break;
      }
    }
    v59 = v133;
LABEL_62:
    p_rclBkGround = (struct _RECTL *)v134;
    v95 = v57 == 0;
    iSolidColor = v125;
    v44 = pstroa;
  }
  while ( !v95 );
  if ( (v127 & 0x10) != 0 )
  {
    v113 = *((_QWORD *)p_pvScan0 + 6);
    v114 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v164,
      (struct SURFACE *)p_pvScan0,
      v59,
      v114);
    if ( (*((_DWORD *)p_pvScan0 + 28) & 0x400) != 0 )
      v115 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2832);
    else
      v115 = EngCopyBits;
    v116 = (char *)v139 + 24;
    if ( !v139 )
      v116 = 0LL;
    ((void (__fastcall *)(signed __int16 *, char *, CLIPOBJ *, _QWORD, __int128 *, RECTL *))v115)(
      p_pvScan0 + 12,
      v116,
      v135,
      0LL,
      &v155,
      &v156);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v164);
  }
  if ( v124 )
    FreeThreadBufferWithTag(v43);
  else
    EngFreeUserMem(v43);
  SURFMEM::~SURFMEM((SURFMEM *)&v139);
  FRINGERECT::~FRINGERECT((FRINGERECT *)&v157);
  return 1;
}
