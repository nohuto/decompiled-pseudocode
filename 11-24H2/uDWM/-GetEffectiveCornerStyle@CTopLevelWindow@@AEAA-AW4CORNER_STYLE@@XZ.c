/*
 * XREFs of ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18002CF9C
 * Callers:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x18002D0DC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x18002DA1C (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 * Callees:
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B898 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DB6A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RAIL_ServerWindowRounding@@@details@wil@@.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveCornerStyle(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // dl

  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5 )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RAIL_ServerWindowRounding>::GetImpl'::`2'::impl,
      a2);
  }
  else if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 28)
         && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 29)
         || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) > 1u )
  {
    return 1LL;
  }
  result = *(unsigned int *)(*(_QWORD *)(a1 + 712) + 184LL);
  if ( !(_DWORD)result )
  {
    if ( CTopLevelWindow::HasThinRenderedBorder(*(_DWORD *)(a1 + 584)) )
      return 3LL;
    else
      return (unsigned int)CTopLevelWindow::HasRenderedBorder(v4) + 1;
  }
  return result;
}
