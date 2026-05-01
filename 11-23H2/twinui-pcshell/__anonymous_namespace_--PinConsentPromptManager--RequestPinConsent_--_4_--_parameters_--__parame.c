/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_ @ 0x18069E424
 * Callers:
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2_::_1_::dtor$1 @ 0x1802515CD (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2_--_1_--dtor$1.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
