/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180029F4C
 * Callers:
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_bool__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x1800B768F (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_bool__1_Mi.c)
 *     _ContentManagement::ContentManagementService::EnsureOpenConnection_::_1_::dtor$2 @ 0x1800B86B3 (_ContentManagement--ContentManagementService--EnsureOpenConnection_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$5 @ 0x1800B88C6 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$5.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$5 @ 0x1800B9104 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--AddRule_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$10 @ 0x1800B91D0 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B91D0.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$2 @ 0x1800B9284 (_StartDocked--GetStartDefaultPins_--_1_--dtor$2.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentSubscription___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentSubscription____::_1_::dtor$0 @ 0x1800B945E (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentSubscription___Micr.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1800BAE92 (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentContainer___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentContainer____::_1_::dtor$0 @ 0x1800BC367 (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentContainer___Microso.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
