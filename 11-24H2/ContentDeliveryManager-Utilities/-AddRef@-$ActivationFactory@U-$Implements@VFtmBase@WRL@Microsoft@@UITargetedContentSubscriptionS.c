/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180042E30
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180042E80 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x180042E90 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@W_ea_180042E90.c)
 *     ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180043060 (-AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180044358 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ??$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006B3F4 (--$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V1.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A904 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 88) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
