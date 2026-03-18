/*
 * XREFs of PATHOBJ_bPolyLineTo @ 0x14006AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140069D64 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyLineTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return (unsigned __int8)EPATHOBJ::bPolyLineTo((EPATHOBJ *)ppo, 0LL, (const struct _POINTL *)pptfx, cptfx);
}
