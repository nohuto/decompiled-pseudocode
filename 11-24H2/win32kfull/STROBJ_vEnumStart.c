/*
 * XREFs of STROBJ_vEnumStart @ 0x1401A1550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall STROBJ_vEnumStart(STROBJ *pstro)
{
  pstro[1].cGlyphs = 0;
  pstro[1].flAccel = 0;
}
