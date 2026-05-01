/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18049C3B4
 * Callers:
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049C948 (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 *     __lambda_5f246d3d225ef97a552fc7098e7c8139_::operator()_::_1_::dtor$5 @ 0x1806EE469 (__lambda_5f246d3d225ef97a552fc7098e7c8139_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18049C2D8 (--1-$com_ptr_t@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@Uerr_returncode_policy@wi.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>::~test_watcher<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
