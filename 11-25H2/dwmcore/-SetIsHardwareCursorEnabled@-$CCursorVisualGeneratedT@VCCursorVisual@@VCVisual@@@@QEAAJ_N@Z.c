/*
 * XREFs of ?SetIsHardwareCursorEnabled@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x180283750
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetIsHardwareCursorEnabled(CResource *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 688) )
  {
    *((_BYTE *)a1 + 688) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
