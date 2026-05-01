/*
 * XREFs of ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x180626820
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x18004DE48 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x180211CEC (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241B40 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802AE958 (--0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x180396358 (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 *     ?TryShowAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShowShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x1804620EC (-TryShowAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@U.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18059001C (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAY08$$CBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@AEAY08$$CBG$$QEAI2AEAU_GUID@@@Z @ 0x18061CAC4 (--$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAY08$$CBGIIAEAU_GUID@@@CopilotHotkeyManager.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x180636B94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::InvokeSearch(CopilotHotkeyManager *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  int v8; // [rsp+78h] [rbp+28h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF

  v2 = (__int64 *)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    LODWORD(v7) = 1;
    v3 = (__int64 *)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
                      (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)&v8,
                      (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v7);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType(v2) == 1 )
  {
    winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions((winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *)&v9);
    winrt::param::hstring::hstring((winrt::param::hstring *)v6, L"QuerySource=HWCoPilot");
    winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
      &v9,
      v6);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryShowAsync(
      (__int64 **)v2,
      &v7,
      &v9);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl) )
    {
      LODWORD(v7) = 3;
      v8 = *((_DWORD *)this + 157);
      CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const (&)[9],unsigned int,unsigned int,_GUID &>(
        (int *)this + 144,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        (__int128 *)((char *)this + 180));
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
  else
  {
    v5 = (__int64 *)winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions((winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *)&v8);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
      (__int64 **)v2,
      &v7,
      v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
}
