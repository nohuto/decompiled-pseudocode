/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1803B5088
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180244E70 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180247810 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::operator() @ 0x1803B6BF8 (_lambda_e40398d42ff5cb66d230c2cd21ebd5c8_--operator().c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803B46B4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dyn.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>(
        struct wil::details::IFailureCallback *a1)
{
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    0);
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,>((_QWORD *)a1 + 7);
  return a1;
}
