/*
 * XREFs of ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14030B2C8
 * Callers:
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x140263960 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140309300 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140309480 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140309ED0 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14030A080 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030A1E0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x14030A370 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14030A4E0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14030A650 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x14026C790 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vPanningUpdate(struct _PANDEV *a1, __m128i *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  int left; // edx
  LONG right; // r9d
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v14; // [rsp+38h] [rbp-28h] BYREF
  __m128i v15; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->m128i_i32[0];
    right = a2->m128i_i32[2];
    if ( a3->rclBounds.left > left )
      left = a3->rclBounds.left;
    v8 = a2->m128i_i32[1];
    v15.m128i_i32[0] = left;
    if ( top > v8 )
      v8 = top;
    bottom = a3->rclBounds.bottom;
    v15.m128i_i32[1] = v8;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    v10 = a2->m128i_i32[3];
    v15.m128i_i32[2] = right;
    if ( bottom < v10 )
      v10 = bottom;
    v15.m128i_i32[3] = v10;
  }
  else
  {
    right = a2->m128i_i32[2];
    v15 = *a2;
    left = _mm_cvtsi128_si32(v15);
  }
  if ( left < right && v15.m128i_i32[1] < v15.m128i_i32[3] )
  {
    v14 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
    EngAcquireSemaphore(v14);
    v12 = *((_QWORD *)a1 + 12);
    v11 = *((_QWORD *)a1 + 11);
    v13 = *((_QWORD *)a1 + 10);
    RGNOBJ::vSet((RGNOBJ *)&v12, (const struct _RECTL *const)&v15);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v12, 0xEu) )
      RGNOBJ::vSet((RGNOBJ *)&v11);
    *((_QWORD *)a1 + 11) = v13;
    *((_QWORD *)a1 + 10) = v11;
    *((_DWORD *)a1 + 26) = 1;
    PANDEVLOCK::vUnLock(&v14);
  }
}
