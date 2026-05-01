/*
 * XREFs of SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x180226FFC (SnapFlyoutHost--HideAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180227998 (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180228A50 (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z @ 0x1802E9762 (--$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E992A (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?get_strong@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@QEAA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802E9980 (-get_strong@-$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?add_ref@?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@AEBAXXZ @ 0x18040A9D0 (-add_ref@-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ @ 0x180657584 (-release_ref@-$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180678714 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_180678714.c)
 *     ??$_Emplace@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@1@QEAU21@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180678928 (--$_Emplace@AEBU-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Window.c)
 *     ??0?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18067955C (--0-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ??0?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180679618 (--0-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Interna_ea_180679618.c)
 *     ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067CA0C (-StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?_Tidy@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXXZ @ 0x18067D850 (-_Tidy@-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r9
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_30;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_HideAsync<bool &>(a1 + 139);
        winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::get_strong(
          *(_QWORD *)(a1 + 131),
          a1 + 16);
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v1,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        v2 = *(_QWORD *)(a1 + 131);
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v2 + 176), (RTL_SRWLOCK **)(a1 + 40));
        SnapFlyoutHost::CancelInvokeTimer(v2);
        if ( *(_BYTE *)(a1 + 139) )
        {
          SnapFlyoutHost::InternalShutdownAsync(v2, a1 + 48, a1 + 40);
          goto LABEL_29;
        }
        if ( *(_QWORD *)(v2 + 64) )
          goto LABEL_29;
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v2,
          a1 + 56);
        v3 = *(_QWORD *)(a1 + 56);
        if ( !v3 )
        {
          ++*(_DWORD *)(v2 + 48);
          if ( (__int64)(*(_QWORD *)(v2 + 32) - *(_QWORD *)(v2 + 24)) >> 4 )
          {
            std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(a1 + 72);
            v6 = *(_QWORD **)(v2 + 24);
            v7 = *(_QWORD **)(v2 + 32);
            while ( v6 != v7 )
            {
              std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
                (_QWORD *)(a1 + 88),
                v6);
              *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
              winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::add_ref(a1 + 104);
              if ( *(_DWORD *)(v9 + 372) == 1
                && !*(_BYTE *)(v9 + 343)
                && *(_DWORD *)(v9 + 320) < *(_DWORD *)(*(_QWORD *)(a1 + 131) + 48LL) )
              {
                std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Emplace<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance> const &>(
                  a1 + 72,
                  *(_QWORD *)(a1 + 72),
                  a1 + 104);
              }
              winrt::com_ptr<TouchEdgeGripperWindow>::release_ref(a1 + 104);
              v10 = *(std::_Ref_count_base **)(a1 + 96);
              if ( v10 )
                std::_Ref_count_base::_Decref(v10);
              v6 += 2;
            }
            v11 = std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(
                    a1 + 112,
                    a1 + 72);
            SnapFlyoutHost::ShutdownSnapFlyoutsAsync(*(_QWORD *)(a1 + 131), a1 + 128, v11);
            std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Tidy(a1 + 72);
          }
          goto LABEL_27;
        }
        v4 = *(_QWORD *)(v3 + 8);
        if ( !*(_BYTE *)(v4 + 338) && !*(_BYTE *)(v4 + 341) )
        {
          SnapFlyoutHost::StartDismissTimer(v2);
LABEL_27:
          v12 = *(std::_Ref_count_base **)(a1 + 64);
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          goto LABEL_29;
        }
        v5 = *(std::_Ref_count_base **)(a1 + 64);
        if ( v5 )
          std::_Ref_count_base::_Decref(v5);
LABEL_29:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 40));
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 129);
LABEL_30:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      case 5:
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 16);
        goto LABEL_30;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
