/*
 * XREFs of ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18045F370
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024AADC (--0XamlLauncher@@QEAA@XZ.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1804605C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18004EAAC (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x18045977C (--$GetForWindowsEdition@$0-HPPPPPPO@@ShellProgramConfiguration@@SA-AU0@PEBG@Z.c)
 *     ??$try_get_value@K@ShellProgramConfiguration@@QEBA?AV?$optional@K@std@@PEBG@Z @ 0x18045CB08 (--$try_get_value@K@ShellProgramConfiguration@@QEBA-AV-$optional@K@std@@PEBG@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ @ 0x180461738 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@QEAA_NXZ @ 0x1804617F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuPrelaunchEnabled(XamlLauncher *this)
{
  HKEY *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx
  int active; // ecx
  bool v6; // zf
  __int64 v7; // rcx
  HKEY *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // eax
  bool v13; // bl
  XamlLauncher *v14; // [rsp+30h] [rbp+8h] BYREF
  char v15; // [rsp+38h] [rbp+10h] BYREF

  v14 = this;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149580>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60149580>::GetImpl'::`2'::impl) )
  {
    v1 = ShellProgramConfiguration::GetForWindowsEdition<-2147483646>((HKEY *)&v14);
    v3 = ShellProgramConfiguration::try_get_value<unsigned long>(v1, (__int64)&v15, v2);
    if ( (unsigned int)IsGamingFullScreenExperienceActive(v4) )
      active = 0;
    else
      active = IsActiveSessionCountLimited();
    if ( *(_BYTE *)(v3 + 4) )
      active = *(_DWORD *)v3;
    v6 = active == 0;
  }
  else
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54629273>::GetImpl'::`2'::impl)
      && (unsigned int)IsGamingFullScreenExperienceActive(v7) )
    {
      return 0;
    }
    v9 = ShellProgramConfiguration::GetForWindowsEdition<-2147483646>((HKEY *)&v14);
    v11 = ShellProgramConfiguration::try_get_value<unsigned long>(v9, (__int64)&v15, v10);
    LOBYTE(v12) = IsActiveSessionCountLimited();
    if ( *(_BYTE *)(v11 + 4) )
      v12 = *(_DWORD *)v11;
    else
      v12 = (unsigned __int8)v12;
    v6 = v12 == 0;
  }
  v13 = !v6;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)&v14);
  return v13;
}
