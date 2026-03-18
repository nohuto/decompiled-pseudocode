/*
 * XREFs of STROBJ_bEnumPositionsOnly @ 0x1400AA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400AA0D0 (-STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 */

BOOL __stdcall STROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  if ( ((__int64)pstro[4].pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  *pc = pstro->cGlyphs;
  *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
  return 0;
}
