/*
 * XREFs of ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7000
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F94D8 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800FAA24 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104670 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800EE494 (-make_weak_ref@-$root_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collection.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  signed int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
  return a2;
}
