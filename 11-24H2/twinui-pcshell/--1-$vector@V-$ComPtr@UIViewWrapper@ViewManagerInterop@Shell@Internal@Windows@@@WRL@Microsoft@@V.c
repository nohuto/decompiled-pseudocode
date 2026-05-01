/*
 * XREFs of ??1?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1802A5254
 * Callers:
 *     _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::dtor$1 @ 0x1806CE57E (_CSnapAssistControllerBase--AdvanceGuidedSnapAssist_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$2 @ 0x1806CF843 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$1 @ 0x1806F6E3C (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800AA8E4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
