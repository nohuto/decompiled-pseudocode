/*
 * XREFs of ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104670
 * Callers:
 *     ?StartHideAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAX@Z @ 0x180104600 (-StartHideAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A3448 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAA?AU?$weak_ref@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F7000 (--$get_weak@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x180103DEC (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1801044A0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation(__int64 a1, __int64 *a2)
{
  CAcrylicSheet *v4; // rbx
  __int64 v5; // rax
  float v6; // xmm0_4
  __int64 v7[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+90h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+98h] [rbp+28h]
  __int64 *v10; // [rsp+A0h] [rbp+30h]

  v9 = a2;
  std::function<void (void)>::operator=<winrt::Udwm::Transitions::UnloadDelegate &,0>(a1 + 112, a2);
  CTopLevelWindow3D::StartAnimation(*(_QWORD *)(a1 + 72), 15);
  v4 = *(CAcrylicSheet **)(a1 + 40);
  v10 = v7;
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>(
    (volatile signed __int64 *)(a1 + 16),
    &v8);
  v5 = v8;
  v8 = 0LL;
  v7[0] = (__int64)off_180115800;
  v7[1] = v5;
  v7[7] = (__int64)v7;
  v6 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)a1);
  CAcrylicSheet::StartAlphaAnimation(v4, 1.0, 0.0, v6, (__int64)v7);
  if ( v8 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
