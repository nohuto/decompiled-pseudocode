/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x18027C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopConnectedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopConnectedEventArgs@4561@@Z @ 0x18071E228 (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopConn.c)
 *     ??$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6@@winrt@@YA?A_PAEBUguid@0@@Z @ 0x18071F40C (--$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int64 *v5; // [rsp+40h] [rbp+18h] BYREF

  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 8, &v5);
  v3 = v5;
  if ( v5 )
  {
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::guid const &>(
      &v4,
      a2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>(
      v3 + 32,
      v3,
      &v4);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  }
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v5);
}
