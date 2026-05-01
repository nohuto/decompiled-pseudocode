/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___ @ 0x18066B1D4
 * Callers:
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B430 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_d12d1524a0e5f53c0c1207645a73e7d0_::__lambda_d12d1524a0e5f53c0c1207645a73e7d0_ @ 0x18066B264 (_lambda_d12d1524a0e5f53c0c1207645a73e7d0_--__lambda_d12d1524a0e5f53c0c1207645a73e7d0_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _DWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x28uLL);
  v6[2] = 1;
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 2) = *a2;
  *((_QWORD *)v6 + 3) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v6 + 4) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_18075B938;
  *a1 = v6;
  lambda_d12d1524a0e5f53c0c1207645a73e7d0_::__lambda_d12d1524a0e5f53c0c1207645a73e7d0_(a2);
  return a1;
}
