/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003A270
 * Callers:
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002E2D8 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18005FBD4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800718B4 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180027810 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_NtStatus<1>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6);
}
