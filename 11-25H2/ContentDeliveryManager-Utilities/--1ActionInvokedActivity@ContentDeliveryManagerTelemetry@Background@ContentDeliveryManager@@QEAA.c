/*
 * XREFs of ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006CF08
 * Callers:
 *     _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x18006D420 (_lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator().c)
 *     __lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()_::_1_::dtor$3 @ 0x1800B9AB2 (__lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E094 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
