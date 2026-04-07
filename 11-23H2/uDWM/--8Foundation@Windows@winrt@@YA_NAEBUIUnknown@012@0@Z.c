/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100
 * Callers:
 *     ?StopRotation@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x18002E290 (-StopRotation@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTran.c)
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?ForceUpdateScene@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x180046C50 (-ForceUpdateScene@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotation.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7538 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800F765C (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7880 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7B10 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800FAA24 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEB88 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FEE08 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?WindowMaximizeSnapCancel@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF320 (-WindowMaximizeSnapCancel@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UI.c)
 *     ?WindowMaximizeSnapPostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF3D0 (-WindowMaximizeSnapPostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@w.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180100DA8 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?IndexOf@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUserResizeVisual@Transitions@Udwm@2@AEAI@Z @ 0x180101E30 (-IndexOf@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x180105060 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall winrt::Windows::Foundation::operator==(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall **v5)(_QWORD, __int64 *, __int64 *); // rax
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v7; // rdi
  bool v8; // bl
  void (__fastcall **v9)(_QWORD, __int64 *, __int64 *); // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  if ( v2 == (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2 )
    return 1;
  if ( !v2 || !*a2 )
    return 0;
  v5 = *v2;
  v10 = 0LL;
  (*v5)(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, &v10);
  v6 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  v7 = v10;
  v12 = v10;
  if ( v6 )
  {
    v9 = *v6;
    v11 = 0LL;
    (*v9)(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, &v11);
    v10 = v11;
    v8 = v7 == v11;
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  }
  else
  {
    v8 = v10 == 0;
  }
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return v8;
}
