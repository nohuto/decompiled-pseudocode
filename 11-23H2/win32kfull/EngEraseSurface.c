/*
 * XREFs of EngEraseSurface @ 0x1C0132E50
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C0132AD8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngPlgBlt @ 0x1C028F060 (EngPlgBlt.c)
 *     NtGdiEngEraseSurface @ 0x1C02C91C0 (NtGdiEngEraseSurface.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C004A430 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 */

BOOL __stdcall EngEraseSurface(SURFOBJ *pso, RECTL *prcl, ULONG iColor)
{
  struct SURFACE *v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL));
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v7, pso, 0LL, 0);
  vDIBSolidBlt(v5, prcl, 0LL, iColor, 0);
  return 1;
}
