/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@XZ @ 0x180021034
 * Callers:
 *     ??$make_shared@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x180020FD4 (--$make_shared@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Trans.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800210B8 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
        __int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    &tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::c_details);
  *(_DWORD *)(a1 + 200) = 0;
  *(_WORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *v1 = &tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::`vftable';
  v1[22] = v1 + 8;
  return a1;
}
