/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::_)(Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___ @ 0x18045995C
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BAD30 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18045CC40 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVShellHotkeyR.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration____Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs_::___Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___1_Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___(
        __int64 *a1,
        _QWORD *a2)
{
  void *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration *,Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs>>(v4);
    v5[2] = *a2;
    *v5 = &off_1807423E0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        *a1,
        v6);
    v8 = 0LL;
    *a1 = (__int64)v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v8);
  return a1;
}
