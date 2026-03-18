/*
 * XREFs of ?SetColor@?$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x1802160A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::SetColor(
        __int64 a1,
        _OWORD *a2)
{
  *(_OWORD *)(a1 + 104) = *a2;
  CResource::OnPropertyChanged((CResource *)a1);
  return 0LL;
}
