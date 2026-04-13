/*
 * XREFs of _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0 @ 0x18007A4C4
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C680 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180044358 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18007A638 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18007A638.c)
 */

__int64 __fastcall lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0(
        __int64 a1,
        volatile int *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v7; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v7 = *a3;
  *(_QWORD *)a1 = a2;
  v10 = (__int64 *)(a1 + 8);
  *v10 = v7;
  Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(
    v10,
    a2);
  v11 = *a4;
  *a4 = 0LL;
  *((_BYTE *)a4 + 8) = 1;
  *(_QWORD *)(a1 + 16) = v11;
  v12 = *a5;
  *a5 = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *((_BYTE *)a5 + 8) = 1;
  *(_QWORD *)(a1 + 32) = v12;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a6);
  *(_QWORD *)(a1 + 48) = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
    (_QWORD *)(a1 + 384),
    a7);
  return a1;
}
