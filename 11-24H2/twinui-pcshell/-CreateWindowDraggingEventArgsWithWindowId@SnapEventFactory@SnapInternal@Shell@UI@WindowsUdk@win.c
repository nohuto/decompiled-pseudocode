/*
 * XREFs of ?CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@AEBUWindowId@496@@Z @ 0x18029A224
 * Callers:
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x18029A0A0 (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ?CreateWindowDraggingEventArgsWithWindowId@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@AEBUWindowId@UI@63@@Z @ 0x18023A61C (-CreateWindowDraggingEventArgsWithWindowId@-$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEvent.c)
 *     ??$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@Z @ 0x1805B78BC (--$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@-$factory_cache_entry@USnapEventFactory@.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Foundation::Point *__fastcall winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory::CreateWindowDraggingEventArgsWithWindowId(
        const struct winrt::Windows::Foundation::Point *a1,
        const struct winrt::Windows::UI::WindowId *a2,
        __int64 *a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808CC548);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgsWithWindowId(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>,
      a1,
      a2,
      a3);
    _InterlockedDecrement64(&qword_1808CC548);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC548);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_8cef40b0f04add78b87f76d5b45d2d32_ &>(
      a1,
      a1,
      v5);
  }
  return a1;
}
