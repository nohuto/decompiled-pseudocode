/*
 * XREFs of ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18059F650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800742D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@@@Z @ 0x1800B7308 (--$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180205B98 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180209194 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x18020B7A0 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x18020E24C (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1805A0B94 (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::OnSettingChanged(__int64 a1, int a2)
{
  struct IImmersiveSettingsCache *v4; // rdx
  char v5; // r8
  __int64 v6; // r9
  char v8; // si
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // r9
  char IsSnapFlyoutSettingEnabled; // al
  SnapLayoutHelpers *v15; // rcx
  struct IImmersiveSettingsCache *v16; // rdx
  char IsSnapBarSettingEnabled; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // ebx
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v24; // [rsp+38h] [rbp+10h] BYREF

  v24 = a2;
  CSnapComponentTelemetry::SettingChanged<enum SETTING_IDENTIFIER &>(&v24);
  if ( a2 == 4 )
  {
    *(_BYTE *)(a1 + 284) = 1;
    return 0LL;
  }
  if ( a2 == 13 )
  {
    v8 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    v9 = *(_QWORD *)(a1 + 104);
    v24 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 32LL))(v9, 13LL, &v24);
    if ( v10 >= 0 )
    {
      if ( v24 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 996) = v8;
        CShellSnapComponent::SetDockThreshold((CShellSnapComponent *)(a1 - 160), v11, v12, v13);
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v10);
    }
    v8 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)(a2 - 11) > 1 )
    return 0LL;
  IsSnapFlyoutSettingEnabled = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(*(SnapLayoutHelpers **)(a1 + 104), v4);
  v15 = *(SnapLayoutHelpers **)(a1 + 104);
  *(_BYTE *)(a1 + 760) = IsSnapFlyoutSettingEnabled;
  IsSnapBarSettingEnabled = SnapLayoutHelpers::IsSnapBarSettingEnabled(v15, v16);
  *(_BYTE *)(a1 + 761) = IsSnapBarSettingEnabled;
  if ( *(_BYTE *)(a1 + 760) || IsSnapBarSettingEnabled )
  {
    if ( *(_QWORD *)(a1 + 752) )
      return 0LL;
    v21 = CShellSnapComponent::InitializeSnapFlyout((CShellSnapComponent *)(a1 - 160), v18, v19, v20);
    if ( v21 >= 0 )
      return 0LL;
    v22 = 1992LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 752) )
      return 0LL;
    v21 = CShellSnapComponent::ShutdownSnapFlyout((CShellSnapComponent *)(a1 - 160));
    if ( v21 >= 0 )
      return 0LL;
    v22 = 1997LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v21);
  return (unsigned int)v21;
}
