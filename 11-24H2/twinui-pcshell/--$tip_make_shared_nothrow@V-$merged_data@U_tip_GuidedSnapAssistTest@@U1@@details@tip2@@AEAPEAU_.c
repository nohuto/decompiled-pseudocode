/*
 * XREFs of ??$tip_make_shared_nothrow@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180289538
 * Callers:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180286310 (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18028C6E0 (-open_helper@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA.c)
 * Callees:
 *     ??0?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x1802896CC (--0-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

_QWORD *__fastcall tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,_GUID * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  LPVOID v4; // rax
  wil::details::in1diag3 *v5; // rcx

  v4 = CoTaskMemAlloc(0x130uLL);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
  *a1 = tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>(
          v4,
          *a2);
  return a1;
}
