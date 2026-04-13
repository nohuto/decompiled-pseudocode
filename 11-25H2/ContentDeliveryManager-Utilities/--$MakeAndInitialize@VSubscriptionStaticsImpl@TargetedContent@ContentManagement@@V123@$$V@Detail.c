/*
 * XREFs of ??$MakeAndInitialize@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Z @ 0x180041BE0
 * Callers:
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041170 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0SubscriptionStaticsImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180042264 (--0SubscriptionStaticsImpl@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180044178 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180044A20 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::SubscriptionStaticsImpl,ContentManagement::TargetedContent::SubscriptionStaticsImpl,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  __int64 v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v3;
  if ( v3 )
  {
    v7 = ContentManagement::TargetedContent::SubscriptionStaticsImpl::SubscriptionStaticsImpl((ContentManagement::TargetedContent::SubscriptionStaticsImpl *)v3);
    v4 = v7;
    v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(&v7);
    *a1 = v4;
    if ( v4 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v6);
  return v1;
}
