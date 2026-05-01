/*
 * XREFs of GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_InitCoro$2 @ 0x18035D648
 * Callers:
 *     ?WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x18035DA4C (-WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncActio.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x180336F5C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v7; // rbx

  *(_QWORD *)(a2 + 177) = a5;
  *(_QWORD *)(a2 + 185) = 0LL;
  *(_QWORD *)(a2 + 193) = 0LL;
  *(_QWORD *)(a2 + 185) = *a4;
  *(_QWORD *)(a2 + 193) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v7 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v7 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v7 + 8) = 1LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_BYTE *)(v7 + 48) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v7 + 56));
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_DWORD *)(v7 + 96) = 0;
  *(_BYTE *)(v7 + 100) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v7,
    a3);
  *(_BYTE *)(a2 + 176) = 0;
  return GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old__ResumeCoro_1(a2);
}
