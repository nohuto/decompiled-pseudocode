/*
 * XREFs of ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x1801E56BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ @ 0x1801E56E4 (-OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetIsClipToDirty(CWindowNode *a1, char a2)
{
  if ( a2 != *((_BYTE *)a1 + 752) )
  {
    *((_BYTE *)a1 + 752) = a2;
    CWindowNode::OnIsClipToDirtyChanged(a1);
  }
  return 0LL;
}
