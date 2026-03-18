/*
 * XREFs of ?SetContentSize@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUD2D_SIZE_U@@@Z @ 0x180131D48
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180131E18 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentSize(__int64 a1, __int64 a2)
{
  bool v4; // zf

  if ( a2 != *(_QWORD *)(a1 + 720) )
  {
    v4 = *(_QWORD *)(a1 + 808) == 0LL;
    *(_QWORD *)(a1 + 720) = a2;
    if ( v4 )
      SAFE_DELETE<CShape>(a1 + 880);
    CVisual::PropagateFlags(a1, 5u);
  }
  return 0LL;
}
