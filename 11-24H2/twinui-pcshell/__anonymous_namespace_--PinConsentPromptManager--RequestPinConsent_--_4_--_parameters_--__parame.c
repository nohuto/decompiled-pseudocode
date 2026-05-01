/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_ @ 0x18022F290
 * Callers:
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806E3B26 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_InitCoro$2_--_1_--dto.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2_::_1_::dtor$1 @ 0x1806E3D69 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2_--_1_-.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_InitCoro$2_::_1_::dtor$1 @ 0x1806E3F6E (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_InitCoro$2_--_1_--dt.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2_::_1_::dtor$1 @ 0x1806FD1BF (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
