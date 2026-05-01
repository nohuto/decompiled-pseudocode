/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291D80
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180243B2C (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180244160 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180244530 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180244770 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802449F0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x180244D38 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180244E70 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x180245D80 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x180247188 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180247810 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::operator() @ 0x1803B6BF8 (_lambda_e40398d42ff5cb66d230c2cd21ebd5c8_--operator().c)
 *     ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BD8C4 (-OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803BDB64 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _UndockedSearchAppExperienceManager::Show_::_1_::dtor$39 @ 0x1806E6A4E (_UndockedSearchAppExperienceManager--Show_--_1_--dtor$39.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180291FA0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returnc.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(a1);
}
