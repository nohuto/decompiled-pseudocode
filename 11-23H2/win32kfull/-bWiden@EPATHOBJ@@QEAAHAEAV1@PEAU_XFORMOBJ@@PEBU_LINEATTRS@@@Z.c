/*
 * XREFs of ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015D356
 * Callers:
 *     EngStrokePath @ 0x1C000D340 (EngStrokePath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEBU_LINEATTRS@@K@Z @ 0x1C0284A1C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0285E98 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 *     EngStrokeAndFillPath @ 0x1C0288ED0 (EngStrokeAndFillPath.c)
 *     NtGdiFrameRgn @ 0x1C02A8D40 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02C1260 (NtGdiWidenPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1WIDENER@@QEAA@XZ @ 0x1C015CF4A (--1WIDENER@@QEAA@XZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C015D314 (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C0265BC8 (-bEfToL@EFLOAT@@QEAAHAEAJ@Z.c)
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F071C (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z @ 0x1C02F1F50 (-vMakeItWide@WIDENER@@QEAAXAEAVEPATHOBJ@@@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02F2880 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall EPATHOBJ::bWiden(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        const struct _LINEATTRS *a4)
{
  BOOL v7; // edi
  FLOAT_LONG v8; // xmm0_4
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT_LONG v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v12[1312]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[8]; // [rsp+560h] [rbp+460h] BYREF

  WIDENER::WIDENER((WIDENER *)v12, a2, (struct EXFORMOBJ *)a3, a4);
  v7 = WIDENER::bValid((WIDENER *)v12);
  if ( v7 )
  {
    WIDENER::vMakeItWide((WIDENER *)v12, this);
    LODWORD(v8.e) = a4->elWidth;
    v10 = 0;
    v11[0] = v8;
    EFLOAT::bEfToL((EFLOAT *)v11, &v10);
    v13[5] = 0;
    v13[6] = 0;
    v13[0] = v10;
    v13[1] = v10;
    v13[2] = v10;
    v13[4] = v10;
    v13[3] = -v10;
    v13[7] = -v10;
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)v13, (struct _VECTORFX *)v13, 4uLL, 1) )
      EPATHOBJ::vReComputeBounds(this);
  }
  WIDENER::~WIDENER((WIDENER *)v12);
  return v7;
}
