/*
 * XREFs of ??1?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAA@XZ @ 0x18008A104
 * Callers:
 *     _winrt::Udwm::Transitions::TransitionManager::TransitionManager_::_1_::dtor$4 @ 0x1800F64B0 (_winrt--Udwm--Transitions--TransitionManager--TransitionManager_--_1_--dtor$4.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0____::_1_::dtor$1 @ 0x1800F710A (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--_Uhash_compare.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$1 @ 0x1800F76FF (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$1.c)
 *     _CProjectionBorderManager::BuildCaptureWindowVisualExclusionList_::_1_::dtor$3 @ 0x1800F8303 (_CProjectionBorderManager--BuildCaptureWindowVisualExclusionList_--_1_--dtor$3.c)
 *     _CCaptureManager::StopCapturesForWindow_::_1_::dtor$1 @ 0x1800F8315 (_CCaptureManager--StopCapturesForWindow_--_1_--dtor$1.c)
 *     _CCaptureManager::CCaptureManager_::_1_::dtor$11 @ 0x1800F8489 (_CCaptureManager--CCaptureManager_--_1_--dtor$11.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$3 @ 0x1800F84EF (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$3.c)
 *     _CWindowList::ProcessSyncDwmMessage_::_1_::dtor$2 @ 0x1800F918B (_CWindowList--ProcessSyncDwmMessage_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DWM_CAPTURE_TOKEN>::~vector<DWM_CAPTURE_TOKEN>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
