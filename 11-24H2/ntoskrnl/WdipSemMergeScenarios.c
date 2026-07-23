/*
 * XREFs of WdipSemMergeScenarios @ 0x1407A2198
 * Callers:
 *     WdipSemAddScenarioToTable @ 0x1407A0E10 (WdipSemAddScenarioToTable.c)
 * Callees:
 *     WdipSemAddContextEventToScenario @ 0x1407A0C78 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1407A0D3C (WdipSemAddEndEventToScenario.c)
 *     WdipSemMergeEvents @ 0x1407A2164 (WdipSemMergeEvents.c)
 */

__int64 __fastcall WdipSemMergeScenarios(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 i; // rdi
  __int64 j; // rdi

  if ( a1 && a2 )
  {
    WdipSemMergeEvents(a1, a2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 48); i = (unsigned int)(i + 1) )
    {
      v4 = WdipSemAddContextEventToScenario(a1, *(_QWORD *)(a2 + 8 * i + 56));
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a2 + 52); j = (unsigned int)(j + 1) )
    {
      v4 = WdipSemAddEndEventToScenario(a1, *(_QWORD *)(a2 + 8 * j + 1048));
      if ( v4 < 0 )
        break;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
