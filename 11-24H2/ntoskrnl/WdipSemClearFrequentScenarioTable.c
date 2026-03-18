/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14064C330
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1407A0E2C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A2184 (WdipSemShutdown.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset_0(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140EFFEC8 = 0LL;
  return result;
}
