/*
 * XREFs of WdipSemQueryScenarioTable @ 0x140A3E84C
 * Callers:
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemQueryScenarioTable(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r8
  unsigned int i; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    for ( i = 0; i < dword_140EFFD60; ++i )
    {
      v6 = WdipSemScenarioTable[i];
      v7 = *a1 - *(_QWORD *)v6;
      if ( *a1 == *(_QWORD *)v6 )
        v7 = a1[1] - *(_QWORD *)(v6 + 8);
      if ( !v7 && a2 == *(_WORD *)(v6 + 16) )
        return WdipSemScenarioTable[i];
    }
  }
  return v2;
}
