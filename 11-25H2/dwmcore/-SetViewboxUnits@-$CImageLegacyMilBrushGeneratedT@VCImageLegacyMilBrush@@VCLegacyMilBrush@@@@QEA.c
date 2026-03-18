/*
 * XREFs of ?SetViewboxUnits@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilBrushMappingMode@@@Z @ 0x180077B68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetViewboxUnits(
        CResource *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 27) )
  {
    *((_DWORD *)a1 + 27) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
