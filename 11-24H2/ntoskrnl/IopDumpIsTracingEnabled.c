/*
 * XREFs of IopDumpIsTracingEnabled @ 0x1404F82A8
 * Callers:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D19BC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140590D60 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590E3C (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590F4C (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x14059105C (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x14059116C (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x14059127C (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x14059138C (IopDumpTraceLoadDumpStackFailure.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x14070E6B0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x14070E9A8 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x14070F08C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
