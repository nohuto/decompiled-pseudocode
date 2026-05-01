/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180622204
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180636E98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ @ 0x180634088 (-Release@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::Release(v4);
  return a1;
}
