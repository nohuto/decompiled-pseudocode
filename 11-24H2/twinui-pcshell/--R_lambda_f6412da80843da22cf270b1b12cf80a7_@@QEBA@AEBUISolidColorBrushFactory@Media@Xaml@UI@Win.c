/*
 * XREFs of ??R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180597F48
 * Callers:
 *     ??$call@AEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@?$factory_cache_entry@USolidColorBrush@Media@Xaml@UI@Windows@winrt@@UISolidColorBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@Z @ 0x180597104 (--$call@AEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@-$factory_cache_entry@USolidColorBrush@M.c)
 *     ??0SolidColorBrush@Media@Xaml@UI@Windows@winrt@@QEAA@AEBUColor@345@@Z @ 0x180597B2C (--0SolidColorBrush@Media@Xaml@UI@Windows@winrt@@QEAA@AEBUColor@345@@Z.c)
 * Callees:
 *     ?CreateInstanceWithColor@?$consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory@UISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUColor@UI@Windows@3@@Z @ 0x1805984A8 (-CreateInstanceWithColor@-$consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory@UISolidColorBru.c)
 */

__int64 __fastcall _lambda_f6412da80843da22cf270b1b12cf80a7_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>::CreateInstanceWithColor(
    a3,
    a2,
    *a1);
  return a2;
}
