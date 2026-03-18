/*
 * XREFs of ?SetSourceModifications@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUDCOMPOSITION_WINDOWNODE_SOURCEMODIFICATIONS@@@Z @ 0x1800492CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800492F0 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetSourceModifications(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 772) = *a2;
  CWindowNode::OnSourceModificationsChanged((CWindowNode *)a1);
  return 0LL;
}
