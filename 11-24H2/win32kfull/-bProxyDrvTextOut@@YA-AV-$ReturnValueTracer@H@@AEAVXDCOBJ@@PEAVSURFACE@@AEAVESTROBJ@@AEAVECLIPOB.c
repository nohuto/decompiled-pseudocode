/*
 * XREFs of ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bOutOfBounds @ 0x1400AAFC8 (bOutOfBounds.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1400AB0A8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1400AB0E8 (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z@Z @ 0x1400AB10C (-bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400AB140 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1400AB2C0 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400AB334 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        _DWORD *a1,
        struct XDCOBJ *a2,
        SURFACE *a3,
        int *a4,
        CLIPOBJ *a5,
        __int64 a6,
        struct _RECTL *a7,
        BRUSHOBJ *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        struct RFONTOBJ *a11,
        HDEV a12,
        unsigned int a13,
        LONG *a14)
{
  _DWORD *v14; // r10
  struct RFONTOBJ *v15; // rbx
  SURFACE *v16; // r14
  _WORD *v17; // r11
  CLIPOBJ *v19; // rsi
  struct _RECTL *v20; // r12
  _WORD *v21; // rax
  _BOOL8 v22; // r9
  struct _SURFOBJ *v24; // rdx
  int v25; // r13d
  int v26; // r15d
  struct _SURFOBJ *v27; // r8
  int v28; // r13d
  _DWORD *hsurf; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r10
  int v34; // ecx
  struct _SURFOBJ *pvBits_low; // r9
  __int64 v36; // r11
  unsigned int *v37; // rdx
  struct _POINTL *v38; // rax
  LONG v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int128 v42; // xmm0
  BOOL (__stdcall *v43)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r12
  int v44; // edx
  int *v45; // rbx
  __int64 v46; // rax
  unsigned int v47; // r14d
  unsigned int v48; // r15d
  __int64 v49; // rax
  struct RFONTOBJ *v50; // rsi
  _DWORD *v51; // r8
  _WORD *v52; // r9
  _WORD *v53; // r11
  _WORD *v54; // rdx
  _DWORD *v55; // r10
  int v56; // eax
  LONG v57; // edx
  LONG v58; // eax
  __int64 v59; // rbx
  int *v60; // r14
  unsigned int v61; // r15d
  unsigned int v62; // r12d
  bool v63; // zf
  int v64; // eax
  int v65; // eax
  LONG left; // ecx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // ecx
  XFORMOBJ *pxo; // [rsp+28h] [rbp-D8h]
  struct _POINTL *v71; // [rsp+38h] [rbp-C8h]
  struct _POINTL *v72; // [rsp+40h] [rbp-C0h]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  int v74; // [rsp+60h] [rbp-A0h]
  int v75; // [rsp+64h] [rbp-9Ch]
  unsigned int v76; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v77; // [rsp+6Ch] [rbp-94h] BYREF
  _DWORD *v78; // [rsp+70h] [rbp-90h] BYREF
  SURFACE *v79; // [rsp+78h] [rbp-88h]
  XFORMOBJ *v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  struct RFONTOBJ *v83; // [rsp+90h] [rbp-70h]
  int *v84; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL *v85; // [rsp+A0h] [rbp-60h]
  CLIPOBJ *pco; // [rsp+A8h] [rbp-58h]
  struct _POINTL v87; // [rsp+B0h] [rbp-50h] BYREF
  BRUSHOBJ *v88; // [rsp+B8h] [rbp-48h]
  _BOOL8 v89; // [rsp+C0h] [rbp-40h]
  _WORD *v90; // [rsp+C8h] [rbp-38h]
  HDEV v91; // [rsp+D0h] [rbp-30h]
  struct XDCOBJ *v92; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v93; // [rsp+E0h] [rbp-20h]
  char v94[8]; // [rsp+E8h] [rbp-18h] BYREF
  _WORD *v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  _DWORD *v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+108h] [rbp+8h]
  struct _LINEATTRS v99; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v100[4]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v101; // [rsp+144h] [rbp+44h]
  __int64 v102; // [rsp+148h] [rbp+48h]
  int v103[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v104[10]; // [rsp+1E8h] [rbp+E8h] BYREF

  v14 = a1;
  v15 = a11;
  v16 = a3;
  v17 = (_WORD *)*((_QWORD *)a4 + 5);
  v19 = a5;
  v20 = a7;
  v96 = a6;
  v88 = a8;
  v93 = a9;
  v85 = a10;
  v91 = a12;
  v82 = *a4;
  v98 = *((_QWORD *)a4 + 7);
  v21 = (_WORD *)*((_QWORD *)a4 + 25);
  v97 = a1;
  *((_QWORD *)a4 + 4) = 0LL;
  v22 = 0LL;
  v79 = a3;
  v92 = a2;
  v24 = *(struct _SURFOBJ **)a11;
  v95 = v21;
  v25 = 1;
  pco = a5;
  v80 = (XFORMOBJ *)a7;
  LODWORD(v21) = HIDWORD(v24[9].dhsurf);
  v83 = a11;
  v81 = 0;
  v87 = 0LL;
  v75 = 1;
  v90 = v17;
  v89 = 0LL;
  if ( ((unsigned __int8)v21 & 4) != 0 )
  {
    v89 = 0LL;
    if ( LODWORD(v24[2].pvBits) == 1 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)a2 + 1756LL) != v24[4].iUniq;
      v89 = v22;
    }
  }
  *(_QWORD *)(a4 + 1) = 0LL;
  v26 = 0;
  v27 = *(struct _SURFOBJ **)a11;
  v74 = 0;
  if ( *(_DWORD *)(*(_QWORD *)a11 + 848LL) + 4 > 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      hsurf = 0LL;
      v78 = 0LL;
      if ( v26 )
      {
        switch ( v26 )
        {
          case 1:
            if ( v22 || !a4[62] )
              goto LABEL_11;
            hsurf = v27[9].hsurf;
            break;
          case 2:
            if ( v22 || !a4[63] )
              goto LABEL_11;
            hsurf = v27[9].dhpdev;
            break;
          case 3:
            if ( v22 || !a4[64] )
              goto LABEL_11;
            hsurf = v27[9].hdev;
            break;
          default:
            if ( v22 )
              goto LABEL_11;
            v30 = *((_QWORD *)a4 + 33);
            if ( !v30 )
              goto LABEL_11;
            v31 = (unsigned int)(v26 - 4);
            if ( !*(_DWORD *)(v30 + 4 * v31) )
              goto LABEL_11;
            hsurf = *(_DWORD **)(*(_QWORD *)&v27[9].sizlBitmap + 8 * v31);
            break;
        }
        v78 = hsurf;
        v50 = (struct RFONTOBJ *)&v78;
      }
      else
      {
        v34 = a4[62] + a4[63] + a4[64];
        pvBits_low = (struct _SURFOBJ *)LODWORD(v27[10].pvBits);
        if ( (_DWORD)pvBits_low )
        {
          v36 = (unsigned int)pvBits_low;
          v37 = (unsigned int *)*((_QWORD *)a4 + 33);
          do
          {
            if ( *((_QWORD *)a4 + 33) )
              v27 = (struct _SURFOBJ *)*v37;
            else
              v27 = 0LL;
            v34 += (int)v27;
            ++v37;
            --v36;
          }
          while ( v36 );
          v17 = v90;
        }
        if ( v34 == v82 )
        {
          if ( v20 )
          {
            left = *a14;
            if ( *a14 <= v20->left )
              left = v20->left;
            v19->rclBounds.left = left;
            right = a14[2];
            if ( right >= v20->right )
              right = v20->right;
            v19->rclBounds.right = right;
            top = a14[1];
            if ( top <= v20->top )
              top = v20->top;
            v19->rclBounds.top = top;
            bottom = a14[3];
            if ( bottom >= v20->bottom )
              bottom = v20->bottom;
            v19->rclBounds.bottom = bottom;
          }
          if ( v19->rclBounds.left < v19->rclBounds.right && v19->rclBounds.top < v19->rclBounds.bottom && v20 )
          {
            v38 = v85;
            ++*((_DWORD *)v16 + 23);
            TextOutBitBlt(v16, v15, v27, pvBits_low, v19, (struct _XLATEOBJ *)pxo, v20, v71, v72, v93, v38, v73);
          }
          v19->rclBounds.left = *a14;
          v19->rclBounds.top = a14[1];
          v19->rclBounds.right = a14[2];
          v39 = a14[3];
          v28 = 0;
          v20 = 0LL;
          v80 = 0LL;
          v19->rclBounds.bottom = v39;
          goto LABEL_53;
        }
        v50 = v15;
      }
      v51 = (_DWORD *)*((_QWORD *)a4 + 26);
      v52 = v17;
      v53 = v95;
      v54 = v95;
      v55 = &v51[v82];
      while ( v51 < v55 )
      {
        if ( *v51 == v26 )
          *v54++ = *v52;
        ++v52;
        ++v51;
      }
      *((_QWORD *)a4 + 5) = v53;
      v40 = v54 - v53;
      v81 += v40;
      *a4 = v40;
      a4[59] = v26;
      a4[12] = 0;
      if ( v26 )
      {
        v41 = *(_QWORD *)v15;
        if ( *(_DWORD *)(*(_QWORD *)v15 + 308LL) - *(_DWORD *)(*(_QWORD *)v15 + 312LL) == hsurf[77] - hsurf[78] )
        {
          v57 = (*(_DWORD *)(v41 + 320) - hsurf[80]) >> 4;
          v58 = (*(_DWORD *)(v41 + 324) - hsurf[81]) >> 4;
          v87.x = v57;
          v87.y = v58;
          if ( v58 || v57 )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)a4, &v87);
        }
      }
      v42 = *(_OWORD *)(a4 + 3);
      *((_QWORD *)a4 + 7) = v50;
      *(_OWORD *)(a4 + 45) = v42;
      if ( (*(_DWORD *)(*(_QWORD *)v50 + 88LL) & 2) == 0 )
      {
        if ( !(unsigned int)bOutOfBounds((STROBJ *)a4) )
        {
          v43 = SURFACE::pfnTextOut(v16);
          if ( PDEVOBJ::bSupportsClearTypeAlways((int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v43) )
          {
            if ( (v44 & 0x10010000) != 0 )
              SURFACE::pdcoAA(v16, v92);
          }
          else if ( (v44 & 0x10000) != 0
                 && ((*(_DWORD *)(*(_QWORD *)v92 + 72LL) & 0x1000000) == 0 || (v44 & 0x10000000) != 0) )
          {
            if ( v43 != EngTextOut )
              SURFACE::pdcoAA(v16, v92);
            v43 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
          }
          v45 = v104;
          v46 = *((_QWORD *)v16 + 6);
          v47 = 0;
          v77 = 0;
          v48 = 0;
          v76 = 0;
          v84 = v104;
          if ( v50 != v83 && (*(_DWORD *)(v46 + 40) & 0x8000) != 0 )
          {
            v56 = UMPDReleaseRFONTSem(v83, 0LL, &v77, &v76, &v84);
            v47 = v77;
            v28 = v56;
            v48 = v76;
            v45 = v84;
          }
          v49 = v96;
          if ( v81 != v82 )
            v49 = 0LL;
          v72 = v85;
          v71 = (struct _POINTL *)v93;
          pxo = v80;
          v75 = ((unsigned int (__fastcall *)(char *, int *, _QWORD, CLIPOBJ *, __int64))v43)(
                  (char *)v79 + 24,
                  a4,
                  *(_QWORD *)v50,
                  pco,
                  v49) != 0
              ? v75
              : 0;
          if ( v28 )
          {
            UMPDAcquireRFONTSem(v83, 0LL, v47, v48, v45);
            v28 = 0;
            if ( v45 && v45 != v104 )
              Win32FreePool(v45);
          }
          else
          {
            v28 = 0;
          }
          v16 = v79;
          SURFACE::pdcoAA(v79, 0LL);
          v15 = v83;
          v26 = v74;
        }
        v20 = 0LL;
        v80 = 0LL;
        goto LABEL_52;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v100);
      if ( v102 )
        break;
      EngSetLastError(8u);
      v75 = 0;
LABEL_81:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v100);
LABEL_52:
      v19 = pco;
      *(_OWORD *)(a4 + 3) = *(_OWORD *)(a4 + 45);
LABEL_53:
      v78 = 0LL;
LABEL_11:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v78);
      v27 = *(struct _SURFOBJ **)v15;
      ++v26;
      v22 = v89;
      v17 = v90;
      v74 = v26;
      if ( v26 >= *(_DWORD *)(*(_QWORD *)v15 + 848LL) + 4 )
      {
        v25 = v75;
        v14 = v97;
        goto LABEL_13;
      }
    }
    v59 = *((_QWORD *)v16 + 6);
    v60 = v103;
    v76 = 0;
    v84 = v103;
    v61 = 0;
    v77 = 0;
    v62 = 0;
    v75 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a4, (struct EPATHOBJ *)v100);
    if ( !v75 )
    {
      v15 = v83;
      goto LABEL_95;
    }
    v63 = (*(_DWORD *)(v59 + 40) & 0x8000) == 0;
    v15 = v83;
    if ( !v63 )
    {
      v64 = UMPDReleaseRFONTSem(v83, 0LL, &v76, &v77, &v84);
      v61 = v76;
      v28 = v64;
      v62 = v77;
      v60 = v84;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v50 + 724LL) & 0x8000) != 0 )
    {
      if ( v101 <= 1 )
        goto LABEL_94;
      LODWORD(v72) = 3341;
      v71 = v85;
      pxo = (XFORMOBJ *)pco;
      v65 = *(_DWORD *)EPATHOBJ_bSimpleFill(v94, v100, a13, v91, v79);
    }
    else
    {
      *(_OWORD *)&v99.fl = glaSimpleStroke;
      memset(&v99.eMiterLimit, 0, 24);
      v65 = EPATHOBJ_bSimpleStroke((struct EPATHOBJ *)v100, a13, v91, v79, pco, 0LL, v88, v85, &v99, 0xD0Du);
    }
    v75 = v65;
LABEL_94:
    if ( v28 )
    {
      UMPDAcquireRFONTSem(v15, 0LL, v61, v62, v60);
      v28 = 0;
      if ( v60 && v60 != v103 )
        Win32FreePool(v60);
      goto LABEL_80;
    }
LABEL_95:
    v28 = 0;
LABEL_80:
    v16 = v79;
    v26 = v74;
    v20 = (struct _RECTL *)v80;
    goto LABEL_81;
  }
LABEL_13:
  *((_QWORD *)a4 + 7) = v98;
  *((_QWORD *)a4 + 5) = v17;
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v14, v25);
  return v32;
}
