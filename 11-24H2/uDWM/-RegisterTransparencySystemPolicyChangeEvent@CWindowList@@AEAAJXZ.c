/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A13C
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18004A1D4 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@3@@Z @ 0x18004C1BC (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transi.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180071454 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x1800894DC (-replace@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPE.c)
 *     ??$make_wnf_subscription_nothrow@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x1800996E0 (--$make_wnf_subscription_nothrow@H@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800BB924 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___lambda_c73970d199e871e177cfde716dc4ccf1__void_ @ 0x1800ED1AC (wistd--function_void___cdecl(int_const_-)_--function_void___cdecl(int_const_-)___lambda_c73970d1.c)
 */

__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  CWindowList *wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v7; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v9[120]; // [rsp+30h] [rbp-88h] BYREF

  v2 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::abi_guard::abi_guard(
                   v8,
                   this);
  wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______lambda_c73970d199e871e177cfde716dc4ccf1__void_(
    v9,
    *v2);
  wnf_subscription = (CWindowList *)wil::make_wnf_subscription_nothrow<int>(&v7, v3, v9);
  if ( (CWindowList *)((char *)this + 624) != wnf_subscription )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::replace(
      (char *)this + 624,
      wnf_subscription);
  if ( v7 )
    wil::details::delete_wnf_subscription_state(v7, v5);
  wistd::function<void (int const &)>::~function<void (int const &)>(v9);
  return 0LL;
}
