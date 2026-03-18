/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1407A2118
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406F99A0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140F01F00; ++i )
  {
    result = WdipSemFastFree(2, *((struct _SLIST_ENTRY **)&WdipSemProviderTable + i));
    *((_QWORD *)&WdipSemProviderTable + i) = 0LL;
  }
  dword_140F01F00 = a1;
  return result;
}
