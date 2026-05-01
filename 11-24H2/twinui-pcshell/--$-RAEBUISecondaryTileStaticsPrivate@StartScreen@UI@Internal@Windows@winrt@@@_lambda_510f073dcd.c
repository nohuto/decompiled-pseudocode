/*
 * XREFs of ??$?RAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@QEBA?A_PAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@Z @ 0x1805DE930
 * Callers:
 *     ??$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@?$factory_cache_entry@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@impl@winrt@@QEAA?A_PAEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@Z @ 0x1805E1A30 (--$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@-$factory_cache_entry@USecondaryTile@Sta.c)
 *     ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x1805E2344 (--$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPri.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_510f073dcdc03c242fdf061cb60c9f3e_::operator()<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
