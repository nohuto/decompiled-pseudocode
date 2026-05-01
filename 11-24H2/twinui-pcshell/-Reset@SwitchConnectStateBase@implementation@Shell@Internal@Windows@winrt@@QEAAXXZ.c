/*
 * XREFs of ?Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18066E818
 * Callers:
 *     ?Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18066E880 (-Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CFA10 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Reset(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this, &v2);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v2);
  v2 = 0LL;
  winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 3, &v2);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v2);
}
