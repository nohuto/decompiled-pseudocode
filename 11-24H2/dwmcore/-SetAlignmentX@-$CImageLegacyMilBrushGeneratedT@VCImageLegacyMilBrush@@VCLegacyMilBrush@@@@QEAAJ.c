/*
 * XREFs of ?SetAlignmentX@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJW4Enum@MilHorizontalAlignment@@@Z @ 0x18020D2C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetAlignmentX(
        CResource *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 38) )
  {
    *((_DWORD *)a1 + 38) = a2;
    CResource::OnPropertyChanged(a1);
  }
  return 0LL;
}
