/*
 * XREFs of ?SetIsHitTestVisible@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJ_N@Z @ 0x180208004
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
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
