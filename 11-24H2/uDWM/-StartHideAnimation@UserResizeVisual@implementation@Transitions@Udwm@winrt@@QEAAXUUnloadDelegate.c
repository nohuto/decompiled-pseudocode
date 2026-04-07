/*
 * XREFs of ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0
 * Callers:
 *     ?StartHideAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800EB8A0 (-StartHideAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     _lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_ @ 0x18004A518 (_lambda_545816354afdfcb0efb7a4f85f5e27cb_--__lambda_545816354afdfcb0efb7a4f85f5e27cb_.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x1800715E0 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A2408 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800E4A88 (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 *     ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800EB034 (--$-4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnl.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800EB6C4 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // rcx
  CAcrylicSheet *v5; // rsi
  CFadeOut *v6; // rcx
  __int64 v7; // rcx
  float v8; // xmm0_4
  __int64 v9[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v10; // [rsp+68h] [rbp-10h]
  CFadeOut *v11; // [rsp+A0h] [rbp+28h] BYREF
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+A8h] [rbp+30h]
  CFadeOut *v13; // [rsp+B0h] [rbp+38h] BYREF
  __int64 *v14; // [rsp+B8h] [rbp+40h]

  v12 = a2;
  std::function<void (void)>::operator=<winrt::Udwm::Transitions::UnloadDelegate &,0>((CFadeOut *)(a1 + 112));
  v4 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(v4 + 288) )
    CTopLevelWindow3D::StartAnimation(v4, 0xFu);
  v5 = *(CAcrylicSheet **)(a1 + 40);
  v14 = v9;
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
    a1 + 16,
    &v11);
  v6 = v11;
  v11 = 0LL;
  v13 = v6;
  v10 = 0LL;
  if ( CFadeOut::IsIndependent(v6) )
  {
    v9[0] = (__int64)off_1801022F0;
    v13 = 0LL;
    v9[1] = v7;
    v10 = v9;
  }
  v8 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)a1);
  CAcrylicSheet::StartAlphaAnimation(v5, 1.0, 0.0, v8, (__int64)v9);
  lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_(&v13);
  if ( v11 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v11);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
}
