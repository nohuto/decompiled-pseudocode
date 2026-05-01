/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180702CF6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021E9D0 (--1-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 128) + 16LL;
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(*(_QWORD **)(a2 + 64));
}
