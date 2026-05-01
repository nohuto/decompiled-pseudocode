/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x180251AEC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x180251DE0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x180251498 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  std::_Ref_count_base *v9; // rcx
  _DWORD v11[116]; // [rsp+30h] [rbp-208h] BYREF
  __int64 v12; // [rsp+200h] [rbp-38h]

  v12 = a3;
  v8 = operator new(0x1C1uLL);
  v11[0] = 0;
  anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_2(
    (__int64)v11,
    (__int64)v8 + 112,
    a2,
    a3,
    a4,
    a1);
  v9 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
