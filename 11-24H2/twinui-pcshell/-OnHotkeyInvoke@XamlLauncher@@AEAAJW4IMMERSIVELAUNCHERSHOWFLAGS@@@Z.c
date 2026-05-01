/*
 * XREFs of ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18024C0A0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::Invoke @ 0x18045F2C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18045F2C0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18023A6F0 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C6690 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803A23C0 (-Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ?TriggerBoost@?$consume_WindowsUdk_UI_Shell_ILowLatencyAction@UILowLatencyAction@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4BoostType@Shell@UI@WindowsUdk@3@@Z @ 0x1803A469C (-TriggerBoost@-$consume_WindowsUdk_UI_Shell_ILowLatencyAction@UILowLatencyAction@Shell@UI@Window.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LowLatencyProfile@@@details@wil@@QEAA_NXZ @ 0x1803A48E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LowLatencyProfile@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::OnHotkeyInvoke(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 376);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4) )
  {
    v6 = XamlLauncher::Dismiss(a1 + 24);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x857,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LowLatencyProfile>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LowLatencyProfile>::GetImpl'::`2'::impl) )
    {
      winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"XamlLauncher.OnHotkeyInvoke");
      winrt::WindowsUdk::UI::Shell::LowLatencyAction::Create((const struct winrt::param::hstring *)&v11);
      v10 = 3;
      winrt::impl::consume_WindowsUdk_UI_Shell_ILowLatencyAction<winrt::WindowsUdk::UI::Shell::ILowLatencyAction>::TriggerBoost(
        &v11,
        &v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
    if ( *(_BYTE *)(a1 + 353) )
    {
      *(_BYTE *)(a1 + 353) = 0;
      XamlLauncher::HandleInitialHShellEvent((XamlLauncher *)a1);
    }
    else
    {
      XamlLauncher::ShowStartView(a1 + 24, 1LL, a2);
    }
  }
  return 0LL;
}
