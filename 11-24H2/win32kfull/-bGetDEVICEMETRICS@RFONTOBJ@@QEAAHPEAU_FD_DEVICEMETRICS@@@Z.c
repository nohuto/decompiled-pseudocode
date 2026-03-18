/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1401A1D28
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400B03C4 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetDEVICEMETRICS(POINTL **this, struct _FD_DEVICEMETRICS *a2)
{
  FD_XFORM v4; // xmm0
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *v6; // rdx
  FIX fxMaxAscender; // edx
  POINTL *v8; // rcx
  FIX fxMaxDescender; // eax
  POINTL *v10; // rdx
  LONG y; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // r8
  __int64 result; // rax
  POINTL v18; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(FD_XFORM *)&(*this)[17].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = (struct _FONTOBJ *)*this;
  v6 = (struct DHPDEV__ *)(*this)[14];
  v18 = (*this)[16];
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v18, v6, v5, 3u, 0xFFFFFFFF, 0LL, a2, 0x7Cu) == -1 )
    return 0LL;
  (*this)[33].y = 1;
  if ( (a2->flRealizedType & 2) != 0 )
    (*this)[33].y |= 0x40u;
  if ( (a2->flRealizedType & 4) != 0 )
    (*this)[33].y |= 0x20u;
  if ( (a2->flRealizedType & 8) != 0 )
    (*this)[33].y |= 0x10u;
  (*this)[42].x = a2->cxMax;
  (*this)[34] = a2->ptlUnderline1;
  (*this)[35] = a2->ptlStrikeout;
  (*this)[36] = a2->ptlULThickness;
  (*this)[37] = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  v8 = *this;
  fxMaxDescender = a2->fxMaxDescender;
  if ( fxMaxAscender < 0 )
    goto LABEL_11;
  if ( fxMaxDescender >= 0 )
  {
    fxMaxDescender += fxMaxAscender;
LABEL_11:
    v8[39].y = fxMaxDescender;
    goto LABEL_12;
  }
  v8[39].y = fxMaxAscender;
LABEL_12:
  (*this)[38].y = a2->fxMaxAscender;
  (*this)[39].x = -a2->fxMaxDescender;
  (*this)[43].x = ((*this)[38].y + 8) >> 4;
  (*this)[43].y = ((*this)[38].y - (*this)[39].x + 8) >> 4;
  (*this)[38].x = a2->lD;
  if ( (*this)[38].x >= 0 )
  {
    (*this)[42].y = a2->cyMax;
    (*this)[79] = (POINTL)a2->cjGlyphMax;
    (*this)[80] = (POINTL)a2->cjGlyphMax;
    (*this)[44].x = a2->alReserved[0];
    v10 = *this;
    y = (*this)[1].y;
    if ( (y & 0x10000000) == 0 )
    {
LABEL_18:
      *(FD_XFORM *)&(*this)[44].y = a2->fdxQuantized;
      (*this)[46].y = a2->lNonLinearExtLeading;
      (*this)[47].x = a2->lNonLinearIntLeading;
      (*this)[47].y = a2->lNonLinearMaxCharWidth;
      result = 1LL;
      (*this)[48].x = a2->lNonLinearAvgCharWidth;
      (*this)[88].x = a2->lMinA;
      (*this)[88].y = a2->lMinC;
      (*this)[89].x = a2->lMinD;
      (*this)[1].x = (*this)[42].x;
      return result;
    }
    v12 = (unsigned int)v10[42].y;
    v13 = v12 * ((unsigned int)v10[42].x + 2LL);
    if ( (y & 0x20000000) != 0 )
    {
      v13 *= 5LL;
      v14 = (v10[42].x + 2) * (v12 + 1);
    }
    else
    {
      v14 = v12 * (v10[42].x + 2);
    }
    v15 = ((v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
    if ( v15 <= 0xFFFFFFFF )
    {
      v10[79] = (POINTL)(((v14 + 3) & 0xFFFFFFFC) + 16);
      (*this)[80] = (POINTL)(unsigned int)v15;
      goto LABEL_18;
    }
  }
  return 0LL;
}
