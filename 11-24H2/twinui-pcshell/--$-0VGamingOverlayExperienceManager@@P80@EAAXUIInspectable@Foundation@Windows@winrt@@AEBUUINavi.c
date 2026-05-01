/*
 * XREFs of ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x18022C480
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035AAC4 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$?0V_lambda_d869a36d3a1053452528762f68f23059_@@@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_d869a36d3a1053452528762f68f23059_@@@Z @ 0x180292A00 (--$-0V_lambda_d869a36d3a1053452528762f68f23059_@@@-$EventHandler@UUINavigationController@Input@G.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _BYTE v5[24]; // [rsp+28h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  *(_QWORD *)v5 = a2;
  *(_OWORD *)&v5[8] = *a3;
  v6 = *(_OWORD *)v5;
  v7 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v5[8], *(__m128d *)&v5[8]);
  winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
    a1,
    &v6);
  return a1;
}
