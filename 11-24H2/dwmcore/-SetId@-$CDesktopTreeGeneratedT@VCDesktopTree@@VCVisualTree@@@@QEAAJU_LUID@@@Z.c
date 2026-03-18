/*
 * XREFs of ?SetId@?$CDesktopTreeGeneratedT@VCDesktopTree@@VCVisualTree@@@@QEAAJU_LUID@@@Z @ 0x18022F170
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CDesktopTreeGeneratedT<CDesktopTree,CVisualTree>::SetId(CResource *a1, __int64 a2)
{
  *((_QWORD *)a1 + 329) = a2;
  CResource::OnPropertyChanged(a1);
  return 0LL;
}
