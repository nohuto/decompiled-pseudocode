/*
 * XREFs of ?SetIsComposeOnce@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18022AD6C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsComposeOnce(CResource *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 745) )
  {
    *((_BYTE *)a1 + 745) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
