/*
 * XREFs of ??R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18023A5F0
 * Callers:
 *     ??$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@Z @ 0x1805B78BC (--$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@-$factory_cache_entry@USnapEventFactory@.c)
 * Callees:
 *     ?CreateWindowDraggingEventArgsWithWindowId@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@AEBUWindowId@UI@63@@Z @ 0x18023A61C (-CreateWindowDraggingEventArgsWithWindowId@-$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEvent.c)
 */

__int64 __fastcall _lambda_8cef40b0f04add78b87f76d5b45d2d32_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgsWithWindowId(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
