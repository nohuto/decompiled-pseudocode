/*
 * XREFs of ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B6AC
 * Callers:
 *     ?Cancel@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x18004B680 (-Cancel@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITra.c)
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E06A8 (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1018 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800E1160 (-OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEA.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180034114 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B784 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B8B4 (-ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004B8F0 (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18004B9E0 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004BA74 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004C470 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 *     ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E2020 (-StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  volatile signed __int32 **v2; // rbx
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rax
  void **v5; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[3]; // [rsp+28h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  char v9; // [rsp+50h] [rbp-10h]
  LPVOID pv; // [rsp+58h] [rbp-8h]

  v2 = (volatile signed __int32 **)tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data((char *)this + 104);
  v5 = &tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::`vftable';
  v6[0] = 0LL;
  v6[1] = &v5;
  v6[2] = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v6, v3);
  v4 = *v2;
  pv = (LPVOID)v4;
  if ( v4 )
    _InterlockedIncrement(v4 + 72);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::SetRotationState(this, 0LL);
  *((_WORD *)this + 40) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 82) = 0;
  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured(this) )
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StopAnimation(this);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ReleaseCaptureVisual(this);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ReleaseTransitionState(this);
  if ( pv )
    tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(pv);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v6);
}
