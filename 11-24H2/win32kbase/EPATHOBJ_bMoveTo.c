/*
 * XREFs of EPATHOBJ_bMoveTo @ 0x1400692A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x140069BA8 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 */

_BOOL8 __fastcall EPATHOBJ_bMoveTo(EPATHOBJ *a1, const struct EXFORMOBJR *a2, const struct _POINTL *a3)
{
  return EPATHOBJ::bMoveTo(a1, a2, a3);
}
