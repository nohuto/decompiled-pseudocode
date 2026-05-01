/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806A2DC4
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069EA9C (--1-$test_data_control@V-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x1806A0898 (-Release@-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<SwitcherTip::_tip_GamingTaskViewShowTest,SwitcherTip::_tip_GamingTaskViewShowTest>::Release(result);
  return result;
}
