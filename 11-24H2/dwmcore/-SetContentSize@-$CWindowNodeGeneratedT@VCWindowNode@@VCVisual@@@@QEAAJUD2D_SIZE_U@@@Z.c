/*
 * XREFs of ?SetContentSize@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z @ 0x1801E57E8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1801E58B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentSize(__int64 a1, __int64 a2)
{
  bool v4; // zf

  if ( a2 != *(_QWORD *)(a1 + 728) )
  {
    v4 = *(_QWORD *)(a1 + 816) == 0LL;
    *(_QWORD *)(a1 + 728) = a2;
    if ( v4 )
      SAFE_DELETE<CShape>(a1 + 888);
    CVisual::PropagateFlags(a1, 5u);
  }
  return 0LL;
}
