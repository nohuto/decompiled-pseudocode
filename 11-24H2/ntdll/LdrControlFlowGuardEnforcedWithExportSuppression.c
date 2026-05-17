/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670
 * Callers:
 *     RtlValidateUserCallTarget @ 0x180004930 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCfgCheckRoutineCallback @ 0x1800081A0 (LdrpCfgCheckRoutineCallback.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180009610 (LdrpCfgDispatchRoutineCallback.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801467D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  return qword_1801EA508 && (dword_1801EA4EC & 1) == 0 && (BYTE5(xmmword_1801EA4F0) & 3) == 3;
}
