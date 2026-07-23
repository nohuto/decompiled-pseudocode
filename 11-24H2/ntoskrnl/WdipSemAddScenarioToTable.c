/*
 * XREFs of WdipSemAddScenarioToTable @ 0x1407A0E10
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemMergeScenarios @ 0x1407A2198 (WdipSemMergeScenarios.c)
 *     WdipSemFreeScenario @ 0x1407A29A0 (WdipSemFreeScenario.c)
 */

__int64 __fastcall WdipSemAddScenarioToTable(__int64 a1)
{
  int v1; // edi
  __int64 i; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= dword_140EFFD60 )
      {
        if ( (unsigned int)dword_140EFFD60 < 0x40 )
          WdipSemScenarioTable[dword_140EFFD60++] = a1;
        else
          return (unsigned int)-1073741823;
        return (unsigned int)v1;
      }
      v4 = WdipSemScenarioTable[i];
      v5 = (unsigned int)i;
      v6 = *(_QWORD *)v4 - *(_QWORD *)a1;
      if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
        v6 = *(_QWORD *)(v4 + 8) - *(_QWORD *)(a1 + 8);
      if ( !v6 && *(_WORD *)(v4 + 16) == *(_WORD *)(a1 + 16) )
        break;
    }
    v1 = WdipSemMergeScenarios(a1, WdipSemScenarioTable[i]);
    if ( v1 >= 0 )
    {
      WdipSemScenarioTable[v5] = a1;
      WdipSemFreeScenario(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
