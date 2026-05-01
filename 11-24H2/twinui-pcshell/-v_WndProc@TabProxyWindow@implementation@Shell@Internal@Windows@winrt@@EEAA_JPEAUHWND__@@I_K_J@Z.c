/*
 * XREFs of ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180092250
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801F4160 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions@@@Z @ 0x1802C6964 (-SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions.c)
 *     ?TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1802CE0F4 (-TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?OnFileOpenPickerActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileOpenPickerActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x18044F97C (-OnFileOpenPickerActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverride.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180581968 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_N.c)
 *     ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1805827D8 (-SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ @ 0x180582D54 (-WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc(
        HWND *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  HWND v6; // r11
  __int64 v8; // rdi
  UINT v9; // edx
  UINT v10; // edx
  __int64 v12; // rdx
  LPARAM v13; // r9
  WPARAM v14; // r8
  HWND v15; // rcx
  int v16; // ebx
  const char *v17; // r9
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+20h] [rbp-18h]
  const winrt::hresult_error *v20; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v22; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  v8 = 0LL;
  v19 = 0LL;
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      a2);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, (unsigned int)a4);
    return v8;
  }
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab(
      (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)(this - 3),
      lParam);
    return v8;
  }
  v9 = 16;
  switch ( a3 )
  {
    case 0x10u:
      if ( this[3] )
      {
        if ( lParam != 1 )
          SetForegroundWindow(this[4]);
        try
        {
          winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileOpenPickerActivated(
            this + 2,
            this + 3);
        }
        catch ( winrt::hresult_invalid_argument )
        {
          return v19;
        }
        catch ( const winrt::hresult_error *v20 )
        {
          v16 = *((_DWORD *)v20 + 3);
          if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v16, (int)&v18) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x426,
              (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              v17);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x42A,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v16);
          return v19;
        }
      }
      return v8;
    case 0x112u:
      if ( !this[3] || a4 != 61536 )
      {
        v10 = 274;
        return DefWindowProcW(v6, v10, a4, lParam);
      }
      v13 = 1LL;
      v14 = 0LL;
      v15 = this[1];
LABEL_19:
      PostMessageW(v15, v9, v14, v13);
      return v8;
    case 0x313u:
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, 0LL);
      v13 = lParam;
      v14 = a4;
      v9 = 787;
      v15 = this[4];
      goto LABEL_19;
    case 0x323u:
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(this - 3, &v22);
      break;
    case 0x326u:
      WindowTabHostTelemetry::WindowTabHostLivePreviewOnTab();
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetImpl'::`2'::impl,
        v12);
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(this - 3, &v22);
      break;
    default:
      v10 = a3;
      return DefWindowProcW(v6, v10, a4, lParam);
  }
  return v8;
}
