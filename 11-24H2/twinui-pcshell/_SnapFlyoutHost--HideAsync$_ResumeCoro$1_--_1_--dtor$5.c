/*
 * XREFs of _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F827A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 */

__int64 __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 208) + 96LL;
  return winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(*(_QWORD **)(a2 + 128));
}
