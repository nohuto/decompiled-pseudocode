/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140009EDC
 * Callers:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 * Callees:
 *     ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x140008B70 (-bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRI.c)
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1400096F4 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x140009818 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1401C34DC (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  FLONG fl; // eax
  unsigned int v11; // edi
  unsigned int v12; // r8d
  ULONG iSolidColor; // ecx
  const struct _BMINFO *v14; // r15
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  void (*const near *const *v20)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // rcx
  void (*const *v21)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v22; // rcx
  int v23; // eax
  int v24; // r10d
  int v25; // r12d
  unsigned int v26; // r8d
  char v27; // r9
  struct _POINTFIX *v28; // rdx
  struct _POINTFIX *v29; // r11
  struct _POINTFIX *v30; // rcx
  unsigned int v31; // eax
  unsigned int v33; // eax
  _DWORD *v34; // rcx
  ULONG cstyle; // ecx
  PFLOAT_LONG pstyle; // rdx
  int v37; // r9d
  BOOL v38; // eax
  int *v39; // r8
  _BYTE *v40; // rcx
  int v41; // eax
  int v42; // r9d
  unsigned int v43; // ecx
  int e_low; // eax
  int v45; // eax
  unsigned int v46; // edi
  XCLIPOBJ *v47; // rbx
  const unsigned int *v48; // r8
  ULONG c; // edx
  __int64 v50; // r10
  BOOL v51; // ebx
  int v52; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v54; // [rsp+70h] [rbp-90h]
  _DWORD v55[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v56[16]; // [rsp+88h] [rbp-78h] BYREF
  int v57; // [rsp+98h] [rbp-68h]
  int v58; // [rsp+9Ch] [rbp-64h]
  unsigned int v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A4h] [rbp-5Ch]
  _DWORD *v61; // [rsp+C0h] [rbp-40h]
  _BYTE *v62; // [rsp+C8h] [rbp-38h]
  BOOL v63; // [rsp+D4h] [rbp-2Ch]
  int v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+DCh] [rbp-24h]
  unsigned int v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E4h] [rbp-1Ch]
  struct _POINTFIX v68; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-8h]
  struct _CLIPLINE v70[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTFIX *v71[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v72[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v73[64]; // [rsp+210h] [rbp+110h] BYREF

  v53.x = a6;
  memset_0(v56, 0, 0x60uLL);
  fl = a5->fl;
  v69 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    v67 = 1;
    v61 = &unk_14034ED00;
    v11 = 1024;
    v62 = &unk_14034ED00;
    v33 = HIWORD(a5->elStyleState.l) & 1;
    v64 = 1;
    v59 = v33;
    v65 = 1;
    v57 = 1;
    v58 = 2;
    v66 = 1;
  }
  else if ( a5->pstyle )
  {
    v34 = (_DWORD *)*((_QWORD *)a1 + 6);
    if ( v34 )
    {
      v64 = v34[549];
      v65 = v34[550];
      v66 = v34[551];
    }
    else
    {
      v64 = 1;
      v65 = 1;
      v66 = 3;
    }
    v11 = 1024;
    if ( !(unsigned int)bUMPDSecurityGateEx() || (cstyle = 16, a5->cstyle <= 0x10) )
      cstyle = a5->cstyle;
    pstyle = a5->pstyle;
    v37 = 0;
    v38 = (a5->fl & 4) != 0;
    v67 = cstyle;
    v63 = v38;
    v57 = 0;
    if ( cstyle )
    {
      v39 = &v72[cstyle - 1];
      if ( v39 >= v72 )
      {
        v40 = (_BYTE *)(v73 - (_BYTE *)pstyle);
        do
        {
          v41 = pstyle->l * v66;
          v37 += v41;
          *v39 = v41;
          *(LONG *)((char *)&pstyle->l + (_QWORD)v40) = v41;
          --v39;
          ++pstyle;
          v57 = v37;
        }
        while ( v39 >= v72 );
      }
    }
    v42 = 2 * v37;
    v61 = v72;
    v62 = v73;
    v43 = v66 * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    v58 = v42;
    v45 = v43 + e_low;
    if ( v45 < 0 )
      v45 = 0;
    v59 = v45;
    if ( v45 >= v42 )
      v59 = v45 % v42;
  }
  v12 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v52 = *((_DWORD *)a1 + 22) / 4;
  v54 = (unsigned int *)*((_QWORD *)a1 + 10);
  v14 = (const struct _BMINFO *)((char *)&gabminfo + 32 * v12);
  if ( v12 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_63;
  }
  if ( v12 == 2 )
  {
LABEL_63:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_64;
  }
  if ( v12 != 3 )
  {
    if ( v12 != 4 )
      goto LABEL_7;
    goto LABEL_65;
  }
LABEL_64:
  iSolidColor |= iSolidColor << 8;
LABEL_65:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v71[1]) = -1;
  HIDWORD(v71[0]) = iSolidColor;
  LODWORD(v71[0]) = 0;
  LODWORD(v71[1]) = ~iSolidColor;
  v15 = dword_14034EAC0[v53.x & 0xF];
  v16 = *((_DWORD *)v71 + (unsigned __int8)v15);
  v17 = *((_DWORD *)v71 + (v15 >> 8));
  v18 = 8LL;
  if ( v12 != 5 )
    v18 = 0LL;
  v55[0] = v16;
  v55[1] = v17;
  v19 = (v11 != 0 ? 4 : 0) | (unsigned __int64)v18;
  v20 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v20 = &gapfnStrip;
  v21 = (void (*const *)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *))&v20[v19];
  if ( this && this->iDComplexity )
  {
    memset_0(v70, 0, 0xB8uLL);
    v46 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    do
    {
      v47 = (XCLIPOBJ *)a2[9];
      v70[0].c = 0;
      if ( (*(_DWORD *)(*((_QWORD *)v47 + 18) + 24LL) & 0x2000000) != 0 )
        break;
      do
      {
        if ( !(unsigned int)XCLIPOBJ::bEnumLine(v47, 0xB8u, v70) )
          XCLIPOBJ::bGetLine(v47, (struct EPATHOBJ *)a2, v48);
        c = v70[0].c;
      }
      while ( !v70[0].c && (*(_DWORD *)(*((_QWORD *)v47 + 18) + 24LL) & 0x2000000) == 0 );
      v50 = *((_QWORD *)v47 + 18);
      if ( (*(_DWORD *)(v50 + 24) & 0x2000000) != 0 && *(int *)(v50 + 180) > 0 )
      {
        **(_DWORD **)(v50 + 184) = (unsigned __int16)(*(_DWORD *)(v50 + 176) % *(_DWORD *)(v50 + 200)) | ((unsigned __int16)(*(_DWORD *)(v50 + 176) / *(_DWORD *)(v50 + 200)) << 16);
        c = v70[0].c;
      }
      v51 = (*(_DWORD *)(*((_QWORD *)v47 + 18) + 24LL) & 0x2000000) == 0;
      if ( c )
      {
        if ( (v46 & 0x400) != 0 )
          v60 = LOWORD(v70[0].lStyleState) + v66 * HIWORD(v70[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v14,
                              &v70[0].ptfxA,
                              &v70[0].ptfxB,
                              v70[0].arun,
                              c,
                              (struct _LINESTATE *)v55,
                              0LL,
                              v21,
                              v46,
                              v54,
                              v52,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
      }
    }
    while ( v51 );
  }
  else
  {
    v22 = a2[1];
    a2->fl &= ~8u;
    *(_OWORD *)v71 = 0LL;
    v68 = 0LL;
    v53 = 0LL;
    *(_QWORD *)(*(_QWORD *)&v22 + 80LL) = *(_QWORD *)(*(_QWORD *)&v22 + 32LL);
    do
    {
      v23 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)v71);
      v24 = HIDWORD(v71[0]);
      v25 = v23;
      v26 = HIDWORD(v71[0]);
      if ( !HIDWORD(v71[0]) )
        break;
      v27 = (char)v71[0];
      v28 = v71[1];
      if ( ((__int64)v71[0] & 1) != 0 )
      {
        v29 = v71[1] + 1;
        v68 = *v71[1];
        v26 = HIDWORD(v71[0]) - 1;
        v30 = v71[1];
      }
      else
      {
        v30 = &v53;
        v29 = v71[1];
      }
      v31 = v59;
      if ( ((__int64)v71[0] & 4) != 0 )
        v31 = v69;
      v59 = v31;
      if ( v26 )
      {
        if ( !(unsigned int)bLines(
                              v14,
                              v30,
                              v29,
                              0LL,
                              v26,
                              (struct _LINESTATE *)v55,
                              0LL,
                              v21,
                              v11,
                              v54,
                              v52,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        v28 = v71[1];
        v24 = HIDWORD(v71[0]);
        v27 = (char)v71[0];
      }
      v53 = v28[v24 - 1];
      if ( (v27 & 8) != 0
        && !(unsigned int)bLines(
                            v14,
                            &v53,
                            &v68,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v55,
                            0LL,
                            v21,
                            v11,
                            v54,
                            v52,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v25 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(v59 % v66) | ((unsigned __int16)(v59 / v66) << 16);
  }
  return 1LL;
}
