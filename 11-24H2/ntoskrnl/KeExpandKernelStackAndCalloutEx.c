/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x140232D00
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E1B30 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140717038 (IopIssueSystemEnvironmentRequest.c)
 *     sub_140A003E0 @ 0x140A003E0 (sub_140A003E0.c)
 *     ViPtCaptureStackTrace @ 0x140BA9324 (ViPtCaptureStackTrace.c)
 *     KiVerifyScopes @ 0x140C2C558 (KiVerifyScopes.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
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
