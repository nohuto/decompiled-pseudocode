/*
 * XREFs of WdipSemShutdown @ 0x1407A2294
 * Callers:
 *     WdipSemUpdate @ 0x1407A0668 (WdipSemUpdate.c)
 *     WdipSemCleanStart @ 0x1407A0ED0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14064A8F0 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemFreePool @ 0x1407A2908 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1407A32A8 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset_0(WdipSemScenarioTable, 0, 0x208uLL);
  memset_0(&WdipSemProviderTable, 0, 0x2008uLL);
  qword_140F021A8 = 0LL;
  dword_140F021D0 = 0;
  qword_140F021D8 = 0LL;
  qword_140F021C8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
