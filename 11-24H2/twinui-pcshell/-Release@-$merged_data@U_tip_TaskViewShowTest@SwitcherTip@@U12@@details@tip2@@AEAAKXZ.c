/*
 * XREFs of ?Release@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x1806A5078
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CE7F0 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806A3FDC (--4-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806A61D8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_re.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x1806A3D50 (--1-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::~merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
