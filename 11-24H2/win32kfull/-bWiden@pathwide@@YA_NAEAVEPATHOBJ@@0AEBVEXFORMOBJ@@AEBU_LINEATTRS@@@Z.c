/*
 * XREFs of ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C
 * Callers:
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     NtGdiWidenPath @ 0x1400E4EA0 (NtGdiWidenPath.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E9988 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x1400E9CA4 (-bValid@WIDENER@pathwide@@QEBAHXZ.c)
 *     pathwide::EPATHOBJ_vBecome @ 0x1401B9858 (pathwide--EPATHOBJ_vBecome.c)
 *     ??1WIDENER@pathwide@@QEAA@XZ @ 0x1401C7928 (--1WIDENER@pathwide@@QEAA@XZ.c)
 *     ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x1401D5548 (-vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall pathwide::bWiden(pathwide *this, struct EPATHOBJ *a2, struct EPATHOBJ *a3, const struct _LINEATTRS *a4)
{
  char v6; // bl
  __int64 v7; // rcx
  struct EPATHOBJ *v8; // rdx
  _DWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[1128]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[168]; // [rsp+4A8h] [rbp+3A8h] BYREF
  _DWORD v13[8]; // [rsp+550h] [rbp+450h] BYREF

  pathwide::WIDENER::WIDENER((pathwide::WIDENER *)v11, a2, a3, a4);
  if ( (unsigned int)pathwide::WIDENER::bValid((pathwide::WIDENER *)v11) )
  {
    v6 = 1;
    pathwide::EPATHOBJ_vBecome(this, v12);
    v10[0] = 0;
    *((_DWORD *)this + 1) = EPATHOBJ::cTotalCurves(this);
    bFToL(v7, v10, 6LL);
    v13[5] = 0;
    v13[6] = 0;
    v13[0] = v10[0];
    v13[1] = v10[0];
    v13[2] = v10[0];
    v13[4] = v10[0];
    v13[3] = -v10[0];
    v13[7] = -v10[0];
    if ( !EXFORMOBJ::bXform(a3, (const struct _VECTORL *)v13, (struct _VECTORFX *)v13, 4uLL, 1) )
      pathwide::vReComputeBounds(this, v8);
  }
  else
  {
    v6 = 0;
  }
  pathwide::WIDENER::~WIDENER((pathwide::WIDENER *)v11);
  return v6;
}
