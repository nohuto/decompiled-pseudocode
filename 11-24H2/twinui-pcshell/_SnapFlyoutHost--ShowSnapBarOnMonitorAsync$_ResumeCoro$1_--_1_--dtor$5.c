/*
 * XREFs of _SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F86E9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 240) + 88LL;
  *(_DWORD *)(a2 + 72) = **(_DWORD **)(a2 + 64);
  result = *(_DWORD *)(a2 + 72) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 240) + 88LL;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 240) + 88LL;
    *(_DWORD *)(a2 + 72) = **(_DWORD **)(a2 + 88);
    *(_DWORD *)(a2 + 96) = *(_DWORD *)(a2 + 72) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 80) = *(_DWORD *)(a2 + 96);
    *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 240) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 104));
  }
  return result;
}
