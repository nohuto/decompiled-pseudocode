/*
 * XREFs of ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02B2838
 * Callers:
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01361D4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C015A7D6 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C015A970 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02ADF00 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02AF6A0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02AF9D0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02AFFC0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02B1180 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B174C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 * Callees:
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C015A8A8 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  *((_QWORD *)this + 11) = a2;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = (char *)this + 8;
  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 8) = *a3;
    dhpdev = a2->dhpdev;
    *((_QWORD *)this + 3) = dhpdev;
    if ( dhpdev )
    {
      *(_QWORD *)this = (char *)a2 - 24;
      *((_QWORD *)this + 4) = a2->dhsurf;
      *((_DWORD *)this + 19) = a2[1].hsurf;
      if ( IsMetaDevBitmapForMirroring(a2) && (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL) & 0x20000) != 0 )
      {
        *((_QWORD *)this + 10) = v7;
        *((_DWORD *)this + 18) = 1;
        *(_WORD *)(v6 + 100) = 0;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
        SURFACE::dhpdev(*(SURFACE **)this, 0LL);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
      }
      else if ( *(_WORD *)(v6 + 100) || (*(_BYTE *)(v5 + 78) & 0x20) != 0 )
      {
        *((_DWORD *)this + 18) = 2;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0LL;
  }
}
