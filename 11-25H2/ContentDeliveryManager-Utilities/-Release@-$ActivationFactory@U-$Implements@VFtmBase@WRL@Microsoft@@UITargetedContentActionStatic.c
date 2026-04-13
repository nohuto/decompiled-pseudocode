/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180044A20
 * Callers:
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041170 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 *     ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041230 (--$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Servic.c)
 *     ??$MakeAndInitialize@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Z @ 0x180041BE0 (--$MakeAndInitialize@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@V123@$$V@Detail.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180041D54 (--$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 *     ??1?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042560 (--1-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WR.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180044AA0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x180044AB0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 *     ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x180044E20 (-Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18006AB60 (--$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windo.c)
 *     ??$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006AF54 (--$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V1.c)
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::__lambda_0f325790d88d3e0e1d8faff7704602cc_ @ 0x18007A9B8 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--__lambda_0f325790d88d3e0e1d8faff7704602cc_.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18007C250 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A798 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // edi
  _DWORD *v3; // r10
  int v4; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v3[22] & 4;
  if ( v2 )
  {
    if ( v4 || v2 != 1 )
      return v2;
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    goto LABEL_9;
  }
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( v4 )
  {
LABEL_9:
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
