/*
 * XREFs of ?SetContentRelativeClientRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180078C28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentRelativeClientRect(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)a2 != *(_DWORD *)(a1 + 688)
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)(a1 + 692)
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)(a1 + 696)
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)(a1 + 700) )
  {
    *(_OWORD *)(a1 + 688) = *(_OWORD *)a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
