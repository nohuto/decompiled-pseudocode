/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VXamlLauncherState@@PEAUIStartExperienceManager@Experience@Shell@Internal@3@PEAUIInspectable@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x1802A7640
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18024E400 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ??$Callback@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@V_lambda_44bbd199841b4d5ffbef2dab891128e4_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@$$QEAV_lambda_44bbd199841b4d5ffbef2dab891128e4_@@@Z @ 0x1802A7674 (--$Callback@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Inter_ea_1802A7674.c)
 */

__int64 __fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,XamlLauncherState,Windows::Internal::Shell::Experience::IStartExperienceManager *,IInspectable *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]

  v3 = *a3;
  v6 = a2;
  v7 = v3;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,_lambda_44bbd199841b4d5ffbef2dab891128e4_>(
    a1,
    &v6);
  return a1;
}
