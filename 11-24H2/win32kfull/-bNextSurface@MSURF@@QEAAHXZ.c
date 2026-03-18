/*
 * XREFs of ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44
 * Callers:
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140050610 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140051290 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140051B60 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140051F70 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x140052700 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140052EB0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400531D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14005474C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140054F70 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2870 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401D31C0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401DE1F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x140331040 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403311A0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MSURF::bNextSurface(MSURF *this)
{
  __int64 v1; // r9
  __int64 **i; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // rax
  char v10; // cl
  __int64 v11; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 8) + 92LL) & 4) != 0
      && !_bittest((const signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 7) + 56LL) + 2112LL), 0xFu) )
    {
      *((_DWORD *)this + 12) |= 1u;
    }
    for ( i = (__int64 **)**((_QWORD **)this + 7); ; i = (__int64 **)*i )
    {
      *((_QWORD *)this + 7) = i;
      if ( !i )
        break;
      v4 = *((unsigned int *)i + 4);
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v4);
      if ( v5 && (_bittest((const signed __int32 *)i[7] + 528, 0xFu) || (*((_DWORD *)this + 12) & 1) == 0) )
      {
        *((_QWORD *)this + 8) = v5;
        *((_QWORD *)this + 10) = *(_QWORD *)(W32GetSessionState(v4, i, v5) + 96) + 696LL;
        return 1LL;
      }
    }
LABEL_14:
    if ( *((_DWORD *)this + 13) == 1 )
      EngDeleteClip(*((CLIPOBJ **)this + 9));
    return 0LL;
  }
  v6 = (__int64 *)*((_QWORD *)this + 7);
  v7 = *v6;
  for ( *((_QWORD *)this + 7) = *v6; ; *((_QWORD *)this + 7) = *v9 )
  {
    if ( !v7 )
    {
      *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
      *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = *((_BYTE *)this + 88);
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 56) + 40LL) & 0x400) == 0 )
      break;
LABEL_23:
    v9 = (_QWORD *)*((_QWORD *)this + 7);
    v7 = *v9;
  }
  if ( !*((_BYTE *)this + 88)
    && *((_DWORD *)this + 8) >= *(_DWORD *)(v7 + 28)
    && *((_DWORD *)this + 9) >= *(_DWORD *)(v7 + 32)
    && *((_DWORD *)this + 10) <= *(_DWORD *)(v7 + 36)
    && *((_DWORD *)this + 11) <= *(_DWORD *)(v7 + 40) )
  {
    *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = 0;
    *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *((_OWORD *)this + 2);
    goto LABEL_32;
  }
  if ( !bIntersect(
          (const struct _RECTL *)this + 2,
          (const struct _RECTL *)(v7 + 28),
          (struct _RECTL *)(*((_QWORD *)this + 9) + 4LL)) )
  {
    *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
    goto LABEL_23;
  }
  v10 = 1;
  if ( *((_BYTE *)this + 88) )
    v10 = *((_BYTE *)this + 88);
  *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = v10;
LABEL_32:
  v11 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *(_QWORD *)(v11 + 64);
  *((_QWORD *)this + 10) = v11 + 72;
  return 1LL;
}
