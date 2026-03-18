/*
 * XREFs of EngStrokePath @ 0x1C000D340
 * Callers:
 *     W32kCddStrokePath @ 0x1C026FB40 (W32kCddStrokePath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEBU_LINEATTRS@@K@Z @ 0x1C0284A1C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     EngStrokeAndFillPath @ 0x1C0288ED0 (EngStrokeAndFillPath.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029C180 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A2020 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A56F0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02B0B00 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     OffStrokePath @ 0x1C02E85A0 (OffStrokePath.c)
 * Callees:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C000D4A0 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C000D598 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015D356 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C0288AF0 (EngFillPath.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C02FC928 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  __int64 v9; // rsi
  __int64 v11; // rbx
  FLONG fl; // eax
  int v13; // eax
  CLIPOBJ **p_pcoa; // rcx
  BOOL v15; // ebx
  __int64 (__fastcall *v17)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  CLIPOBJ *pcoa; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[152]; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+100h] [rbp+0h]

  v9 = (__int64)pso;
  pcoa = pco;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v20, pso, &pcoa);
  if ( !v22 )
    goto LABEL_14;
  v11 = (v9 - 24) & -(__int64)(v9 != 0);
  fl = ppo->fl;
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (fl & 0x10) != 0 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
    {
      if ( !v9 )
        v9 = 24LL;
      v13 = EngFillPath((SURFOBJ *)(v9 & -(__int64)(v11 != 0)), ppo, pcoa, pbo, pptlBrushOrg, mix, 2u);
      goto LABEL_23;
    }
LABEL_14:
    pcoa = v21;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pcoa);
    return 0;
  }
  if ( (fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    goto LABEL_14;
  if ( *(_WORD *)(((v9 - 24) & -(__int64)(v9 != 0)) + 0x64) )
  {
    v17 = *(__int64 (__fastcall **)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(((v9 - 24) & -(__int64)(v9 != 0)) + 0x30) + 2776LL);
    if ( v17 )
    {
      if ( !v9 )
        v9 = 24LL;
      v13 = v17(v9 & -(__int64)(v11 != 0), ppo, pcoa, pxo, pbo, pptlBrushOrg, plineattrs, mix);
LABEL_23:
      pcoa = v21;
      p_pcoa = &pcoa;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  v19 = *(CLIPOBJ **)(((v9 - 24) & -(__int64)(v9 != 0)) + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v19, (struct _SURFOBJ *)v9, 0LL, 0);
  if ( (_BYTE)mix != 13
    || pcoa && pcoa->iDComplexity == 3
    || plineattrs->pstyle
    || (plineattrs->fl & 2) != 0
    || (*(_DWORD *)(((v9 - 24) & -(__int64)(v9 != 0)) + 0x70) & 0x200) != 0
    && (*(_DWORD *)(*(_QWORD *)(((v9 - 24) & -(__int64)(v9 != 0)) + 0x30) + 40LL) & 0x8000) == 0 )
  {
    v13 = bStrokeCosmetic((struct SURFACE *)((v9 - 24) & -(__int64)(v9 != 0)), ppo, pcoa, pbo, plineattrs, mix);
    v19 = v21;
    p_pcoa = &v19;
LABEL_13:
    v15 = v13;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)p_pcoa);
    return v15;
  }
  vSolidLine((struct SURFACE *)((v9 - 24) & -(__int64)(v9 != 0)), ppo, 0LL, pcoa, pbo->iSolidColor);
  v19 = v21;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  return 1;
}
