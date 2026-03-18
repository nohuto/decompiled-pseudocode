/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x140347C60
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140348B70 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14070D3A8 (IopIssueSystemEnvironmentRequest.c)
 *     sub_140A048EC @ 0x140A048EC (sub_140A048EC.c)
 *     ViPtCaptureStackTrace @ 0x140B97344 (ViPtCaptureStackTrace.c)
 *     KiVerifyScopes @ 0x140C1933C (KiVerifyScopes.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
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
