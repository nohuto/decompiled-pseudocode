/*
 * XREFs of _lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator() @ 0x18067A394
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke @ 0x18067B6D0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_89d43c20f0f.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180227998 (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator()(__int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get(a1, &v6);
  v2 = (volatile signed __int64 *)v6;
  if ( v6 )
  {
    v3 = v6 + 22;
    AcquireSRWLockExclusive(v6 + 22);
    v4 = (RTL_SRWLOCK *)(v2 + 22);
    if ( *((_QWORD *)v2 + 8) )
    {
      v5 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)(v2 + 8),
        (winrt::Windows::Foundation::IUnknown *)&v5);
      if ( v5 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
      SnapFlyoutHost::InternalShutdownAsync((__int64)v2, &v5, (__int64)&v4);
      v3 = v4;
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
  if ( v2 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)&v6);
}
