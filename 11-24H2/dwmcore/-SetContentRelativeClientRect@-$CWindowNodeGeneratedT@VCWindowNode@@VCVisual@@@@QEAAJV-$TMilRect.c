/*
 * XREFs of ?SetContentRelativeClientRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027618
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentRelativeClientRect(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)a2 != *(_DWORD *)(a1 + 696)
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)(a1 + 700)
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)(a1 + 704)
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)(a1 + 708) )
  {
    *(_OWORD *)(a1 + 696) = *(_OWORD *)a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
