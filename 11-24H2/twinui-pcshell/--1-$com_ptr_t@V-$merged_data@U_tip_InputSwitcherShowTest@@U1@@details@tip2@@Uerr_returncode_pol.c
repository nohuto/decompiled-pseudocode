/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180639210
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806392C8 (--1-$test_data_control@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180639328 (--1-$test_watcher@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180639350 (--1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180639A58 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18063A4DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEB.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@AEAAKXZ @ 0x180639F14 (-Release@-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>::Release(v1);
  return result;
}
