/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1407A2228
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140F021A0; ++i )
  {
    result = WdipSemFastFree(2, *((_SLIST_ENTRY **)&WdipSemProviderTable + i));
    *((_QWORD *)&WdipSemProviderTable + i) = 0LL;
  }
  dword_140F021A0 = a1;
  return result;
}
