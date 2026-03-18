/*
 * XREFs of IopDumpIsTracingEnabled @ 0x1404FA9C8
 * Callers:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D856C (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140593D3C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140593E18 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140593F28 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140594038 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140594148 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140594258 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140594368 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140710B20 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140710E18 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1407114FC (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
