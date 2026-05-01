/*
 * XREFs of ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180348634
 * Callers:
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_670c3bfbe2527c19a6d3da5bf7d2d729___ @ 0x180342E74 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_670c3bf.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_509297771d6514981a7c66ffcb5a1af6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::_DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_509297771d6514981a7c66ffcb5a1af6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1803477A8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1803477A8.c)
 *     _lambda_670c3bfbe2527c19a6d3da5bf7d2d729_::operator() @ 0x180349EDC (_lambda_670c3bfbe2527c19a6d3da5bf7d2d729_--operator().c)
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180351438 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     __lambda_670c3bfbe2527c19a6d3da5bf7d2d729_::operator()_::_1_::dtor$0 @ 0x1806E27AA (__lambda_670c3bfbe2527c19a6d3da5bf7d2d729_--operator()_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::HandleGamingPostureHotkey_::_1_::dtor$2 @ 0x1806E2AE3 (_GamingOverlayExperienceManager--HandleGamingPostureHotkey_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034C6A4 (-Destroy@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTa.c)
 */

void __fastcall GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity(
        GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *this)
{
  *(_QWORD *)this = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
