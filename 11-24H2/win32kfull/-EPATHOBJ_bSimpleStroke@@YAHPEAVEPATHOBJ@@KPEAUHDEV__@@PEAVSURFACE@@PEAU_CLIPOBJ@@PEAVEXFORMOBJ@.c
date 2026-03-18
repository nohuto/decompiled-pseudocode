/*
 * XREFs of ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400E19D4
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400E125C (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403003C8 (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 * Callees:
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140055AAC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     IsPathBoundsInRange @ 0x1400E1D44 (IsPathBoundsInRange.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

int __fastcall EPATHOBJ_bSimpleStroke(
        struct EPATHOBJ *a1,
        int a2,
        HDEV a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *a7,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *a9,
        MIX mix)
{
  __int64 v12; // rcx
  HDEV v13; // r13
  char v14; // r12
  int v15; // edi
  struct _LINEATTRS *plineattrs; // r15
  int v18; // r13d
  __int64 (__fastcall *v19)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  __int64 (__fastcall *v20)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  int v21; // r12d
  BRUSHOBJ *pbo; // [rsp+20h] [rbp-79h]
  _OWORD v23[2]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v24[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+E0h] [rbp+47h] BYREF
  int v27; // [rsp+E8h] [rbp+4Fh]
  HDEV v28; // [rsp+F0h] [rbp+57h]

  v28 = a3;
  v27 = a2;
  v12 = *((_QWORD *)a1 + 1) + 48LL;
  v13 = a3;
  v14 = a2;
  memset(v23, 0, sizeof(v23));
  v15 = 0;
  if ( !(unsigned __int8)IsPathBoundsInRange(v12) )
    return 0;
  if ( *((_DWORD *)a1 + 1) )
  {
    ++*((_DWORD *)a4 + 23);
    plineattrs = a9;
    if ( (*((_DWORD *)a4 + 28) & 0x20) == 0 )
      goto LABEL_4;
    memset(v24, 0, sizeof(v24));
    v25 = 0LL;
    PRECOMPUTE::vInit(
      (const struct _LINEATTRS **)v24,
      a4,
      (__int64)v13,
      a1,
      (__int64)pco,
      (struct EPATHOBJ *)pxo,
      (struct EXFORMOBJ *)a9,
      mix,
      0,
      0);
    if ( !v25 )
    {
      EngSetLastError(8u);
      goto LABEL_19;
    }
    if ( (plineattrs->fl & 1) == 0 || (v27 & 2) != 0 )
    {
      v18 = -1;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v23, a1, vCleanupPathStackObj);
          v20 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *))*((_QWORD *)v28 + 349);
          if ( v20 )
          {
            pbo = a7;
            v21 = v20(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), a1, pco, pxo);
          }
          else
          {
            v21 = -1;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v23);
          if ( v21 == 1 )
            goto LABEL_18;
          if ( v21 == -1 )
            goto LABEL_19;
        }
        if ( !EPATHOBJ::bFlatten(a1) )
          goto LABEL_19;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v23, a1, vCleanupPathStackObj);
      v19 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *))*((_QWORD *)v28 + 349);
      if ( v19 )
      {
        pbo = a7;
        v18 = v19(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), a1, pco, pxo);
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v23);
      if ( v18 == 1 )
      {
LABEL_18:
        v15 = 1;
LABEL_19:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
        return v15;
      }
      if ( v18 == -1 )
        goto LABEL_19;
      v13 = v28;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
    v14 = v27;
LABEL_4:
    if ( (plineattrs->fl & 1) == 0 )
      return EngStrokePath(
               (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
               (PATHOBJ *)a1,
               pco,
               pxo,
               a7,
               pptlBrushOrg,
               plineattrs,
               mix);
    if ( pathwide::bWiden(
           a1,
           a1,
           (struct EPATHOBJ *)pxo,
           (const struct EXFORMOBJ *)plineattrs,
           (const struct _LINEATTRS *)pbo) )
    {
      return *EPATHOBJ_bSimpleFill(&v26, (__int64)a1, v14, (__int64)v13, a4, pco, a7, pptlBrushOrg, mix, 2u);
    }
    return 0;
  }
  return 1;
}
