/*
 * XREFs of ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@2@XZ @ 0x18028AC44
 * Callers:
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801D63D0 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180244160 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180244770 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x180244D38 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BD944 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BDA44 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028AE7C (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::watch_errors(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data(a1);
  *(_QWORD *)a2 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    1);
  v4 = *v3;
  *(_QWORD *)(a2 + 56) = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 336));
  return a2;
}
