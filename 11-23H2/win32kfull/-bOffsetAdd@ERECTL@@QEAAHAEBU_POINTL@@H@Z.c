/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C010916C (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C011B9CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01361D4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ??YERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C0264E94 (--YERECTL@@QEAAXAEBU_POINTL@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C026E360 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C026E9F0 (DxgkEngBltViaGDI.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C027F9CC (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286B30 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C0286F58 (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 *     GreSetClientRgn @ 0x1C0287AC0 (GreSetClientRgn.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028E310 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028E9C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     EngPlgBlt @ 0x1C028F060 (EngPlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C02970E0 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A7D44 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8780 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A8D40 (NtGdiFrameRgn.c)
 *     NtGdiExtFloodFill @ 0x1C02D3A10 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6320 (NtGdiSetPixel.c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C02DD788 (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C001499C (LongLongToLong.c)
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
{
  const struct _POINTL *v3; // r10
  ERECTL *v4; // r9
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r11
  LONG plResult; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = this;
  if ( a3
    && (LongLongToLong(a2->x + (__int64)*(int *)this, &plResult) < 0
     || LongLongToLong(v6 + *(int *)(v5 + 8), &plResult) < 0
     || LongLongToLong(*(int *)(v8 + 4) + (__int64)*(int *)(v7 + 4), &plResult) < 0
     || LongLongToLong(v10 + *(int *)(v9 + 12), &plResult) < 0) )
  {
    return 0LL;
  }
  *(_DWORD *)v4 += v3->x;
  *((_DWORD *)v4 + 2) += v3->x;
  *((_DWORD *)v4 + 1) += v3->y;
  *((_DWORD *)v4 + 3) += v3->y;
  return 1LL;
}
