/*
 * XREFs of ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C
 * Callers:
 *     ?Cancel@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x18002E090 (-Cancel@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@.c)
 *     ??1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F4760 (--1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA.c)
 *     ?HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F52A8 (-HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E2FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18002EB74 (-Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18002FB44 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18002FB80 (-SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x1800304D0 (--0-$shared_ptr@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tran.c)
 *     ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180030500 (-ensure_data@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4FF8 (-EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6460 (-UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Cancel(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  _QWORD *v2; // rbx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  void **v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-40h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  _BYTE v8[8]; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+58h] [rbp-10h]

  v2 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data((char *)this + 104);
  v5 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v6,
    (struct wil::details::IFailureCallback *)&v5,
    0LL,
    *v2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
    v8,
    v2);
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 82) = 0;
  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured(this) )
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UnregisterGlobalTimeChanged(this);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::EndAnimationFrameStats(this);
  }
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::SetRotationState(
    (__int64)this,
    0);
  v3 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::ReleaseTransitionState(this);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
}
