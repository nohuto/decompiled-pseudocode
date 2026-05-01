/*
 * XREFs of ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x1805E2344
 * Callers:
 *     _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::operator() @ 0x1805E42FC (_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_--operator().c)
 * Callees:
 *     ??$?RAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@QEBA?A_PAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@Z @ 0x1805DE930 (--$-RAEBUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@_lambda_510f073dcd.c)
 *     ??$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@?$factory_cache_entry@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@impl@winrt@@QEAA?A_PAEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@Z @ 0x1805E1A30 (--$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@-$factory_cache_entry@USecondaryTile@Sta.c)
 */

__int64 *__fastcall winrt::get_activation_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _InterlockedIncrement64(&qword_1808CC6F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate> )
  {
    _lambda_510f073dcdc03c242fdf061cb60c9f3e_::operator()<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate const &>(
      (__int64)a1,
      a1);
    _InterlockedDecrement64(&qword_1808CC6F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC6F8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>::call<_lambda_510f073dcdc03c242fdf061cb60c9f3e_ &>(
      (__int64)a1,
      a1,
      a3);
  }
  return a1;
}
