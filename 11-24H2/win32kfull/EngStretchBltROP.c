/*
 * XREFs of EngStretchBltROP @ 0x140135B60
 * Callers:
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x140135570 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1402FDF50 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140018520 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x140136200 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  SURFACE *v14; // rsi
  SURFOBJ *v15; // rbx
  __int64 p_cy; // r10
  __int64 p_sizlBitmap; // r9
  __int64 p_iType; // r11
  __int64 p_hdev; // rax
  ULONG v20; // ecx
  LONG right; // eax
  LONG v22; // r9d
  LONG left; // r11d
  LONG bottom; // eax
  LONG v25; // r10d
  LONG top; // r12d
  int v27; // r8d
  int v28; // r8d
  int v29; // ecx
  int v30; // r12d
  LONG v31; // ecx
  LONG v32; // edx
  int v33; // eax
  int (*v34)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  _DWORD *v36; // rax
  __int64 v37; // rcx
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rsi
  SURFOBJ *v39; // r15
  int v40; // r8d
  LONG v41; // ecx
  LONG v42; // edx
  __int64 v43; // rax
  int v44; // eax
  LONG v45; // r9d
  LONG v46; // r10d
  LONG x; // edx
  LONG y; // r8d
  LONG v49; // ecx
  __int64 v50; // r8
  int v51; // [rsp+60h] [rbp-A0h]
  int v52; // [rsp+64h] [rbp-9Ch]
  POINTL v53; // [rsp+70h] [rbp-90h] BYREF
  ULONG v54; // [rsp+78h] [rbp-88h]
  SURFOBJ *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoSrca; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  char v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+A4h] [rbp-5Ch]
  __int128 v61; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-48h]
  __int64 p_iBitmapFormat; // [rsp+C8h] [rbp-38h]
  __int64 p_hsurf; // [rsp+D0h] [rbp-30h]
  POINTL *v65; // [rsp+D8h] [rbp-28h]
  POINTL *v66; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v67; // [rsp+E8h] [rbp-18h]
  CLIPOBJ *v68; // [rsp+F0h] [rbp-10h]
  BRUSHOBJ *v69; // [rsp+F8h] [rbp-8h]
  RECTL v70; // [rsp+100h] [rbp+0h] BYREF
  RECTL v71; // [rsp+110h] [rbp+10h] BYREF
  RECTL v72; // [rsp+120h] [rbp+20h] BYREF

  v67 = pxlo;
  v53 = (POINTL)pca;
  v66 = pptlHTOrg;
  v65 = pptlMask;
  v69 = pbo;
  v55 = psoDest;
  v68 = pco;
  psoSrca = psoMask;
  v14 = (SURFACE *)((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL));
  v15 = 0LL;
  if ( psoSrc )
  {
    p_iBitmapFormat = (__int64)&psoSrc->iBitmapFormat;
    p_cy = (__int64)&psoSrc->sizlBitmap.cy;
    p_hsurf = (__int64)&psoSrc[1].hsurf;
    p_sizlBitmap = (__int64)&psoSrc->sizlBitmap;
    p_iType = (__int64)&psoSrc->iType;
    p_hdev = (__int64)&psoSrc->hdev;
  }
  else
  {
    p_hdev = 48LL;
    p_iBitmapFormat = 96LL;
    p_hsurf = 112LL;
    p_cy = 60LL;
    p_sizlBitmap = 56LL;
    p_iType = 100LL;
  }
  if ( rop4 == 52428 || rop4 == 43724 )
  {
    v36 = *(_DWORD **)p_hdev;
    ++*((_DWORD *)v14 + 23);
    v37 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
    if ( (*((_DWORD *)v14 + 28) & 2) == 0 )
    {
      v38 = EngStretchBlt;
LABEL_27:
      v39 = v55;
LABEL_28:
      if ( rop4 != 52428 )
        v15 = psoSrca;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v38)(
               v39,
               psoSrc,
               v15,
               v68,
               v67,
               v53,
               v66,
               prclDest,
               prclSrc,
               v65,
               iMode);
    }
    v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v37 + 2840);
    if ( (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
      goto LABEL_27;
    if ( iMode == 4 && (*(_BYTE *)(v37 + 1808) & 0x10) == 0 )
      v38 = EngStretchBlt;
    v40 = 0;
    if ( *(_WORD *)p_iType == 1 && v36 && (v36[10] & 0x20000) != 0 )
    {
      v41 = v36[644];
      if ( prclSrc->left < v41
        || (v42 = v36[645], prclSrc->top < v42)
        || prclSrc->right > *(_DWORD *)p_sizlBitmap + v41
        || prclSrc->bottom > v42 + *(_DWORD *)p_cy )
      {
        v40 = 1;
      }
      if ( !v40 )
        goto LABEL_61;
    }
    else if ( prclSrc->left >= 0
           && prclSrc->top >= 0
           && prclSrc->right <= *(_DWORD *)p_sizlBitmap
           && prclSrc->bottom <= *(_DWORD *)p_cy )
    {
LABEL_61:
      v71 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v71);
      v39 = v55;
      if ( psoSrc == v55 && (unsigned int)bIntersect(prclSrc, &v71, v50) )
        v38 = EngStretchBlt;
      goto LABEL_28;
    }
    v38 = EngStretchBlt;
    goto LABEL_61;
  }
  v20 = 3;
  right = prclDest->right;
  if ( iMode != 4 )
    v20 = iMode;
  v22 = prclDest->right;
  left = prclDest->left;
  v54 = v20;
  v52 = 0;
  v51 = 0;
  if ( left > right )
  {
    v22 = left;
    prclDest->right = left;
    left = right;
    prclDest->left = right;
    v52 = 1;
  }
  bottom = prclDest->bottom;
  v25 = bottom;
  top = prclDest->top;
  if ( top > bottom )
  {
    v25 = prclDest->top;
    prclDest->bottom = top;
    top = bottom;
    prclDest->top = bottom;
    v51 = 1;
  }
  *(_QWORD *)&v71.left = 0LL;
  v61 = 0LL;
  LOBYTE(v71.right) = 0;
  v62 = 0LL;
  v27 = (unsigned __int8)gajRop3[BYTE1(rop4)];
  v71.bottom = 0;
  v58 = 0LL;
  v59 = 0;
  v28 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v27;
  v60 = 0;
  v53 = 0LL;
  v29 = v28 | 0x10000;
  if ( (unsigned __int8)rop4 == BYTE1(rop4) )
    v29 = v28;
  v56 = v29;
  if ( (v29 & 0x10000) != 0 )
  {
    if ( psoSrca )
      v43 = (__int64)&psoSrca[1].hsurf;
    else
      v43 = 112LL;
    v44 = *(_DWORD *)v43;
    v45 = v22 - left;
    v46 = v25 - top;
    LODWORD(v61) = 1;
    *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(v46, v45);
    *(_QWORD *)&v62 = 0LL;
    DWORD2(v62) = v44 & 0x40000;
    *(_QWORD *)&v70.left = 0LL;
    v70.right = v45;
    v70.bottom = v46;
    if ( v52 )
    {
      v70.left = v45;
      v70.right = 0;
    }
    v30 = v51;
    if ( v51 )
    {
      v70.top = v46;
      v70.bottom = 0;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)&v61, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v58
      || (x = v65->x,
          y = v65->y,
          v72.right = v65->x + prclSrc->right - prclSrc->left,
          v49 = y + prclSrc->bottom - prclSrc->top,
          v72.left = x,
          v72.bottom = v49,
          v72.top = y,
          !EngStretchBlt(
             (SURFOBJ *)((v58 + 24) & -(__int64)(v58 != 0)),
             psoSrca,
             0LL,
             0LL,
             0LL,
             0LL,
             &v53,
             &v70,
             &v72,
             0LL,
             v54)) )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v58);
      SURFMEM::~SURFMEM((SURFMEM *)&v71);
      return 0;
    }
    LOBYTE(v29) = v56;
  }
  else
  {
    v30 = v51;
  }
  if ( (v29 & 0xD4) == 0 )
    goto LABEL_22;
  v31 = prclDest->right - prclDest->left;
  v32 = prclDest->bottom - prclDest->top;
  LODWORD(v61) = *(_DWORD *)p_iBitmapFormat;
  *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(v32, v31);
  *(_QWORD *)&v62 = 0LL;
  v33 = *(_DWORD *)p_hsurf & 0x40000;
  *(_QWORD *)&v70.left = 0LL;
  DWORD2(v62) = v33;
  v70.right = v31;
  v70.bottom = v32;
  if ( v52 )
  {
    v70.left = v31;
    v70.right = 0;
  }
  if ( v30 )
  {
    v70.top = v32;
    v70.bottom = 0;
  }
  SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)&v61, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)&v71.left )
  {
    if ( EngStretchBlt(
           (SURFOBJ *)((*(_QWORD *)&v71.left + 24LL) & -(__int64)(*(_QWORD *)&v71.left != 0LL)),
           psoSrc,
           0LL,
           0LL,
           0LL,
           0LL,
           &v53,
           &v70,
           prclSrc,
           0LL,
           v54) )
    {
LABEL_22:
      v34 = SURFACE::pfnBitBlt(v14);
      LODWORD(v15) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v34)(
                       v55,
                       (*(_QWORD *)&v71.left + 24LL) & -(__int64)(*(_QWORD *)&v71.left != 0LL),
                       (v58 + 24) & -(__int64)(v58 != 0),
                       v68,
                       v67,
                       prclDest,
                       &v53,
                       &v53,
                       v69,
                       v66,
                       rop4);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v58);
  SURFMEM::~SURFMEM((SURFMEM *)&v71);
  return (int)v15;
}
