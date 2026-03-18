/*
 * XREFs of ?SetMaximizedClipMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x18021ADBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetMaximizedClipMargins(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 748) = *a2;
  CVisual::PropagateFlags(a1, 5u);
  return 0LL;
}
