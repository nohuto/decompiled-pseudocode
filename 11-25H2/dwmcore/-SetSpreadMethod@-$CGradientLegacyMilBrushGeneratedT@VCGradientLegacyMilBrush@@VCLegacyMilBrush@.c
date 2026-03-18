/*
 * XREFs of ?SetSpreadMethod@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilGradientSpreadMethod@@@Z @ 0x180233CAC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetSpreadMethod(
        CResource *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 28) )
  {
    *((_DWORD *)a1 + 28) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
