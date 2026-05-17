/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180009CF0
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180003C34 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpCfgProcessLoadConfig @ 0x180007A80 (LdrpCfgProcessLoadConfig.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     AVrfpSnapDllImports @ 0x1800ECAF4 (AVrfpSnapDllImports.c)
 *     RtlpRemoveVectoredHandler @ 0x1800EF340 (RtlpRemoveVectoredHandler.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800F9570 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180107258 (LdrpInitializeCfgScpHelpers.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforced()
{
  return qword_1801EA508 && (dword_1801EA4EC & 1) == 0;
}
