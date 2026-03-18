/*
 * XREFs of ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1802787CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18029079C (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 85) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
