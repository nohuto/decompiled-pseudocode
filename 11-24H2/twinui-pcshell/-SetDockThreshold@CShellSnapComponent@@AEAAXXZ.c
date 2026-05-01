/*
 * XREFs of ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180209194
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18059F650 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800742D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x1802BDF24 (--$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z.c)
 *     ??$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z @ 0x18059AC14 (--$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z.c)
 */

void __fastcall CShellSnapComponent::SetDockThreshold(CShellSnapComponent *this, __int64 a2, char a3, __int64 a4)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  UINT v9; // edx
  UINT v10; // ecx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((_BYTE *)this + 1156) )
  {
    CSnapComponentTelemetry::SetDockThreshold<long &,long &,long &,long &,long &,long &>(
      (_DWORD)this + 1160,
      (_DWORD)this + 1164,
      (_DWORD)this + 1168,
      (_DWORD)this + 1172,
      (__int64)this + 1176,
      (__int64)this + 1180);
    SystemParametersInfoW(0x8Bu, *((_DWORD *)this + 295), 0LL, 0);
    SystemParametersInfoW(0x89u, *((_DWORD *)this + 292), 0LL, 0);
    SystemParametersInfoW(0x87u, *((_DWORD *)this + 294), 0LL, 0);
    SystemParametersInfoW(0x85u, *((_DWORD *)this + 291), 0LL, 0);
    SystemParametersInfoW(0x81u, *((_DWORD *)this + 293), 0LL, 0);
    v9 = *((_DWORD *)this + 290);
    v10 = 127;
  }
  else
  {
    CSnapComponentTelemetry::SetDockThreshold<int const &,int const &,int const &,int const &,int const &,int const &>(
      v6,
      v5,
      v7,
      v8);
    SystemParametersInfoW(0x7Fu, 1u, 0LL, 0);
    SystemParametersInfoW(0x81u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x85u, 0x18u, 0LL, 0);
    SystemParametersInfoW(0x87u, 0x1Eu, 0LL, 0);
    SystemParametersInfoW(0x89u, 0x32u, 0LL, 0);
    v9 = 50;
    v10 = 139;
  }
  SystemParametersInfoW(v10, v9, 0LL, 0);
}
