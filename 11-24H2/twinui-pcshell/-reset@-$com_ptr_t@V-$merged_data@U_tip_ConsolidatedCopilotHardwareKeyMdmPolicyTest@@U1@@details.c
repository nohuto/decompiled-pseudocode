/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180637684
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180621FB0 (--1-$test_data_control@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@det.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180637A20 (-start@-$tip_test@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@AEAAKXZ @ 0x180633FF8 (-Release@-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@AEAA.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>::Release(result);
  return result;
}
