/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806A61D8
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1800D3440 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18011BB10 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8988 (--1-$test_data_control@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@ti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x1806A5078 (-Release@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::Release(result);
  return result;
}
