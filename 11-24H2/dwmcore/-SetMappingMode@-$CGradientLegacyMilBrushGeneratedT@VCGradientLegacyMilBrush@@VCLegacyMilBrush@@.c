/*
 * XREFs of ?SetMappingMode@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilBrushMappingMode@@@Z @ 0x180215624
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetMappingMode(
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
