/*
 * XREFs of ?SetWindowHandle@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_K@Z @ 0x180078BE8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetWindowHandle(CResource *a1, __int64 a2)
{
  *((_QWORD *)a1 + 99) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
