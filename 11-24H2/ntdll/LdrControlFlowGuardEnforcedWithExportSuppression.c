/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180034300 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCfgCheckRoutineCallback @ 0x180034BA0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180036010 (LdrpCfgDispatchRoutineCallback.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlValidateUserCallTarget @ 0x1800F4240 (RtlValidateUserCallTarget.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180144B80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  return LdrSystemDllInitBlock.CfgBitMap
      && (LdrSystemDllInitBlock.Flags & 1) == 0
      && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3;
}
