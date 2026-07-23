/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90
 * Callers:
 *     RtlValidateUserCallTarget @ 0x180008CD0 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     LdrpCfgCheckRoutineCallback @ 0x1800219C0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x1800226C0 (RtlGuardRestoreContext.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180022E30 (LdrpCfgDispatchRoutineCallback.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  return LdrSystemDllInitBlock.CfgBitMap
      && (LdrSystemDllInitBlock.Flags & 1) == 0
      && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
