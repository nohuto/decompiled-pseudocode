/*
 * XREFs of ?push_back@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAX$$QEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180669B78
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806682F0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180670E38 (-Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScre.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  char *result; // rax

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::_Emplace_reallocate<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>(
             a1,
             (__int64)v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *v3 = v4;
  v3[1] = a2[1];
  result = (char *)a2[2];
  v3[2] = (__int64)result;
  a1[1] += 24LL;
  return result;
}
