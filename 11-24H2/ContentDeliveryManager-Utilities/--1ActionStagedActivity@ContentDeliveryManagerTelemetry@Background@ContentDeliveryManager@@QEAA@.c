/*
 * XREFs of ??1ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006D400
 * Callers:
 *     _lambda_0d276c7ea3d710d19b822c1822ed0068_::operator() @ 0x18006D598 (_lambda_0d276c7ea3d710d19b822c1822ed0068_--operator().c)
 *     __lambda_0d276c7ea3d710d19b822c1822ed0068_::operator()_::_1_::dtor$3 @ 0x1800B9D30 (__lambda_0d276c7ea3d710d19b822c1822ed0068_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E494 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMa_ea_18006E494.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity::~ActionStagedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionStagedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
