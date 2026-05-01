/*
 * XREFs of winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x1805B7B04
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BA52C (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___ @ 0x1805B8494 (winrt--impl--producers_base_winrt--Windows--Internal--Shell--SnapComponent--implementation--Imme.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(
        __int64 *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // [rsp+38h] [rbp+10h]

  v9 = (char *)operator new(0x38uLL);
  winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___(
    v9 + 16,
    v2,
    v9);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v3[1] = 1LL;
  *v3 = &off_180756248;
  v4 = a1[2];
  a1[2] = 0LL;
  v5 = a1[1];
  a1[1] = 0LL;
  v6 = *a1;
  *a1 = 0LL;
  v3[3] = v6;
  v3[4] = v5;
  v3[5] = v4;
  v7 = a1[3];
  a1[3] = 0LL;
  v3[6] = v7;
  *v3 = &off_180756248;
  return v3;
}
