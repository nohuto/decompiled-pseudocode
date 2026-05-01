/*
 * XREFs of SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x1802726D0
 * Callers:
 *     SnapFlyoutHost::ShowFlyoutAsync$_InitCoro$2 @ 0x180272664 (SnapFlyoutHost--ShowFlyoutAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800520EC (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1801C5154 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801D98B0 (-StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_st.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801E9D70 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801E9D70.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FF744 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$SnapFlyout_ShowAsync@_KAEAW4ShowFlags@SnapFlyoutHost@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4ShowFlags@SnapFlyoutHost@@@Z @ 0x180208FAC (--$SnapFlyout_ShowAsync@_KAEAW4ShowFlags@SnapFlyoutHost@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4Sh.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::ShowFlyoutAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // r8
  RTL_SRWLOCK *v3; // rsi
  int v4; // r8d
  __int64 v5; // rdx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 73);
        SnapFlyoutTelemetry::SnapFlyout_ShowAsync<unsigned __int64,enum SnapFlyoutHost::ShowFlags &>(
          (__int64 *)(a1 + 16),
          (int *)(a1 + 81));
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          *(_QWORD *)(a1 + 65),
          (__int64 *)(a1 + 24));
        *(_BYTE *)(a1 + 32) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v1, (void (*)(void *, void *))a1, v2);
        return;
      case 4:
        v3 = *(RTL_SRWLOCK **)(a1 + 65);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 40), v3 + 22);
        SnapFlyoutHost::CancelInvokeTimer((__int64)v3);
        SnapFlyoutHost::CancelDismissTimer((__int64)v3);
        v4 = *(_DWORD *)(a1 + 81);
        if ( (v4 & 1) != 0 )
        {
          SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
            (__int64)v3,
            (_QWORD *)(a1 + 48));
          if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) + 338LL) )
          {
            v6 = *(std::_Ref_count_base **)(a1 + 56);
            if ( v6 )
              std::_Ref_count_base::_Decref(v6);
          }
          else
          {
            v7 = *(std::_Ref_count_base **)(a1 + 56);
            if ( v7 )
              std::_Ref_count_base::_Decref(v7);
            SnapFlyoutHost::StartInvokeTimer((__int64)v3, *(_QWORD *)(a1 + 73), *(_DWORD *)(a1 + 81));
          }
        }
        else
        {
          SnapFlyoutHost::InternalShowFlyout((__int64)v3, *(HWND *)(a1 + 73), v4);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 40));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 24));
        goto LABEL_16;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 24));
LABEL_16:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x60);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
