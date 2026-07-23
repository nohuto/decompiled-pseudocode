/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14064A8F0
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1407A0F3C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A2294 (WdipSemShutdown.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset_0(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140F00188 = 0LL;
  return result;
}
