/*
 * XREFs of ??$call_and_wait_for_completion@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@$$ZAEAPEAU5@@wil@@YA?A_PPEAUITargetedContentContainerStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@4@@ZAEAPEAU5@@Z @ 0x1800AB3AC
 * Callers:
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800AD164 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x1800895D8 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??$wait_for_completion@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@V?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITargetedContentContainer@TargetedContent@Services@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800AB794 (--$wait_for_completion@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@V-$ComPtr@.c)
 */

__int64 __fastcall ___call_and_wait_for_completion_UITargetedContentContainerStatics_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentContainer_TargetedContent_Services_Windows___Foundation_4___ZAEAPEAU5__wil__YA_A_PPEAUITargetedContentContainerStatics_TargetedContent_Services_Windows__P81234_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentContainer_TargetedContent_Services_Windows___Foundation_4__ZAEAPEAU5__Z(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v4 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x747,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6);
  wil::wait_for_completion<Windows::Services::TargetedContent::TargetedContentContainer *,Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::ITargetedContentContainer>>(
    a1,
    v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return a1;
}
