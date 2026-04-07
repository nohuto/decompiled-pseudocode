/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18001F0D8
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18001ED90 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800302E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this, __int64 a2)
{
  char IsImmersiveColorUsingHighContrast; // al
  DWORD SysColor; // ecx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    a2);
  IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  SysColor = 0;
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 128) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 128) = 0;
  }
  *((_DWORD *)this + 129) = SysColor;
}
