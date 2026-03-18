/*
 * XREFs of ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC
 * Callers:
 *     ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1401C0170 (-UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1401C0780 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1401C0950 (-UMPDDrvNextBand@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1401C0F2C (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401CF510 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401CF830 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 *     ?UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z @ 0x140208200 (-UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x140332DA0 (-UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x140332FB0 (-UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140333150 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140333450 (-UMPDDrvGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_R.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x140333780 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140333B90 (-UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140333DE0 (-UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1403345F0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z @ 0x140334CB0 (-UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x140334E60 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 * Callees:
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1401C117C (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140335914 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 */

__int64 __fastcall UMPDOBJ::bThunkLargeBitmap(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        void **a3,
        void **a4,
        int *a5,
        int *a6,
        unsigned int *a7)
{
  unsigned int v8; // r10d
  BOOL v10; // r8d
  struct _SURFOBJ *v11; // rdx
  int v12; // r8d
  unsigned int MaxSize; // r9d
  UMPDOBJ *v14; // r11
  unsigned int v15; // ebx
  unsigned int cjBits; // eax
  unsigned int v17; // ecx

  v8 = 1;
  if ( !a2 || !a2->pvBits )
    return v8;
  v10 = 0;
  if ( !a2->iType )
    v10 = SLOBYTE(a2->fjBitmap) < 0;
  *a5 = !v10;
  *a3 = a2->pvBits;
  *a4 = a2->pvScan0;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  v15 = *a7 + 80;
  if ( *a7 < 0xFFFFFFB0 )
  {
    if ( v11->pvBits )
    {
      cjBits = v11->cjBits;
      if ( cjBits + 7 < cjBits )
        return 0LL;
      v17 = (cjBits + 7) & 0xFFFFFFF8;
      if ( v17 + v15 < v17 )
        return 0LL;
      if ( v17 + v15 <= MaxSize || v12 )
      {
        v15 += v17;
      }
      else
      {
        v8 = UMPDOBJ::bSendLargeBitmap(v14, v11, a6);
        if ( !v8 )
          return v8;
      }
    }
    *a7 = v15;
    return v8;
  }
  return 0LL;
}
