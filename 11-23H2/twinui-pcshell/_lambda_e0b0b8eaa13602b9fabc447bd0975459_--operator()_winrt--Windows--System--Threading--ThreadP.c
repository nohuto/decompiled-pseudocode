/*
 * XREFs of _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x180656348
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x180656AB0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F644 (-DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180656F78 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  volatile __int64 *v3; // rbx
  volatile __int64 *v4; // rdi
  volatile __int64 *v5; // r14
  volatile __int64 *v6; // [rsp+50h] [rbp+30h] BYREF
  volatile __int64 *v7; // [rsp+58h] [rbp+38h] BYREF
  volatile __int64 *v8; // [rsp+60h] [rbp+40h]

  v7 = (volatile __int64 *)a2;
  v2 = *a1;
  if ( v2 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, volatile __int64 **))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<IInspectable>,
      &v7);
    v3 = v7;
    if ( v7 )
      v3 = v7 - 2;
    v4 = v3;
    v5 = v3;
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
  }
  v6 = v3;
  if ( v4 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v4 + 29);
    v8 = v4 + 29;
    TouchEdgeGripperHost::StopDismissTimer(v3);
    *((_DWORD *)v5 + 7) = 0;
    v7 = 0LL;
    winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)v4 + 6, (__int64 *)&v7);
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
    TouchEdgeGripperHost::DismissGripperWindowAsync((__int64)v3, &v7, 1);
    if ( v4 != (volatile __int64 *)-232LL )
      ReleaseSRWLockExclusive((PSRWLOCK)v4 + 29);
  }
  if ( v3 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v6);
}
