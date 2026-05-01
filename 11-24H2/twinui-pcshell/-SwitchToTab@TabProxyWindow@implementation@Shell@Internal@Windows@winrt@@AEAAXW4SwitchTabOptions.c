/*
 * XREFs of ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions@@@Z @ 0x1802C6964
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180092250 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SetHost@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180151E0C (-SetHost@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@Ta.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4)
{
  int v6; // ebx
  const char *v7; // r9
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  const winrt::hresult_error *v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( a2 != 1 )
    SetForegroundWindow(*(HWND *)(a1 + 56));
  if ( *(_QWORD *)(a1 + 48) )
  {
    try
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
        (__int64 *)(a1 + 40),
        (__int64 *)(a1 + 48));
    }
    catch ( winrt::hresult_invalid_argument )
    {
      return;
    }
    catch ( const winrt::hresult_error *v9 )
    {
      v6 = *((_DWORD *)v9 + 3);
      if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v6, (int)&v8) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3D7,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          v7);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DB,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v6);
    }
  }
}
