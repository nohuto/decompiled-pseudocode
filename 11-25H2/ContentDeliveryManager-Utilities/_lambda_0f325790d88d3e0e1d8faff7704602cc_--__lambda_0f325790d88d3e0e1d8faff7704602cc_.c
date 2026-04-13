/*
 * XREFs of _lambda_0f325790d88d3e0e1d8faff7704602cc_::__lambda_0f325790d88d3e0e1d8faff7704602cc_ @ 0x18007A9B8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::_COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______ @ 0x18007AC18 (Windows--Internal--COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc___ea_18007AC18.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C250 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_0f325790d88d3e0e1d8faff7704602cc____::_1_::dtor$1 @ 0x1800B9D0A (_Windows--Internal--COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__ea_1800B9D0A.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$5 @ 0x1800B9F98 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B9F98.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002AA00 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180044A20 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18007AD80 (--1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_0f325790d88d3e0e1d8faff7704602cc_::__lambda_0f325790d88d3e0e1d8faff7704602cc_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  volatile int *v3; // rdx
  __int64 v4; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 384);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::~TriggerManagerGetTriggeredItemsForStateActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)(a1 + 48));
  Windows::Internal::String::~String((HSTRING *)(a1 + 32));
  Windows::Internal::String::~String((HSTRING *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v4,
      v3);
  }
}
