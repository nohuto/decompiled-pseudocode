/*
 * XREFs of ??4?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18066B2BC
 * Callers:
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C4A4 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B430 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18065592C (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 */

__int64 *__fastcall winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  if ( a1 != a2 )
  {
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((__int64)a1);
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, a2);
    a1[1] = a2[1];
    a1[2] = a2[2];
  }
  return a1;
}
