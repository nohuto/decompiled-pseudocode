/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048E3B4
 * Callers:
 *     ??0AccessibilityExperienceManager@@QEAA@XZ @ 0x18048E054 (--0AccessibilityExperienceManager@@QEAA@XZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1804904A8 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180490A58 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     _AccessibilityExperienceManager::_CreateModalExperienceAsync_::_1_::dtor$0 @ 0x1806EDDF0 (_AccessibilityExperienceManager--_CreateModalExperienceAsync_--_1_--dtor$0.c)
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$0 @ 0x1806EDE14 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18048E32C (--1-$com_ptr_t@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncod.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
