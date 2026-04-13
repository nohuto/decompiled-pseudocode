/*
 * XREFs of ??1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180060608
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006279C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$0 @ 0x1800B9400 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUpdated_--_1_--.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006163C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::~SubscriptionManagerContentUpdatedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
