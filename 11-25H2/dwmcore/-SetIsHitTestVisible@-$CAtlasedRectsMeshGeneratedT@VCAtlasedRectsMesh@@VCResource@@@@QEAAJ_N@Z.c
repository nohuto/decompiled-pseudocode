/*
 * XREFs of ?SetIsHitTestVisible@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJ_N@Z @ 0x180077D28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetIsHitTestVisible(
        CResource *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 72) )
  {
    *((_BYTE *)a1 + 72) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
