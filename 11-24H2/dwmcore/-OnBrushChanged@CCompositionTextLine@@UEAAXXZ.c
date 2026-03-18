/*
 * XREFs of ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x180298BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionTextLine::OnBrushChanged(CCompositionTextLine *this)
{
  CClipBrush::SetSource(*((struct CResource ***)this + 14), *((struct CBrush **)this + 11));
}
