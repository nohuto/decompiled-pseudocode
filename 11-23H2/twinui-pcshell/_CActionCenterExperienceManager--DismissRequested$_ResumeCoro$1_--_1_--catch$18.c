/*
 * XREFs of _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::catch$18 @ 0x1801DC8CB
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x18022B7C0 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 */

void __fastcall __noreturn CActionCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  *(_WORD *)(*(_QWORD *)(a2 + 40) + 8LL) = -1;
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
}
