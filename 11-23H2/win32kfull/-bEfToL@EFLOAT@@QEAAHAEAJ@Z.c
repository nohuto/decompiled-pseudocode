/*
 * XREFs of ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C0265BC8
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C015D356 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0078740 (bFToL.c)
 */

__int64 __fastcall EFLOAT::bEfToL(EFLOAT *this, int *a2)
{
  return bFToL(*(float *)this, a2, 6u);
}
