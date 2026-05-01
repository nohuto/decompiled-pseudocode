/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180636E98
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223E4 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180637ABC (-start@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@Q.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180621714 (--0-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180621E24 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180622204 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_return.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x120uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
