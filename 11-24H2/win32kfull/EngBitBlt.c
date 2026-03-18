/*
 * XREFs of EngBitBlt @ 0x1400179A0
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x140017510 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400531D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400A9F28 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14018D8A0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     SimBitBlt @ 0x14021C234 (SimBitBlt.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1402FCCD0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140309480 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140018168 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngTransparentBlt @ 0x14011EBE0 (EngTransparentBlt.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x140120044 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140121030 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401A8634 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     SimBitBlt @ 0x14021C234 (SimBitBlt.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140313A84 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140313DA4 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  PVOID *p_pvScan0; // rdi
  unsigned int v12; // r14d
  struct SURFACE *v15; // rax
  struct SURFACE *v16; // rax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  ULONG iSolidColor; // r9d
  __int64 v23; // rcx
  char v24; // r8
  char v25; // r8
  struct SURFACE *v26; // rbx
  POINTL *v27; // r14
  unsigned int v28; // eax
  LONG x; // edx
  LONG v30; // ecx
  LONG y; // r10d
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rbx
  int v35; // eax
  __int64 (__fastcall *v36)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *pvRbrush; // rax
  void (__fastcall *v38)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, SURFOBJ **, POINTL *); // rax
  char *v39; // rcx
  Gre::Base *v40; // rcx
  void (*v41)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  unsigned int v42; // [rsp+28h] [rbp-D8h]
  ULONG iTransColor; // [rsp+30h] [rbp-D0h]
  XLATEOBJ *v44; // [rsp+70h] [rbp-90h]
  PVOID v46; // [rsp+80h] [rbp-80h] BYREF
  struct SURFACE *v47; // [rsp+88h] [rbp-78h]
  struct SURFACE *v48; // [rsp+90h] [rbp-70h] BYREF
  char v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+9Ch] [rbp-64h]
  POINTL *v51; // [rsp+A0h] [rbp-60h]
  struct SURFACE *v52; // [rsp+A8h] [rbp-58h]
  _DWORD v53[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  SURFOBJ *v57; // [rsp+D0h] [rbp-30h] BYREF
  int v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DCh] [rbp-24h]
  RECTL prclSrc; // [rsp+E0h] [rbp-20h] BYREF

  p_pvScan0 = &psoTrg[-1].pvScan0;
  v12 = 0;
  v44 = pxlo;
  v51 = pptlMask;
  v15 = (struct SURFACE *)&psoSrc[-1].pvScan0;
  if ( !psoSrc )
    v15 = 0LL;
  v57 = psoMask;
  v47 = v15;
  v16 = (struct SURFACE *)&psoMask[-1].pvScan0;
  if ( !psoMask )
    v16 = 0LL;
  v52 = v16;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
  {
    v18 = *CurrentThreadNonPaged;
    if ( v18 )
    {
      v19 = v18 + 8;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 72);
        if ( v20 != v19 + 72 )
        {
          v23 = v20 - 56;
          if ( v23 )
          {
            if ( (*(_DWORD *)(v23 + 444) & 0x100) != 0 && *(_DWORD *)(v23 + 452) )
            {
              v24 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
              if ( (v24 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
                return 0;
              v25 = v24 & 0xD4;
              if ( v25 )
              {
                if ( !psoSrc || !pptlSrc )
                  return 0;
              }
              if ( (unsigned int)(*((_DWORD *)p_pvScan0 + 24) - 9) <= 1
                || v25 && (unsigned int)(*((_DWORD *)v47 + 24) - 9) <= 1 )
              {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  if ( psoTrg->iType )
    return SimBitBlt(psoTrg, psoSrc, pxlo, prclTrg, pptlSrc, v51, (__int64)pbo, pptlBrush, rop4, 0LL);
  v46 = p_pvScan0[6];
  PDEVOBJ::vSync((PDEVOBJ *)&v46, psoTrg, 0LL, 0);
  ++*((_DWORD *)p_pvScan0 + 23);
  if ( rop4 == 3855 )
    goto LABEL_11;
  if ( rop4 <= 0xCCAA )
  {
    if ( rop4 != 52394 )
    {
      if ( rop4 )
      {
        if ( rop4 == 21845 )
        {
          vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, 0xFFFFFFFF, 1);
          return 1;
        }
        if ( rop4 == 23130 )
        {
          if ( pbo->iSolidColor != -1 )
          {
            vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, pbo->iSolidColor, 1);
            return 1;
          }
          if ( *((_DWORD *)p_pvScan0 + 24) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
          {
            v42 = 2;
LABEL_57:
            vDIBPatBlt((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, v42);
            return 1;
          }
        }
        goto LABEL_31;
      }
      goto LABEL_49;
    }
    if ( v57 )
      goto LABEL_31;
    if ( pbo->pvRbrush )
      return 1;
    x = pptlSrc->x;
    v30 = pptlSrc->x + prclTrg->right - prclTrg->left;
    y = pptlSrc->y;
    iTransColor = pbo->iSolidColor;
    prclSrc.bottom = y + prclTrg->bottom - prclTrg->top;
    prclSrc.left = x;
    prclSrc.right = v30;
    prclSrc.top = y;
    return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
  }
  else
  {
    if ( rop4 != 52428 )
    {
      if ( rop4 == 61680 )
      {
LABEL_11:
        if ( pbo->iSolidColor != -1 )
        {
          iSolidColor = ~pbo->iSolidColor;
          if ( (rop4 & 1) == 0 )
            iSolidColor = pbo->iSolidColor;
          goto LABEL_14;
        }
        if ( *((_DWORD *)p_pvScan0 + 24) == 3
          && rop4 == 61680
          && pvGetEngRbrush(pbo)
          && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
        {
          vDIBPatBltSrccopy8x8(
            (struct SURFACE *)p_pvScan0,
            pco,
            prclTrg,
            pbo,
            pptlBrush,
            (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8);
          return 1;
        }
        v28 = *((_DWORD *)p_pvScan0 + 24);
        if ( v28 < 3 )
        {
          if ( v28 == 2 )
          {
            if ( rop4 == 61680 && pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
            {
              vDIBPatBltSrccopy8x8(
                (struct SURFACE *)p_pvScan0,
                pco,
                prclTrg,
                pbo,
                pptlBrush,
                (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8);
              return 1;
            }
          }
          else if ( v28 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
          {
            pvRbrush = (char *)pbo[1].pvRbrush;
            if ( *(_QWORD *)(pvRbrush + 20) == 0x800000008LL )
            {
              vDIBPatBltSrccopy8x8(
                (struct SURFACE *)p_pvScan0,
                pco,
                prclTrg,
                pbo,
                pptlBrush,
                (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8);
              return 1;
            }
            if ( *((_DWORD *)pvRbrush + 5) == 6 && *((_DWORD *)pvRbrush + 6) == 6 )
            {
              vDIBnPatBltSrccopy6x6((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, v41);
              return 1;
            }
          }
        }
        else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
        {
          LOBYTE(v12) = rop4 != 61680;
          v42 = v12;
          goto LABEL_57;
        }
        goto LABEL_31;
      }
      if ( rop4 != 0xFFFF )
      {
LABEL_31:
        if ( psoSrc )
        {
          v46 = (PVOID)*((_QWORD *)v47 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)&v46, psoSrc, 0LL, 0);
        }
        v48 = 0LL;
        v26 = v47;
        v49 = 0;
        v50 = 0;
        if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || !*((_WORD *)v47 + 50) )
        {
          v27 = pptlSrc;
LABEL_36:
          if ( *((_DWORD *)p_pvScan0 + 24) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
            BltLnk(
              (struct SURFACE *)p_pvScan0,
              v26,
              v52,
              (struct ECLIPOBJ *)pco,
              (struct XLATE *)v44,
              prclTrg,
              v27,
              v51,
              pbo,
              pptlBrush,
              rop4);
          SURFMEM::~SURFMEM((SURFMEM *)&v48);
          return 1;
        }
        v32 = prclTrg->right - prclTrg->left;
        v33 = prclTrg->bottom - prclTrg->top;
        v34 = *((_QWORD *)v47 + 6);
        v53[0] = *((_DWORD *)p_pvScan0 + 24);
        v35 = *((_DWORD *)v47 + 28) & 0x40000;
        v58 = v32;
        v59 = v33;
        v53[1] = v32;
        v53[2] = v33;
        v55 = v35;
        v57 = 0LL;
        v53[3] = 0;
        v56 = 0;
        v54 = 0LL;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v48, (struct _DEVBITMAPINFO *)v53, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v38 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, SURFOBJ **, POINTL *))(v34 + 2832);
          if ( v38 )
          {
            v39 = (char *)v48 + 24;
            if ( !v48 )
              v39 = 0LL;
            v38(v39, psoSrc, 0LL, pxlo, &v57, pptlSrc);
            v26 = v48;
            v46 = 0LL;
            v27 = (POINTL *)&v46;
            v44 = (XLATEOBJ *)((char *)Gre::Base::Globals(v40) + 4552);
            goto LABEL_36;
          }
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v48);
        return 0;
      }
LABEL_49:
      iSolidColor = -(rop4 != 0);
LABEL_14:
      vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, iSolidColor, 0);
      return 1;
    }
    if ( !*((_WORD *)v47 + 50) )
      return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
    v36 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v47 + 6) + 2832LL);
    if ( !v36 )
      return 0;
    return v36(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
  }
}
