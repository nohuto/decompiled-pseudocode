/*
 * XREFs of WdipSemFreeFrequentScenarioTable @ 0x140A47A90
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A47970 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406F99A0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY WdipSemFreeFrequentScenarioTable()
{
  __int64 i; // rdi
  PSLIST_ENTRY result; // rax

  for ( i = 0LL; (unsigned int)i < dword_140EFFEC0; i = (unsigned int)(i + 1) )
  {
    result = WdipSemFastFree(5, (struct _SLIST_ENTRY *)WdipSemFrequentScenarioTable[i]);
    WdipSemFrequentScenarioTable[i] = 0LL;
  }
  dword_140EFFEC0 = 0;
  return result;
}
