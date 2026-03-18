/*
 * XREFs of ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418
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

__int64 __fastcall MSURF::bFindSurface(MSURF *this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  USHORT iType; // ax
  DHPDEV dhpdev; // rax
  CLIPOBJ **v9; // rdi
  DHSURF dhsurf; // r9
  __int64 **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CLIPOBJ *Clip; // rax
  __int64 v16; // rcx
  BYTE *v17; // r12
  struct _CLIPOBJ *v18; // rax
  RECTL *v19; // r14
  struct _RECTL *v20; // r15
  __int64 *i; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // cl

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    v9 = (CLIPOBJ **)((char *)this + 72);
    *(_QWORD *)this = dhpdev;
    *((_QWORD *)this + 9) = a3;
    dhsurf = a2->dhsurf;
    *((_QWORD *)this + 3) = a2->dhsurf;
    v11 = *(__int64 ***)dhpdev;
    *((_QWORD *)this + 7) = *(_QWORD *)dhpdev;
    while ( v11 )
    {
      v12 = *((unsigned int *)v11 + 4);
      v13 = *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8 * v12);
      if ( v13 )
      {
        *((_QWORD *)this + 8) = v13;
        *((_QWORD *)this + 10) = *(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96) + 696LL;
        return 1LL;
      }
      v11 = (__int64 **)*v11;
      *((_QWORD *)this + 7) = v11;
    }
    goto LABEL_28;
  }
  if ( iType == 1 && ((_DWORD)a2->hdev[10] & 0x20000) == 0 )
    return 0LL;
  *(_QWORD *)this = a2->dhpdev;
  if ( !a3 || !a3->iDComplexity )
  {
    Clip = EngCreateClip();
    v9 = (CLIPOBJ **)((char *)this + 72);
    *((_QWORD *)this + 9) = Clip;
    if ( Clip )
    {
      v16 = *(_QWORD *)this;
      *((_DWORD *)this + 13) = 1;
      Clip->rclBounds = *(RECTL *)(v16 + 72);
      RGNOBJ::vSet((RGNOBJ *)&(*v9)[2].rclBounds.top, &(*v9)->rclBounds);
      v17 = (BYTE *)this + 88;
      v18 = a3;
      *((_BYTE *)this + 88) = 0;
      if ( !a3 )
        v18 = *v9;
      v19 = (RECTL *)((char *)this + 8);
      v20 = (struct _RECTL *)((char *)this + 32);
      *(RECTL *)((char *)this + 8) = v18->rclBounds;
      if ( a3 )
      {
        if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
        {
LABEL_28:
          if ( *((_DWORD *)this + 13) == 1 )
            EngDeleteClip(*v9);
          return 0LL;
        }
      }
      else
      {
        *v20 = *a4;
      }
      goto LABEL_17;
    }
    return 0LL;
  }
  v19 = (RECTL *)((char *)this + 8);
  v9 = (CLIPOBJ **)((char *)this + 72);
  *((_QWORD *)this + 9) = a3;
  v17 = (BYTE *)this + 88;
  v20 = (struct _RECTL *)((char *)this + 32);
  *((_BYTE *)this + 88) = a3->iDComplexity;
  *(RECTL *)((char *)this + 8) = a3->rclBounds;
  if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
    return 0LL;
LABEL_17:
  for ( i = *(__int64 **)this; ; i = (__int64 *)*((_QWORD *)this + 7) )
  {
    v22 = *i;
    *((_QWORD *)this + 7) = *i;
    if ( !v22 )
    {
      (*v9)->rclBounds = *v19;
      (*v9)->iDComplexity = *v17;
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 56) + 40LL) & 0x400) == 0 )
      break;
LABEL_35:
    ;
  }
  if ( !*v17
    && v20->left >= *(_DWORD *)(v22 + 28)
    && *((_DWORD *)this + 9) >= *(_DWORD *)(v22 + 32)
    && *((_DWORD *)this + 10) <= *(_DWORD *)(v22 + 36)
    && *((_DWORD *)this + 11) <= *(_DWORD *)(v22 + 40) )
  {
    (*v9)->iDComplexity = 0;
    (*v9)->rclBounds = *v20;
    goto LABEL_26;
  }
  if ( !bIntersect(v20, (const struct _RECTL *)(v22 + 28), &(*v9)->rclBounds) )
  {
    (*v9)->rclBounds = *v19;
    goto LABEL_35;
  }
  v24 = 1;
  if ( *v17 )
    v24 = *v17;
  (*v9)->iDComplexity = v24;
LABEL_26:
  v23 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *(_QWORD *)(v23 + 64);
  *((_QWORD *)this + 10) = v23 + 72;
  return 1LL;
}
