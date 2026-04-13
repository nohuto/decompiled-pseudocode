/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002A3CC
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800B8731 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     __lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator()_::_1_::dtor$0 @ 0x1800B8FF6 (__lambda_69a92d371a2c7508f1f4ce514cd8b1f7_--operator()_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger_::_1_::dtor$0 @ 0x1800B9116 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B9116.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x1800B91E2 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B91E2.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x1800B92E7 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _CreativeFramework::Triggers::CreateSupportedWnfNameStateMap_::_1_::dtor$1 @ 0x1800BADD6 (_CreativeFramework--Triggers--CreateSupportedWnfNameStateMap_--_1_--dtor$1.c)
 *     _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$0 @ 0x1800BAE4A (_UniqueExtendedExecutionSession--CloseSession_--_1_--dtor$0.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$0 @ 0x1800BAE6E (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        __int64 a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
