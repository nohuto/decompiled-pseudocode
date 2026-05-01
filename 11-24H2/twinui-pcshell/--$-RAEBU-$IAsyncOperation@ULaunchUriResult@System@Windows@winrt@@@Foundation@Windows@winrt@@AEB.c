/*
 * XREFs of ??$?RAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@123@@_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@QEBA?A_PAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@234@@Z @ 0x18061C6D8
 * Callers:
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180625E40 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Fou.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x180539F48 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Star.c)
 *     ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBG$$QEAI2AEAU_GUID@@@Z @ 0x18061C8BC (--$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAPEBGIIAEAU_GUID@@@CopilotHotkeyManagerTele.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x180636B94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_3dc309b72a8cc7bcc36dbf196f52b656_::operator()<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult> const &,enum winrt::Windows::Foundation::AsyncStatus const &>(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  __int64 v4[2]; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF

  if ( *a3 == 1 )
  {
    winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::GetResults(
      a2,
      (winrt *)v4);
    if ( v4[0] )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl) )
      {
        v5 = CopilotHotkeyManager::m_launchResultToLaunchSuccessTypeMap[(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(v4)];
        v6 = *(_DWORD *)(a1 + 16);
        CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const * &,unsigned int,unsigned int,_GUID &>(
          a1,
          a1 + 8,
          (unsigned int)&v6,
          (unsigned int)&v5,
          a1 + 20);
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4);
  }
  else if ( *a3 == 3 )
  {
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 16);
    CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const * &,unsigned int,unsigned int,_GUID &>(
      a1,
      a1 + 8,
      (unsigned int)&v6,
      (unsigned int)&v5,
      a1 + 20);
  }
}
