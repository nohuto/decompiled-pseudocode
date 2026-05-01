/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18008BD80 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180091F74 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180115BB0 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180222A20 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 *     _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x18022AEE8 (_lambda_017e4516d3db66192a06ba57bc482270_--operator().c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180286310 (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029BE44 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A7500 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x1806BDA68 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x1806BDCAC (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x1806BDF0C (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x1806BE118 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805A8934 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(a1);
}
