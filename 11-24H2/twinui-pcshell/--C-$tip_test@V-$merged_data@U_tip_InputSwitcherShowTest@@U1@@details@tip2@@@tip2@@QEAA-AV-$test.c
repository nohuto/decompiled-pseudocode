/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@1@XZ @ 0x1806393E0
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180639A58 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639FE8 (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18063A4DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEB.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::ensure_data();
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 288));
  tip2::details::shared_data<1,0,0>::begin_update(*a2 + 8);
  return a2;
}
