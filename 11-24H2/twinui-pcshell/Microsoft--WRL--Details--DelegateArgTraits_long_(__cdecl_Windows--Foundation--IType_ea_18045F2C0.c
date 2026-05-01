/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::Invoke @ 0x18045F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // edx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 8;
  if ( a3 != 1 )
    v4 = 0;
  XamlLauncher::OnHotkeyInvoke(v3, v4);
  return 0LL;
}
