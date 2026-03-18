/*
 * XREFs of ?OnIsCursorChanged@CWindowNode@@AEAAXXZ @ 0x180245D98
 * Callers:
 *     ?SetIsCursor@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x180245D70 (-SetIsCursor@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowNode::OnIsCursorChanged(CWindowNode *this)
{
  CVisual::PropagateFlags((__int64)this, 0x10u);
}
