/*
 * XREFs of SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_InitCoro$2 @ 0x180227558 (SnapFlyoutHost--InternalShutdownAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@experimental@std@@@Z @ 0x1801AEF7C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AE.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E98D6 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E992A (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1802E99C4 (-get_weak@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-AU-.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180678714 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_180678714.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18067A204 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@U.c)
 *     ?SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ @ 0x18067C804 (-SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?TryCleanupHiddenSnapBar@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067CF50 (-TryCleanupHiddenSnapBar@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISn.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@QEAAXXZ @ 0x18067DE88 (-clear@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x18068B044 (-EndWindowDrag@WindowDragInputProvider@@QEAAXXZ.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r14
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rcx
  std::_Ref_count_base *v8; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_26;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_InternalShutdownAsync();
        v1 = *(_QWORD *)(a1 + 114);
        v2 = v1 + 96;
        if ( !*(_QWORD *)(v1 + 96) )
          goto LABEL_25;
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(v1 + 48);
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v1, a1 + 24);
        *(_QWORD *)(a1 + 32) = v2;
        *(_DWORD *)(a1 + 40) = 0;
        *(_BYTE *)(a1 + 44) = 0;
        *(_QWORD *)(a1 + 48) = a1 + 32;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready()
          || (*(_WORD *)(a1 + 8) = 4,
              !(unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std___experimental_std___Z((_QWORD *)(a1 + 48))) )
        {
LABEL_8:
          _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(a1 + 48);
          winrt::weak_ref<SnapFlyoutHost>::get(a1 + 24, a1 + 56);
          if ( *(_QWORD *)(a1 + 56) )
          {
            v3 = *(_QWORD *)(a1 + 114);
            wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 176), (RTL_SRWLOCK **)(a1 + 64));
            if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(v3 + 48) )
            {
              if ( *(_QWORD *)(v3 + 152) )
              {
                WindowDragInputProvider::EndWindowDrag(*(WindowDragInputProvider **)(v3 + 112));
                SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                  v3,
                  a1 + 72);
                v4 = *(_QWORD *)(a1 + 72);
                if ( v4 )
                {
                  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v4 + 8));
                }
                else
                {
                  v5 = a1 + 88;
                  *(_QWORD *)(a1 + 88) = **(_QWORD **)(v3 + 144);
                  while ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
                  {
                    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::TryCleanupHiddenSnapBar(*(_QWORD *)v5 + 40LL);
                    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>,std::_Iterator_base0>::operator++(a1 + 88);
                  }
                }
                v6 = *(std::_Ref_count_base **)(a1 + 80);
                if ( v6 )
                  std::_Ref_count_base::_Decref(v6);
                std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::clear(v3 + 144);
                *(_DWORD *)(v3 + 120) = 0;
                *(_QWORD *)(v3 + 128) = 0LL;
              }
              else
              {
                SnapFlyoutHost::CancelInvokeTimer(v3);
                SnapFlyoutHost::CancelDismissTimer(v3);
                SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                  v3,
                  a1 + 96);
                v7 = *(_QWORD *)(a1 + 96);
                if ( v7 )
                  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v7 + 8));
                v8 = *(std::_Ref_count_base **)(a1 + 104);
                if ( v8 )
                  std::_Ref_count_base::_Decref(v8);
              }
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 64));
          }
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 56);
          winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 24));
LABEL_25:
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 112);
LABEL_26:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1);
        }
        break;
      case 4:
        goto LABEL_8;
      case 5:
        winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 24));
        goto LABEL_26;
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
