/*
 * XREFs of ?SetIsLayoutRTL@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x180233BBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsLayoutRTL(__int64 a1, char a2)
{
  if ( a2 != *(_BYTE *)(a1 + 747) )
  {
    *(_BYTE *)(a1 + 747) = a2;
    CVisual::PropagateFlags(a1, 4u);
  }
  return 0LL;
}
