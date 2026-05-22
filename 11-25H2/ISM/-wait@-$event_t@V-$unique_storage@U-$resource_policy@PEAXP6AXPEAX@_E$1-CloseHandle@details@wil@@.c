/*
 * XREFs of ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA_NKH@Z @ 0x1800B3A94
 * Callers:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800B3644 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z @ 0x1800B377C (-Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x1800B3864 (-Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ.c)
 *     ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180160F30 (-CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEBA_NKH_Z(
        HANDLE *a1)
{
  DWORD v1; // eax
  const char *v2; // r9
  bool v3; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  if ( v1 == 258 )
    return 0;
  v3 = v1 == 0;
  if ( v1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD4,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v2);
  return v3;
}
