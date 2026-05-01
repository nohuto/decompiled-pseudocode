/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___ @ 0x1801FB51C
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180104F20 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___ @ 0x1801FB688 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1801FB688.c)
 */

volatile int **__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___(
        volatile int **a1)
{
  volatile int **v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile int **)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
      v4,
      v3);
  }
  return a1;
}
