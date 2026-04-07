/*
 * XREFs of ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180033F28
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000C778 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180033828 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180034554 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NonClientAreaThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006578C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NonClientAreaThumbnails@@@details@wil@@QE.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetTLWRootVisualType(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    return 2LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NonClientAreaThumbnails>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_NonClientAreaThumbnails>::GetImpl'::`2'::impl,
    a2);
  if ( *(_DWORD *)(a1 + 72) == 3 )
    return 2LL;
  else
    return (*(_DWORD *)(a1 + 40) >> 14) & 1;
}
