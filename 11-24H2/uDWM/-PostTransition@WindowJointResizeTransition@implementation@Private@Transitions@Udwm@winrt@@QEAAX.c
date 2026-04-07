/*
 * XREFs of ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E525C
 * Callers:
 *     ?PostTransition@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800E5230 (-PostTransition@-$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?CancelPendingAnimations@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E3F6C (-CancelPendingAnimations@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DW.c)
 *     winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800E4384 (winrt--Udwm--Transitions--UnloadDelegate--UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800E4A88 (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 *     ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x1800E4BE8 (--$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA-AU-$weak_ref@UITransitionState.c)
 *     ??D?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@XZ @ 0x1800E4F44 (--D-$fast_iterator@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E5718 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 *     ?StartHideAnimation@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUUnloadDelegate@Transitions@Udwm@3@@Z @ 0x1800E57A4 (-StartHideAnimation@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E6094 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitio.c)
 *     ?end@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E61A0 (-end@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this)
{
  __int64 *v2; // rsi
  int i; // ebx
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  _BYTE v8[8]; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+30h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  char v13; // [rsp+A8h] [rbp+40h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size((char *)this + 40) )
  {
    *((_DWORD *)this + 44) = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(v2);
    winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(&v12, (_QWORD *)this + 4);
    winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::begin(
      v2,
      v6);
    winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::end(
      v2,
      v8);
    for ( i = v7; i != v9; v7 = i )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::operator*(
        (__int64)v6,
        (__int64)&v13);
      winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        (__int64)this + 16,
        &v10);
      v4 = v10;
      v10 = 0LL;
      v5[0] = v4;
      v5[1] = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___(
        (__int64)&v11,
        (__int64)v5);
      winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::StartHideAnimation(
        &v13,
        &v11);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
      if ( v10 )
        winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
      winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v13);
      ++i;
    }
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations(v2);
    if ( v12 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v12);
  }
  std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::clear((char *)this + 48);
}
