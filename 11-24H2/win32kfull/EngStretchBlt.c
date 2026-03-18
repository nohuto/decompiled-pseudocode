/*
 * XREFs of EngStretchBlt @ 0x140136200
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x14000AD3C (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140050AC0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140051290 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140126DA0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBltROP @ 0x140135B60 (EngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1402FDCE0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305FC8 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14030A080 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1402252C4 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

BOOL __stdcall EngStretchBlt(
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
        ULONG iMode)
{
  CLIPOBJ *v11; // r12
  XLATEOBJ *v12; // r13
  SURFOBJ *v13; // r15
  RECTL *v14; // rbx
  SURFOBJ *v15; // r14
  RECTL *v16; // rsi
  __int64 v18; // rax
  RECTL v20; // xmm0
  LONG cx; // eax
  RECTL v22; // xmm1
  ULONG iBitmapFormat; // r8d
  SIZEL sizlBitmap; // rcx
  HDEV hdev; // rbx
  LONG cy; // eax
  HSURF Bitmap; // rax
  ULONG v28; // r8d
  SIZEL v29; // rcx
  HSURF v30; // rsi
  HBITMAP v31; // r13
  HBITMAP v32; // rax
  HSURF v33; // r12
  SURFOBJ *v34; // rsi
  SURFOBJ *v35; // r14
  SURFOBJ *v36; // rax
  Gre::Base *v37; // rcx
  SURFOBJ *v38; // r15
  int v39; // r12d
  _BYTE *pvBits; // rdx
  __int64 v41; // r12
  _BYTE *v42; // rax
  int v43; // eax
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  struct _RECTL *v47; // [rsp+70h] [rbp-90h]
  struct _RECTL *v48; // [rsp+78h] [rbp-88h]
  struct _SURFOBJ *v49; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v50; // [rsp+88h] [rbp-78h]
  struct _CLIPOBJ *v51; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v52; // [rsp+98h] [rbp-68h]
  struct _POINTL *v53; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v54; // [rsp+A8h] [rbp-58h]
  struct tagCOLORADJUSTMENT *v55; // [rsp+B0h] [rbp-50h]
  XLATEOBJ *v56; // [rsp+B8h] [rbp-48h]
  HSURF v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  _BYTE *v59; // [rsp+D0h] [rbp-30h]
  _BYTE *v60; // [rsp+D8h] [rbp-28h]
  HSURF hsurf; // [rsp+E0h] [rbp-20h]
  RECTL v62; // [rsp+E8h] [rbp-18h] BYREF
  struct _RECTL v63; // [rsp+F8h] [rbp-8h] BYREF
  struct _RECTL v64; // [rsp+108h] [rbp+8h] BYREF

  v11 = pco;
  v12 = pxlo;
  v13 = psoMask;
  v14 = prclDest;
  v15 = psoSrc;
  v16 = prclSrc;
  v55 = pca;
  v54 = pptlHTOrg;
  v53 = pptlMask;
  v51 = pco;
  v50 = psoMask;
  v49 = psoSrc;
  v52 = pxlo;
  v47 = prclDest;
  v48 = prclSrc;
  v18 = *(_QWORD *)(W32GetSessionState(psoDest, psoSrc, psoMask) + 96);
  v58 = v18;
  if ( *(_DWORD *)(v18 + 4744) )
  {
    v20 = *prclDest;
    cx = psoDest->sizlBitmap.cx;
    v22 = *prclSrc;
    iBitmapFormat = psoDest->iBitmapFormat;
    sizlBitmap = psoDest->sizlBitmap;
    v62.left = 0;
    v62.top = 0;
    hdev = psoDest->hdev;
    v62.right = cx;
    cy = psoDest->sizlBitmap.cy;
    v64 = v20;
    v62.bottom = cy;
    v63 = v22;
    Bitmap = (HSURF)EngCreateBitmap(sizlBitmap, 0, iBitmapFormat, 0, 0LL);
    v28 = psoDest->iBitmapFormat;
    v29 = psoDest->sizlBitmap;
    v30 = Bitmap;
    hsurf = Bitmap;
    v31 = EngCreateBitmap(v29, 0, v28, 0, 0LL);
    v32 = EngCreateBitmap(psoDest->sizlBitmap, 0, psoDest->iBitmapFormat, 0, 0LL);
    v57 = (HSURF)v32;
    v33 = (HSURF)v32;
    if ( !v30 || !v31 || !v32 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v34 = EngLockSurface(v30);
    v35 = EngLockSurface((HSURF)v31);
    v36 = EngLockSurface(v33);
    v44 = 0;
    v38 = v36;
    if ( v34 )
    {
      if ( v35 && v36 )
      {
        pptlSrc = 0LL;
        v56 = (XLATEOBJ *)((char *)Gre::Base::Globals(v37) + 4552);
        EngCopyBits(v38, psoDest, 0LL, v56, &v62, &pptlSrc);
LABEL_13:
        memset_0(v34->pvBits, 0, v34->cjBits);
        memset_0(v35->pvBits, 0, v34->cjBits);
        v45 = 0;
        v39 = EngStretchBltOld(psoDest, v49, v50, v51, v52, v55, v54, v47, v48, v53, iMode, &v45);
        if ( v45 )
        {
          EngCopyBits(v34, psoDest, 0LL, 0LL, &v62, &pptlSrc);
          if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
            (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))hdev + 354))(
              psoDest,
              v38,
              0LL,
              v56,
              &v62,
              &pptlSrc);
          else
            ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
              psoDest,
              v38,
              0LL,
              v56,
              &v62,
              &pptlSrc);
          v47 = &v64;
          v48 = &v63;
          if ( EngStretchBltNew(psoDest, v49, v50, v51, v52, v55, v54, &v64, &v63, v53, iMode) != v39 )
            DbgPrint("bOld ^ bNew\n");
          EngCopyBits(v35, psoDest, 0LL, v56, &v62, &pptlSrc);
          pvBits = v34->pvBits;
          v41 = 0LL;
          v42 = v35->pvBits;
          v59 = pvBits;
          v60 = v42;
          while ( (unsigned int)v41 < v34->cjBits )
          {
            if ( pvBits[v41] != v42[v41] )
            {
              DbgPrint("memcmp failed\n");
              v43 = v44 + 1;
              v44 = v43;
              if ( v43 == 1 )
              {
                __debugbreak();
                if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
                  (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))hdev + 354))(
                    psoDest,
                    v38,
                    0LL,
                    v56,
                    &v62,
                    &pptlSrc);
                else
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                    psoDest,
                    v38,
                    0LL,
                    v56,
                    &v62,
                    &pptlSrc);
                goto LABEL_13;
              }
              if ( v43 == 2 )
              {
                __debugbreak();
                break;
              }
              pvBits = v59;
            }
            v42 = v60;
            v41 = (unsigned int)(v41 + 1);
          }
        }
        v33 = v57;
      }
      EngUnlockSurface(v34);
    }
    if ( v35 )
      EngUnlockSurface(v35);
    if ( v38 )
      EngUnlockSurface(v38);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v31 )
      EngDeleteSurface((HSURF)v31);
    if ( v33 )
      EngDeleteSurface(v33);
    v18 = v58;
    v12 = v52;
    v11 = v51;
    v13 = v50;
    v15 = v49;
    v16 = v48;
    v14 = v47;
  }
  if ( *(_DWORD *)(v18 + 4740) )
    return EngStretchBltNew(psoDest, v15, v13, v11, v12, v55, v54, v14, v16, v53, iMode);
  v44 = 0;
  return EngStretchBltOld(psoDest, v15, v13, v11, v12, v55, v54, v14, v16, v53, iMode, &v44);
}
