/*
 * XREFs of ?CreateForWorkAreaRect@SnapLayoutManager@Shell@UI@WindowsUdk@winrt@@SA@AEBURect@Foundation@Windows@5@@Z @ 0x18022ACF8
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1801173F4 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?GetForScenario@?$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@@Z @ 0x18022AD6C (-GetForScenario@-$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimat.c)
 *     ??$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@Z @ 0x1804AD414 (--$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@-$factory_cache_entry@USnapLayoutManager.c)
 */

const struct winrt::Windows::Foundation::Rect *__fastcall winrt::WindowsUdk::UI::Shell::SnapLayoutManager::CreateForWorkAreaRect(
        const struct winrt::Windows::Foundation::Rect *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808CA7E8;
  _InterlockedIncrement64(&qword_1808CA7E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2> )
  {
    winrt::impl::consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::GetForScenario(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_1808CA7E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA7E8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::call<_lambda_c6eead5922142ea911cef51d7f7bcdf9_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
