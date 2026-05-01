/*
 * XREFs of ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021E9D0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180702C84 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Re.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180702CF6 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAll_ea_180702CF6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180294DFC (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref();
  return result;
}
