/*
 * XREFs of ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x1401796AC
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1401793D8 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bWorldXformIdentity(const struct _XFORML *a1)
{
  return a1->eM11 == 1.0 && a1->eM12 == 0.0 && a1->eM21 == 0.0 && a1->eM22 == 1.0 && a1->eDx == 0.0 && a1->eDy == 0.0;
}
