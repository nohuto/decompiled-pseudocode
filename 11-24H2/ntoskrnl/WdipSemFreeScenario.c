/*
 * XREFs of WdipSemFreeScenario @ 0x1407A29A0
 * Callers:
 *     WdipSemAddScenarioToTable @ 0x1407A0E10 (WdipSemAddScenarioToTable.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemFreeScenario(__int64 a1)
{
  __int64 i; // rdi
  _SLIST_ENTRY *v3; // rdx
  __int64 j; // rdi
  _SLIST_ENTRY *v5; // rdx
  PSLIST_ENTRY result; // rax

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      v3 = *(_SLIST_ENTRY **)(a1 + 8 * i + 56);
      if ( v3 )
      {
        WdipSemFastFree(0, v3);
        *(_QWORD *)(a1 + 8 * i + 56) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 48) = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 52); j = (unsigned int)(j + 1) )
    {
      v5 = *(_SLIST_ENTRY **)(a1 + 8 * j + 1048);
      if ( v5 )
      {
        WdipSemFastFree(0, v5);
        *(_QWORD *)(a1 + 8 * j + 1048) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 52) = 0;
    return WdipSemFastFree(1, (_SLIST_ENTRY *)a1);
  }
  return result;
}
