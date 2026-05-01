/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806376CC
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180622020 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@ti.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180637ABC (-start@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@Q.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x180634088 (-Release@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::Release(result);
  return result;
}
