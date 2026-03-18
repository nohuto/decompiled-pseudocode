/*
 * XREFs of ?SetExtendedBounds@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180278974
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x180068578 (--9@YA_NAEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetExtendedBounds(__int64 a1, _DWORD *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // r8
  CResource *v4; // r9

  if ( operator!=(a2, (_DWORD *)(a1 + 736)) )
  {
    *v2 = *v3;
    CResource::OnPropertyChanged(v4);
  }
  return 0LL;
}
