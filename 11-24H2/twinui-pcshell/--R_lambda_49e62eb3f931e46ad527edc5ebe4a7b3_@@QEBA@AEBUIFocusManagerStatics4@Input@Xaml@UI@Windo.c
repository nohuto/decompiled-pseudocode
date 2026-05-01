/*
 * XREFs of ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1802C7738
 * Callers:
 *     ??$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@V_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@impl@winrt@@YA?A_P$$QEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1802101F8 (--$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@23456.c)
 *     ??$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@Z @ 0x18032A634 (--$call@AEAV_lambda_25f685323ecfdadefb1917e024cec3b1_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?A_PAEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805BF7F0 (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 *     ??$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@Z @ 0x1806B9B20 (--$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ?FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806BB4DC (-FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@345.c)
 * Callees:
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@@Z @ 0x180116068 (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt.c)
 */

_QWORD *__fastcall _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
    a3,
    a2,
    *a1);
  return a2;
}
