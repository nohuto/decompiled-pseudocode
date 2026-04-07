/*
 * XREFs of ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F94D8
 * Callers:
 *     ?PostTransition@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F9480 (-PostTransition@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7000 (--$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@.c)
 *     ??$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@AEAAXAEBUITransitionState@Transitions@Udwm@1@@Z @ 0x1800F89D4 (--$from_com_ref@AEBUITransitionState@Transitions@Udwm@winrt@@@-$weak_ref@UITransitionState@Trans.c)
 *     winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___ @ 0x1800F8A8C (winrt--impl--make_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_c60948a4075e9d25cd44.c)
 *     ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800F914C (-Clear@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800F9184 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800F9C54 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  _QWORD *v2; // rsi
  unsigned int v3; // r14d
  int v4; // r15d
  __int64 v5; // rax
  signed int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF
  __int64 v11; // [rsp+80h] [rbp+40h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size((char *)this + 40) )
  {
    *((_DWORD *)this + 44) = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(v2);
    v10 = 0LL;
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::from_com_ref<winrt::Udwm::Transitions::ITransitionState const &>(
      &v10,
      (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4);
    v3 = 0;
    v4 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(v2);
    while ( v3 != v4 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
        v2,
        &v12,
        v3);
      winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>(
        (volatile signed __int64 *)this + 2,
        &v9);
      v5 = v9;
      v9 = 0LL;
      v7 = v5;
      v8 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___(
        &v11,
        &v7);
      if ( v8 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
      if ( v7 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, v11);
      if ( v6 < 0 )
        winrt::throw_hresult(v6);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
      if ( v9 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
      ++v3;
    }
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear(v2);
    if ( v10 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  }
  std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::clear((char *)this + 48);
}
