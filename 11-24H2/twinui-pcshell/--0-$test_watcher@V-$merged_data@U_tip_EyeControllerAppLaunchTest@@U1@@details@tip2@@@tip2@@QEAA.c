/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x18048E014
 * Callers:
 *     ??0AccessibilityExperienceManager@@QEAA@XZ @ 0x18048E054 (--0AccessibilityExperienceManager@@QEAA@XZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180490A58 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18048DDE4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@$$.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(
        struct wil::details::IFailureCallback *a1)
{
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    0);
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>,>((_QWORD *)a1 + 7);
  return a1;
}
