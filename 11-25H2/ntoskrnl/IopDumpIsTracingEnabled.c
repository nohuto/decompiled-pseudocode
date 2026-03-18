/*
 * XREFs of IopDumpIsTracingEnabled @ 0x1404F8514
 * Callers:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D94EC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140590544 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590620 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590730 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140590840 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140590950 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140590A60 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140590B70 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140704A20 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140704D18 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1407053FC (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
