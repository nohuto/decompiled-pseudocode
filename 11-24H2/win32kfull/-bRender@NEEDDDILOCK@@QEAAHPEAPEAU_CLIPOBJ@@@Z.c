/*
 * XREFs of ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x14019CE08
 * Callers:
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140329480 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032A050 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall NEEDDDILOCK::bRender(NEEDDDILOCK *this, struct _CLIPOBJ **a2)
{
  __int64 v2; // rcx
  BOOL result; // eax

  v2 = *(_QWORD *)this;
  result = 1;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 100) == 1 )
      return EngUpdateDeviceSurface((SURFOBJ *)(v2 + 24), a2);
  }
  return result;
}
