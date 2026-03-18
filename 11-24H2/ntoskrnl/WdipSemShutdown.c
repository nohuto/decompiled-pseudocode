/*
 * XREFs of WdipSemShutdown @ 0x1407A2184
 * Callers:
 *     WdipSemUpdate @ 0x1407A0558 (WdipSemUpdate.c)
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140A47AF0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4835C (WdipSemEnableScenario.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14064C330 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     WdipSemFreePool @ 0x1407A27F8 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1407A3198 (WdipSemDisableAllProviders.c)
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
  qword_140F01F08 = 0LL;
  dword_140EFFEF0 = 0;
  qword_140EFFEF8 = 0LL;
  qword_140EFFEE8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
