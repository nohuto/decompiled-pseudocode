/*
 * XREFs of ?Release@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x180634088
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180621E24 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180622204 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806376CC (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_re.c)
 * Callees:
 *     ??1?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180621EF4 (--1-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::~merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
