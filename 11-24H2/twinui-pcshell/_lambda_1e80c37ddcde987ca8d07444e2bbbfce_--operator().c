/*
 * XREFs of _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x1801C5198
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke @ 0x1801C5130 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_1e80c37ddcd.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()(__int64 a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rsi
  char v6; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get(a1, &v7);
  v3 = v7;
  if ( v7 )
  {
    v4 = v7 + 22;
    AcquireSRWLockExclusive(v7 + 22);
    v5 = v3 + 7;
    if ( v3[7].Ptr )
    {
      if ( v5 != (RTL_SRWLOCK *)&v6 )
      {
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v3[7]);
        v5->Ptr = 0LL;
      }
      SnapFlyoutHost::InternalShowFlyout(v3, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16));
      v4 = v3 + 22;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v7);
}
