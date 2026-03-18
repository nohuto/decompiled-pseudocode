/*
 * XREFs of ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x18020F180
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ @ 0x18020F1A8 (-OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsClipToDirty(CWindowNode *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 744) )
  {
    *((_BYTE *)a1 + 744) = a2;
    CWindowNode::OnIsClipToDirtyChanged(a1);
  }
  return 0LL;
}
