/*
 * XREFs of _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc_ @ 0x18007A414
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_0f325790d88d3e0e1d8faff7704602cc___ @ 0x1800782E0 (Windows--Internal--COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows--Inte.c)
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x18004AED8 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18007A568 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0.c)
 */

__int64 __fastcall lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a2 + 1;
  if ( v4 != a2 + 1 )
  {
    *v4 = *v6;
    *v6 = 0LL;
  }
  v7 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v8 = a2[4];
  a2[4] = 0LL;
  *((_BYTE *)a2 + 24) = 1;
  *((_BYTE *)a2 + 40) = 1;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = v8;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
    (__int64 *)(a1 + 384),
    a2 + 48);
  return a1;
}
