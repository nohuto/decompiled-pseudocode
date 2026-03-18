/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18020B324
 * Callers:
 *     ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x180032130 (-ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800AE180 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1801EA840 (-BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1802525E4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18020B348 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
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
  return wil::details::ReportFailure_NtStatus<1>((int)this, (int)a2, a3, (int)a4, v5, retaddr, v6);
}
