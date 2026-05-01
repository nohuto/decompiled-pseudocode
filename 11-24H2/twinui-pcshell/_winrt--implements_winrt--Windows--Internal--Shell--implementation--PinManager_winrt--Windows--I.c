/*
 * XREFs of _winrt::implements_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::PinManager_IPinManagerInterop3_winrt::immersive_shell_component_::get_weak_::_1_::dtor$2 @ 0x1806FD8D4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::implements_winrt::Windows::Internal::Shell::implementation::PinManager_winrt::Windows::Internal::Shell::PinManager_IPinManagerInterop3_winrt::immersive_shell_component_::get_weak_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 48));
  }
  return result;
}
