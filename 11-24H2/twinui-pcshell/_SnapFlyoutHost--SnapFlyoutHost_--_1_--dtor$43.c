/*
 * XREFs of _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$43 @ 0x1806DCB3F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor_43(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 240) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 240) &= ~4u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 56));
  }
  return result;
}
