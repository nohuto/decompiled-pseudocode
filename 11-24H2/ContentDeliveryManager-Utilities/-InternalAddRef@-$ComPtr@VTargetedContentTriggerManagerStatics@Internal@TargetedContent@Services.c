/*
 * XREFs of ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180044358
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Z @ 0x180041DC0 (--$MakeAndInitialize@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@V123@$$V@Detail.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180041F34 (--$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc__0 @ 0x18007A4C4 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--_lambda_0f325790d88d3e0e1d8faff7704602cc__0.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C680 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180042E30 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionS.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
             v2,
             a2);
  return result;
}
