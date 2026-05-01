/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::catch$96 @ 0x1806E1B6E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??C?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEBAPEAV?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@1@XZ @ 0x18032D5E4 (--C-$test_data_control@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59673563@@@details@wil@@QEAA_NXZ @ 0x1803357E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59673563@@@details@wil@@QEAA_NXZ.c)
 *     ?Stop@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXJ@Z @ 0x18033F548 (-Stop@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXJ@Z.c)
 *     ?reset@?$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U?$default_delete@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@@std@@@std@@QEAAXPEAVSystemDialogActivity@GamingPostureUXTelemetryProvider@@@Z @ 0x180340404 (-reset@-$unique_ptr@VSystemDialogActivity@GamingPostureUXTelemetryProvider@@U-$default_delete@VS.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::catch_96(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  wil *v5; // rcx
  int v6; // eax

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_59673563>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_59673563>::GetImpl'::`2'::impl) )
  {
    v3 = *(_QWORD *)(a2 + 72);
    v4 = (__int64 *)tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(*(_QWORD *)(v3 + 1585) + 72LL);
    v6 = wil::ResultFromCaughtException(v5);
    GamingPostureUXTelemetryProvider::SystemDialogActivity::Stop(v4, v6);
    std::unique_ptr<GamingPostureUXTelemetryProvider::SystemDialogActivity>::reset(
      (GamingPostureUXTelemetryProvider::SystemDialogActivity **)(*(_QWORD *)(v3 + 1585) + 72LL),
      0LL);
  }
  throw;
}
