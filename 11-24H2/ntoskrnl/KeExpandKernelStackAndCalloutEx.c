/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14027D770
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140247290 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1407194A8 (IopIssueSystemEnvironmentRequest.c)
 *     sub_140A03EB0 @ 0x140A03EB0 (sub_140A03EB0.c)
 *     ViPtCaptureStackTrace @ 0x140BA7324 (ViPtCaptureStackTrace.c)
 *     KiVerifyScopes @ 0x140C2A438 (KiVerifyScopes.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
