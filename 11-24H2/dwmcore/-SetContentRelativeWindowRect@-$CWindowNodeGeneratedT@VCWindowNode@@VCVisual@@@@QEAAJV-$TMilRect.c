/*
 * XREFs of ?SetContentRelativeWindowRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E5844
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1801E58B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentRelativeWindowRect(__int64 a1, __int64 a2)
{
  bool v4; // zf

  if ( *(_DWORD *)a2 != *(_DWORD *)(a1 + 712)
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)(a1 + 716)
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)(a1 + 720)
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)(a1 + 724) )
  {
    v4 = *(_QWORD *)(a1 + 816) == 0LL;
    *(_OWORD *)(a1 + 712) = *(_OWORD *)a2;
    if ( !v4 )
      SAFE_DELETE<CShape>(a1 + 888);
    CVisual::PropagateFlags(a1, 5u);
  }
  return 0LL;
}
