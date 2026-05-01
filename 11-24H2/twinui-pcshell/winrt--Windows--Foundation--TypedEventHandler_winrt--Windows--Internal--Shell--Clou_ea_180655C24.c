/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x180655C24
 * Callers:
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C1D0 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_ @ 0x180658834 (_lambda_c4158f368c90993acd5619817087aedd_--__lambda_c4158f368c90993acd5619817087aedd_.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r8
  char *v7; // [rsp+30h] [rbp+8h]

  v7 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *a2;
  *a2 = 0LL;
  v5[2] = v4;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[3] = a2[1];
  v5[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v5 = off_18075ACC0;
  *a1 = v5;
  lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_(a2);
  return a1;
}
