/*
 * XREFs of ?SetInkColor@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x180278A60
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::SetInkColor(
        CResource *a1,
        _OWORD *a2)
{
  *((_OWORD *)a1 + 9) = *a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
