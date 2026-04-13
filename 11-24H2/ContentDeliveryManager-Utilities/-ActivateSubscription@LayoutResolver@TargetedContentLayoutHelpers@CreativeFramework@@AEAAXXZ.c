/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800AC40C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800AEC74 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetActivationFactory@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AAC3C (--$GetActivationFactory@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@@.c)
 *     ??$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@$$ZPEAU5@@wil@@YA?A_PPEAUITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@@Z$$QEAPEAU5@@Z @ 0x1800AB7E4 (--$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = *((_QWORD *)this + 1);
  try
  {
    v3 = *(_QWORD *)wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>(
                      (const WCHAR *)&v9,
                      a2,
                      a3);
    ___call_and_wait_for_completion_UITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4___ZPEAU5__wil__YA_A_PPEAUITargetedContentSubscriptionStatics_TargetedContent_Services_Windows__P81234_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVTargetedContentSubscription_TargetedContent_Services_Windows___Foundation_4__Z__QEAPEAU5__Z(
      (__int64)&v7,
      v3);
    v4 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x128,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v5);
  }
}
