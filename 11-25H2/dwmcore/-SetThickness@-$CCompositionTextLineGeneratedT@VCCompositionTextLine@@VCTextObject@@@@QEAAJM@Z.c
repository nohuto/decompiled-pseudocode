/*
 * XREFs of ?SetThickness@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z @ 0x180284E44
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetThickness(float *a1, float a2)
{
  if ( a2 != a1[26] )
  {
    a1[26] = a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
