/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x18065CCEC
 * Callers:
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // edx
  _QWORD *v8; // [rsp+38h] [rbp+10h]

  v8 = operator new(0x28uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v8[1] = v4;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v8[2] = v5;
  v6 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = -1;
  *((_DWORD *)v8 + 6) = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 8) = 1;
  *v8 = off_1807C8A30;
  *a1 = v8;
  if ( *(_QWORD *)(a2 + 8) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)(a2 + 8));
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)a2);
  return a1;
}
