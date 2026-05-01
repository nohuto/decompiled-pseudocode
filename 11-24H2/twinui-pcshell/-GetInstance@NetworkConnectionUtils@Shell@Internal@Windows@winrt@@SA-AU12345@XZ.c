/*
 * XREFs of ?GetInstance@NetworkConnectionUtils@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180670510
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806682F0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18067057C (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::NetworkConnectionUtils::GetInstance(__int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::GetInstance();
  return a1;
}
