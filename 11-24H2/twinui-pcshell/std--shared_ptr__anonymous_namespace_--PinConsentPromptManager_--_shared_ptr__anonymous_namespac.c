/*
 * XREFs of std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802B1A0C
 * Callers:
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$3 @ 0x1806D1A53 (_StartupAppMonitor--StartMonitor_--_1_--dtor$3.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$8 @ 0x1806D1A77 (_StartupAppMonitor--StartMonitor_--_1_--dtor$8.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$1 @ 0x1806DD484 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E3B43 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_--_1_--d.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E3BC7 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E3BC7.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E3C5D (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E3C5D.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E3D86 (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E3D86.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E3E0A (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E3E0A.c)
 *     _winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe____::_1_::dtor$0 @ 0x1806E6168 (_winrt--Windows--Foundation--DeferralCompletedHandler--DeferralCompletedHandler__lambda_d0c95642.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$1 @ 0x1806EF3E4 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$2 @ 0x1806F560B (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$2.c)
 *     _GuidedSnapAssistControl::CancelIfActive_::_1_::dtor$2 @ 0x1806F90C5 (_GuidedSnapAssistControl--CancelIfActive_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
