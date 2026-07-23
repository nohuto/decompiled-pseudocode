/*
 * XREFs of WdipSemInitializeGlobalState @ 0x1407A0F3C
 * Callers:
 *     WdipSemInitialize @ 0x1407A05A8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1407A0668 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x14064A8F0 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset_0(&WdipSemPool, 0, 0x90uLL);
  qword_140E28CA8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &SListHead;
  qword_140E28CC0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset_0(WdipSemScenarioTable, 0, 0x208uLL);
  memset_0(&WdipSemProviderTable, 0, 0x2008uLL);
  qword_140F021A8 = 0LL;
  qword_140F021C8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140F021D0 = 0;
  qword_140F021D8 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
