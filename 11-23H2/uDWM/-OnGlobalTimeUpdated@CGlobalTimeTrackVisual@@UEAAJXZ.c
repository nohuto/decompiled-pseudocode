/*
 * XREFs of ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x180105060
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800245AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@detai.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationRejuvTransitionHandler@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180104F30 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationRejuvTransitionHandler@US.c)
 *     ?OnGlobalTimeUpdated@?$consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandler@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180104FC4 (-OnGlobalTimeUpdated@-$consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandl.c)
 *     ?get@?$weak_ref@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x180105280 (-get@-$weak_ref@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@QE.c)
 *     ?get@?$weak_ref@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1801052D8 (-get@-$weak_ref@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@winr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGlobalTimeTrackVisual::OnGlobalTimeUpdated(
        CGlobalTimeTrackVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void (__fastcall ****v5)(_QWORD, __int64 *, __int64 *); // rax
  bool v6; // si
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    v11 = 0LL;
    v5 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler>::get(
                                                                 (char *)this + 296,
                                                                 &v10);
    v6 = winrt::Windows::Foundation::operator==(v5, &v11) == 0;
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    if ( v6 )
    {
      winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler>::get(
        (char *)this + 296,
        &v10);
      winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationResponsiveTransitionHandler<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler>::OnGlobalTimeUpdated(&v10);
    }
    else
    {
      winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler>::get(
        (char *)this + 288,
        &v10);
      winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationRejuvTransitionHandler<winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler>::OnGlobalTimeUpdated(&v10);
    }
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2D,
      (int)"clientcore\\windows\\dwm\\udwm\\udwmglobaltimetrackvisual.cpp",
      v7);
  }
  return 0LL;
}
