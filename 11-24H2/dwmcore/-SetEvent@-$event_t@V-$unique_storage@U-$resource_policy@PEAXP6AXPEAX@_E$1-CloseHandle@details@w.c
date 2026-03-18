/*
 * XREFs of ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x18007CFB0 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801C4D9C (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x18021A714 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x18021E968 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x180222120 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180287AB4 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802B7844 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802412F4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

BOOL __fastcall _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ(
        HANDLE *a1)
{
  BOOL result; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = SetEvent(*a1);
  if ( !result )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D3,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
  return result;
}
