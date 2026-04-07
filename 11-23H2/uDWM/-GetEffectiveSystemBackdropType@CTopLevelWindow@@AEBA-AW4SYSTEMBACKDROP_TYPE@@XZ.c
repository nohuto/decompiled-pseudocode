/*
 * XREFs of ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x1800339F0
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180033A50 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180033A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveSystemBackdropType(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 752);
  if ( !v2 )
    return 1LL;
  result = *(unsigned int *)(v2 + 204);
  if ( (_DWORD)result )
    return result;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::GetImpl'::`2'::impl,
    a2);
  if ( !*(_QWORD *)(a1 + 520) )
    return 1LL;
  return (unsigned int)CTopLevelWindow::HasRenderedBorder(*(_DWORD *)(a1 + 624)) + 1;
}
