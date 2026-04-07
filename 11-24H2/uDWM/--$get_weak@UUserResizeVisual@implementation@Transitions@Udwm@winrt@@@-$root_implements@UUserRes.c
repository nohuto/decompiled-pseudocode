/*
 * XREFs of ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800E4A88
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E525C (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800E64A0 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008F5FC (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??$attach_abi@UIWeakReferenceSource@impl@winrt@@@winrt@@YAXAEAU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@0@PEAUIWeakReferenceSource@impl@0@@Z @ 0x180095BC0 (--$attach_abi@UIWeakReferenceSource@impl@winrt@@@winrt@@YAXAEAU-$com_ptr@UIWeakReferenceSource@i.c)
 *     ??0bad_alloc@stdext@@QEAA@XZ @ 0x18009AF80 (--0bad_alloc@stdext@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800F6360 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        __int64 a1,
        _QWORD *a2)
{
  void *weak_ref; // rax
  __int64 v4; // rbx
  int v5; // eax
  int pExceptionObject; // [rsp+28h] [rbp-18h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h]
  int v9; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    stdext::bad_alloc::bad_alloc((stdext::bad_alloc *)&pExceptionObject);
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  v10 = 0LL;
  winrt::attach_abi<winrt::impl::IWeakReferenceSource>(&v10, (__int64)weak_ref);
  *a2 = 0LL;
  pExceptionObject = 0;
  v8 = 0LL;
  v4 = v10;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 24LL))(v10, a2);
  winrt::check_hresult(&v9, v5, (__int64)&pExceptionObject);
  if ( v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v10);
  return a2;
}
