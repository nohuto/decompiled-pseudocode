/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$149 @ 0x1806E0B0E
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x18032A9E0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18032D1B8 (--1-$test_data_control@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@1@XZ @ 0x18032D5F0 (--C-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@ti.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032E624 (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x180335768 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1_::_1_::catch_149(
        __int64 a1,
        __int64 a2)
{
  char IsEnabled; // al
  __int64 v4; // rbx
  char v5; // al
  wil::ActivityThreadWatcher *v6; // rax
  const char *v7; // r9

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl);
  v4 = *(_QWORD *)(a2 + 56);
  if ( IsEnabled )
  {
    v5 = *(_BYTE *)(v4 + 112);
    *(_BYTE *)(a2 + 192) = v5;
    if ( !v5 )
    {
      *(_QWORD *)(v4 + 1536) = v4 + 17;
      v6 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
             (struct wil::details::IFailureCallback *)(v4 + 1569),
             (wil::ActivityThreadWatcher *)(v4 + 840));
      std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(v4 + 32, (__int64)v6);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(v4 + 840));
    }
  }
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                v4 + 208,
                (__int64 *)(v4 + 920))
           + 282) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(v4 + 920));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 424),
    (void *)0x263,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
    v7);
  return 0LL;
}
