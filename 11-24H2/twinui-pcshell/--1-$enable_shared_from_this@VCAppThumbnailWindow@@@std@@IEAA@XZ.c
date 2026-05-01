/*
 * XREFs of ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x1802D122C
 * Callers:
 *     _GuidedSnapAssistControl::GuidedSnapAssistControl_::_1_::dtor$0 @ 0x1806CE93F (_GuidedSnapAssistControl--GuidedSnapAssistControl_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler_::_1_::dtor$1 @ 0x1806DD7F7 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchCo_ea_1806DD7F7.c)
 *     _CAppThumbnailWindow::Close_::_1_::dtor$2 @ 0x1806E452E (_CAppThumbnailWindow--Close_--_1_--dtor$2.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$1 @ 0x1806EF41A (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$1 @ 0x1806EF4BC (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806EF589 (_CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent_::_1_::dtor$0 @ 0x1807029AD (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubscribeToRemoteS.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor$1 @ 0x180702A53 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubsribeToTransiti.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$6 @ 0x18070334E (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_18070334E.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$19 @ 0x1807033DB (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_1807033DB.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$8 @ 0x180703596 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_180703596.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$23 @ 0x1807035BA (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1807035BA.c)
 *     __lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__::_1_::dtor$0 @ 0x1807035DE (__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__--_1_--dto.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__const_&__::_1_::dtor$2 @ 0x18070362E (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ea_18070362E.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$11 @ 0x1807038A8 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1807038A8.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$16 @ 0x18070397C (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_18070397C.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
