/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x1800366F0
 * Callers:
 *     RtlpRemoveVectoredHandler @ 0x180027330 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     AVrfpSnapDllImports @ 0x1800E7724 (AVrfpSnapDllImports.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800E7980 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800F4140 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180102188 (LdrpInitializeCfgScpHelpers.c)
 *     RtlRemoteCall @ 0x180144D60 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  return LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0;
}
