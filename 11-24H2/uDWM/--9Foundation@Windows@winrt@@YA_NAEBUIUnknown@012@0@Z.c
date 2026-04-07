/*
 * XREFs of ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18004BF60
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004AB68 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18004B008 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B084 (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B358 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B784 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x18004BB2C (-CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004BC54 (-CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E07F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800E64A0 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E73B0 (-UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x1800EC270 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIUnknown@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AUIUnknown@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004C168 (--$try_as@UIUnknown@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@.c)
 */

char __fastcall winrt::Windows::Foundation::operator!=(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  bool v4; // di
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 == *a2 )
    return 0;
  if ( !*a1 || !*a2 )
    return 1;
  winrt::impl::try_as<winrt::Windows::Foundation::IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v6);
  winrt::impl::try_as<winrt::Windows::Foundation::IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v5);
  v3 = v6;
  v4 = v6 != v5;
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
