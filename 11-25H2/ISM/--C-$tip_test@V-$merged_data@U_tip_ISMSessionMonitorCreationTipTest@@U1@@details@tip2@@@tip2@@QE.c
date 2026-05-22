/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@1@XZ @ 0x1800A45B4
 * Callers:
 *     ?InstanceThreadProc@SessionMonitor@@AEAAKXZ @ 0x180085F68 (-InstanceThreadProc@SessionMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A624C (-ensure_data@-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::operator->(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  struct _RTL_CRITICAL_SECTION **v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION **)tip2::tip_test<tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>>::ensure_data();
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)&v4[6].SpinCount);
  EnterCriticalSection(*a2 + 5);
  return a2;
}
